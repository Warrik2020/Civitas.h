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
        void capitalMaxRadius(float value) const { WriteField<float>("capitalMaxRadius", value); }
        float townMaxRadius() const { return ReadField<float>("townMaxRadius"); }
        void townMaxRadius(float value) const { WriteField<float>("townMaxRadius", value); }
        float radiusGrowthPerTick() const { return ReadField<float>("radiusGrowthPerTick"); }
        void radiusGrowthPerTick(float value) const { WriteField<float>("radiusGrowthPerTick", value); }
        int buildingAttemptsPerTick() const { return ReadField<int>("buildingAttemptsPerTick"); }
        void buildingAttemptsPerTick(int value) const { WriteField<int>("buildingAttemptsPerTick", value); }
        int capitalMaxBuildings() const { return ReadField<int>("capitalMaxBuildings"); }
        void capitalMaxBuildings(int value) const { WriteField<int>("capitalMaxBuildings", value); }
        int townMaxBuildings() const { return ReadField<int>("townMaxBuildings"); }
        void townMaxBuildings(int value) const { WriteField<int>("townMaxBuildings", value); }
        float buildingMinSize() const { return ReadField<float>("buildingMinSize"); }
        void buildingMinSize(float value) const { WriteField<float>("buildingMinSize", value); }
        float buildingMaxSize() const { return ReadField<float>("buildingMaxSize"); }
        void buildingMaxSize(float value) const { WriteField<float>("buildingMaxSize", value); }
        float buildingClearance() const { return ReadField<float>("buildingClearance"); }
        void buildingClearance(float value) const { WriteField<float>("buildingClearance", value); }
        float popInDuration() const { return ReadField<float>("popInDuration"); }
        void popInDuration(float value) const { WriteField<float>("popInDuration", value); }
        float buildingOutlinePx() const { return ReadField<float>("buildingOutlinePx"); }
        void buildingOutlinePx(float value) const { WriteField<float>("buildingOutlinePx", value); }
        float buildingFrontGap() const { return ReadField<float>("buildingFrontGap"); }
        void buildingFrontGap(float value) const { WriteField<float>("buildingFrontGap", value); }
        float buildingRowJitter() const { return ReadField<float>("buildingRowJitter"); }
        void buildingRowJitter(float value) const { WriteField<float>("buildingRowJitter", value); }
        float buildingAngleJitter() const { return ReadField<float>("buildingAngleJitter"); }
        void buildingAngleJitter(float value) const { WriteField<float>("buildingAngleJitter", value); }
        int streetSpokes() const { return ReadField<int>("streetSpokes"); }
        void streetSpokes(int value) const { WriteField<int>("streetSpokes", value); }
        float streetWidthPx() const { return ReadField<float>("streetWidthPx"); }
        void streetWidthPx(float value) const { WriteField<float>("streetWidthPx", value); }
        int streetChaikin() const { return ReadField<int>("streetChaikin"); }
        void streetChaikin(int value) const { WriteField<int>("streetChaikin", value); }
        int maxCitiesPerNation() const { return ReadField<int>("maxCitiesPerNation"); }
        void maxCitiesPerNation(int value) const { WriteField<int>("maxCitiesPerNation", value); }
        bool growFrozenNationCities() const { return ReadField<bool>("growFrozenNationCities"); }
        void growFrozenNationCities(bool value) const { WriteField<bool>("growFrozenNationCities", value); }
        float minCitySeparation() const { return ReadField<float>("minCitySeparation"); }
        void minCitySeparation(float value) const { WriteField<float>("minCitySeparation", value); }
        int townPlacementTries() const { return ReadField<int>("townPlacementTries"); }
        void townPlacementTries(int value) const { WriteField<int>("townPlacementTries", value); }
        int traitHarbourCoastDist() const { return ReadField<int>("traitHarbourCoastDist"); }
        void traitHarbourCoastDist(int value) const { WriteField<int>("traitHarbourCoastDist", value); }
        int traitLandlockedCoastDist() const { return ReadField<int>("traitLandlockedCoastDist"); }
        void traitLandlockedCoastDist(int value) const { WriteField<int>("traitLandlockedCoastDist", value); }
        float traitHighlandHeight() const { return ReadField<float>("traitHighlandHeight"); }
        void traitHighlandHeight(float value) const { WriteField<float>("traitHighlandHeight", value); }
        float traitFrontierFrac() const { return ReadField<float>("traitFrontierFrac"); }
        void traitFrontierFrac(float value) const { WriteField<float>("traitFrontierFrac", value); }
        int traitBorderlandRingTiles() const { return ReadField<int>("traitBorderlandRingTiles"); }
        void traitBorderlandRingTiles(int value) const { WriteField<int>("traitBorderlandRingTiles", value); }
        float traitCrossroadsSeparationMul() const { return ReadField<float>("traitCrossroadsSeparationMul"); }
        void traitCrossroadsSeparationMul(float value) const { WriteField<float>("traitCrossroadsSeparationMul", value); }
        int traitCrossroadsNeighbours() const { return ReadField<int>("traitCrossroadsNeighbours"); }
        void traitCrossroadsNeighbours(int value) const { WriteField<int>("traitCrossroadsNeighbours", value); }
        float traitIsolatedSeparationMul() const { return ReadField<float>("traitIsolatedSeparationMul"); }
        void traitIsolatedSeparationMul(float value) const { WriteField<float>("traitIsolatedSeparationMul", value); }
        float traitAncientYears() const { return ReadField<float>("traitAncientYears"); }
        void traitAncientYears(float value) const { WriteField<float>("traitAncientYears", value); }
        float traitSackedYears() const { return ReadField<float>("traitSackedYears"); }
        void traitSackedYears(float value) const { WriteField<float>("traitSackedYears", value); }
        float traitMetropolisRadius() const { return ReadField<float>("traitMetropolisRadius"); }
        void traitMetropolisRadius(float value) const { WriteField<float>("traitMetropolisRadius", value); }
        float traitMetropolisGrownFrac() const { return ReadField<float>("traitMetropolisGrownFrac"); }
        void traitMetropolisGrownFrac(float value) const { WriteField<float>("traitMetropolisGrownFrac", value); }
        int traitIndustrialExtraBuildings() const { return ReadField<int>("traitIndustrialExtraBuildings"); }
        void traitIndustrialExtraBuildings(int value) const { WriteField<int>("traitIndustrialExtraBuildings", value); }
        float traitGarrisonTrainingPower() const { return ReadField<float>("traitGarrisonTrainingPower"); }
        void traitGarrisonTrainingPower(float value) const { WriteField<float>("traitGarrisonTrainingPower", value); }
        int traitRevisitsPerTick() const { return ReadField<int>("traitRevisitsPerTick"); }
        void traitRevisitsPerTick(int value) const { WriteField<int>("traitRevisitsPerTick", value); }
        float popWeightSizeShare() const { return ReadField<float>("popWeightSizeShare"); }
        void popWeightSizeShare(float value) const { WriteField<float>("popWeightSizeShare", value); }
        bool autoRoads() const { return ReadField<bool>("autoRoads"); }
        void autoRoads(bool value) const { WriteField<bool>("autoRoads", value); }
        float roadConnectRadius() const { return ReadField<float>("roadConnectRadius"); }
        void roadConnectRadius(float value) const { WriteField<float>("roadConnectRadius", value); }
        int roadNeighbors() const { return ReadField<int>("roadNeighbors"); }
        void roadNeighbors(int value) const { WriteField<int>("roadNeighbors", value); }
        float roadWidthPx() const { return ReadField<float>("roadWidthPx"); }
        void roadWidthPx(float value) const { WriteField<float>("roadWidthPx", value); }
        float roadCasingPx() const { return ReadField<float>("roadCasingPx"); }
        void roadCasingPx(float value) const { WriteField<float>("roadCasingPx", value); }
        float roadBuildSpeed() const { return ReadField<float>("roadBuildSpeed"); }
        void roadBuildSpeed(float value) const { WriteField<float>("roadBuildSpeed", value); }
        float roadCrewTilesPerTick() const { return ReadField<float>("roadCrewTilesPerTick"); }
        void roadCrewTilesPerTick(float value) const { WriteField<float>("roadCrewTilesPerTick", value); }
        int roadCitiesPerCrew() const { return ReadField<int>("roadCitiesPerCrew"); }
        void roadCitiesPerCrew(int value) const { WriteField<int>("roadCitiesPerCrew", value); }
        int roadChaikin() const { return ReadField<int>("roadChaikin"); }
        void roadChaikin(int value) const { WriteField<int>("roadChaikin", value); }
        float roadRdpEpsilon() const { return ReadField<float>("roadRdpEpsilon"); }
        void roadRdpEpsilon(float value) const { WriteField<float>("roadRdpEpsilon", value); }
        int farmBlocksPerCapital() const { return ReadField<int>("farmBlocksPerCapital"); }
        void farmBlocksPerCapital(int value) const { WriteField<int>("farmBlocksPerCapital", value); }
        int farmBlocksPerTown() const { return ReadField<int>("farmBlocksPerTown"); }
        void farmBlocksPerTown(int value) const { WriteField<int>("farmBlocksPerTown", value); }
        int farmCityMinBuildings() const { return ReadField<int>("farmCityMinBuildings"); }
        void farmCityMinBuildings(int value) const { WriteField<int>("farmCityMinBuildings", value); }
        float farmCityGrownFrac() const { return ReadField<float>("farmCityGrownFrac"); }
        void farmCityGrownFrac(float value) const { WriteField<float>("farmCityGrownFrac", value); }
        float farmCityGap() const { return ReadField<float>("farmCityGap"); }
        void farmCityGap(float value) const { WriteField<float>("farmCityGap", value); }
        float farmBeltDepth() const { return ReadField<float>("farmBeltDepth"); }
        void farmBeltDepth(float value) const { WriteField<float>("farmBeltDepth", value); }
        float farmSatelliteRadius() const { return ReadField<float>("farmSatelliteRadius"); }
        void farmSatelliteRadius(float value) const { WriteField<float>("farmSatelliteRadius", value); }
        float farmRoadBlockRadius() const { return ReadField<float>("farmRoadBlockRadius"); }
        void farmRoadBlockRadius(float value) const { WriteField<float>("farmRoadBlockRadius", value); }
        float farmRoadGap() const { return ReadField<float>("farmRoadGap"); }
        void farmRoadGap(float value) const { WriteField<float>("farmRoadGap", value); }
        float farmRoadBlockSpacingPx() const { return ReadField<float>("farmRoadBlockSpacingPx"); }
        void farmRoadBlockSpacingPx(float value) const { WriteField<float>("farmRoadBlockSpacingPx", value); }
        int farmRoadMaxBlocks() const { return ReadField<int>("farmRoadMaxBlocks"); }
        void farmRoadMaxBlocks(int value) const { WriteField<int>("farmRoadMaxBlocks", value); }
        float farmBlockClearance() const { return ReadField<float>("farmBlockClearance"); }
        void farmBlockClearance(float value) const { WriteField<float>("farmBlockClearance", value); }
        int farmBlockAttemptsPerTick() const { return ReadField<int>("farmBlockAttemptsPerTick"); }
        void farmBlockAttemptsPerTick(int value) const { WriteField<int>("farmBlockAttemptsPerTick", value); }
        int farmAttemptBudget() const { return ReadField<int>("farmAttemptBudget"); }
        void farmAttemptBudget(int value) const { WriteField<int>("farmAttemptBudget", value); }
        int farmBlockSides() const { return ReadField<int>("farmBlockSides"); }
        void farmBlockSides(int value) const { WriteField<int>("farmBlockSides", value); }
        float farmBlockJitter() const { return ReadField<float>("farmBlockJitter"); }
        void farmBlockJitter(float value) const { WriteField<float>("farmBlockJitter", value); }
        float farmParcelArea() const { return ReadField<float>("farmParcelArea"); }
        void farmParcelArea(float value) const { WriteField<float>("farmParcelArea", value); }
        float farmParcelAreaJitter() const { return ReadField<float>("farmParcelAreaJitter"); }
        void farmParcelAreaJitter(float value) const { WriteField<float>("farmParcelAreaJitter", value); }
        int farmMaxSplitDepth() const { return ReadField<int>("farmMaxSplitDepth"); }
        void farmMaxSplitDepth(int value) const { WriteField<int>("farmMaxSplitDepth", value); }
        float farmHedgePx() const { return ReadField<float>("farmHedgePx"); }
        void farmHedgePx(float value) const { WriteField<float>("farmHedgePx", value); }
        float farmFurrowSpacingPx() const { return ReadField<float>("farmFurrowSpacingPx"); }
        void farmFurrowSpacingPx(float value) const { WriteField<float>("farmFurrowSpacingPx", value); }
        float farmFurrowWidthPx() const { return ReadField<float>("farmFurrowWidthPx"); }
        void farmFurrowWidthPx(float value) const { WriteField<float>("farmFurrowWidthPx", value); }
        float farmFurrowDarken() const { return ReadField<float>("farmFurrowDarken"); }
        void farmFurrowDarken(float value) const { WriteField<float>("farmFurrowDarken", value); }
        float farmShadeJitter() const { return ReadField<float>("farmShadeJitter"); }
        void farmShadeJitter(float value) const { WriteField<float>("farmShadeJitter", value); }
        float farmParcelStaggerSec() const { return ReadField<float>("farmParcelStaggerSec"); }
        void farmParcelStaggerSec(float value) const { WriteField<float>("farmParcelStaggerSec", value); }
        void* farmHedgeColor() const { return ReadField<void*>("farmHedgeColor"); }
        void farmHedgeColor(void* value) const { WriteField<void*>("farmHedgeColor", value); }
        void* farmPalette() const { return ReadField<void*>("farmPalette"); }
        void farmPalette(void* value) const { WriteField<void*>("farmPalette", value); }
        int pathDownsample() const { return ReadField<int>("pathDownsample"); }
        void pathDownsample(int value) const { WriteField<int>("pathDownsample", value); }
        float pathNoiseWeight() const { return ReadField<float>("pathNoiseWeight"); }
        void pathNoiseWeight(float value) const { WriteField<float>("pathNoiseWeight", value); }
        float pathNoiseScale() const { return ReadField<float>("pathNoiseScale"); }
        void pathNoiseScale(float value) const { WriteField<float>("pathNoiseScale", value); }
        float pathForeignLandPenalty() const { return ReadField<float>("pathForeignLandPenalty"); }
        void pathForeignLandPenalty(float value) const { WriteField<float>("pathForeignLandPenalty", value); }
        int pathMaxExpansions() const { return ReadField<int>("pathMaxExpansions"); }
        void pathMaxExpansions(int value) const { WriteField<int>("pathMaxExpansions", value); }
        int pathsPerFrame() const { return ReadField<int>("pathsPerFrame"); }
        void pathsPerFrame(int value) const { WriteField<int>("pathsPerFrame", value); }
        bool roofFromNationColor() const { return ReadField<bool>("roofFromNationColor"); }
        void roofFromNationColor(bool value) const { WriteField<bool>("roofFromNationColor", value); }
        float roofDarken() const { return ReadField<float>("roofDarken"); }
        void roofDarken(float value) const { WriteField<float>("roofDarken", value); }
        void* roofColor() const { return ReadField<void*>("roofColor"); }
        void roofColor(void* value) const { WriteField<void*>("roofColor", value); }
        void* outlineColor() const { return ReadField<void*>("outlineColor"); }
        void outlineColor(void* value) const { WriteField<void*>("outlineColor", value); }
        void* roadColor() const { return ReadField<void*>("roadColor"); }
        void roadColor(void* value) const { WriteField<void*>("roadColor", value); }
        void* roadCasingColor() const { return ReadField<void*>("roadCasingColor"); }
        void roadCasingColor(void* value) const { WriteField<void*>("roadCasingColor", value); }
        void* streetColor() const { return ReadField<void*>("streetColor"); }
        void streetColor(void* value) const { WriteField<void*>("streetColor", value); }
        float trackWidthTiles() const { return ReadField<float>("trackWidthTiles"); }
        void trackWidthTiles(float value) const { WriteField<float>("trackWidthTiles", value); }
        float trackDashTiles() const { return ReadField<float>("trackDashTiles"); }
        void trackDashTiles(float value) const { WriteField<float>("trackDashTiles", value); }
        float trackGapTiles() const { return ReadField<float>("trackGapTiles"); }
        void trackGapTiles(float value) const { WriteField<float>("trackGapTiles", value); }
        void* trackColor() const { return ReadField<void*>("trackColor"); }
        void trackColor(void* value) const { WriteField<void*>("trackColor", value); }
        float pavedWidthTiles() const { return ReadField<float>("pavedWidthTiles"); }
        void pavedWidthTiles(float value) const { WriteField<float>("pavedWidthTiles", value); }
        float pavedCasingTiles() const { return ReadField<float>("pavedCasingTiles"); }
        void pavedCasingTiles(float value) const { WriteField<float>("pavedCasingTiles", value); }
        void* pavedColor() const { return ReadField<void*>("pavedColor"); }
        void pavedColor(void* value) const { WriteField<void*>("pavedColor", value); }
        void* pavedCasingColor() const { return ReadField<void*>("pavedCasingColor"); }
        void pavedCasingColor(void* value) const { WriteField<void*>("pavedCasingColor", value); }
        float highwayWidthTiles() const { return ReadField<float>("highwayWidthTiles"); }
        void highwayWidthTiles(float value) const { WriteField<float>("highwayWidthTiles", value); }
        float highwayCasingTiles() const { return ReadField<float>("highwayCasingTiles"); }
        void highwayCasingTiles(float value) const { WriteField<float>("highwayCasingTiles", value); }
        float highwayCentreTiles() const { return ReadField<float>("highwayCentreTiles"); }
        void highwayCentreTiles(float value) const { WriteField<float>("highwayCentreTiles", value); }
        void* highwayColor() const { return ReadField<void*>("highwayColor"); }
        void highwayColor(void* value) const { WriteField<void*>("highwayColor", value); }
        void* highwayCasingColor() const { return ReadField<void*>("highwayCasingColor"); }
        void highwayCasingColor(void* value) const { WriteField<void*>("highwayCasingColor", value); }
        void* highwayCentreColor() const { return ReadField<void*>("highwayCentreColor"); }
        void highwayCentreColor(void* value) const { WriteField<void*>("highwayCentreColor", value); }
        float surveyWidthTiles() const { return ReadField<float>("surveyWidthTiles"); }
        void surveyWidthTiles(float value) const { WriteField<float>("surveyWidthTiles", value); }
        float surveyDotTiles() const { return ReadField<float>("surveyDotTiles"); }
        void surveyDotTiles(float value) const { WriteField<float>("surveyDotTiles", value); }
        float surveyGapTiles() const { return ReadField<float>("surveyGapTiles"); }
        void surveyGapTiles(float value) const { WriteField<float>("surveyGapTiles", value); }
        void* surveyColor() const { return ReadField<void*>("surveyColor"); }
        void surveyColor(void* value) const { WriteField<void*>("surveyColor", value); }
        void* roadHighlightColor() const { return ReadField<void*>("roadHighlightColor"); }
        void roadHighlightColor(void* value) const { WriteField<void*>("roadHighlightColor", value); }
    };
}
