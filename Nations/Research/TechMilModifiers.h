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
        float MoveMulOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("MoveMulOf", args, 1); }
        float OrgRegenMulOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("OrgRegenMulOf", args, 1); }
        float AttackMulOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("AttackMulOf", args, 1); }
        float DamageTakenMulOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("DamageTakenMulOf", args, 1); }
        float SupplyRangeMulOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("SupplyRangeMulOf", args, 1); }
        float SupplyOutputMulOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("SupplyOutputMulOf", args, 1); }
        void EnsureCapacity(int nationId) const { void* args[] = { &nationId }; CallStatic("EnsureCapacity", args, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void* attack() const { return ReadStaticField<void*>("attack"); }
        void SetAttack(void* value) const { WriteStaticField<void*>("attack", value); }
        void* damageTaken() const { return ReadStaticField<void*>("damageTaken"); }
        void SetDamageTaken(void* value) const { WriteStaticField<void*>("damageTaken", value); }
        void* move() const { return ReadStaticField<void*>("move"); }
        void SetMove(void* value) const { WriteStaticField<void*>("move", value); }
        void* orgRegen() const { return ReadStaticField<void*>("orgRegen"); }
        void SetOrgRegen(void* value) const { WriteStaticField<void*>("orgRegen", value); }
        void* reinforce() const { return ReadStaticField<void*>("reinforce"); }
        void SetReinforce(void* value) const { WriteStaticField<void*>("reinforce", value); }
        void* supplyRange() const { return ReadStaticField<void*>("supplyRange"); }
        void SetSupplyRange(void* value) const { WriteStaticField<void*>("supplyRange", value); }
        void* supplyOutput() const { return ReadStaticField<void*>("supplyOutput"); }
        void SetSupplyOutput(void* value) const { WriteStaticField<void*>("supplyOutput", value); }
    };
}
