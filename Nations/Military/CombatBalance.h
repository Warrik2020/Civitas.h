#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class CombatBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CombatBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "CombatBalance") {}
    public:
        float MarchFatigued(float org, void* cfg) const { void* __callArgs[] = { &org, cfg }; return CallStaticValue<float>("MarchFatigued", __callArgs, 2); }
        float OrgDamagePerTick(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<float>("OrgDamagePerTick", __callArgs, 1); }
        float CasualtyOrg(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<float>("CasualtyOrg", __callArgs, 1); }
        float AutoWithdrawOrg(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<float>("AutoWithdrawOrg", __callArgs, 1); }
        float ManpowerBleedPerTick(void* d, void* cfg) const { void* __callArgs[] = { d, cfg }; return CallStaticValue<float>("ManpowerBleedPerTick", __callArgs, 2); }
        float DestroyBelowManpower(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<float>("DestroyBelowManpower", __callArgs, 1); }
        float CasualtyRamp(float org, void* cfg) const { void* __callArgs[] = { &org, cfg }; return CallStaticValue<float>("CasualtyRamp", __callArgs, 2); }
        float OpeningRampMul(int ticksInContact) const { void* __callArgs[] = { &ticksInContact }; return CallStaticValue<float>("OpeningRampMul", __callArgs, 1); }
        float LastStandMul(float org, void* cfg, int stance) const { void* __callArgs[] = { &org, cfg, &stance }; return CallStaticValue<float>("LastStandMul", __callArgs, 3); }
        float CasualtyOrgFraction() const { return ReadStaticField<float>("CasualtyOrgFraction"); }
        float DestroyBelowManpowerFraction() const { return ReadStaticField<float>("DestroyBelowManpowerFraction"); }
        float OrgDamagePerTickFraction() const { return ReadStaticField<float>("OrgDamagePerTickFraction"); }
        float ManpowerBleedPerTickFraction() const { return ReadStaticField<float>("ManpowerBleedPerTickFraction"); }
        float RatioMax() const { return ReadStaticField<float>("RatioMax"); }
        int SkirmishRampTicks() const { return ReadStaticField<int>("SkirmishRampTicks"); }
        float SkirmishOpeningDamageMul() const { return ReadStaticField<float>("SkirmishOpeningDamageMul"); }
        float LastStandOrgFraction() const { return ReadStaticField<float>("LastStandOrgFraction"); }
        float LastStandDamageMul() const { return ReadStaticField<float>("LastStandDamageMul"); }
        float EntrenchMul() const { return ReadStaticField<float>("EntrenchMul"); }
        float PocketMul() const { return ReadStaticField<float>("PocketMul"); }
        float WithdrawPressureMul() const { return ReadStaticField<float>("WithdrawPressureMul"); }
        float RetreatDamageMul() const { return ReadStaticField<float>("RetreatDamageMul"); }
        float FortMulPerLevel() const { return ReadStaticField<float>("FortMulPerLevel"); }
        float AutoWithdrawOrgFraction() const { return ReadStaticField<float>("AutoWithdrawOrgFraction"); }
        int AutoWithdrawCooldownTicks() const { return ReadStaticField<int>("AutoWithdrawCooldownTicks"); }
        float RallyOrgFraction() const { return ReadStaticField<float>("RallyOrgFraction"); }
        void RallyOrgFraction(float value) const { WriteStaticField<float>("RallyOrgFraction", value); }
        int RallyMaxTicks() const { return ReadStaticField<int>("RallyMaxTicks"); }
        void RallyMaxTicks(int value) const { WriteStaticField<int>("RallyMaxTicks", value); }
        float RallyRegenMul() const { return ReadStaticField<float>("RallyRegenMul"); }
        float MarchOrgDrainPerTick() const { return ReadStaticField<float>("MarchOrgDrainPerTick"); }
        float MarchOrgFloorFraction() const { return ReadStaticField<float>("MarchOrgFloorFraction"); }
    };
}
