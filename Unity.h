#pragma once

#include "CivitasCore.h"
#include <type_traits>
#include <filesystem>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

namespace CivitasML::Detail
{
    inline std::filesystem::path PathFromUtf8(const char* value)
    {
        std::u8string encoded;
        if (value)
        {
            for (const unsigned char byte : std::string(value))
                encoded.push_back(static_cast<char8_t>(byte));
        }
        return std::filesystem::path(std::move(encoded));
    }

    inline void* Invoke(ModAPI* api, const char* nameSpace, const char* className, const char* methodName, void* instance, void** args, int argCount)
    {
        if (!api || !api->InvokeMethod)
            return nullptr;
        return api->InvokeMethod(nameSpace, className, methodName,
            instance, args, argCount);
    }

    // il2cpp_runtime_invoke parameter convention:
    // reference types are passed as the managed object pointer itself;
    // value types are passed as a pointer to their native value storage.
    inline void* InvokeRef(ModAPI* api, const char* nameSpace, const char* className, const char* methodName, void* instance, void* reference)
    {
        void* args[] = { reference };
        return Invoke(
            api, nameSpace, className, methodName, instance, args, 1);
    }

    template <typename T>
    inline void* InvokeValue(ModAPI* api, const char* nameSpace, const char* className, const char* methodName, void* instance, T value)
    {
        static_assert(std::is_trivially_copyable_v<T>, "IL2CPP value arguments must be trivially copyable");
        void* args[] = { &value };
        return Invoke(
            api, nameSpace, className, methodName, instance, args, 1);
    }

    inline void* InvokeRefValue(ModAPI* api, const char* nameSpace, const char* className, const char* methodName, void* instance, void* reference, bool value)
    {
        void* args[] = { reference, &value };
        return Invoke(
            api, nameSpace, className, methodName, instance, args, 2);
    }

    inline std::string ManagedStringToUtf8(void* object)
    {
        if (!object)
            return {};

        auto* str =
            reinterpret_cast<ManagedString*>(object);

        if (str->length <= 0)
            return {};

        int required = WideCharToMultiByte(
            CP_UTF8,
            0,
            str->chars,
            str->length,
            nullptr,
            0,
            nullptr,
            nullptr
        );

        if (required <= 0)
            return {};

        std::string result(required, '\0');

        WideCharToMultiByte(
            CP_UTF8,
            0,
            str->chars,
            str->length,
            result.data(),
            required,
            nullptr,
            nullptr
        );

        return result;
    }
}

namespace System
{
    class Type
    {
    public:
        Type(ModAPI* api = nullptr, void* object = nullptr) : api_(api), object_(object)
        {

        }

        static Type Find(ModAPI* api, const char* nameSpace, const char* className)
        {
            if (!api || !api->FindClass || !api->GetTypeObject)
                return {};

            void* klass = api->FindClass(nameSpace, className);

            if (!klass)
                return {};

            return Type(api, api->GetTypeObject(klass));
        }

        void* Raw() const
        {
            return object_;
        }

        ModAPI* Api() const
        {
            return api_;
        }

        explicit operator bool() const
        {
            return api_ && object_;
        }

    private:
        ModAPI* api_ = nullptr;
        void* object_ = nullptr;
    };
}

namespace UnityEngine::SceneManagement
{
    class Scene;
}

namespace UnityEngine
{
    struct Vector2
    {
        float x = 0.0f;
        float y = 0.0f;
    };

    struct Vector3
    {
        float x = 0.0f;
        float y = 0.0f;
        float z = 0.0f;
    };

    struct Quaternion
    {
        float x = 0.0f;
        float y = 0.0f;
        float z = 0.0f;
        float w = 1.0f;
    };

    struct Color
    {
        float r = 0.0f;
        float g = 0.0f;
        float b = 0.0f;
        float a = 1.0f;
    };

    enum class CanvasRenderMode : int
    {
        ScreenSpaceOverlay = 0,
        ScreenSpaceCamera = 1,
        WorldSpace = 2
    };

    class Component;
    class GameObject;
    class Transform;
    class RectTransform;

    class Object
    {
    public:
        Object() = default;
        Object(ModAPI* api, void* object) : api_(api), object_(object) {}

        void* Raw() const { return object_; }
        ModAPI* Api() const { return api_; }
        explicit operator bool() const { return api_ && object_; }

