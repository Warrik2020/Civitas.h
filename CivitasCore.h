#pragma once

#include <cstdint>
#include <type_traits>
#include "../ModInterface.h"

// Set by ModInit before any mod callback is invoked.
extern ModAPI* g_api;

namespace CivitasML::Detail
{
    struct ManagedArray
    {
        void* klass;
        void* monitor;
        void* bounds;
        uintptr_t max_length;
        void* vector[1];
    };

    struct ManagedString
    {
        void* klass;
        void* monitor;
        int32_t length;
        wchar_t chars[1];
    };
}

namespace CivitasPoly::Internal
{
    inline void* FindMethod(const char* nameSpace, const char* className,
        const char* methodName, int parameterCount)
    {
        return g_api && g_api->FindFunction
            ? g_api->FindFunction(nameSpace, className, methodName, parameterCount)
            : nullptr;
    }

    inline void* Invoke(const char* nameSpace, const char* className,
        const char* methodName, void* instance, void** arguments, int argumentCount)
    {
        // FindFunction returns MethodInfo metadata, not a callable code address.
        // Resolve it before using the managed runtime invocation API.
        if (!FindMethod(nameSpace, className, methodName, argumentCount) ||
            !g_api || !g_api->InvokeMethod)
            return nullptr;

        return g_api->InvokeMethod(nameSpace, className, methodName,
            instance, arguments, argumentCount);
    }

    template <typename T>
    inline T InvokeValue(const char* nameSpace, const char* className,
        const char* methodName, void* instance, void** arguments, int argumentCount,
        T fallback = {})
    {
        static_assert(std::is_trivially_copyable_v<T>);
        void* boxed = Invoke(nameSpace, className, methodName, instance, arguments, argumentCount);
        if (!boxed || !g_api || !g_api->UnboxObject)
            return fallback;
        void* value = g_api->UnboxObject(boxed);
        return value ? *static_cast<T*>(value) : fallback;
    }

    class ManagedType
    {
    public:
        ManagedType(ModAPI* api, void* object, const char* nameSpace, const char* className)
            : api_(api), object_(object), namespace_(nameSpace), className_(className) {}

        void* Raw() const { return object_; }
        ModAPI* Api() const { return api_; }
        explicit operator bool() const { return object_ != nullptr; }

        void* Call(const char* methodName, void** args = nullptr, int count = 0) const
        {
            if (!api_ || !api_->FindFunction || !api_->InvokeMethod ||
                !api_->FindFunction(namespace_, className_, methodName, count))
                return nullptr;
            return api_->InvokeMethod(namespace_, className_, methodName, object_, args, count);
        }

        void* CallStatic(const char* methodName, void** args = nullptr, int count = 0) const
        {
            if (!api_ || !api_->FindFunction || !api_->InvokeMethod ||
                !api_->FindFunction(namespace_, className_, methodName, count))
                return nullptr;
            return api_->InvokeMethod(namespace_, className_, methodName, nullptr, args, count);
        }

        template <typename T>
        T CallValue(const char* methodName, void** args = nullptr, int count = 0, T fallback = {}) const
        {
            void* boxed = Call(methodName, args, count);
            if (!boxed || !api_ || !api_->UnboxObject)
                return fallback;
            void* value = api_->UnboxObject(boxed);
            return value ? *static_cast<T*>(value) : fallback;
        }

        template <typename T>
        T CallStaticValue(const char* methodName, void** args = nullptr, int count = 0, T fallback = {}) const
        {
            void* boxed = CallStatic(methodName, args, count);
            if (!boxed || !api_ || !api_->UnboxObject)
                return fallback;
            void* value = api_->UnboxObject(boxed);
            return value ? *static_cast<T*>(value) : fallback;
        }

    private:
        ModAPI* api_ = nullptr;
        void* object_ = nullptr;
        const char* namespace_ = nullptr;
        const char* className_ = nullptr;
    };
}
