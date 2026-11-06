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
        double LowFps(void* sortedMs, int count, double fraction) const { void* __callArgs[] = { sortedMs, &count, &fraction }; return CallStaticValue<double>("LowFps", __callArgs, 3); }
        float Percentile(void* sortedMs, int count, float q) const { void* __callArgs[] = { sortedMs, &count, &q }; return CallStaticValue<float>("Percentile", __callArgs, 3); }
        int Hitches(void* sortedMs, int count) const { void* __callArgs[] = { sortedMs, &count }; return CallStaticValue<int>("Hitches", __callArgs, 2); }
        float HitchFloorMs() const { return ReadStaticField<float>("HitchFloorMs"); }
        float HitchMedianFactor() const { return ReadStaticField<float>("HitchMedianFactor"); }
    };
}
