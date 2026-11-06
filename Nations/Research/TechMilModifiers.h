#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Research
{
    class TechMilModifiers : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TechMilModifiers(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Research", "TechMilModifiers") {}
    public:
        float MoveMulOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("MoveMulOf", __callArgs, 1); }
        float OrgRegenMulOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("OrgRegenMulOf", __callArgs, 1); }
        float AttackMulOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("AttackMulOf", __callArgs, 1); }
        float DamageTakenMulOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("DamageTakenMulOf", __callArgs, 1); }
        float SupplyRangeMulOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("SupplyRangeMulOf", __callArgs, 1); }
        float SupplyOutputMulOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("SupplyOutputMulOf", __callArgs, 1); }
        void EnsureCapacity(int nationId) const { void* __callArgs[] = { &nationId }; CallStatic("EnsureCapacity", __callArgs, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void* attack() const { return ReadStaticField<void*>("attack"); }
        void attack(void* value) const { WriteStaticField<void*>("attack", value); }
        void* damageTaken() const { return ReadStaticField<void*>("damageTaken"); }
        void damageTaken(void* value) const { WriteStaticField<void*>("damageTaken", value); }
        void* move() const { return ReadStaticField<void*>("move"); }
        void move(void* value) const { WriteStaticField<void*>("move", value); }
        void* orgRegen() const { return ReadStaticField<void*>("orgRegen"); }
        void orgRegen(void* value) const { WriteStaticField<void*>("orgRegen", value); }
        void* reinforce() const { return ReadStaticField<void*>("reinforce"); }
        void reinforce(void* value) const { WriteStaticField<void*>("reinforce", value); }
        void* supplyRange() const { return ReadStaticField<void*>("supplyRange"); }
        void supplyRange(void* value) const { WriteStaticField<void*>("supplyRange", value); }
        void* supplyOutput() const { return ReadStaticField<void*>("supplyOutput"); }
        void supplyOutput(void* value) const { WriteStaticField<void*>("supplyOutput", value); }
    };
}
