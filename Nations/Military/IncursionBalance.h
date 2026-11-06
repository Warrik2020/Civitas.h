#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class IncursionBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IncursionBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "IncursionBalance") {}
    public:
        float SizeMin() const { return ReadStaticField<float>("SizeMin"); }
        float SizeMax() const { return ReadStaticField<float>("SizeMax"); }
        float DepthSlope() const { return ReadStaticField<float>("DepthSlope"); }
        float DepthMulMax() const { return ReadStaticField<float>("DepthMulMax"); }
        int HeatPassTicks() const { return ReadStaticField<int>("HeatPassTicks"); }
        float MinorHeat() const { return ReadStaticField<float>("MinorHeat"); }
        float ViolationHeat() const { return ReadStaticField<float>("ViolationHeat"); }
        float ViolationExitHeat() const { return ReadStaticField<float>("ViolationExitHeat"); }
        float HeatMax() const { return ReadStaticField<float>("HeatMax"); }
        float SevereGraceHeat() const { return ReadStaticField<float>("SevereGraceHeat"); }
        float MinorMaxDepth() const { return ReadStaticField<float>("MinorMaxDepth"); }
        int MinorMaxDivisions() const { return ReadStaticField<int>("MinorMaxDivisions"); }
        float HeatDecayMul() const { return ReadStaticField<float>("HeatDecayMul"); }
        float HeatDecaySub() const { return ReadStaticField<float>("HeatDecaySub"); }
        float TruceMul() const { return ReadStaticField<float>("TruceMul"); }
        float PledgeMul() const { return ReadStaticField<float>("PledgeMul"); }
        float AllyMul() const { return ReadStaticField<float>("AllyMul"); }
        float BondedMul() const { return ReadStaticField<float>("BondedMul"); }
        float PactMul() const { return ReadStaticField<float>("PactMul"); }
        float OpinionMinorCap() const { return ReadStaticField<float>("OpinionMinorCap"); }
        float OpinionViolationBase() const { return ReadStaticField<float>("OpinionViolationBase"); }
        float OpinionViolationPerHeat() const { return ReadStaticField<float>("OpinionViolationPerHeat"); }
        float OpinionViolationCap() const { return ReadStaticField<float>("OpinionViolationCap"); }
        float OpinionPerLock() const { return ReadStaticField<float>("OpinionPerLock"); }
        int OpinionLockCap() const { return ReadStaticField<int>("OpinionLockCap"); }
        float FriendShare() const { return ReadStaticField<float>("FriendShare"); }
        float WithdrawGoodwill() const { return ReadStaticField<float>("WithdrawGoodwill"); }
        float GrudgeViolation() const { return ReadStaticField<float>("GrudgeViolation"); }
        float GrudgeDefied() const { return ReadStaticField<float>("GrudgeDefied"); }
        float GrudgeStoodFirm() const { return ReadStaticField<float>("GrudgeStoodFirm"); }
        float GrudgeLockdown() const { return ReadStaticField<float>("GrudgeLockdown"); }
        float GrudgeTruceBroken() const { return ReadStaticField<float>("GrudgeTruceBroken"); }
        float GrudgePledgeBroken() const { return ReadStaticField<float>("GrudgePledgeBroken"); }
        float GrudgeExpelled() const { return ReadStaticField<float>("GrudgeExpelled"); }
        float GrudgePerDivisionLost() const { return ReadStaticField<float>("GrudgePerDivisionLost"); }
        int JustifyBase() const { return ReadStaticField<int>("JustifyBase"); }
        int JustifyFloorWhileViolating() const { return ReadStaticField<int>("JustifyFloorWhileViolating"); }
        int JustifyDefied() const { return ReadStaticField<int>("JustifyDefied"); }
        int JustifyLockdown() const { return ReadStaticField<int>("JustifyLockdown"); }
        int JustifyTruce() const { return ReadStaticField<int>("JustifyTruce"); }
        float JustifyTemperRoll() const { return ReadStaticField<float>("JustifyTemperRoll"); }
        int HostCardDeadlineTicks() const { return ReadStaticField<int>("HostCardDeadlineTicks"); }
        int ProtestTicks() const { return ReadStaticField<int>("ProtestTicks"); }
        int PassageTicks() const { return ReadStaticField<int>("PassageTicks"); }
        int GraceTicks() const { return ReadStaticField<int>("GraceTicks"); }
        int PledgeTicks() const { return ReadStaticField<int>("PledgeTicks"); }
        int MaxIncursionCards() const { return ReadStaticField<int>("MaxIncursionCards"); }
        float LocalRadius() const { return ReadStaticField<float>("LocalRadius"); }
        float ExpelLocal() const { return ReadStaticField<float>("ExpelLocal"); }
        float ExpelTemper() const { return ReadStaticField<float>("ExpelTemper"); }
        float HotheadLocal() const { return ReadStaticField<float>("HotheadLocal"); }
        float HotheadTemper() const { return ReadStaticField<float>("HotheadTemper"); }
        float AppeaseGlobal() const { return ReadStaticField<float>("AppeaseGlobal"); }
        float AppeaseTemper() const { return ReadStaticField<float>("AppeaseTemper"); }
        int WarIntentTicks() const { return ReadStaticField<int>("WarIntentTicks"); }
        int StageMinTicks() const { return ReadStaticField<int>("StageMinTicks"); }
        int StageMinDivisions() const { return ReadStaticField<int>("StageMinDivisions"); }
        int StageMaxDivisions() const { return ReadStaticField<int>("StageMaxDivisions"); }
        float StageDepth() const { return ReadStaticField<float>("StageDepth"); }
        float LockdownPowerRatio() const { return ReadStaticField<float>("LockdownPowerRatio"); }
        float LockdownArmyRatio() const { return ReadStaticField<float>("LockdownArmyRatio"); }
        int LockdownMinDivisions() const { return ReadStaticField<int>("LockdownMinDivisions"); }
        int LockdownMaxDivisions() const { return ReadStaticField<int>("LockdownMaxDivisions"); }
        int LockdownTilesPerDivision() const { return ReadStaticField<int>("LockdownTilesPerDivision"); }
        int LockdownPressTicks() const { return ReadStaticField<int>("LockdownPressTicks"); }
        int LockdownFailTicks() const { return ReadStaticField<int>("LockdownFailTicks"); }
        int IncursionOrderCooldownTicks() const { return ReadStaticField<int>("IncursionOrderCooldownTicks"); }
        float MaxArmyShare() const { return ReadStaticField<float>("MaxArmyShare"); }
        float WithdrawHostPower() const { return ReadStaticField<float>("WithdrawHostPower"); }
        float WithdrawTemper() const { return ReadStaticField<float>("WithdrawTemper"); }
        float StandFirmLocal() const { return ReadStaticField<float>("StandFirmLocal"); }
        float StandFirmTemper() const { return ReadStaticField<float>("StandFirmTemper"); }
        float GrudgeAttack() const { return ReadStaticField<float>("GrudgeAttack"); }
        float AggressionAttack() const { return ReadStaticField<float>("AggressionAttack"); }
        int JustifyAttack() const { return ReadStaticField<int>("JustifyAttack"); }
        float GrudgePlunder() const { return ReadStaticField<float>("GrudgePlunder"); }
        float GrudgePlunderPerPass() const { return ReadStaticField<float>("GrudgePlunderPerPass"); }
        float AggressionPlunder() const { return ReadStaticField<float>("AggressionPlunder"); }
        int JustifyPlunder() const { return ReadStaticField<int>("JustifyPlunder"); }
        float OpinionArmed() const { return ReadStaticField<float>("OpinionArmed"); }
        float PlunderIncomeMul() const { return ReadStaticField<float>("PlunderIncomeMul"); }
        float PlunderTreasuryShare() const { return ReadStaticField<float>("PlunderTreasuryShare"); }
        float LeveragePerLock() const { return ReadStaticField<float>("LeveragePerLock"); }
        float LeverageCap() const { return ReadStaticField<float>("LeverageCap"); }
        float DealLeverageShare() const { return ReadStaticField<float>("DealLeverageShare"); }
        float FootprintAoiMul() const { return ReadStaticField<float>("FootprintAoiMul"); }
        float FootprintMinTiles() const { return ReadStaticField<float>("FootprintMinTiles"); }
        float HuntPoolShare() const { return ReadStaticField<float>("HuntPoolShare"); }
        float HomeInlandTiles() const { return ReadStaticField<float>("HomeInlandTiles"); }
        float NoAnchorDepth() const { return ReadStaticField<float>("NoAnchorDepth"); }
        int AnchorRetryTicks() const { return ReadStaticField<int>("AnchorRetryTicks"); }
        int ExpelFuseTicks() const { return ReadStaticField<int>("ExpelFuseTicks"); }
        int ExpelSkirmishTicks() const { return ReadStaticField<int>("ExpelSkirmishTicks"); }
        float SkirmishOrgMul() const { return ReadStaticField<float>("SkirmishOrgMul"); }
        float SkirmishBleedMul() const { return ReadStaticField<float>("SkirmishBleedMul"); }
        float SkirmishManpowerFloor() const { return ReadStaticField<float>("SkirmishManpowerFloor"); }
        int ShadowPostsPerTrespasser() const { return ReadStaticField<int>("ShadowPostsPerTrespasser"); }
        int ExpelPostsPerTrespasser() const { return ReadStaticField<int>("ExpelPostsPerTrespasser"); }
        int LockdownEvalTicks() const { return ReadStaticField<int>("LockdownEvalTicks"); }
        int LockTicks() const { return ReadStaticField<int>("LockTicks"); }
        int UnlockBelowTicks() const { return ReadStaticField<int>("UnlockBelowTicks"); }
        int MaxProgressTicks() const { return ReadStaticField<int>("MaxProgressTicks"); }
        float LockDominanceRatio() const { return ReadStaticField<float>("LockDominanceRatio"); }
        float LockMinPower() const { return ReadStaticField<float>("LockMinPower"); }
        float LockMinCoverage() const { return ReadStaticField<float>("LockMinCoverage"); }
        float LockedHostSpeedMul() const { return ReadStaticField<float>("LockedHostSpeedMul"); }
        bool LockdownBlocksSupply() const { return ReadStaticField<bool>("LockdownBlocksSupply"); }
    };
}