        template <typename TComponent>
        static std::vector<TComponent> FindObjectsOfType(
            ModAPI* api,
            bool includeInactive = false);

    protected:
        void* Call(const char* nameSpace, const char* className, const char* methodName, void** args = nullptr, int argCount = 0) const
        {
            return CivitasML::Detail::Invoke(
                api_, nameSpace, className, methodName, object_, args, argCount);
        }

        ModAPI* api_ = nullptr;
        void* object_ = nullptr;
    };

    class Component : public Object
    {
    public:
        using Object::Object;

        GameObject GetGameObject() const;
        Transform GetTransform() const;
        RectTransform GetRectTransform() const;
    };

    class Resources
    {
    public:
        static void* FindObjectsOfTypeAll(ModAPI* api, const System::Type& type)
        {
            if (!type)
                return nullptr;

            return CivitasML::Detail::InvokeRef(
                api, "UnityEngine", "Resources", "FindObjectsOfTypeAll", nullptr, type.Raw());
        }
    };

    class GameObject : public Object
    {
    public:
        using Object::Object;

        // Call on an object allocated by the host mod/runtime. GameObject
        // construction is a managed constructor call on that existing object.
        void Construct(const char* name) const
        {
            if (!api_ || !api_->NewString)
                return;
            void* managedName = api_->NewString(name ? name : "");
            if (managedName)
                CivitasML::Detail::InvokeRef(
                    api_, "UnityEngine", "GameObject",
                    ".ctor", object_, managedName);
        }

        static GameObject Find(ModAPI* api, const char* name)
        {
            if (!api || !api->NewString)
                return {};
            void* managedName = api->NewString(name ? name : "");
            return GameObject(api, managedName
                ? CivitasML::Detail::InvokeRef(
                    api, "UnityEngine", "GameObject", "Find", nullptr, managedName)
                : nullptr);
        }



        static GameObject Create(ModAPI* api, const char* name)
        {
            if (!api || !api->FindClass || !api->NewObject)
                return {};

            void* klass =
                api->FindClass("UnityEngine", "GameObject");

            if (!klass)
                return {};

            void* instance = api->NewObject(klass);

            if (!instance)
                return {};

            GameObject result(api, instance);
            result.Construct(name);

            return result;
        }

        void SetActive(bool active) const
        {
            CivitasML::Detail::InvokeValue(
                api_, "UnityEngine", "GameObject", "SetActive", object_, active);
        }

        bool IsActiveInHierarchy() const
        {
            void* boxed = Call("UnityEngine", "GameObject", "get_activeInHierarchy");
            if (!boxed || !api_ || !api_->UnboxObject)
                return false;

            void* value = api_->UnboxObject(boxed);
            return value ? *static_cast<bool*>(value) : false;
        }

        SceneManagement::Scene GetScene() const;

        void* GetNameObject() const
        {
            return Call("UnityEngine", "Object", "get_name");
        }

        std::string GetName() const
        {
            return CivitasML::Detail::ManagedStringToUtf8(
                GetNameObject());
        }

        void SetName(const char* name) const
        {
            if (!api_ || !api_->NewString)
                return;
            void* managedName = api_->NewString(name ? name : "");
            if (managedName)
                CivitasML::Detail::InvokeRef(
                    api_, "UnityEngine", "Object", "set_name", object_, managedName);
        }

        Transform GetTransform() const;
        RectTransform GetRectTransform() const;

        Component AddComponent(const System::Type& type) const
        {
            if (!api_ || !object_ || !type)
                return {};

            return Component(api_, CivitasML::Detail::InvokeRef(
                api_, "UnityEngine", "GameObject", "AddComponent", object_, type.Raw()));
        }

        template <typename TComponent>
        TComponent AddComponent() const
        {
            auto type = System::Type::Find(
                api_, TComponent::RuntimeNamespace(), TComponent::RuntimeClassName());
            if (!type)
                return {};

            Component component = AddComponent(type);
            if (!component)
                return {};

            return TComponent(api_, component.Raw());
        }

        // Compatibility with the original helper API.
        static void SetActive(ModAPI* api, void* gameObject, bool active)
        {
            GameObject(api, gameObject).SetActive(active);
        }

    };

