#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Cities
{
    class CityConfig : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityConfig(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities", "CityConfig") {}
    public:
        float capitalMaxRadius() const { return ReadField<float>("capitalMaxRadius"); }
        void SetCapitalMaxRadius(float value) const { WriteField<float>("capitalMaxRadius", value); }
        float townMaxRadius() const { return ReadField<float>("townMaxRadius"); }
        void SetTownMaxRadius(float value) const { WriteField<float>("townMaxRadius", value); }
        float radiusGrowthPerTick() const { return ReadField<float>("radiusGrowthPerTick"); }
        void SetRadiusGrowthPerTick(float value) const { WriteField<float>("radiusGrowthPerTick", value); }
        int buildingAttemptsPerTick() const { return ReadField<int>("buildingAttemptsPerTick"); }
        void SetBuildingAttemptsPerTick(int value) const { WriteField<int>("buildingAttemptsPerTick", value); }
        int capitalMaxBuildings() const { return ReadField<int>("capitalMaxBuildings"); }
        void SetCapitalMaxBuildings(int value) const { WriteField<int>("capitalMaxBuildings", value); }
        int townMaxBuildings() const { return ReadField<int>("townMaxBuildings"); }
        void SetTownMaxBuildings(int value) const { WriteField<int>("townMaxBuildings", value); }
        float buildingMinSize() const { return ReadField<float>("buildingMinSize"); }
        void SetBuildingMinSize(float value) const { WriteField<float>("buildingMinSize", value); }
        float buildingMaxSize() const { return ReadField<float>("buildingMaxSize"); }
        void SetBuildingMaxSize(float value) const { WriteField<float>("buildingMaxSize", value); }
        float buildingClearance() const { return ReadField<float>("buildingClearance"); }
        void SetBuildingClearance(float value) const { WriteField<float>("buildingClearance", value); }
        float popInDuration() const { return ReadField<float>("popInDuration"); }
        void SetPopInDuration(float value) const { WriteField<float>("popInDuration", value); }
        float buildingOutlinePx() const { return ReadField<float>("buildingOutlinePx"); }
        void SetBuildingOutlinePx(float value) const { WriteField<float>("buildingOutlinePx", value); }
        float buildingFrontGap() const { return ReadField<float>("buildingFrontGap"); }
        void SetBuildingFrontGap(float value) const { WriteField<float>("buildingFrontGap", value); }
        float buildingRowJitter() const { return ReadField<float>("buildingRowJitter"); }
        void SetBuildingRowJitter(float value) const { WriteField<float>("buildingRowJitter", value); }
        float buildingAngleJitter() const { return ReadField<float>("buildingAngleJitter"); }
        void SetBuildingAngleJitter(float value) const { WriteField<float>("buildingAngleJitter", value); }
        int streetSpokes() const { return ReadField<int>("streetSpokes"); }
        void SetStreetSpokes(int value) const { WriteField<int>("streetSpokes", value); }
        float streetWidthPx() const { return ReadField<float>("streetWidthPx"); }
        void SetStreetWidthPx(float value) const { WriteField<float>("streetWidthPx", value); }
        int streetChaikin() const { return ReadField<int>("streetChaikin"); }
        void SetStreetChaikin(int value) const { WriteField<int>("streetChaikin", value); }
        int maxCitiesPerNation() const { return ReadField<int>("maxCitiesPerNation"); }
        void SetMaxCitiesPerNation(int value) const { WriteField<int>("maxCitiesPerNation", value); }
        bool growFrozenNationCities() const { return ReadField<bool>("growFrozenNationCities"); }
        void SetGrowFrozenNationCities(bool value) const { WriteField<bool>("growFrozenNationCities", value); }
        float minCitySeparation() const { return ReadField<float>("minCitySeparation"); }
        void SetMinCitySeparation(float value) const { WriteField<float>("minCitySeparation", value); }
        int townPlacementTries() const { return ReadField<int>("townPlacementTries"); }
        void SetTownPlacementTries(int value) const { WriteField<int>("townPlacementTries", value); }
        int traitHarbourCoastDist() const { return ReadField<int>("traitHarbourCoastDist"); }
        void SetTraitHarbourCoastDist(int value) const { WriteField<int>("traitHarbourCoastDist", value); }
        int traitLandlockedCoastDist() const { return ReadField<int>("traitLandlockedCoastDist"); }
        void SetTraitLandlockedCoastDist(int value) const { WriteField<int>("traitLandlockedCoastDist", value); }
        float traitHighlandHeight() const { return ReadField<float>("traitHighlandHeight"); }
        void SetTraitHighlandHeight(float value) const { WriteField<float>("traitHighlandHeight", value); }
        float traitFrontierFrac() const { return ReadField<float>("traitFrontierFrac"); }
        void SetTraitFrontierFrac(float value) const { WriteField<float>("traitFrontierFrac", value); }
        int traitBorderlandRingTiles() const { return ReadField<int>("traitBorderlandRingTiles"); }
        void SetTraitBorderlandRingTiles(int value) const { WriteField<int>("traitBorderlandRingTiles", value); }
        float traitCrossroadsSeparationMul() const { return ReadField<float>("traitCrossroadsSeparationMul"); }
        void SetTraitCrossroadsSeparationMul(float value) const { WriteField<float>("traitCrossroadsSeparationMul", value); }
        int traitCrossroadsNeighbours() const { return ReadField<int>("traitCrossroadsNeighbours"); }
        void SetTraitCrossroadsNeighbours(int value) const { WriteField<int>("traitCrossroadsNeighbours", value); }
        float traitIsolatedSeparationMul() const { return ReadField<float>("traitIsolatedSeparationMul"); }
        void SetTraitIsolatedSeparationMul(float value) const { WriteField<float>("traitIsolatedSeparationMul", value); }
        float traitAncientYears() const { return ReadField<float>("traitAncientYears"); }
        void SetTraitAncientYears(float value) const { WriteField<float>("traitAncientYears", value); }
        float traitSackedYears() const { return ReadField<float>("traitSackedYears"); }
        void SetTraitSackedYears(float value) const { WriteField<float>("traitSackedYears", value); }
        float traitMetropolisRadius() const { return ReadField<float>("traitMetropolisRadius"); }
        void SetTraitMetropolisRadius(float value) const { WriteField<float>("traitMetropolisRadius", value); }
        float traitMetropolisGrownFrac() const { return ReadField<float>("traitMetropolisGrownFrac"); }
        void SetTraitMetropolisGrownFrac(float value) const { WriteField<float>("traitMetropolisGrownFrac", value); }
        int traitIndustrialExtraBuildings() const { return ReadField<int>("traitIndustrialExtraBuildings"); }
        void SetTraitIndustrialExtraBuildings(int value) const { WriteField<int>("traitIndustrialExtraBuildings", value); }
        float traitGarrisonTrainingPower() const { return ReadField<float>("traitGarrisonTrainingPower"); }
        void SetTraitGarrisonTrainingPower(float value) const { WriteField<float>("traitGarrisonTrainingPower", value); }
        int traitRevisitsPerTick() const { return ReadField<int>("traitRevisitsPerTick"); }
        void SetTraitRevisitsPerTick(int value) const { WriteField<int>("traitRevisitsPerTick", value); }
        float popWeightSizeShare() const { return ReadField<float>("popWeightSizeShare"); }
        void SetPopWeightSizeShare(float value) const { WriteField<float>("popWeightSizeShare", value); }
        bool autoRoads() const { return ReadField<bool>("autoRoads"); }
        void SetAutoRoads(bool value) const { WriteField<bool>("autoRoads", value); }
        float roadConnectRadius() const { return ReadField<float>("roadConnectRadius"); }
        void SetRoadConnectRadius(float value) const { WriteField<float>("roadConnectRadius", value); }
        int roadNeighbors() const { return ReadField<int>("roadNeighbors"); }
        void SetRoadNeighbors(int value) const { WriteField<int>("roadNeighbors", value); }
        float roadWidthPx() const { return ReadField<float>("roadWidthPx"); }
        void SetRoadWidthPx(float value) const { WriteField<float>("roadWidthPx", value); }
        float roadCasingPx() const { return ReadField<float>("roadCasingPx"); }
        void SetRoadCasingPx(float value) const { WriteField<float>("roadCasingPx", value); }
        float roadBuildSpeed() const { return ReadField<float>("roadBuildSpeed"); }
        void SetRoadBuildSpeed(float value) const { WriteField<float>("roadBuildSpeed", value); }
        float roadCrewTilesPerTick() const { return ReadField<float>("roadCrewTilesPerTick"); }
        void SetRoadCrewTilesPerTick(float value) const { WriteField<float>("roadCrewTilesPerTick", value); }
        int roadCitiesPerCrew() const { return ReadField<int>("roadCitiesPerCrew"); }
        void SetRoadCitiesPerCrew(int value) const { WriteField<int>("roadCitiesPerCrew", value); }
        int roadChaikin() const { return ReadField<int>("roadChaikin"); }
        void SetRoadChaikin(int value) const { WriteField<int>("roadChaikin", value); }
        float roadRdpEpsilon() const { return ReadField<float>("roadRdpEpsilon"); }
        void SetRoadRdpEpsilon(float value) const { WriteField<float>("roadRdpEpsilon", value); }
        int farmBlocksPerCapital() const { return ReadField<int>("farmBlocksPerCapital"); }
        void SetFarmBlocksPerCapital(int value) const { WriteField<int>("farmBlocksPerCapital", value); }
        int farmBlocksPerTown() const { return ReadField<int>("farmBlocksPerTown"); }
        void SetFarmBlocksPerTown(int value) const { WriteField<int>("farmBlocksPerTown", value); }
        int farmCityMinBuildings() const { return ReadField<int>("farmCityMinBuildings"); }
        void SetFarmCityMinBuildings(int value) const { WriteField<int>("farmCityMinBuildings", value); }
        float farmCityGrownFrac() const { return ReadField<float>("farmCityGrownFrac"); }
        void SetFarmCityGrownFrac(float value) const { WriteField<float>("farmCityGrownFrac", value); }
        float farmCityGap() const { return ReadField<float>("farmCityGap"); }
        void SetFarmCityGap(float value) const { WriteField<float>("farmCityGap", value); }
        float farmBeltDepth() const { return ReadField<float>("farmBeltDepth"); }
        void SetFarmBeltDepth(float value) const { WriteField<float>("farmBeltDepth", value); }
        float farmSatelliteRadius() const { return ReadField<float>("farmSatelliteRadius"); }
        void SetFarmSatelliteRadius(float value) const { WriteField<float>("farmSatelliteRadius", value); }
        float farmRoadBlockRadius() const { return ReadField<float>("farmRoadBlockRadius"); }
        void SetFarmRoadBlockRadius(float value) const { WriteField<float>("farmRoadBlockRadius", value); }
        float farmRoadGap() const { return ReadField<float>("farmRoadGap"); }
        void SetFarmRoadGap(float value) const { WriteField<float>("farmRoadGap", value); }
        float farmRoadBlockSpacingPx() const { return ReadField<float>("farmRoadBlockSpacingPx"); }
        void SetFarmRoadBlockSpacingPx(float value) const { WriteField<float>("farmRoadBlockSpacingPx", value); }
        int farmRoadMaxBlocks() const { return ReadField<int>("farmRoadMaxBlocks"); }
        void SetFarmRoadMaxBlocks(int value) const { WriteField<int>("farmRoadMaxBlocks", value); }
        float farmBlockClearance() const { return ReadField<float>("farmBlockClearance"); }
        void SetFarmBlockClearance(float value) const { WriteField<float>("farmBlockClearance", value); }
        int farmBlockAttemptsPerTick() const { return ReadField<int>("farmBlockAttemptsPerTick"); }
        void SetFarmBlockAttemptsPerTick(int value) const { WriteField<int>("farmBlockAttemptsPerTick", value); }
        int farmAttemptBudget() const { return ReadField<int>("farmAttemptBudget"); }
        void SetFarmAttemptBudget(int value) const { WriteField<int>("farmAttemptBudget", value); }
        int farmBlockSides() const { return ReadField<int>("farmBlockSides"); }
        void SetFarmBlockSides(int value) const { WriteField<int>("farmBlockSides", value); }
        float farmBlockJitter() const { return ReadField<float>("farmBlockJitter"); }
        void SetFarmBlockJitter(float value) const { WriteField<float>("farmBlockJitter", value); }
        float farmParcelArea() const { return ReadField<float>("farmParcelArea"); }
        void SetFarmParcelArea(float value) const { WriteField<float>("farmParcelArea", value); }
        float farmParcelAreaJitter() const { return ReadField<float>("farmParcelAreaJitter"); }
        void SetFarmParcelAreaJitter(float value) const { WriteField<float>("farmParcelAreaJitter", value); }
        int farmMaxSplitDepth() const { return ReadField<int>("farmMaxSplitDepth"); }
        void SetFarmMaxSplitDepth(int value) const { WriteField<int>("farmMaxSplitDepth", value); }
        float farmHedgePx() const { return ReadField<float>("farmHedgePx"); }
        void SetFarmHedgePx(float value) const { WriteField<float>("farmHedgePx", value); }
        float farmFurrowSpacingPx() const { return ReadField<float>("farmFurrowSpacingPx"); }
        void SetFarmFurrowSpacingPx(float value) const { WriteField<float>("farmFurrowSpacingPx", value); }
        float farmFurrowWidthPx() const { return ReadField<float>("farmFurrowWidthPx"); }
        void SetFarmFurrowWidthPx(float value) const { WriteField<float>("farmFurrowWidthPx", value); }
        float farmFurrowDarken() const { return ReadField<float>("farmFurrowDarken"); }
        void SetFarmFurrowDarken(float value) const { WriteField<float>("farmFurrowDarken", value); }
        float farmShadeJitter() const { return ReadField<float>("farmShadeJitter"); }
        void SetFarmShadeJitter(float value) const { WriteField<float>("farmShadeJitter", value); }
        float farmParcelStaggerSec() const { return ReadField<float>("farmParcelStaggerSec"); }
        void SetFarmParcelStaggerSec(float value) const { WriteField<float>("farmParcelStaggerSec", value); }
        void* farmHedgeColor() const { return ReadField<void*>("farmHedgeColor"); }
        void SetFarmHedgeColor(void* value) const { WriteField<void*>("farmHedgeColor", value); }
        void* farmPalette() const { return ReadField<void*>("farmPalette"); }
        void SetFarmPalette(void* value) const { WriteField<void*>("farmPalette", value); }
        int pathDownsample() const { return ReadField<int>("pathDownsample"); }
        void SetPathDownsample(int value) const { WriteField<int>("pathDownsample", value); }
        float pathNoiseWeight() const { return ReadField<float>("pathNoiseWeight"); }
        void SetPathNoiseWeight(float value) const { WriteField<float>("pathNoiseWeight", value); }
        float pathNoiseScale() const { return ReadField<float>("pathNoiseScale"); }
        void SetPathNoiseScale(float value) const { WriteField<float>("pathNoiseScale", value); }
        float pathForeignLandPenalty() const { return ReadField<float>("pathForeignLandPenalty"); }
        void SetPathForeignLandPenalty(float value) const { WriteField<float>("pathForeignLandPenalty", value); }
        int pathMaxExpansions() const { return ReadField<int>("pathMaxExpansions"); }
        void SetPathMaxExpansions(int value) const { WriteField<int>("pathMaxExpansions", value); }
        int pathsPerFrame() const { return ReadField<int>("pathsPerFrame"); }
        void SetPathsPerFrame(int value) const { WriteField<int>("pathsPerFrame", value); }
        bool roofFromNationColor() const { return ReadField<bool>("roofFromNationColor"); }
        void SetRoofFromNationColor(bool value) const { WriteField<bool>("roofFromNationColor", value); }
        float roofDarken() const { return ReadField<float>("roofDarken"); }
        void SetRoofDarken(float value) const { WriteField<float>("roofDarken", value); }
        void* roofColor() const { return ReadField<void*>("roofColor"); }
        void SetRoofColor(void* value) const { WriteField<void*>("roofColor", value); }
        void* outlineColor() const { return ReadField<void*>("outlineColor"); }
        void SetOutlineColor(void* value) const { WriteField<void*>("outlineColor", value); }
        void* roadColor() const { return ReadField<void*>("roadColor"); }
        void SetRoadColor(void* value) const { WriteField<void*>("roadColor", value); }
        void* roadCasingColor() const { return ReadField<void*>("roadCasingColor"); }
        void SetRoadCasingColor(void* value) const { WriteField<void*>("roadCasingColor", value); }
        void* streetColor() const { return ReadField<void*>("streetColor"); }
        void SetStreetColor(void* value) const { WriteField<void*>("streetColor", value); }
        float trackWidthTiles() const { return ReadField<float>("trackWidthTiles"); }
        void SetTrackWidthTiles(float value) const { WriteField<float>("trackWidthTiles", value); }
        float trackDashTiles() const { return ReadField<float>("trackDashTiles"); }
        void SetTrackDashTiles(float value) const { WriteField<float>("trackDashTiles", value); }
        float trackGapTiles() const { return ReadField<float>("trackGapTiles"); }
        void SetTrackGapTiles(float value) const { WriteField<float>("trackGapTiles", value); }
        void* trackColor() const { return ReadField<void*>("trackColor"); }
        void SetTrackColor(void* value) const { WriteField<void*>("trackColor", value); }
        float pavedWidthTiles() const { return ReadField<float>("pavedWidthTiles"); }
        void SetPavedWidthTiles(float value) const { WriteField<float>("pavedWidthTiles", value); }
        float pavedCasingTiles() const { return ReadField<float>("pavedCasingTiles"); }
        void SetPavedCasingTiles(float value) const { WriteField<float>("pavedCasingTiles", value); }
        void* pavedColor() const { return ReadField<void*>("pavedColor"); }
        void SetPavedColor(void* value) const { WriteField<void*>("pavedColor", value); }
        void* pavedCasingColor() const { return ReadField<void*>("pavedCasingColor"); }
        void SetPavedCasingColor(void* value) const { WriteField<void*>("pavedCasingColor", value); }
        float highwayWidthTiles() const { return ReadField<float>("highwayWidthTiles"); }
        void SetHighwayWidthTiles(float value) const { WriteField<float>("highwayWidthTiles", value); }
        float highwayCasingTiles() const { return ReadField<float>("highwayCasingTiles"); }
        void SetHighwayCasingTiles(float value) const { WriteField<float>("highwayCasingTiles", value); }
        float highwayCentreTiles() const { return ReadField<float>("highwayCentreTiles"); }
        void SetHighwayCentreTiles(float value) const { WriteField<float>("highwayCentreTiles", value); }
        void* highwayColor() const { return ReadField<void*>("highwayColor"); }
        void SetHighwayColor(void* value) const { WriteField<void*>("highwayColor", value); }
        void* highwayCasingColor() const { return ReadField<void*>("highwayCasingColor"); }
        void SetHighwayCasingColor(void* value) const { WriteField<void*>("highwayCasingColor", value); }
        void* highwayCentreColor() const { return ReadField<void*>("highwayCentreColor"); }
        void SetHighwayCentreColor(void* value) const { WriteField<void*>("highwayCentreColor", value); }
        float surveyWidthTiles() const { return ReadField<float>("surveyWidthTiles"); }
        void SetSurveyWidthTiles(float value) const { WriteField<float>("surveyWidthTiles", value); }
        float surveyDotTiles() const { return ReadField<float>("surveyDotTiles"); }
        void SetSurveyDotTiles(float value) const { WriteField<float>("surveyDotTiles", value); }
        float surveyGapTiles() const { return ReadField<float>("surveyGapTiles"); }
        void SetSurveyGapTiles(float value) const { WriteField<float>("surveyGapTiles", value); }
        void* surveyColor() const { return ReadField<void*>("surveyColor"); }
        void SetSurveyColor(void* value) const { WriteField<void*>("surveyColor", value); }
        void* roadHighlightColor() const { return ReadField<void*>("roadHighlightColor"); }
        void SetRoadHighlightColor(void* value) const { WriteField<void*>("roadHighlightColor", value); }
    };
}
