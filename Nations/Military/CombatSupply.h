#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class CombatSupply : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CombatSupply(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "CombatSupply") {}
    public:
        bool InContact(void* d, int tick) const { void* __callArgs[] = { d, &tick }; return CallStaticValue<bool>("InContact", __callArgs, 2); }
        float Draw(void* it, void* d, int pool, void* cfg) const { void* __callArgs[] = { it, d, &pool, cfg }; return CallStaticValue<float>("Draw", __callArgs, 4); }
        float IssueOf(void* it, void* d, int pool, void* cfg) const { void* __callArgs[] = { it, d, &pool, cfg }; return CallStaticValue<float>("IssueOf", __callArgs, 4); }
        void Tick(void* d, void* it, void* cfg, int tick) const { void* __callArgs[] = { d, it, cfg, &tick }; CallStatic("Tick", __callArgs, 4); }
        float PowerMul(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("PowerMul", __callArgs, 1); }
        bool IsShort(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<bool>("IsShort", __callArgs, 1); }
        float NationDrawPerTick(void* mil, void* it, int pool, void* cfg, int tick) const { void* __callArgs[] = { mil, it, &pool, cfg, &tick }; return CallStaticValue<float>("NationDrawPerTick", __callArgs, 5); }
        float WearPerTickFraction() const { return ReadStaticField<float>("WearPerTickFraction"); }
        float OutOfSupplyPowerMul() const { return ReadStaticField<float>("OutOfSupplyPowerMul"); }
        float SupplyFallPerTick() const { return ReadStaticField<float>("SupplyFallPerTick"); }
        float SupplyRisePerTick() const { return ReadStaticField<float>("SupplyRisePerTick"); }
        float ShortBelow() const { return ReadStaticField<float>("ShortBelow"); }
    };
}
