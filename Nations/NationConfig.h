#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class NationConfig : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationConfig(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "NationConfig") {}
    public:
        void* AdjustFill(void* c) const { void* args[] = { c }; return Call("AdjustFill", args, 1); }
        int FillVersion() const { return CallValue<int>("FillVersion", nullptr, 0); }
        float iso() const { return ReadField<float>("iso"); }
        void SetIso(float value) const { WriteField<float>("iso", value); }
        float growthStep() const { return ReadField<float>("growthStep"); }
        void SetGrowthStep(float value) const { WriteField<float>("growthStep", value); }
        float warAdvanceMaxStepFraction() const { return ReadField<float>("warAdvanceMaxStepFraction"); }
        void SetWarAdvanceMaxStepFraction(float value) const { WriteField<float>("warAdvanceMaxStepFraction", value); }
        float baseFactor() const { return ReadField<float>("baseFactor"); }
        void SetBaseFactor(float value) const { WriteField<float>("baseFactor", value); }
        float lobeBoost() const { return ReadField<float>("lobeBoost"); }
        void SetLobeBoost(float value) const { WriteField<float>("lobeBoost", value); }
        int minLobes() const { return ReadField<int>("minLobes"); }
        void SetMinLobes(int value) const { WriteField<int>("minLobes", value); }
        int initialLobes() const { return ReadField<int>("initialLobes"); }
        void SetInitialLobes(int value) const { WriteField<int>("initialLobes", value); }
        float spawnChance() const { return ReadField<float>("spawnChance"); }
        void SetSpawnChance(float value) const { WriteField<float>("spawnChance", value); }
        float lobeDriftRate() const { return ReadField<float>("lobeDriftRate"); }
        void SetLobeDriftRate(float value) const { WriteField<float>("lobeDriftRate", value); }
        float lobeTopupChance() const { return ReadField<float>("lobeTopupChance"); }
        void SetLobeTopupChance(float value) const { WriteField<float>("lobeTopupChance", value); }
        int lobeLifetimeMin() const { return ReadField<int>("lobeLifetimeMin"); }
        void SetLobeLifetimeMin(int value) const { WriteField<int>("lobeLifetimeMin", value); }
        int lobeLifetimeMax() const { return ReadField<int>("lobeLifetimeMax"); }
        void SetLobeLifetimeMax(int value) const { WriteField<int>("lobeLifetimeMax", value); }
        float lobeSpreadMin() const { return ReadField<float>("lobeSpreadMin"); }
        void SetLobeSpreadMin(float value) const { WriteField<float>("lobeSpreadMin", value); }
        float lobeSpreadMax() const { return ReadField<float>("lobeSpreadMax"); }
        void SetLobeSpreadMax(float value) const { WriteField<float>("lobeSpreadMax", value); }
        float coastalDriftStrength() const { return ReadField<float>("coastalDriftStrength"); }
        void SetCoastalDriftStrength(float value) const { WriteField<float>("coastalDriftStrength", value); }
        int coastSearchRadius() const { return ReadField<int>("coastSearchRadius"); }
        void SetCoastSearchRadius(int value) const { WriteField<int>("coastSearchRadius", value); }
        float coastalBiasMin() const { return ReadField<float>("coastalBiasMin"); }
        void SetCoastalBiasMin(float value) const { WriteField<float>("coastalBiasMin", value); }
        float coastalBiasMax() const { return ReadField<float>("coastalBiasMax"); }
        void SetCoastalBiasMax(float value) const { WriteField<float>("coastalBiasMax", value); }
        float coastProximityBonus() const { return ReadField<float>("coastProximityBonus"); }
        void SetCoastProximityBonus(float value) const { WriteField<float>("coastProximityBonus", value); }
        int coastProximityRange() const { return ReadField<int>("coastProximityRange"); }
        void SetCoastProximityRange(int value) const { WriteField<int>("coastProximityRange", value); }
        float expansionRateMin() const { return ReadField<float>("expansionRateMin"); }
        void SetExpansionRateMin(float value) const { WriteField<float>("expansionRateMin", value); }
        float expansionRateMax() const { return ReadField<float>("expansionRateMax"); }
        void SetExpansionRateMax(float value) const { WriteField<float>("expansionRateMax", value); }
        void* nameForms() const { return ReadField<void*>("nameForms"); }
        void SetNameForms(void* value) const { WriteField<void*>("nameForms", value); }
        void* unionNameForms() const { return ReadField<void*>("unionNameForms"); }
        void SetUnionNameForms(void* value) const { WriteField<void*>("unionNameForms", value); }
        float unionCrownScale() const { return ReadField<float>("unionCrownScale"); }
        void SetUnionCrownScale(float value) const { WriteField<float>("unionCrownScale", value); }
        float unionCrownOffsetTiles() const { return ReadField<float>("unionCrownOffsetTiles"); }
        void SetUnionCrownOffsetTiles(float value) const { WriteField<float>("unionCrownOffsetTiles", value); }
        int minCapitalSeparation() const { return ReadField<int>("minCapitalSeparation"); }
        void SetMinCapitalSeparation(int value) const { WriteField<int>("minCapitalSeparation", value); }
        int minStartingLand() const { return ReadField<int>("minStartingLand"); }
        void SetMinStartingLand(int value) const { WriteField<int>("minStartingLand", value); }
        int headingSearchRadius() const { return ReadField<int>("headingSearchRadius"); }
        void SetHeadingSearchRadius(int value) const { WriteField<int>("headingSearchRadius", value); }
        float headingCoastOffset() const { return ReadField<float>("headingCoastOffset"); }
        void SetHeadingCoastOffset(float value) const { WriteField<float>("headingCoastOffset", value); }
        float territoryAlpha() const { return ReadField<float>("territoryAlpha"); }
        void SetTerritoryAlpha(float value) const { WriteField<float>("territoryAlpha", value); }
        float identityFillAlpha() const { return ReadField<float>("identityFillAlpha"); }
        void SetIdentityFillAlpha(float value) const { WriteField<float>("identityFillAlpha", value); }
        bool fillVariation() const { return ReadField<bool>("fillVariation"); }
        void SetFillVariation(bool value) const { WriteField<bool>("fillVariation", value); }
        float fillVariationStrength() const { return ReadField<float>("fillVariationStrength"); }
        void SetFillVariationStrength(float value) const { WriteField<float>("fillVariationStrength", value); }
        float fillVariationOverride() const { return ReadField<float>("fillVariationOverride"); }
        void SetFillVariationOverride(float value) const { WriteField<float>("fillVariationOverride", value); }
        float fillVariationScaleTiles() const { return ReadField<float>("fillVariationScaleTiles"); }
        void SetFillVariationScaleTiles(float value) const { WriteField<float>("fillVariationScaleTiles", value); }
        float homeRuleTint() const { return ReadField<float>("homeRuleTint"); }
        void SetHomeRuleTint(float value) const { WriteField<float>("homeRuleTint", value); }
        float fillSaturation() const { return ReadField<float>("fillSaturation"); }
        void SetFillSaturation(float value) const { WriteField<float>("fillSaturation", value); }
        float fillBrightness() const { return ReadField<float>("fillBrightness"); }
        void SetFillBrightness(float value) const { WriteField<float>("fillBrightness", value); }
        float fillLumaHarmonize() const { return ReadField<float>("fillLumaHarmonize"); }
        void SetFillLumaHarmonize(float value) const { WriteField<float>("fillLumaHarmonize", value); }
        void* nationEdge() const { return ReadField<void*>("nationEdge"); }
        void SetNationEdge(void* value) const { WriteField<void*>("nationEdge", value); }
        void* nationBorder() const { return ReadField<void*>("nationBorder"); }
        void SetNationBorder(void* value) const { WriteField<void*>("nationBorder", value); }
        void* vassalRibbon() const { return ReadField<void*>("vassalRibbon"); }
        void SetVassalRibbon(void* value) const { WriteField<void*>("vassalRibbon", value); }
        float borderFadeStartFraction() const { return ReadField<float>("borderFadeStartFraction"); }
        void SetBorderFadeStartFraction(float value) const { WriteField<float>("borderFadeStartFraction", value); }
        float borderFadeEndFraction() const { return ReadField<float>("borderFadeEndFraction"); }
        void SetBorderFadeEndFraction(float value) const { WriteField<float>("borderFadeEndFraction", value); }
        void* stateBorder() const { return ReadField<void*>("stateBorder"); }
        void SetStateBorder(void* value) const { WriteField<void*>("stateBorder", value); }
        void* historicBorder() const { return ReadField<void*>("historicBorder"); }
        void SetHistoricBorder(void* value) const { WriteField<void*>("historicBorder", value); }
        void* identityBorder() const { return ReadField<void*>("identityBorder"); }
        void SetIdentityBorder(void* value) const { WriteField<void*>("identityBorder", value); }
        void* identitySubBorder() const { return ReadField<void*>("identitySubBorder"); }
        void SetIdentitySubBorder(void* value) const { WriteField<void*>("identitySubBorder", value); }
        void* identityEdge() const { return ReadField<void*>("identityEdge"); }
        void SetIdentityEdge(void* value) const { WriteField<void*>("identityEdge", value); }
        void* extentBorder() const { return ReadField<void*>("extentBorder"); }
        void SetExtentBorder(void* value) const { WriteField<void*>("extentBorder", value); }
        void* states() const { return ReadField<void*>("states"); }
        void SetStates(void* value) const { WriteField<void*>("states", value); }
        float capitalStarRadiusPx() const { return ReadField<float>("capitalStarRadiusPx"); }
        void SetCapitalStarRadiusPx(float value) const { WriteField<float>("capitalStarRadiusPx", value); }
        float capitalStarFillFraction() const { return ReadField<float>("capitalStarFillFraction"); }
        void SetCapitalStarFillFraction(float value) const { WriteField<float>("capitalStarFillFraction", value); }
        float capitalStarPointRatio() const { return ReadField<float>("capitalStarPointRatio"); }
        void SetCapitalStarPointRatio(float value) const { WriteField<float>("capitalStarPointRatio", value); }
        float capitalStarOffsetTiles() const { return ReadField<float>("capitalStarOffsetTiles"); }
        void SetCapitalStarOffsetTiles(float value) const { WriteField<float>("capitalStarOffsetTiles", value); }
        void* capitalStarOutlineColor() const { return ReadField<void*>("capitalStarOutlineColor"); }
        void SetCapitalStarOutlineColor(void* value) const { WriteField<void*>("capitalStarOutlineColor", value); }
        float baseTicksPerSecond() const { return ReadField<float>("baseTicksPerSecond"); }
        void SetBaseTicksPerSecond(float value) const { WriteField<float>("baseTicksPerSecond", value); }
        int maxTicksPerFrame() const { return ReadField<int>("maxTicksPerFrame"); }
        void SetMaxTicksPerFrame(int value) const { WriteField<int>("maxTicksPerFrame", value); }
        float tickBudgetMs() const { return ReadField<float>("tickBudgetMs"); }
        void SetTickBudgetMs(float value) const { WriteField<float>("tickBudgetMs", value); }
        float vectorTraceBudgetMs() const { return ReadField<float>("vectorTraceBudgetMs"); }
        void SetVectorTraceBudgetMs(float value) const { WriteField<float>("vectorTraceBudgetMs", value); }
        float vectorTraceBudgetHardMs() const { return ReadField<float>("vectorTraceBudgetHardMs"); }
        void SetVectorTraceBudgetHardMs(float value) const { WriteField<float>("vectorTraceBudgetHardMs", value); }
        float vectorTraceStaleSecs() const { return ReadField<float>("vectorTraceStaleSecs"); }
        void SetVectorTraceStaleSecs(float value) const { WriteField<float>("vectorTraceStaleSecs", value); }
        bool vectorTraceViewCull() const { return ReadField<bool>("vectorTraceViewCull"); }
        void SetVectorTraceViewCull(bool value) const { WriteField<bool>("vectorTraceViewCull", value); }
        float vectorRecombineBudgetMs() const { return ReadField<float>("vectorRecombineBudgetMs"); }
        void SetVectorRecombineBudgetMs(float value) const { WriteField<float>("vectorRecombineBudgetMs", value); }
        bool tileLod() const { return ReadField<bool>("tileLod"); }
        void SetTileLod(bool value) const { WriteField<bool>("tileLod", value); }
        bool tileLodGrowSkip() const { return ReadField<bool>("tileLodGrowSkip"); }
        void SetTileLodGrowSkip(bool value) const { WriteField<bool>("tileLodGrowSkip", value); }
        bool tileLodTraceSkip() const { return ReadField<bool>("tileLodTraceSkip"); }
        void SetTileLodTraceSkip(bool value) const { WriteField<bool>("tileLodTraceSkip", value); }
        bool tileLodStateSweepSkip() const { return ReadField<bool>("tileLodStateSweepSkip"); }
        void SetTileLodStateSweepSkip(bool value) const { WriteField<bool>("tileLodStateSweepSkip", value); }
        bool tileLodViewScheduling() const { return ReadField<bool>("tileLodViewScheduling"); }
        void SetTileLodViewScheduling(bool value) const { WriteField<bool>("tileLodViewScheduling", value); }
        bool tileLodRepaintSkip() const { return ReadField<bool>("tileLodRepaintSkip"); }
        void SetTileLodRepaintSkip(bool value) const { WriteField<bool>("tileLodRepaintSkip", value); }
        bool tileLodMajorityMemo() const { return ReadField<bool>("tileLodMajorityMemo"); }
        void SetTileLodMajorityMemo(bool value) const { WriteField<bool>("tileLodMajorityMemo", value); }
        bool tileLodPyramid() const { return ReadField<bool>("tileLodPyramid"); }
        void SetTileLodPyramid(bool value) const { WriteField<bool>("tileLodPyramid", value); }
        bool tileLodPoliticalPyramid() const { return ReadField<bool>("tileLodPoliticalPyramid"); }
        void SetTileLodPoliticalPyramid(bool value) const { WriteField<bool>("tileLodPoliticalPyramid", value); }
        bool tileLodContestCachePaged() const { return ReadField<bool>("tileLodContestCachePaged"); }
        void SetTileLodContestCachePaged(bool value) const { WriteField<bool>("tileLodContestCachePaged", value); }
        bool tileLodExtentPaged() const { return ReadField<bool>("tileLodExtentPaged"); }
        void SetTileLodExtentPaged(bool value) const { WriteField<bool>("tileLodExtentPaged", value); }
        bool tileLodChunkTablesSparse() const { return ReadField<bool>("tileLodChunkTablesSparse"); }
        void SetTileLodChunkTablesSparse(bool value) const { WriteField<bool>("tileLodChunkTablesSparse", value); }
        bool tileLodOverlayPixelsPaged() const { return ReadField<bool>("tileLodOverlayPixelsPaged"); }
        void SetTileLodOverlayPixelsPaged(bool value) const { WriteField<bool>("tileLodOverlayPixelsPaged", value); }
        bool tileLodDeJureDense() const { return ReadField<bool>("tileLodDeJureDense"); }
        void SetTileLodDeJureDense(bool value) const { WriteField<bool>("tileLodDeJureDense", value); }
        bool tileLodAuditNodes() const { return ReadField<bool>("tileLodAuditNodes"); }
        void SetTileLodAuditNodes(bool value) const { WriteField<bool>("tileLodAuditNodes", value); }
        bool tileLodStateTraceNodes() const { return ReadField<bool>("tileLodStateTraceNodes"); }
        void SetTileLodStateTraceNodes(bool value) const { WriteField<bool>("tileLodStateTraceNodes", value); }
        bool tileLodPoliticsRuns() const { return ReadField<bool>("tileLodPoliticsRuns"); }
        void SetTileLodPoliticsRuns(bool value) const { WriteField<bool>("tileLodPoliticsRuns", value); }
        bool tileLodIdentityRescanSkip() const { return ReadField<bool>("tileLodIdentityRescanSkip"); }
        void SetTileLodIdentityRescanSkip(bool value) const { WriteField<bool>("tileLodIdentityRescanSkip", value); }
        bool tileLodIdentityIntern() const { return ReadField<bool>("tileLodIdentityIntern"); }
        void SetTileLodIdentityIntern(bool value) const { WriteField<bool>("tileLodIdentityIntern", value); }
        bool tileLodIdentityFrontierRelease() const { return ReadField<bool>("tileLodIdentityFrontierRelease"); }
        void SetTileLodIdentityFrontierRelease(bool value) const { WriteField<bool>("tileLodIdentityFrontierRelease", value); }
        bool tileLodKernelSlice() const { return ReadField<bool>("tileLodKernelSlice"); }
        void SetTileLodKernelSlice(bool value) const { WriteField<bool>("tileLodKernelSlice", value); }
        bool tileLodControlQuietSkip() const { return ReadField<bool>("tileLodControlQuietSkip"); }
        void SetTileLodControlQuietSkip(bool value) const { WriteField<bool>("tileLodControlQuietSkip", value); }
        bool tileLodDeJureAsync() const { return ReadField<bool>("tileLodDeJureAsync"); }
        void SetTileLodDeJureAsync(bool value) const { WriteField<bool>("tileLodDeJureAsync", value); }
        bool tileLodFoundingTally() const { return ReadField<bool>("tileLodFoundingTally"); }
        void SetTileLodFoundingTally(bool value) const { WriteField<bool>("tileLodFoundingTally", value); }
        bool tileLodPoliticsPeopleMemo() const { return ReadField<bool>("tileLodPoliticsPeopleMemo"); }
        void SetTileLodPoliticsPeopleMemo(bool value) const { WriteField<bool>("tileLodPoliticsPeopleMemo", value); }
        bool tileLodRevoltRunMemo() const { return ReadField<bool>("tileLodRevoltRunMemo"); }
        void SetTileLodRevoltRunMemo(bool value) const { WriteField<bool>("tileLodRevoltRunMemo", value); }
        bool tileLodLaneMemo() const { return ReadField<bool>("tileLodLaneMemo"); }
        void SetTileLodLaneMemo(bool value) const { WriteField<bool>("tileLodLaneMemo", value); }
        bool tileLodRenderOffTickFrames() const { return ReadField<bool>("tileLodRenderOffTickFrames"); }
        void SetTileLodRenderOffTickFrames(bool value) const { WriteField<bool>("tileLodRenderOffTickFrames", value); }
        bool tileLodStagedTick() const { return ReadField<bool>("tileLodStagedTick"); }
        void SetTileLodStagedTick(bool value) const { WriteField<bool>("tileLodStagedTick", value); }
        float tileLodStagedBudgetMinMs() const { return ReadField<float>("tileLodStagedBudgetMinMs"); }
        void SetTileLodStagedBudgetMinMs(float value) const { WriteField<float>("tileLodStagedBudgetMinMs", value); }
        float tileLodStagedBudgetMaxMs() const { return ReadField<float>("tileLodStagedBudgetMaxMs"); }
        void SetTileLodStagedBudgetMaxMs(float value) const { WriteField<float>("tileLodStagedBudgetMaxMs", value); }
        float tileLodStagedLandBy() const { return ReadField<float>("tileLodStagedLandBy"); }
        void SetTileLodStagedLandBy(float value) const { WriteField<float>("tileLodStagedLandBy", value); }
        float tileLodStagedTopSpeedFrameMs() const { return ReadField<float>("tileLodStagedTopSpeedFrameMs"); }
        void SetTileLodStagedTopSpeedFrameMs(float value) const { WriteField<float>("tileLodStagedTopSpeedFrameMs", value); }
        bool tileLodStagedAsyncFlood() const { return ReadField<bool>("tileLodStagedAsyncFlood"); }
        void SetTileLodStagedAsyncFlood(bool value) const { WriteField<bool>("tileLodStagedAsyncFlood", value); }
        bool tileLodSeedCandidates() const { return ReadField<bool>("tileLodSeedCandidates"); }
        void SetTileLodSeedCandidates(bool value) const { WriteField<bool>("tileLodSeedCandidates", value); }
        bool tileLodStagedGuard() const { return ReadField<bool>("tileLodStagedGuard"); }
        void SetTileLodStagedGuard(bool value) const { WriteField<bool>("tileLodStagedGuard", value); }
        bool tileLodValidate() const { return ReadField<bool>("tileLodValidate"); }
        void SetTileLodValidate(bool value) const { WriteField<bool>("tileLodValidate", value); }
        bool tileLodShadow() const { return ReadField<bool>("tileLodShadow"); }
        void SetTileLodShadow(bool value) const { WriteField<bool>("tileLodShadow", value); }
        bool tileLodSettleNarrow() const { return ReadField<bool>("tileLodSettleNarrow"); }
        void SetTileLodSettleNarrow(bool value) const { WriteField<bool>("tileLodSettleNarrow", value); }
        bool tileLodSettleLeavesTail() const { return ReadField<bool>("tileLodSettleLeavesTail"); }
        void SetTileLodSettleLeavesTail(bool value) const { WriteField<bool>("tileLodSettleLeavesTail", value); }
        bool tileLodSlotRecombine() const { return ReadField<bool>("tileLodSlotRecombine"); }
        void SetTileLodSlotRecombine(bool value) const { WriteField<bool>("tileLodSlotRecombine", value); }
        bool tileLodHatchDelta() const { return ReadField<bool>("tileLodHatchDelta"); }
        void SetTileLodHatchDelta(bool value) const { WriteField<bool>("tileLodHatchDelta", value); }
        bool tileLodCalendarDelta() const { return ReadField<bool>("tileLodCalendarDelta"); }
        void SetTileLodCalendarDelta(bool value) const { WriteField<bool>("tileLodCalendarDelta", value); }
        bool tileLodSweepQuiet() const { return ReadField<bool>("tileLodSweepQuiet"); }
        void SetTileLodSweepQuiet(bool value) const { WriteField<bool>("tileLodSweepQuiet", value); }
        bool tileLodConquerCandidates() const { return ReadField<bool>("tileLodConquerCandidates"); }
        void SetTileLodConquerCandidates(bool value) const { WriteField<bool>("tileLodConquerCandidates", value); }
        bool tileLodFrontCollectChunks() const { return ReadField<bool>("tileLodFrontCollectChunks"); }
        void SetTileLodFrontCollectChunks(bool value) const { WriteField<bool>("tileLodFrontCollectChunks", value); }
        bool tileLodLandUseRects() const { return ReadField<bool>("tileLodLandUseRects"); }
        void SetTileLodLandUseRects(bool value) const { WriteField<bool>("tileLodLandUseRects", value); }
        bool tileLodLabelRefitSame() const { return ReadField<bool>("tileLodLabelRefitSame"); }
        void SetTileLodLabelRefitSame(bool value) const { WriteField<bool>("tileLodLabelRefitSame", value); }
        bool tileLodSurveyRuns() const { return ReadField<bool>("tileLodSurveyRuns"); }
        void SetTileLodSurveyRuns(bool value) const { WriteField<bool>("tileLodSurveyRuns", value); }
        bool tileLodPaceFromLandings() const { return ReadField<bool>("tileLodPaceFromLandings"); }
        void SetTileLodPaceFromLandings(bool value) const { WriteField<bool>("tileLodPaceFromLandings", value); }
        bool tileLodRepaintNarrow() const { return ReadField<bool>("tileLodRepaintNarrow"); }
        void SetTileLodRepaintNarrow(bool value) const { WriteField<bool>("tileLodRepaintNarrow", value); }
        bool tileLodClusterBoxStamp() const { return ReadField<bool>("tileLodClusterBoxStamp"); }
        void SetTileLodClusterBoxStamp(bool value) const { WriteField<bool>("tileLodClusterBoxStamp", value); }
        bool tileLodPrebuildGridMaps() const { return ReadField<bool>("tileLodPrebuildGridMaps"); }
        void SetTileLodPrebuildGridMaps(bool value) const { WriteField<bool>("tileLodPrebuildGridMaps", value); }
        bool tileLodTickStepSplits() const { return ReadField<bool>("tileLodTickStepSplits"); }
        void SetTileLodTickStepSplits(bool value) const { WriteField<bool>("tileLodTickStepSplits", value); }
        bool tileLodHatchRenderTarget() const { return ReadField<bool>("tileLodHatchRenderTarget"); }
        void SetTileLodHatchRenderTarget(bool value) const { WriteField<bool>("tileLodHatchRenderTarget", value); }
        bool tileLodRepaintParallel() const { return ReadField<bool>("tileLodRepaintParallel"); }
        void SetTileLodRepaintParallel(bool value) const { WriteField<bool>("tileLodRepaintParallel", value); }
        bool tileLodNeverStall() const { return ReadField<bool>("tileLodNeverStall"); }
        void SetTileLodNeverStall(bool value) const { WriteField<bool>("tileLodNeverStall", value); }
        float tileLodNeverStallAfter() const { return ReadField<float>("tileLodNeverStallAfter"); }
        void SetTileLodNeverStallAfter(float value) const { WriteField<float>("tileLodNeverStallAfter", value); }
        float tileLodNeverStallLateMs() const { return ReadField<float>("tileLodNeverStallLateMs"); }
        void SetTileLodNeverStallLateMs(float value) const { WriteField<float>("tileLodNeverStallLateMs", value); }
        float tileLodNeverStallOtherMul() const { return ReadField<float>("tileLodNeverStallOtherMul"); }
        void SetTileLodNeverStallOtherMul(float value) const { WriteField<float>("tileLodNeverStallOtherMul", value); }
        bool tileLodSliderDefer() const { return ReadField<bool>("tileLodSliderDefer"); }
        void SetTileLodSliderDefer(bool value) const { WriteField<bool>("tileLodSliderDefer", value); }
        bool tileLodRepaintChunks() const { return ReadField<bool>("tileLodRepaintChunks"); }
        void SetTileLodRepaintChunks(bool value) const { WriteField<bool>("tileLodRepaintChunks", value); }
        bool tileLodRecolourSliced() const { return ReadField<bool>("tileLodRecolourSliced"); }
        void SetTileLodRecolourSliced(bool value) const { WriteField<bool>("tileLodRecolourSliced", value); }
        float tileLodStagedBudgetRefreshes() const { return ReadField<float>("tileLodStagedBudgetRefreshes"); }
        void SetTileLodStagedBudgetRefreshes(float value) const { WriteField<float>("tileLodStagedBudgetRefreshes", value); }
        bool tileLodKernelTrims() const { return ReadField<bool>("tileLodKernelTrims"); }
        void SetTileLodKernelTrims(bool value) const { WriteField<bool>("tileLodKernelTrims", value); }
        bool tileLodKernelParallel() const { return ReadField<bool>("tileLodKernelParallel"); }
        void SetTileLodKernelParallel(bool value) const { WriteField<bool>("tileLodKernelParallel", value); }
        int tileLodKernelThreads() const { return ReadField<int>("tileLodKernelThreads"); }
        void SetTileLodKernelThreads(int value) const { WriteField<int>("tileLodKernelThreads", value); }
        bool tileLodGrowIsoSkip() const { return ReadField<bool>("tileLodGrowIsoSkip"); }
        void SetTileLodGrowIsoSkip(bool value) const { WriteField<bool>("tileLodGrowIsoSkip", value); }
        bool tileLodBlockerPages() const { return ReadField<bool>("tileLodBlockerPages"); }
        void SetTileLodBlockerPages(bool value) const { WriteField<bool>("tileLodBlockerPages", value); }
        bool tileLodChainCursor() const { return ReadField<bool>("tileLodChainCursor"); }
        void SetTileLodChainCursor(bool value) const { WriteField<bool>("tileLodChainCursor", value); }
        bool tileLodLabelChunks() const { return ReadField<bool>("tileLodLabelChunks"); }
        void SetTileLodLabelChunks(bool value) const { WriteField<bool>("tileLodLabelChunks", value); }
        bool tileLodOwnedChunks() const { return ReadField<bool>("tileLodOwnedChunks"); }
        void SetTileLodOwnedChunks(bool value) const { WriteField<bool>("tileLodOwnedChunks", value); }
        bool tileLodTreatmentDelta() const { return ReadField<bool>("tileLodTreatmentDelta"); }
        void SetTileLodTreatmentDelta(bool value) const { WriteField<bool>("tileLodTreatmentDelta", value); }
        bool tileLodSweepStructure() const { return ReadField<bool>("tileLodSweepStructure"); }
        void SetTileLodSweepStructure(bool value) const { WriteField<bool>("tileLodSweepStructure", value); }
        bool tileLodSlotAppend() const { return ReadField<bool>("tileLodSlotAppend"); }
        void SetTileLodSlotAppend(bool value) const { WriteField<bool>("tileLodSlotAppend", value); }
        bool tileLodClaimantIndex() const { return ReadField<bool>("tileLodClaimantIndex"); }
        void SetTileLodClaimantIndex(bool value) const { WriteField<bool>("tileLodClaimantIndex", value); }
        bool tileLodCapitulationNeighbours() const { return ReadField<bool>("tileLodCapitulationNeighbours"); }
        void SetTileLodCapitulationNeighbours(bool value) const { WriteField<bool>("tileLodCapitulationNeighbours", value); }
        bool tileLodSupportTallyFast() const { return ReadField<bool>("tileLodSupportTallyFast"); }
        void SetTileLodSupportTallyFast(bool value) const { WriteField<bool>("tileLodSupportTallyFast", value); }
        bool tileLodAffairsIndex() const { return ReadField<bool>("tileLodAffairsIndex"); }
        void SetTileLodAffairsIndex(bool value) const { WriteField<bool>("tileLodAffairsIndex", value); }
        bool tileLodHatchChunkSkip() const { return ReadField<bool>("tileLodHatchChunkSkip"); }
        void SetTileLodHatchChunkSkip(bool value) const { WriteField<bool>("tileLodHatchChunkSkip", value); }
        bool tileLodFillOwnedChunks() const { return ReadField<bool>("tileLodFillOwnedChunks"); }
        void SetTileLodFillOwnedChunks(bool value) const { WriteField<bool>("tileLodFillOwnedChunks", value); }
        bool aiLod() const { return ReadField<bool>("aiLod"); }
        void SetAiLod(bool value) const { WriteField<bool>("aiLod", value); }
        bool aiLodLeader() const { return ReadField<bool>("aiLodLeader"); }
        void SetAiLodLeader(bool value) const { WriteField<bool>("aiLodLeader", value); }
        bool aiLodMilitary() const { return ReadField<bool>("aiLodMilitary"); }
        void SetAiLodMilitary(bool value) const { WriteField<bool>("aiLodMilitary", value); }
        bool aiLodIndustry() const { return ReadField<bool>("aiLodIndustry"); }
        void SetAiLodIndustry(bool value) const { WriteField<bool>("aiLodIndustry", value); }
        bool aiLodStatePolitics() const { return ReadField<bool>("aiLodStatePolitics"); }
        void SetAiLodStatePolitics(bool value) const { WriteField<bool>("aiLodStatePolitics", value); }
        bool aiLodLocalPolitics() const { return ReadField<bool>("aiLodLocalPolitics"); }
        void SetAiLodLocalPolitics(bool value) const { WriteField<bool>("aiLodLocalPolitics", value); }
        int aiLodRegionalMul() const { return ReadField<int>("aiLodRegionalMul"); }
        void SetAiLodRegionalMul(int value) const { WriteField<int>("aiLodRegionalMul", value); }
        int aiLodDistantMul() const { return ReadField<int>("aiLodDistantMul"); }
        void SetAiLodDistantMul(int value) const { WriteField<int>("aiLodDistantMul", value); }
        int aiLodWarMulCap() const { return ReadField<int>("aiLodWarMulCap"); }
        void SetAiLodWarMulCap(int value) const { WriteField<int>("aiLodWarMulCap", value); }
        int aiLodRegionalPadTiles() const { return ReadField<int>("aiLodRegionalPadTiles"); }
        void SetAiLodRegionalPadTiles(int value) const { WriteField<int>("aiLodRegionalPadTiles", value); }
        int aiLodDemoteAfterTicks() const { return ReadField<int>("aiLodDemoteAfterTicks"); }
        void SetAiLodDemoteAfterTicks(int value) const { WriteField<int>("aiLodDemoteAfterTicks", value); }
        bool aiLodWarMatch() const { return ReadField<bool>("aiLodWarMatch"); }
        void SetAiLodWarMatch(bool value) const { WriteField<bool>("aiLodWarMatch", value); }
        bool aiLodOverlay() const { return ReadField<bool>("aiLodOverlay"); }
        void SetAiLodOverlay(bool value) const { WriteField<bool>("aiLodOverlay", value); }
        int startYearBC() const { return ReadField<int>("startYearBC"); }
        void SetStartYearBC(int value) const { WriteField<int>("startYearBC", value); }
        int startYearAd() const { return ReadField<int>("startYearAd"); }
        void SetStartYearAd(int value) const { WriteField<int>("startYearAd", value); }
        int startMonth() const { return ReadField<int>("startMonth"); }
        void SetStartMonth(int value) const { WriteField<int>("startMonth", value); }
        int startDay() const { return ReadField<int>("startDay"); }
        void SetStartDay(int value) const { WriteField<int>("startDay", value); }
        float ticksPerDay() const { return ReadField<float>("ticksPerDay"); }
        void SetTicksPerDay(float value) const { WriteField<float>("ticksPerDay", value); }
        float ticksPerYear() const { return ReadField<float>("ticksPerYear"); }
        void SetTicksPerYear(float value) const { WriteField<float>("ticksPerYear", value); }
    };
}
