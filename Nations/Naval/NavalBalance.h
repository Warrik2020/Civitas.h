#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Naval
{
    class NavalBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NavalBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Naval", "NavalBalance") {}
    public:
        int EmbarkPortTicks() const { return ReadStaticField<int>("EmbarkPortTicks"); }
        int EmbarkBeachTicks() const { return ReadStaticField<int>("EmbarkBeachTicks"); }
        int DisembarkPortTicks() const { return ReadStaticField<int>("DisembarkPortTicks"); }
        int DisembarkBeachTicks() const { return ReadStaticField<int>("DisembarkBeachTicks"); }
        int DisembarkHostileTicks() const { return ReadStaticField<int>("DisembarkHostileTicks"); }
        int MinBoardingTicks() const { return ReadStaticField<int>("MinBoardingTicks"); }
        float MinEmbarkTimeMul() const { return ReadStaticField<float>("MinEmbarkTimeMul"); }
        float CavalryBoardMul() const { return ReadStaticField<float>("CavalryBoardMul"); }
        float TankBoardMul() const { return ReadStaticField<float>("TankBoardMul"); }
        int PortRadius() const { return ReadStaticField<int>("PortRadius"); }
        float EmbarkingPowerMul() const { return ReadStaticField<float>("EmbarkingPowerMul"); }
        float DisembarkingPowerMul() const { return ReadStaticField<float>("DisembarkingPowerMul"); }
        float HostileLandingPowerMul() const { return ReadStaticField<float>("HostileLandingPowerMul"); }
        float HostileLandingDamageTakenMul() const { return ReadStaticField<float>("HostileLandingDamageTakenMul"); }
        float RepulseManpowerKeep() const { return ReadStaticField<float>("RepulseManpowerKeep"); }
        int BeachheadRadius() const { return ReadStaticField<int>("BeachheadRadius"); }
        int MaxBeachheadsPerNation() const { return ReadStaticField<int>("MaxBeachheadsPerNation"); }
        int MaxWaitToLandTicks() const { return ReadStaticField<int>("MaxWaitToLandTicks"); }
        int WaitRerouteEveryTicks() const { return ReadStaticField<int>("WaitRerouteEveryTicks"); }
        int PlanStaleTicks() const { return ReadStaticField<int>("PlanStaleTicks"); }
        float WalkEstimateMul() const { return ReadStaticField<float>("WalkEstimateMul"); }
        float ToQuayTimeoutMul() const { return ReadStaticField<float>("ToQuayTimeoutMul"); }
        int ToQuayTimeoutGraceTicks() const { return ReadStaticField<int>("ToQuayTimeoutGraceTicks"); }
        int QuayFloodBudget() const { return ReadStaticField<int>("QuayFloodBudget"); }
        int PortSearchTiles() const { return ReadStaticField<int>("PortSearchTiles"); }
        int MaxLaneAttempts() const { return ReadStaticField<int>("MaxLaneAttempts"); }
        int DangerPenaltyTicks() const { return ReadStaticField<int>("DangerPenaltyTicks"); }
        int BlockedPenaltyTicks() const { return ReadStaticField<int>("BlockedPenaltyTicks"); }
        float GroupBeachSpacing() const { return ReadStaticField<float>("GroupBeachSpacing"); }
        int ShortcutMinWaterTiles() const { return ReadStaticField<int>("ShortcutMinWaterTiles"); }
        float ShortcutMaxTimeShare() const { return ReadStaticField<float>("ShortcutMaxTimeShare"); }
        int AutoSailRetryTicks() const { return ReadStaticField<int>("AutoSailRetryTicks"); }
        int ShortcutMinSavingTicks() const { return ReadStaticField<int>("ShortcutMinSavingTicks"); }
        float ShortcutCohortTiles() const { return ReadStaticField<float>("ShortcutCohortTiles"); }
        float ShipsMax() const { return ReadStaticField<float>("ShipsMax"); }
        float FleetDestroyBelow() const { return ReadStaticField<float>("FleetDestroyBelow"); }
        float FleetSpeed() const { return ReadStaticField<float>("FleetSpeed"); }
        float PatrolRadius() const { return ReadStaticField<float>("PatrolRadius"); }
        float MovingContactRadius() const { return ReadStaticField<float>("MovingContactRadius"); }
        float PatrolSmallMul() const { return ReadStaticField<float>("PatrolSmallMul"); }
        float PatrolLargeMul() const { return ReadStaticField<float>("PatrolLargeMul"); }
        float FleetSupportRadius() const { return ReadStaticField<float>("FleetSupportRadius"); }
        float FleetOrgDamagePerTick() const { return ReadStaticField<float>("FleetOrgDamagePerTick"); }
        float FleetHullLossPerTick() const { return ReadStaticField<float>("FleetHullLossPerTick"); }
        float BrokenDamageTakenMul() const { return ReadStaticField<float>("BrokenDamageTakenMul"); }
        float FleetOrgRegenPerTick() const { return ReadStaticField<float>("FleetOrgRegenPerTick"); }
        float PortRegenMul() const { return ReadStaticField<float>("PortRegenMul"); }
        float FleetReengageOrgFraction() const { return ReadStaticField<float>("FleetReengageOrgFraction"); }
        float FleetRepairPerTick() const { return ReadStaticField<float>("FleetRepairPerTick"); }
        float RepairCostFraction() const { return ReadStaticField<float>("RepairCostFraction"); }
        float InPortRadius() const { return ReadStaticField<float>("InPortRadius"); }
        float FleetCostMul() const { return ReadStaticField<float>("FleetCostMul"); }
        float FleetBuildTimeMul() const { return ReadStaticField<float>("FleetBuildTimeMul"); }
        float FleetUpkeepMul() const { return ReadStaticField<float>("FleetUpkeepMul"); }
        int MaxFleetsPerNation() const { return ReadStaticField<int>("MaxFleetsPerNation"); }
        float EscortRadius() const { return ReadStaticField<float>("EscortRadius"); }
        float InterceptOrgPerTick() const { return ReadStaticField<float>("InterceptOrgPerTick"); }
        float InterceptBleedPerTick() const { return ReadStaticField<float>("InterceptBleedPerTick"); }
        float InterceptSaturation() const { return ReadStaticField<float>("InterceptSaturation"); }
        float InterceptPressureMax() const { return ReadStaticField<float>("InterceptPressureMax"); }
        float BombardRadius() const { return ReadStaticField<float>("BombardRadius"); }
        int BombardCoastDist() const { return ReadStaticField<int>("BombardCoastDist"); }
        float BombardPerFleet() const { return ReadStaticField<float>("BombardPerFleet"); }
        float BombardMax() const { return ReadStaticField<float>("BombardMax"); }
        int BlockadeScanTicks() const { return ReadStaticField<int>("BlockadeScanTicks"); }
    };
}
