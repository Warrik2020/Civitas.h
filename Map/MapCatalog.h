#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Map
{
    class MapCatalog : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapCatalog(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map", "MapCatalog") {}
    public:
        void* All() const { return CallStatic("All", nullptr, 0); }
        bool Describe(const char* path, void* entry) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* args[] = { managed_0, &entry }; return CallStaticValue<bool>("Describe", args, 2); }
        bool ReadSize(const char* path, int& width, int& height) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* args[] = { managed_0, &width, &height }; return CallStaticValue<bool>("ReadSize", args, 3); }
        bool PngSize(void* bytes, int& width, int& height) const { void* args[] = { bytes, &width, &height }; return CallStaticValue<bool>("PngSize", args, 3); }
    };
}
