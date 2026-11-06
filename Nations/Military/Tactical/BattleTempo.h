#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleTempo : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleTempo(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleTempo") {}
    public:
        float Speed(float metresPerSecond) const { void* __callArgs[] = { &metresPerSecond }; return CallStaticValue<float>("Speed", __callArgs, 1); }
        float Dur(float realSeconds) const { void* __callArgs[] = { &realSeconds }; return CallStaticValue<float>("Dur", __callArgs, 1); }
        float Rate(float perRealSecond) const { void* __callArgs[] = { &perRealSecond }; return CallStaticValue<float>("Rate", __callArgs, 1); }
        float Accel(float metresPerSecond2) const { void* __callArgs[] = { &metresPerSecond2 }; return CallStaticValue<float>("Accel", __callArgs, 1); }
        float Tiles(float metres) const { void* __callArgs[] = { &metres }; return CallStaticValue<float>("Tiles", __callArgs, 1); }
        int Steps(float realSeconds) const { void* __callArgs[] = { &realSeconds }; return CallStaticValue<int>("Steps", __callArgs, 1); }
        int StepsBattle(float battleSeconds) const { void* __callArgs[] = { &battleSeconds }; return CallStaticValue<int>("StepsBattle", __callArgs, 1); }
        float K() const { return ReadStaticField<float>("K"); }
        float MetresPerTile() const { return ReadStaticField<float>("MetresPerTile"); }
    };
}
