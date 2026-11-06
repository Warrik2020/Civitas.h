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
        float DensityOf(int era) const { void* args[] = { &era }; return CallStaticValue<float>("DensityOf", args, 1); }
        void* Describe(int era) const { void* args[] = { &era }; return CallStatic("Describe", args, 1); }
        float Target(int tileCount, void* cfg, int era, float scale) const { void* args[] = { &tileCount, cfg, &era, &scale }; return CallStaticValue<float>("Target", args, 4); }
        float ApplyTo(void* it, int tileCount, void* cfg, int era, float scale) const { void* args[] = { it, &tileCount, cfg, &era, &scale }; return CallStaticValue<float>("ApplyTo", args, 5); }
    };
}