    // Small runtime Wavefront OBJ importer. The first implementation supports
    // positions and polygon faces, triangulates polygons, and generates normals.
    // UVs, MTL materials, and texture references are intentionally not handled.
    class ModelLoader
    {
        static bool ParseIndex(const std::string& token, size_t positionCount, size_t& index)
        {
            const size_t slash = token.find('/');
            const std::string number = token.substr(0, slash);
            if (number.empty()) return false;
            try
            {
                const int parsed = std::stoi(number);
                if (parsed == 0) return false;
                const long long resolved = parsed > 0
                    ? static_cast<long long>(parsed - 1)
                    : static_cast<long long>(positionCount) + parsed;
                if (resolved < 0 || static_cast<size_t>(resolved) >= positionCount) return false;
                index = static_cast<size_t>(resolved);
                return true;
            }
            catch (...) { return false; }
        }

    public:
        static std::string GetModDirectory(ModAPI* api)
        {
            if (!api || !api->GetModDirectory) return {};
            std::vector<char> buffer(32768);
            return api->GetModDirectory(buffer.data(), static_cast<uint32_t>(buffer.size()))
                ? std::string(buffer.data()) : std::string{};
        }

        // Call on Unity's main thread (for example from ModStart). path should
        // point to a .obj file inside the mod's folder.
        static GameObject LoadObj(ModAPI* api, const char* path, const char* objectName = "Mod Model")
        {
            if (!api || !api->NewArray || !api->SetArrayValue || !path || !*path)
                return {};

            std::ifstream input(CivitasML::Detail::PathFromUtf8(path));
            if (!input) return {};

            std::vector<Vector3> positions;
            std::vector<Vector3> vertices;
            std::vector<int> triangles;
            std::string line;
            while (std::getline(input, line))
            {
                std::istringstream row(line);
                std::string kind;
                row >> kind;
                if (kind == "v")
                {
                    Vector3 position{};
                    if (row >> position.x >> position.y >> position.z)
                    {
                        position.z = -position.z; // OBJ is right-handed; Unity is left-handed.
                        positions.push_back(position);
                    }
                }
                else if (kind == "f")
                {
                    std::vector<size_t> face;
                    std::string token;
                    bool valid = true;
                    while (row >> token)
                    {
                        if (!token.empty() && token[0] == '#') break;
                        size_t index = 0;
                        if (!ParseIndex(token, positions.size(), index)) { valid = false; break; }
                        face.push_back(index);
                    }
                    if (!valid || face.size() < 3) continue;
                    for (size_t i = 1; i + 1 < face.size(); ++i)
                    {
                        const size_t corners[] = { face[0], face[i + 1], face[i] };
                        for (size_t corner : corners)
                        {
                            vertices.push_back(positions[corner]);
                            triangles.push_back(static_cast<int>(triangles.size()));
                        }
                    }
                }
            }
            if (vertices.empty()) return {};

            void* vertexArray = api->NewArray("UnityEngine", "Vector3", static_cast<uint32_t>(vertices.size()));
            void* indexArray = api->NewArray("System", "Int32", static_cast<uint32_t>(triangles.size()));
            if (!vertexArray || !indexArray) return {};
            for (uint32_t i = 0; i < vertices.size(); ++i)
                if (!api->SetArrayValue(vertexArray, i, &vertices[i], sizeof(Vector3))) return {};
            for (uint32_t i = 0; i < triangles.size(); ++i)
                if (!api->SetArrayValue(indexArray, i, &triangles[i], sizeof(int))) return {};

            void* meshClass = api->FindClass("UnityEngine", "Mesh");
            void* mesh = meshClass ? api->NewObject(meshClass) : nullptr;
            if (!mesh) return {};
            api->InvokeMethod("UnityEngine", "Mesh", ".ctor", mesh, nullptr, 0);
            void* vertexArgs[] = { vertexArray };
            void* triangleArgs[] = { indexArray };
            int use32BitIndices = 1; // UnityEngine.Rendering.IndexFormat.UInt32
            void* indexFormatArgs[] = { &use32BitIndices };
            api->InvokeMethod("UnityEngine", "Mesh", "set_indexFormat", mesh, indexFormatArgs, 1);
            api->InvokeMethod("UnityEngine", "Mesh", "set_vertices", mesh, vertexArgs, 1);
            api->InvokeMethod("UnityEngine", "Mesh", "set_triangles", mesh, triangleArgs, 1);
            api->InvokeMethod("UnityEngine", "Mesh", "RecalculateNormals", mesh, nullptr, 0);
            api->InvokeMethod("UnityEngine", "Mesh", "RecalculateBounds", mesh, nullptr, 0);

            GameObject model = GameObject::Create(api, objectName);
            if (!model) return {};
            auto filterType = System::Type::Find(api, "UnityEngine", "MeshFilter");
            auto rendererType = System::Type::Find(api, "UnityEngine", "MeshRenderer");
            Component filter = model.AddComponent(filterType);
            Component renderer = model.AddComponent(rendererType);
            if (filter)
                api->InvokeMethod("UnityEngine", "MeshFilter", "set_sharedMesh", filter.Raw(), vertexArgs, 1);
            if (renderer && api->NewString)
            {
                void* shader = nullptr;
                const char* shaders[] = { "Universal Render Pipeline/Lit", "Standard", "Unlit/Color" };
                for (const char* shaderName : shaders)
                {
                    void* name = api->NewString(shaderName);
                    void* args[] = { name };
                    shader = name ? api->InvokeMethod("UnityEngine", "Shader", "Find", nullptr, args, 1) : nullptr;
                    if (shader) break;
                }
                void* materialClass = api->FindClass("UnityEngine", "Material");
                void* material = (shader && materialClass) ? api->NewObject(materialClass) : nullptr;
                if (material)
                {
                    void* args[] = { shader };
                    api->InvokeMethod("UnityEngine", "Material", ".ctor", material, args, 1);
                    void* materialArgs[] = { material };
                    api->InvokeMethod("UnityEngine", "Renderer", "set_sharedMaterial", renderer.Raw(), materialArgs, 1);
                }
            }
            return model;
        }

