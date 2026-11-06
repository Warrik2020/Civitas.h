#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class ScenarioRescale : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ScenarioRescale(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "ScenarioRescale") {}
    public:
        bool FitToWorld(void* dto, void* map, int width, int height, bool save, const char*& why) const { void* args[] = { dto, map, &width, &height, &save, &why }; return CallStaticValue<bool>("FitToWorld", args, 6); }
        void* Smooth(void* dto, void* remap) const { void* args[] = { dto, remap }; return CallStatic("Smooth", args, 2); }
        bool SmoothBorders() const { return ReadStaticField<bool>("SmoothBorders"); }
        void SetSmoothBorders(bool value) const { WriteStaticField<bool>("SmoothBorders", value); }
    };
}
