#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class WorldHash : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorldHash(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "WorldHash") {}
    public:
        uint64_t MixObject(uint64_t h, void* o) const { void* __callArgs[] = { &h, o }; return CallStaticValue<uint64_t>("MixObject", __callArgs, 2); }
        void* Compute(void* nm) const { void* __callArgs[] = { nm }; return CallStatic("Compute", __callArgs, 1); }
    };
}
