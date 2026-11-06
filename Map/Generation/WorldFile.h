#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Generation
{
    class WorldFile : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorldFile(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Generation", "WorldFile") {}
    public:
        void* Save(void* settings, const char* name, const char* dir) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(dir ? dir : "") : nullptr; void* __callArgs[] = { settings, managed_1, managed_2 }; return CallStatic("Save", __callArgs, 3); }
        void* Slug(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Slug", __callArgs, 1); }
    };
}
