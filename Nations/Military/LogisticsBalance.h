#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class LogisticsBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LogisticsBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "LogisticsBalance") {}
    public:
        float RadiusTiles(void* cfg) const { void* args[] = { cfg }; return CallStaticValue<float>("RadiusTiles", args, 1); }
        float TargetOf(float ratio) const { void* args[] = { &ratio }; return CallStaticValue<float>("TargetOf", args, 1); }
        float Ease(float level, float target) const { void* args[] = { &level, &target }; return CallStaticValue<float>("Ease", args, 2); }
        float PowerMulOf(float level) const { void* args[] = { &level }; return CallStaticValue<float>("PowerMulOf", args, 1); }
        float OrgCapMulOf(float level) const { void* args[] = { &level }; return CallStaticValue<float>("OrgCapMulOf", args, 1); }
        float ReinforceMulOf(float level) const { void* args[] = { &level }; return CallStaticValue<float>("ReinforceMulOf", args, 1); }
        float SpeedMulOf(float level) const { void* args[] = { &level }; return CallStaticValue<float>("SpeedMulOf", args, 1); }
        float OrgRegenMulOf(float level) const { void* args[] = { &level }; return CallStaticValue<float>("OrgRegenMulOf", args, 1); }
        float AttritionOf(float level, void* d, void* cfg) const { void* args[] = { &level, d, cfg }; return CallStaticValue<float>("AttritionOf", args, 3); }
        float DemandOf(void* d, void* cfg) const { void* args[] = { d, cfg }; return CallStaticValue<float>("DemandOf", args, 2); }
        float DemandOf(int type, bool hasEst, void* e, float fill, float fullStrength, void* cfg) const { void* args[] = { &type, &hasEst, &e, &fill, &fullStrength, cfg }; return CallStaticValue<float>("DemandOf", args, 6); }
        int CellShift() const { return ReadStaticField<int>("CellShift"); }
        int CellShiftLarge() const { return ReadStaticField<int>("CellShiftLarge"); }
        int LargeGridTiles() const { return ReadStaticField<int>("LargeGridTiles"); }
        int CostReferenceTiles() const { return ReadStaticField<int>("CostReferenceTiles"); }
        float CityBaseDE() const { return ReadStaticField<float>("CityBaseDE"); }
        float CityPopDE() const { return ReadStaticField<float>("CityPopDE"); }
        float CityPopRef() const { return ReadStaticField<float>("CityPopRef"); }
        float CityPopRootCap() const { return ReadStaticField<float>("CityPopRootCap"); }
        float DepotBaseDE() const { return ReadStaticField<float>("DepotBaseDE"); }
        int DepotsPerStateMax() const { return ReadStaticField<int>("DepotsPerStateMax"); }
        int DepotAnchorSearchCells() const { return ReadStaticField<int>("DepotAnchorSearchCells"); }
        float FallbackCapitalDE() const { return ReadStaticField<float>("FallbackCapitalDE"); }
        int KeyScale() const { return ReadStaticField<int>("KeyScale"); }
        int CostOpen() const { return ReadStaticField<int>("CostOpen"); }
        int CostTrack() const { return ReadStaticField<int>("CostTrack"); }
        int CostRoad() const { return ReadStaticField<int>("CostRoad"); }
        int CostHighway() const { return ReadStaticField<int>("CostHighway"); }
        void* HardMul() const { return ReadStaticField<void*>("HardMul"); }
        float Hard1() const { return ReadStaticField<float>("Hard1"); }
        float Hard2() const { return ReadStaticField<float>("Hard2"); }
        float Hard3() const { return ReadStaticField<float>("Hard3"); }
        float WildMul() const { return ReadStaticField<float>("WildMul"); }
        float TransitMul() const { return ReadStaticField<float>("TransitMul"); }
        float EnemyMul() const { return ReadStaticField<float>("EnemyMul"); }
        float CutoffDE() const { return ReadStaticField<float>("CutoffDE"); }
        float ReachThresholdDE() const { return ReadStaticField<float>("ReachThresholdDE"); }
        float OccupiedForageDE() const { return ReadStaticField<float>("OccupiedForageDE"); }
        float RadiusPerBodyMax() const { return ReadStaticField<float>("RadiusPerBodyMax"); }
        float TankDemand() const { return ReadStaticField<float>("TankDemand"); }
        float CavDemand() const { return ReadStaticField<float>("CavDemand"); }
        float GunDemand() const { return ReadStaticField<float>("GunDemand"); }
        float CarriedDemand() const { return ReadStaticField<float>("CarriedDemand"); }
        void* ClassDemand() const { return ReadStaticField<void*>("ClassDemand"); }
        float SizeDemandMin() const { return ReadStaticField<float>("SizeDemandMin"); }
        float SizeDemandMax() const { return ReadStaticField<float>("SizeDemandMax"); }
        float RatioFull() const { return ReadStaticField<float>("RatioFull"); }
        float RatioZero() const { return ReadStaticField<float>("RatioZero"); }
        float LevelFallPerTick() const { return ReadStaticField<float>("LevelFallPerTick"); }
        float LevelRisePerTick() const { return ReadStaticField<float>("LevelRisePerTick"); }
        float PowerLossAtZero() const { return ReadStaticField<float>("PowerLossAtZero"); }
        float OrgCapLossAtZero() const { return ReadStaticField<float>("OrgCapLossAtZero"); }
        float ReinforceLossAtZero() const { return ReadStaticField<float>("ReinforceLossAtZero"); }
        float SpeedLossAtZero() const { return ReadStaticField<float>("SpeedLossAtZero"); }
        float OrgRegenLossAtZero() const { return ReadStaticField<float>("OrgRegenLossAtZero"); }
        float OrgExcessDecayFraction() const { return ReadStaticField<float>("OrgExcessDecayFraction"); }
        float AttritionStartLevel() const { return ReadStaticField<float>("AttritionStartLevel"); }
        float AttritionPocketShare() const { return ReadStaticField<float>("AttritionPocketShare"); }
        float StrainMax() const { return ReadStaticField<float>("StrainMax"); }
        float StrainedBelowLevel() const { return ReadStaticField<float>("StrainedBelowLevel"); }
        float StarvingBelowLevel() const { return ReadStaticField<float>("StarvingBelowLevel"); }
        int SolveCellBudgetPerTick() const { return ReadStaticField<int>("SolveCellBudgetPerTick"); }
        int MinResolveIntervalTicks() const { return ReadStaticField<int>("MinResolveIntervalTicks"); }
        int BackstopTicks() const { return ReadStaticField<int>("BackstopTicks"); }
        int SourceCheckIntervalTicks() const { return ReadStaticField<int>("SourceCheckIntervalTicks"); }
        float SourceRedoFraction() const { return ReadStaticField<float>("SourceRedoFraction"); }
        float FreshDivisionDE() const { return ReadStaticField<float>("FreshDivisionDE"); }
    };
}
