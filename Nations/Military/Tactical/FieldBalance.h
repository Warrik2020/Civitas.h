#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class FieldBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FieldBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "FieldBalance") {}
    public:
        float StandoffMetres(int age) const { void* args[] = { &age }; return CallStaticValue<float>("StandoffMetres", args, 1); }
        float FrontMetresPerThousand(int age) const { void* args[] = { &age }; return CallStaticValue<float>("FrontMetresPerThousand", args, 1); }
        float EnterKm() const { return ReadStaticField<float>("EnterKm"); }
        float ExitKm() const { return ReadStaticField<float>("ExitKm"); }
        float LeaveRearmKm() const { return ReadStaticField<float>("LeaveRearmKm"); }
        float InkGoneKm() const { return ReadStaticField<float>("InkGoneKm"); }
        float LookGoneKm() const { return ReadStaticField<float>("LookGoneKm"); }
        float EaseAfterSeconds() const { return ReadStaticField<float>("EaseAfterSeconds"); }
        float EaseSeconds() const { return ReadStaticField<float>("EaseSeconds"); }
        float EnterMarginFrac() const { return ReadStaticField<float>("EnterMarginFrac"); }
        float EnterMarginMinKm() const { return ReadStaticField<float>("EnterMarginMinKm"); }
        float LeaveMarginFrac() const { return ReadStaticField<float>("LeaveMarginFrac"); }
        float LeaveMarginMinKm() const { return ReadStaticField<float>("LeaveMarginMinKm"); }
        float MembershipSeconds() const { return ReadStaticField<float>("MembershipSeconds"); }
        float MinStaySeconds() const { return ReadStaticField<float>("MinStaySeconds"); }
        float LeaveAfterSeconds() const { return ReadStaticField<float>("LeaveAfterSeconds"); }
        float RejoinCooldownSeconds() const { return ReadStaticField<float>("RejoinCooldownSeconds"); }
        float IdleReleaseBattleSeconds() const { return ReadStaticField<float>("IdleReleaseBattleSeconds"); }
        float WithdrawReleaseBattleSeconds() const { return ReadStaticField<float>("WithdrawReleaseBattleSeconds"); }
        float FlankedWithdrawOrg() const { return ReadStaticField<float>("FlankedWithdrawOrg"); }
        float FlankedWithdrawPressure() const { return ReadStaticField<float>("FlankedWithdrawPressure"); }
        float ArriveReachMinKm() const { return ReadStaticField<float>("ArriveReachMinKm"); }
        float ArriveReachTiles() const { return ReadStaticField<float>("ArriveReachTiles"); }
        float RoutReleaseShare() const { return ReadStaticField<float>("RoutReleaseShare"); }
        float RoutReleaseBattleSeconds() const { return ReadStaticField<float>("RoutReleaseBattleSeconds"); }
        float LandSyncSeconds() const { return ReadStaticField<float>("LandSyncSeconds"); }
        int LandFlipsPerSync() const { return ReadStaticField<int>("LandFlipsPerSync"); }
        float LandHoldMinMetres() const { return ReadStaticField<float>("LandHoldMinMetres"); }
        float LandHoldTiles() const { return ReadStaticField<float>("LandHoldTiles"); }
        int MaxBubbleMen() const { return ReadStaticField<int>("MaxBubbleMen"); }
        int HandInMenPerFrame() const { return ReadStaticField<int>("HandInMenPerFrame"); }
        int HandInDivisionsPerFrame() const { return ReadStaticField<int>("HandInDivisionsPerFrame"); }
        float BattleSecondsPerTick() const { return ReadStaticField<float>("BattleSecondsPerTick"); }
        int MaxStepsPerFrame() const { return ReadStaticField<int>("MaxStepsPerFrame"); }
        float StepBudgetMs() const { return ReadStaticField<float>("StepBudgetMs"); }
        int MaxQuanta() const { return ReadStaticField<int>("MaxQuanta"); }
        float ThrottleSteps() const { return ReadStaticField<float>("ThrottleSteps"); }
        float ThrottleReleaseSteps() const { return ReadStaticField<float>("ThrottleReleaseSteps"); }
        float MinWorldPace() const { return ReadStaticField<float>("MinWorldPace"); }
        float QuantaSettleSeconds() const { return ReadStaticField<float>("QuantaSettleSeconds"); }
        float SpeedResetIdleSeconds() const { return ReadStaticField<float>("SpeedResetIdleSeconds"); }
        float OperationalReachMul() const { return ReadStaticField<float>("OperationalReachMul"); }
        float OperationalPaceMaxMul() const { return ReadStaticField<float>("OperationalPaceMaxMul"); }
        float CrossfadeSeconds() const { return ReadStaticField<float>("CrossfadeSeconds"); }
        float BattleLookSeconds() const { return ReadStaticField<float>("BattleLookSeconds"); }
        float CommandFrameMargin() const { return ReadStaticField<float>("CommandFrameMargin"); }
        float CommandFrameSeconds() const { return ReadStaticField<float>("CommandFrameSeconds"); }
        float CommandFrameMaxShare() const { return ReadStaticField<float>("CommandFrameMaxShare"); }
        float CommandCarrySeconds() const { return ReadStaticField<float>("CommandCarrySeconds"); }
        float FallenFadeDays() const { return ReadStaticField<float>("FallenFadeDays"); }
        float ZoomFloorHalfMetres() const { return ReadStaticField<float>("ZoomFloorHalfMetres"); }
    };
}