        static GameObject LoadObjFromMod(ModAPI* api, const char* modDirectory,
            const char* relativePath, const char* objectName = "Mod Model")
        {
            if (!modDirectory || !relativePath || !*relativePath) return {};
            const std::filesystem::path relative = CivitasML::Detail::PathFromUtf8(relativePath);
            if (relative.is_absolute() || relative.has_root_name() || relative.has_root_directory()) return {};
            for (const auto& part : relative)
                if (part == "..") return {};
            const auto encodedPath = (CivitasML::Detail::PathFromUtf8(modDirectory) / relative).u8string();
            const std::string fullPath(reinterpret_cast<const char*>(encodedPath.data()), encodedPath.size());
            return LoadObj(api, fullPath.c_str(), objectName);
        }
    };

    // Unity AssetBundle facade. Load/instantiate assets from ModStart or another
    // Unity-thread callback, not from ModInit's bootstrap worker thread.
    class AssetBundle : public Object
    {
    public:
        using Object::Object;

        static AssetBundle LoadFromFile(ModAPI* api, const char* path)
        {
            if (!api || !api->NewString || !path)
                return {};
            void* managedPath = api->NewString(path);
            if (!managedPath)
                return {};
            return AssetBundle(api, CivitasML::Detail::InvokeRef(
                api, "UnityEngine", "AssetBundle", "LoadFromFile", nullptr, managedPath));
        }

        void* LoadAsset(const char* assetName, const System::Type& assetType) const
        {
            if (!api_ || !api_->NewString || !assetName || !assetType)
                return nullptr;
            void* managedName = api_->NewString(assetName);
            if (!managedName)
                return nullptr;
            void* args[] = { managedName, assetType.Raw() };
            return Call("UnityEngine", "AssetBundle", "LoadAsset", args, 2);
        }

        GameObject LoadPrefab(const char* assetName) const
        {
            return GameObject(api_, LoadAsset(
                assetName, System::Type::Find(api_, "UnityEngine", "GameObject")));
        }

        GameObject LoadAndInstantiate(const char* assetName) const
        {
            GameObject prefab = LoadPrefab(assetName);
            if (!prefab)
                return {};
            void* instance = CivitasML::Detail::InvokeRef(
                api_, "UnityEngine", "Object", "Instantiate", nullptr, prefab.Raw());
            return GameObject(api_, instance);
        }

        void Unload(bool unloadLoadedAssets = false) const
        {
            CivitasML::Detail::InvokeValue(
                api_, "UnityEngine", "AssetBundle", "Unload", object_, unloadLoadedAssets);
        }
    };

    class Transform : public Component
    {
    public:
        using Component::Component;

        Transform GetChild(int index) const
        {
            return Transform(
                api_,
                CivitasML::Detail::InvokeValue(
                    api_, "UnityEngine", "Transform", "GetChild", object_, index));
        }

