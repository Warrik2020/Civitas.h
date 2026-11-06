#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class FrameStats : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrameStats(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "FrameStats") {}
    public:
        double LowFps(void* sortedMs, int count, double fraction) const { void* args[] = { sortedMs, &count, &fraction }; return CallStaticValue<double>("LowFps", args, 3); }
        float Percentile(void* sortedMs, int count, float q) const { void* args[] = { sortedMs, &count, &q }; return CallStaticValue<float>("Percentile", args, 3); }
        int Hitches(void* sortedMs, int count) const { void* args[] = { sortedMs, &count }; return CallStaticValue<int>("Hitches", args, 2); }
        float HitchFloorMs() const { return ReadStaticField<float>("HitchFloorMs"); }
        float HitchMedianFactor() const { return ReadStaticField<float>("HitchMedianFactor"); }
    };
}
