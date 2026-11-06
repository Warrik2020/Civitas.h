#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PopulationPresets : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PopulationPresets(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PopulationPresets") {}
    public:
        float DensityOf(int era) const { void* __callArgs[] = { &era }; return CallStaticValue<float>("DensityOf", __callArgs, 1); }
        void* Describe(int era) const { void* __callArgs[] = { &era }; return CallStatic("Describe", __callArgs, 1); }
        float Target(int tileCount, void* cfg, int era, float scale) const { void* __callArgs[] = { &tileCount, cfg, &era, &scale }; return CallStaticValue<float>("Target", __callArgs, 4); }
        float ApplyTo(void* it, int tileCount, void* cfg, int era, float scale) const { void* __callArgs[] = { it, &tileCount, cfg, &era, &scale }; return CallStaticValue<float>("ApplyTo", __callArgs, 5); }
    };
}