        void SetParent(const Transform& parent, bool worldPositionStays = true) const
        {
            CivitasML::Detail::InvokeRefValue(
                api_, "UnityEngine", "Transform", "SetParent", object_, parent.Raw(), worldPositionStays);
        }

        void SetLocalPosition(Vector3 position) const
        {
            CivitasML::Detail::InvokeValue(
                api_, "UnityEngine", "Transform", "set_localPosition", object_, position);
        }

        void SetPosition(Vector3 position) const
        {
            CivitasML::Detail::InvokeValue(
                api_, "UnityEngine", "Transform", "set_position", object_, position);
        }

        void SetLocalScale(Vector3 scale) const
        {
            CivitasML::Detail::InvokeValue(
                api_, "UnityEngine", "Transform", "set_localScale", object_, scale);
        }

        void SetLocalRotation(Quaternion rotation) const
        {
            CivitasML::Detail::InvokeValue(
                api_, "UnityEngine", "Transform", "set_localRotation", object_, rotation);
        }

        int GetChildCount() const
        {
            void* boxed = Call(
                "UnityEngine",
                "Transform",
                "get_childCount"
            );

            if (!boxed || !api_->UnboxObject)
                return 0;

            void* value = api_->UnboxObject(boxed);

            return value
                ? *reinterpret_cast<int*>(value)
                : 0;
        }

        Transform GetParent() const
        {
            return Transform(
                api_, Call("UnityEngine", "Transform", "get_parent"));
        }
    };

    class RectTransform : public Transform
    {
    public:
        using Transform::Transform;

        void SetAnchorMin(Vector2 value) const { SetVector("set_anchorMin", value); }
        void SetAnchorMax(Vector2 value) const { SetVector("set_anchorMax", value); }
        void SetPivot(Vector2 value) const { SetVector("set_pivot", value); }
        void SetAnchoredPosition(Vector2 value) const { SetVector("set_anchoredPosition", value); }
        void SetSizeDelta(Vector2 value) const { SetVector("set_sizeDelta", value); }

    private:
        void SetVector(const char* propertySetter, Vector2 value) const
        {
            CivitasML::Detail::InvokeValue(
                api_, "UnityEngine", "RectTransform", propertySetter, object_, value);
        }
    };

    inline RectTransform Component::GetRectTransform() const
    {
        return RectTransform(
            api_,
            Call("UnityEngine", "Component", "get_transform")
        );
    }

    inline RectTransform GameObject::GetRectTransform() const
    {
        return RectTransform(api_, GetTransform().Raw());
    }

    class Canvas : public Component
    {
    public:
        using Component::Component;

        static constexpr const char* RuntimeNamespace() { return "UnityEngine"; }
        static constexpr const char* RuntimeClassName() { return "Canvas"; }

        void SetRenderMode(CanvasRenderMode mode) const
        {
            CivitasML::Detail::InvokeValue(
                api_, "UnityEngine", "Canvas", "set_renderMode", object_, static_cast<int>(mode));
        }

        void SetOverrideSorting(bool enabled) const
        {
            CivitasML::Detail::InvokeValue(
                api_, "UnityEngine", "Canvas", "set_overrideSorting", object_, enabled);
        }

        void SetSortingOrder(int order) const
        {
            CivitasML::Detail::InvokeValue(
                api_, "UnityEngine", "Canvas", "set_sortingOrder", object_, order);
        }
    };

    inline GameObject Component::GetGameObject() const
    {
        return GameObject(api_, Call("UnityEngine", "Component", "get_gameObject"));
    }

    inline Transform Component::GetTransform() const
    {
        return Transform(api_, Call("UnityEngine", "Component", "get_transform"));
    }

    inline Transform GameObject::GetTransform() const
    {
        return Transform(api_, Call("UnityEngine", "GameObject", "get_transform"));
    }
}

namespace UnityEngine::UI
{
    class Graphic : public Component
    {
    public:
        using Component::Component;

        void SetColor(Color color) const
        {
            CivitasML::Detail::InvokeValue(
                api_, "UnityEngine.UI", "Graphic", "set_color", object_, color);
        };
    };

    class Image : public Graphic
    {
    public:
        using Graphic::Graphic;

        static constexpr const char* RuntimeNamespace() { return "UnityEngine.UI"; }
        static constexpr const char* RuntimeClassName() { return "Image"; }
    };

    class Selectable : public Component
    {
    public:
        using Component::Component;

