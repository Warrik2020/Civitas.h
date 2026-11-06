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
        float Speed(float metresPerSecond) const { void* args[] = { &metresPerSecond }; return CallStaticValue<float>("Speed", args, 1); }
        float Dur(float realSeconds) const { void* args[] = { &realSeconds }; return CallStaticValue<float>("Dur", args, 1); }
        float Rate(float perRealSecond) const { void* args[] = { &perRealSecond }; return CallStaticValue<float>("Rate", args, 1); }
        float Accel(float metresPerSecond2) const { void* args[] = { &metresPerSecond2 }; return CallStaticValue<float>("Accel", args, 1); }
        float Tiles(float metres) const { void* args[] = { &metres }; return CallStaticValue<float>("Tiles", args, 1); }
        int Steps(float realSeconds) const { void* args[] = { &realSeconds }; return CallStaticValue<int>("Steps", args, 1); }
        int StepsBattle(float battleSeconds) const { void* args[] = { &battleSeconds }; return CallStaticValue<int>("StepsBattle", args, 1); }
        float K() const { return ReadStaticField<float>("K"); }
        float MetresPerTile() const { return ReadStaticField<float>("MetresPerTile"); }
    };
}
