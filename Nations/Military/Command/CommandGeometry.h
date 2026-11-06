#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class CommandGeometry : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CommandGeometry(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "CommandGeometry") {}
    public:
        float Spacing(void* cfg) const { void* args[] = { cfg }; return CallStaticValue<float>("Spacing", args, 1); }
        int SmoothPasses() const { return ReadStaticField<int>("SmoothPasses"); }
        float SampleStep() const { return ReadStaticField<float>("SampleStep"); }
        float TangentWindow() const { return ReadStaticField<float>("TangentWindow"); }
        float PostInsetTiles() const { return ReadStaticField<float>("PostInsetTiles"); }
        float PostHysteresis() const { return ReadStaticField<float>("PostHysteresis"); }
        float PostRelax() const { return ReadStaticField<float>("PostRelax"); }
        float PostRelaxDeadband() const { return ReadStaticField<float>("PostRelaxDeadband"); }
    };
}