        void SetInteractable(bool value) const
        {
            CivitasML::Detail::InvokeValue(
                api_, "UnityEngine.UI", "Selectable", "set_interactable", object_, value);
        }
    };

    class Button : public Selectable
    {
    public:
        using Selectable::Selectable;
    };

    class ScrollRect : public Component
    {
    public:
        using Component::Component;

        static constexpr const char* RuntimeNamespace()
        {
            return "UnityEngine.UI";
        }

        static constexpr const char* RuntimeClassName()
        {
            return "ScrollRect";
        }

        void SetContent(const RectTransform& content) const
        {
            CivitasML::Detail::InvokeRef(
                api_, "UnityEngine.UI", "ScrollRect", "set_content", object_, content.Raw());
        }

        void SetHorizontal(bool enabled) const
        {
            CivitasML::Detail::InvokeValue(
                api_, "UnityEngine.UI", "ScrollRect", "set_horizontal", object_, enabled);
        }

        void SetVertical(bool enabled) const
        {
            CivitasML::Detail::InvokeValue(
                api_, "UnityEngine.UI", "ScrollRect", "set_vertical", object_, enabled);
        }
    };
}

namespace UnityEngine::SceneManagement
{
    class Scene
    {
    public:
        Scene(ModAPI* api = nullptr, void* boxedScene = nullptr)
            : api_(api), object_(boxedScene)
        {
        }

        int GetHandle() const
        {
            void* boxedHandle = CivitasML::Detail::Invoke(
                api_, "UnityEngine.SceneManagement", "Scene", "get_handle",
                object_, nullptr, 0);
            if (!boxedHandle || !api_ || !api_->UnboxObject)
                return 0;

            void* handle = api_->UnboxObject(boxedHandle);
            return handle ? *static_cast<int*>(handle) : 0;
        }

        explicit operator bool() const { return api_ && object_; }

        static Scene GetActiveScene(ModAPI* api)
        {
            return Scene(api, CivitasML::Detail::Invoke(
                api, "UnityEngine.SceneManagement", "SceneManager", "GetActiveScene",
                nullptr, nullptr, 0));
        }

        bool IsValid() const
        {
            // Scene.IsValid() is not exposed by this game's IL2CPP metadata.
            // A zero scene handle represents an invalid Scene value.
            return GetHandle() != 0;
        }

        bool IsLoaded() const
        {
            void* boxed = CivitasML::Detail::Invoke(
                api_, "UnityEngine.SceneManagement", "Scene", "get_isLoaded",
                object_, nullptr, 0);

            if (!boxed || !api_ || !api_->UnboxObject)
                return false;

            void* value = api_->UnboxObject(boxed);
            return value && *static_cast<bool*>(value);
        }

		const char* GetName() const
		{
			void* nameObject = CivitasML::Detail::Invoke(
				api_, "UnityEngine.SceneManagement", "Scene", "get_name",
				object_, nullptr, 0);
			return CivitasML::Detail::ManagedStringToUtf8(nameObject).c_str();
		}

    private:
        ModAPI* api_ = nullptr;
        void* object_ = nullptr;
    };
}

namespace CivitasML::Detail
{
    template <typename TComponent>
    std::vector<TComponent> FindObjectsOfType(ModAPI* api, bool includeInactive)
    {
        std::vector<TComponent> result;
        auto type = System::Type::Find(
            api, TComponent::RuntimeNamespace(), TComponent::RuntimeClassName());
        if (!type)
            return result;

        auto* array = static_cast<ManagedArray*>(
            UnityEngine::Resources::FindObjectsOfTypeAll(api, type));
        if (!array)
            return result;

        result.reserve(static_cast<size_t>(array->max_length));
        for (uintptr_t i = 0; i < array->max_length; ++i)
        {
            void* component = array->vector[i];
            if (!component)
                continue;

            TComponent typed(api, component);
            auto gameObject = typed.GetGameObject();
            auto scene = gameObject.GetScene();
            if (!scene || !scene.IsValid())
                continue;
            if (!includeInactive && !gameObject.IsActiveInHierarchy())
                continue;

            result.push_back(typed);
        }

        return result;
    }
}

template <typename TComponent>
std::vector<TComponent> UnityEngine::Object::FindObjectsOfType(
    ModAPI* api,
    bool includeInactive)
{
    return CivitasML::Detail::FindObjectsOfType<TComponent>(api, includeInactive);
}

