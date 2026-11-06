#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Generation
{
    class WorldGenStore : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorldGenStore(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Generation", "WorldGenStore") {}
    public:
        void* HashOf(void* s) const { void* args[] = { s }; return CallStatic("HashOf", args, 1); }
        void* Pending() const { return ReadStaticField<void*>("Pending"); }
        void SetPending(void* value) const { WriteStaticField<void*>("Pending", value); }
    };
}
