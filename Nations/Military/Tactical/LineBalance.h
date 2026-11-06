#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class LineBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LineBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "LineBalance") {}
    public:
        float FireNear(int age) const { void* __callArgs[] = { &age }; return CallStaticValue<float>("FireNear", __callArgs, 1); }
        float FireWidth(int age) const { void* __callArgs[] = { &age }; return CallStaticValue<float>("FireWidth", __callArgs, 1); }
        float BattalionMen(int age) const { void* __callArgs[] = { &age }; return CallStaticValue<float>("BattalionMen", __callArgs, 1); }
        float Focus(float ratio) const { void* __callArgs[] = { &ratio }; return CallStaticValue<float>("Focus", __callArgs, 1); }
        float Screen() const { return ReadStaticField<float>("Screen"); }
        float SampleMetres() const { return ReadStaticField<float>("SampleMetres"); }
        int MaxSamples() const { return ReadStaticField<int>("MaxSamples"); }
        float ShoulderWidth() const { return ReadStaticField<float>("ShoulderWidth"); }
        float PressStepMax() const { return ReadStaticField<float>("PressStepMax"); }
        int SmoothPasses() const { return ReadStaticField<int>("SmoothPasses"); }
        float ActiveReach() const { return ReadStaticField<float>("ActiveReach"); }
        float AttackReach() const { return ReadStaticField<float>("AttackReach"); }
        float ContactMetres() const { return ReadStaticField<float>("ContactMetres"); }
        float CloseReach() const { return ReadStaticField<float>("CloseReach"); }
        float LeaveSeconds() const { return ReadStaticField<float>("LeaveSeconds"); }
        float ReserveEngageMetres() const { return ReadStaticField<float>("ReserveEngageMetres"); }
        float FireCutoff() const { return ReadStaticField<float>("FireCutoff"); }
        float MarchClearMetres() const { return ReadStaticField<float>("MarchClearMetres"); }
        float MarchMul() const { return ReadStaticField<float>("MarchMul"); }
        float ThinkSeconds() const { return ReadStaticField<float>("ThinkSeconds"); }
        float AiAttackGapMin() const { return ReadStaticField<float>("AiAttackGapMin"); }
        float AiAttackGapMax() const { return ReadStaticField<float>("AiAttackGapMax"); }
        float AiAttackSpanMetres() const { return ReadStaticField<float>("AiAttackSpanMetres"); }
        int AiMaxAttacks() const { return ReadStaticField<int>("AiMaxAttacks"); }
        float SpawnShiftShare() const { return ReadStaticField<float>("SpawnShiftShare"); }
        int AiGroupMax() const { return ReadStaticField<int>("AiGroupMax"); }
        float AiAttackOdds() const { return ReadStaticField<float>("AiAttackOdds"); }
        float AiReachMin() const { return ReadStaticField<float>("AiReachMin"); }
        float AiReachMax() const { return ReadStaticField<float>("AiReachMax"); }
        float AiAttackOrg() const { return ReadStaticField<float>("AiAttackOrg"); }
        float AiAbortOrg() const { return ReadStaticField<float>("AiAbortOrg"); }
        float AiStallOdds() const { return ReadStaticField<float>("AiStallOdds"); }
        float AiStallSeconds() const { return ReadStaticField<float>("AiStallSeconds"); }
        float AiBlockedSeconds() const { return ReadStaticField<float>("AiBlockedSeconds"); }
        float AiOpenOdds() const { return ReadStaticField<float>("AiOpenOdds"); }
        float AiTakenShare() const { return ReadStaticField<float>("AiTakenShare"); }
        float FlankReachWidths() const { return ReadStaticField<float>("FlankReachWidths"); }
        float FlankRearShare() const { return ReadStaticField<float>("FlankRearShare"); }
        float AiFlankOdds() const { return ReadStaticField<float>("AiFlankOdds"); }
        float AiFallBackOdds() const { return ReadStaticField<float>("AiFallBackOdds"); }
        float WithdrawDepthMin() const { return ReadStaticField<float>("WithdrawDepthMin"); }
        float WithdrawDepthMax() const { return ReadStaticField<float>("WithdrawDepthMax"); }
        float PocketReserveShare() const { return ReadStaticField<float>("PocketReserveShare"); }
        float PocketNeckMetres() const { return ReadStaticField<float>("PocketNeckMetres"); }
        float PocketHoldMetres() const { return ReadStaticField<float>("PocketHoldMetres"); }
        float SurrenderSeconds() const { return ReadStaticField<float>("SurrenderSeconds"); }
        float BreakOutOrg() const { return ReadStaticField<float>("BreakOutOrg"); }
        int MinBattalions() const { return ReadStaticField<int>("MinBattalions"); }
        int MaxBattalions() const { return ReadStaticField<int>("MaxBattalions"); }
        float FrontShare() const { return ReadStaticField<float>("FrontShare"); }
        float MinSpacing() const { return ReadStaticField<float>("MinSpacing"); }
        float HoldDepth() const { return ReadStaticField<float>("HoldDepth"); }
        float ReserveDepthMin() const { return ReadStaticField<float>("ReserveDepthMin"); }
        float ReserveDepthMax() const { return ReadStaticField<float>("ReserveDepthMax"); }
        float UnitSpeed() const { return ReadStaticField<float>("UnitSpeed"); }
        void* TypeSpeed() const { return ReadStaticField<void*>("TypeSpeed"); }
        float ArriveMetres() const { return ReadStaticField<float>("ArriveMetres"); }
        float WithdrawOrg() const { return ReadStaticField<float>("WithdrawOrg"); }
        float ReliefOrg() const { return ReadStaticField<float>("ReliefOrg"); }
        float BreakOrg() const { return ReadStaticField<float>("BreakOrg"); }
        float RallyOrg() const { return ReadStaticField<float>("RallyOrg"); }
        float ReliefReach() const { return ReadStaticField<float>("ReliefReach"); }
        float OrgLoss() const { return ReadStaticField<float>("OrgLoss"); }
        float ManLoss() const { return ReadStaticField<float>("ManLoss"); }
        float WearScale() const { return ReadStaticField<float>("WearScale"); }
        float FlankHit() const { return ReadStaticField<float>("FlankHit"); }
        float RearHit() const { return ReadStaticField<float>("RearHit"); }
        float FrontAlong() const { return ReadStaticField<float>("FrontAlong"); }
        float FocusFrom() const { return ReadStaticField<float>("FocusFrom"); }
        float FocusPower() const { return ReadStaticField<float>("FocusPower"); }
        float FocusMax() const { return ReadStaticField<float>("FocusMax"); }
        float FocusBleed() const { return ReadStaticField<float>("FocusBleed"); }
        float BrokenHit() const { return ReadStaticField<float>("BrokenHit"); }
        float ShellHitMetres() const { return ReadStaticField<float>("ShellHitMetres"); }
        float ShellOrgHit() const { return ReadStaticField<float>("ShellOrgHit"); }
        float ReserveRegen() const { return ReadStaticField<float>("ReserveRegen"); }
        float DigRate() const { return ReadStaticField<float>("DigRate"); }
        float DigDefence() const { return ReadStaticField<float>("DigDefence"); }
        float GunsPerMenuRate() const { return ReadStaticField<float>("GunsPerMenuRate"); }
        float ShellRateMax() const { return ReadStaticField<float>("ShellRateMax"); }
        float LineFirePerKm() const { return ReadStaticField<float>("LineFirePerKm"); }
        float DustStep() const { return ReadStaticField<float>("DustStep"); }
        int MaxBits() const { return ReadStaticField<int>("MaxBits"); }
        int MaxCraters() const { return ReadStaticField<int>("MaxCraters"); }
        int MaxFires() const { return ReadStaticField<int>("MaxFires"); }
        float CraterLife() const { return ReadStaticField<float>("CraterLife"); }
        int CratersToMap() const { return ReadStaticField<int>("CratersToMap"); }
    };
}