inline UnityEngine::SceneManagement::Scene UnityEngine::GameObject::GetScene() const
{
    return UnityEngine::SceneManagement::Scene(
        api_, Call("UnityEngine", "GameObject", "get_scene"));
}

namespace TMPro
{
    enum class HorizontalTextAlignment : int
    {
        Left = 1,
        Center = 2,
        Right = 4,
        Justified = 8,
        Flush = 16,
        Geometry = 32
    };

    enum class VerticalTextAlignment : int
    {
        Top = 256,
        Middle = 512,
        Bottom = 1024,
        Baseline = 2048,
        Midline = 4096,
        Capline = 8192
    };

    enum class TextAlignmentOptions : int
    {
        // Top
        TopLeft = 257,
        Top = 258,
        TopRight = 260,
        TopJustified = 264,
        TopFlush = 272,
        TopGeoAligned = 288,

        // Middle
        Left = 513,
        Center = 514,
        Right = 516,
        Justified = 520,
        Flush = 528,
        CenterGeoAligned = 544,

        // Bottom
        BottomLeft = 1025,
        Bottom = 1026,
        BottomGeoAligned = 1056,

        // Baseline
        BaselineLeft = 2049,
        Baseline = 2050,
        BaselineGeoAligned = 2080,

        // Midline
        MidlineLeft = 4097,
        Midline = 4098,
        MidlineGeoAligned = 4128,

        // Capline
        CaplineLeft = 8193,
        Capline = 8194,
        CaplineGeoAligned = 8224
    };

    class TMP_Settings
    {
    public:
        static void* GetDefaultFontAsset(ModAPI* api)
        {
            return CivitasML::Detail::Invoke(
                api, "TMPro", "TMP_Settings", "get_defaultFontAsset", nullptr, nullptr, 0);
        }
    };

    class TMP_Text : public UnityEngine::Component
    {
    public:
        using UnityEngine::Component::Component;

        void SetText(const char* text) const
        {
            if (!api_ || !api_->NewString)
                return;
            void* managedText = api_->NewString(text ? text : "");
            if (managedText)
                CivitasML::Detail::InvokeRef(
                    api_, "TMPro", "TMP_Text", "set_text", object_, managedText);
        }

		void SetRichText(bool enabled) const
		{
			CivitasML::Detail::InvokeValue(
                api_, "TMPro", "TMP_Text", "set_richText", object_, enabled);
		}

        void SetFont(void* fontAsset) const
        {
            CivitasML::Detail::InvokeRef(
                api_, "TMPro", "TMP_Text", "set_font", object_, fontAsset);
        }

        void SetFontSize(float size) const
        {
            CivitasML::Detail::InvokeValue(
                api_, "TMPro", "TMP_Text", "set_fontSize", object_, size);
        }

        void SetColor(UnityEngine::Color color) const
        {
            CivitasML::Detail::InvokeValue(
                api_, "TMPro", "TMP_Text", "set_color", object_, color);
        }

        void SetHorizontalAlignment(int alignment) const
        {
            CivitasML::Detail::InvokeValue(
                api_, "TMPro", "TMP_Text", "set_horizontalAlignment", object_, alignment);
        }

        void SetHorizontalAlignment(HorizontalTextAlignment alignment) const
        {
            SetHorizontalAlignment(static_cast<int>(alignment));
        }

        void SetVerticalAlignment(int alignment) const
        {
            CivitasML::Detail::InvokeValue(
                api_, "TMPro", "TMP_Text", "set_verticalAlignment", object_, alignment);
        }

        void SetVerticalAlignment(VerticalTextAlignment alignment) const
        {
            SetVerticalAlignment(static_cast<int>(alignment));
        }

        void SetAlignment(TextAlignmentOptions alignment) const
        {
            CivitasML::Detail::InvokeValue(
                api_,
                "TMPro",
                "TMP_Text",
                "set_alignment",
                object_,
                static_cast<int>(alignment)
            );
        }

        void SetWordWrapping(bool enabled) const
        {
            CivitasML::Detail::InvokeValue(
                api_, "TMPro", "TMP_Text", "set_enableWordWrapping", object_, enabled);
        }
    };

    class TextMeshProUGUI : public TMP_Text
    {
    public:
        using TMP_Text::TMP_Text;

        static constexpr const char* RuntimeNamespace() { return "TMPro"; }
        static constexpr const char* RuntimeClassName() { return "TextMeshProUGUI"; }
    };
}

