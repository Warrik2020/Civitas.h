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
        bool FitToWorld(void* dto, void* map, int width, int height, bool save, const char*& why) const { void* __callArgs[] = { dto, map, &width, &height, &save, &why }; return CallStaticValue<bool>("FitToWorld", __callArgs, 6); }
        void* Smooth(void* dto, void* remap) const { void* __callArgs[] = { dto, remap }; return CallStatic("Smooth", __callArgs, 2); }
        bool SmoothBorders() const { return ReadStaticField<bool>("SmoothBorders"); }
        void SmoothBorders(bool value) const { WriteStaticField<bool>("SmoothBorders", value); }
    };
}
