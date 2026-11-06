#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering::Styles
{
    class MapStyleLibrary : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapStyleLibrary(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering.Styles", "MapStyleLibrary") {}
    public:
        void Reload(bool force = false) const { void* __callArgs[] = { &force }; CallStatic("Reload", __callArgs, 1); }
        void* Find(const char* id) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Find", __callArgs, 1); }
        int IndexOf(const char* id) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStaticValue<int>("IndexOf", __callArgs, 1); }
        void* Scan(const char* shippedRoot, const char* userRoot) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(shippedRoot ? shippedRoot : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(userRoot ? userRoot : "") : nullptr; void* __callArgs[] = { managed_0, managed_1 }; return CallStatic("Scan", __callArgs, 2); }
        void* FolderName() const { return ReadStaticField<void*>("FolderName"); }
        void* FileName() const { return ReadStaticField<void*>("FileName"); }
        void* Problems() const { return ReadStaticField<void*>("Problems"); }
    };
}
