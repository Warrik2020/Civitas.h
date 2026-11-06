#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class MapBattleBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapBattleBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "MapBattleBalance") {}
    public:
        float StopOrgOf(void* d) const { void* args[] = { d }; return CallStaticValue<float>("StopOrgOf", args, 1); }
        float BlockedHit() const { return ReadStaticField<float>("BlockedHit"); }
        float UnblockedHit() const { return ReadStaticField<float>("UnblockedHit"); }
        float OrgPerHit() const { return ReadStaticField<float>("OrgPerHit"); }
        float StrengthPerHit() const { return ReadStaticField<float>("StrengthPerHit"); }
        float BaseWidth() const { return ReadStaticField<float>("BaseWidth"); }
        float FlankWidth() const { return ReadStaticField<float>("FlankWidth"); }
        float FlankAngleDeg() const { return ReadStaticField<float>("FlankAngleDeg"); }
        float WidthTolerance() const { return ReadStaticField<float>("WidthTolerance"); }
        float MinDivisionWidth() const { return ReadStaticField<float>("MinDivisionWidth"); }
        float MaxDivisionWidth() const { return ReadStaticField<float>("MaxDivisionWidth"); }
        float ArmourMaxReduction() const { return ReadStaticField<float>("ArmourMaxReduction"); }
        float DugInDefenceMul() const { return ReadStaticField<float>("DugInDefenceMul"); }
        float AttackStopOrgFraction() const { return ReadStaticField<float>("AttackStopOrgFraction"); }
        float HardAttackStopOrgFraction() const { return ReadStaticField<float>("HardAttackStopOrgFraction"); }
        float AttackResumeOrgFraction() const { return ReadStaticField<float>("AttackResumeOrgFraction"); }
        float SupportBodyMul() const { return ReadStaticField<float>("SupportBodyMul"); }
        float CounterOutputShare() const { return ReadStaticField<float>("CounterOutputShare"); }
        int EndShowTicks() const { return ReadStaticField<int>("EndShowTicks"); }
        float ZoneAoiMul() const { return ReadStaticField<float>("ZoneAoiMul"); }
        float TargetSlackTiles() const { return ReadStaticField<float>("TargetSlackTiles"); }
        float AiAttackOdds() const { return ReadStaticField<float>("AiAttackOdds"); }
        float AiAttackOddsFloor() const { return ReadStaticField<float>("AiAttackOddsFloor"); }
        float FrontageWidth() const { return ReadStaticField<float>("FrontageWidth"); }
        void SetFrontageWidth(float value) const { WriteStaticField<float>("FrontageWidth", value); }
        float FrontageRadiusPosts() const { return ReadStaticField<float>("FrontageRadiusPosts"); }
        void SetFrontageRadiusPosts(float value) const { WriteStaticField<float>("FrontageRadiusPosts", value); }
        float DefenderWithdrawOrgFraction() const { return ReadStaticField<float>("DefenderWithdrawOrgFraction"); }
        void SetDefenderWithdrawOrgFraction(float value) const { WriteStaticField<float>("DefenderWithdrawOrgFraction", value); }
        int AiStallGraceTicks() const { return ReadStaticField<int>("AiStallGraceTicks"); }
        int AiStallRampTicks() const { return ReadStaticField<int>("AiStallRampTicks"); }
        float AiAssaultOdds() const { return ReadStaticField<float>("AiAssaultOdds"); }
        float AiAttackScanTiles() const { return ReadStaticField<float>("AiAttackScanTiles"); }
    };
}
