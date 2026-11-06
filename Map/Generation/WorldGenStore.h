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
        void* HashOf(void* s) const { void* __callArgs[] = { s }; return CallStatic("HashOf", __callArgs, 1); }
        void* Pending() const { return ReadStaticField<void*>("Pending"); }
        void Pending(void* value) const { WriteStaticField<void*>("Pending", value); }
    };
}
