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
        void* AdjustFill(void* c) const { void* __callArgs[] = { c }; return Call("AdjustFill", __callArgs, 1); }
        int FillVersion() const { return CallValue<int>("FillVersion", nullptr, 0); }
        float iso() const { return ReadField<float>("iso"); }
        void iso(float value) const { WriteField<float>("iso", value); }
        float growthStep() const { return ReadField<float>("growthStep"); }
        void growthStep(float value) const { WriteField<float>("growthStep", value); }
        float warAdvanceMaxStepFraction() const { return ReadField<float>("warAdvanceMaxStepFraction"); }
        void warAdvanceMaxStepFraction(float value) const { WriteField<float>("warAdvanceMaxStepFraction", value); }
        float baseFactor() const { return ReadField<float>("baseFactor"); }
        void baseFactor(float value) const { WriteField<float>("baseFactor", value); }
        float lobeBoost() const { return ReadField<float>("lobeBoost"); }
        void lobeBoost(float value) const { WriteField<float>("lobeBoost", value); }
        int minLobes() const { return ReadField<int>("minLobes"); }
        void minLobes(int value) const { WriteField<int>("minLobes", value); }
        int initialLobes() const { return ReadField<int>("initialLobes"); }
        void initialLobes(int value) const { WriteField<int>("initialLobes", value); }
        float spawnChance() const { return ReadField<float>("spawnChance"); }
        void spawnChance(float value) const { WriteField<float>("spawnChance", value); }
        float lobeDriftRate() const { return ReadField<float>("lobeDriftRate"); }
        void lobeDriftRate(float value) const { WriteField<float>("lobeDriftRate", value); }
        float lobeTopupChance() const { return ReadField<float>("lobeTopupChance"); }
        void lobeTopupChance(float value) const { WriteField<float>("lobeTopupChance", value); }
        int lobeLifetimeMin() const { return ReadField<int>("lobeLifetimeMin"); }
        void lobeLifetimeMin(int value) const { WriteField<int>("lobeLifetimeMin", value); }
        int lobeLifetimeMax() const { return ReadField<int>("lobeLifetimeMax"); }
        void lobeLifetimeMax(int value) const { WriteField<int>("lobeLifetimeMax", value); }
        float lobeSpreadMin() const { return ReadField<float>("lobeSpreadMin"); }
        void lobeSpreadMin(float value) const { WriteField<float>("lobeSpreadMin", value); }
        float lobeSpreadMax() const { return ReadField<float>("lobeSpreadMax"); }
        void lobeSpreadMax(float value) const { WriteField<float>("lobeSpreadMax", value); }
        float coastalDriftStrength() const { return ReadField<float>("coastalDriftStrength"); }
        void coastalDriftStrength(float value) const { WriteField<float>("coastalDriftStrength", value); }
        int coastSearchRadius() const { return ReadField<int>("coastSearchRadius"); }
        void coastSearchRadius(int value) const { WriteField<int>("coastSearchRadius", value); }
        float coastalBiasMin() const { return ReadField<float>("coastalBiasMin"); }
        void coastalBiasMin(float value) const { WriteField<float>("coastalBiasMin", value); }
        float coastalBiasMax() const { return ReadField<float>("coastalBiasMax"); }
        void coastalBiasMax(float value) const { WriteField<float>("coastalBiasMax", value); }
        float coastProximityBonus() const { return ReadField<float>("coastProximityBonus"); }
        void coastProximityBonus(float value) const { WriteField<float>("coastProximityBonus", value); }
        int coastProximityRange() const { return ReadField<int>("coastProximityRange"); }
        void coastProximityRange(int value) const { WriteField<int>("coastProximityRange", value); }
        float expansionRateMin() const { return ReadField<float>("expansionRateMin"); }
        void expansionRateMin(float value) const { WriteField<float>("expansionRateMin", value); }
        float expansionRateMax() const { return ReadField<float>("expansionRateMax"); }
        void expansionRateMax(float value) const { WriteField<float>("expansionRateMax", value); }
        void* nameForms() const { return ReadField<void*>("nameForms"); }
        void nameForms(void* value) const { WriteField<void*>("nameForms", value); }
        void* unionNameForms() const { return ReadField<void*>("unionNameForms"); }
        void unionNameForms(void* value) const { WriteField<void*>("unionNameForms", value); }
        float unionCrownScale() const { return ReadField<float>("unionCrownScale"); }
        void unionCrownScale(float value) const { WriteField<float>("unionCrownScale", value); }
        float unionCrownOffsetTiles() const { return ReadField<float>("unionCrownOffsetTiles"); }
        void unionCrownOffsetTiles(float value) const { WriteField<float>("unionCrownOffsetTiles", value); }
        int minCapitalSeparation() const { return ReadField<int>("minCapitalSeparation"); }
        void minCapitalSeparation(int value) const { WriteField<int>("minCapitalSeparation", value); }
        int minStartingLand() const { return ReadField<int>("minStartingLand"); }
        void minStartingLand(int value) const { WriteField<int>("minStartingLand", value); }
        int headingSearchRadius() const { return ReadField<int>("headingSearchRadius"); }
        void headingSearchRadius(int value) const { WriteField<int>("headingSearchRadius", value); }
        float headingCoastOffset() const { return ReadField<float>("headingCoastOffset"); }
        void headingCoastOffset(float value) const { WriteField<float>("headingCoastOffset", value); }
        float territoryAlpha() const { return ReadField<float>("territoryAlpha"); }
        void territoryAlpha(float value) const { WriteField<float>("territoryAlpha", value); }
        float identityFillAlpha() const { return ReadField<float>("identityFillAlpha"); }
        void identityFillAlpha(float value) const { WriteField<float>("identityFillAlpha", value); }
        bool fillVariation() const { return ReadField<bool>("fillVariation"); }
        void fillVariation(bool value) const { WriteField<bool>("fillVariation", value); }
        float fillVariationStrength() const { return ReadField<float>("fillVariationStrength"); }
        void fillVariationStrength(float value) const { WriteField<float>("fillVariationStrength", value); }
        float fillVariationOverride() const { return ReadField<float>("fillVariationOverride"); }
        void fillVariationOverride(float value) const { WriteField<float>("fillVariationOverride", value); }
        float fillVariationScaleTiles() const { return ReadField<float>("fillVariationScaleTiles"); }
        void fillVariationScaleTiles(float value) const { WriteField<float>("fillVariationScaleTiles", value); }
        float homeRuleTint() const { return ReadField<float>("homeRuleTint"); }
        void homeRuleTint(float value) const { WriteField<float>("homeRuleTint", value); }
        float fillSaturation() const { return ReadField<float>("fillSaturation"); }
        void fillSaturation(float value) const { WriteField<float>("fillSaturation", value); }
        float fillBrightness() const { return ReadField<float>("fillBrightness"); }
        void fillBrightness(float value) const { WriteField<float>("fillBrightness", value); }
        float fillLumaHarmonize() const { return ReadField<float>("fillLumaHarmonize"); }
        void fillLumaHarmonize(float value) const { WriteField<float>("fillLumaHarmonize", value); }
        void* nationEdge() const { return ReadField<void*>("nationEdge"); }
        void nationEdge(void* value) const { WriteField<void*>("nationEdge", value); }
        void* nationBorder() const { return ReadField<void*>("nationBorder"); }
        void nationBorder(void* value) const { WriteField<void*>("nationBorder", value); }
        void* vassalRibbon() const { return ReadField<void*>("vassalRibbon"); }
        void vassalRibbon(void* value) const { WriteField<void*>("vassalRibbon", value); }
        float borderFadeStartFraction() const { return ReadField<float>("borderFadeStartFraction"); }
        void borderFadeStartFraction(float value) const { WriteField<float>("borderFadeStartFraction", value); }
        float borderFadeEndFraction() const { return ReadField<float>("borderFadeEndFraction"); }
        void borderFadeEndFraction(float value) const { WriteField<float>("borderFadeEndFraction", value); }
        void* stateBorder() const { return ReadField<void*>("stateBorder"); }
        void stateBorder(void* value) const { WriteField<void*>("stateBorder", value); }
        void* historicBorder() const { return ReadField<void*>("historicBorder"); }
        void historicBorder(void* value) const { WriteField<void*>("historicBorder", value); }
        void* identityBorder() const { return ReadField<void*>("identityBorder"); }
        void identityBorder(void* value) const { WriteField<void*>("identityBorder", value); }
        void* identitySubBorder() const { return ReadField<void*>("identitySubBorder"); }
        void identitySubBorder(void* value) const { WriteField<void*>("identitySubBorder", value); }
        void* identityEdge() const { return ReadField<void*>("identityEdge"); }
        void identityEdge(void* value) const { WriteField<void*>("identityEdge", value); }
        void* extentBorder() const { return ReadField<void*>("extentBorder"); }
        void extentBorder(void* value) const { WriteField<void*>("extentBorder", value); }
        void* states() const { return ReadField<void*>("states"); }
        void states(void* value) const { WriteField<void*>("states", value); }
        float capitalStarRadiusPx() const { return ReadField<float>("capitalStarRadiusPx"); }
        void capitalStarRadiusPx(float value) const { WriteField<float>("capitalStarRadiusPx", value); }
        float capitalStarFillFraction() const { return ReadField<float>("capitalStarFillFraction"); }
        void capitalStarFillFraction(float value) const { WriteField<float>("capitalStarFillFraction", value); }
        float capitalStarPointRatio() const { return ReadField<float>("capitalStarPointRatio"); }
        void capitalStarPointRatio(float value) const { WriteField<float>("capitalStarPointRatio", value); }
        float capitalStarOffsetTiles() const { return ReadField<float>("capitalStarOffsetTiles"); }
        void capitalStarOffsetTiles(float value) const { WriteField<float>("capitalStarOffsetTiles", value); }
        void* capitalStarOutlineColor() const { return ReadField<void*>("capitalStarOutlineColor"); }
        void capitalStarOutlineColor(void* value) const { WriteField<void*>("capitalStarOutlineColor", value); }
        float baseTicksPerSecond() const { return ReadField<float>("baseTicksPerSecond"); }
        void baseTicksPerSecond(float value) const { WriteField<float>("baseTicksPerSecond", value); }
        int maxTicksPerFrame() const { return ReadField<int>("maxTicksPerFrame"); }
        void maxTicksPerFrame(int value) const { WriteField<int>("maxTicksPerFrame", value); }
        float tickBudgetMs() const { return ReadField<float>("tickBudgetMs"); }
        void tickBudgetMs(float value) const { WriteField<float>("tickBudgetMs", value); }
        float vectorTraceBudgetMs() const { return ReadField<float>("vectorTraceBudgetMs"); }
        void vectorTraceBudgetMs(float value) const { WriteField<float>("vectorTraceBudgetMs", value); }
        float vectorTraceBudgetHardMs() const { return ReadField<float>("vectorTraceBudgetHardMs"); }
        void vectorTraceBudgetHardMs(float value) const { WriteField<float>("vectorTraceBudgetHardMs", value); }
        float vectorTraceStaleSecs() const { return ReadField<float>("vectorTraceStaleSecs"); }
        void vectorTraceStaleSecs(float value) const { WriteField<float>("vectorTraceStaleSecs", value); }
        bool vectorTraceViewCull() const { return ReadField<bool>("vectorTraceViewCull"); }
        void vectorTraceViewCull(bool value) const { WriteField<bool>("vectorTraceViewCull", value); }
        float vectorRecombineBudgetMs() const { return ReadField<float>("vectorRecombineBudgetMs"); }
        void vectorRecombineBudgetMs(float value) const { WriteField<float>("vectorRecombineBudgetMs", value); }
        bool tileLod() const { return ReadField<bool>("tileLod"); }
        void tileLod(bool value) const { WriteField<bool>("tileLod", value); }
        bool tileLodGrowSkip() const { return ReadField<bool>("tileLodGrowSkip"); }
        void tileLodGrowSkip(bool value) const { WriteField<bool>("tileLodGrowSkip", value); }
        bool tileLodTraceSkip() const { return ReadField<bool>("tileLodTraceSkip"); }
        void tileLodTraceSkip(bool value) const { WriteField<bool>("tileLodTraceSkip", value); }
        bool tileLodStateSweepSkip() const { return ReadField<bool>("tileLodStateSweepSkip"); }
        void tileLodStateSweepSkip(bool value) const { WriteField<bool>("tileLodStateSweepSkip", value); }
        bool tileLodViewScheduling() const { return ReadField<bool>("tileLodViewScheduling"); }
        void tileLodViewScheduling(bool value) const { WriteField<bool>("tileLodViewScheduling", value); }
        bool tileLodRepaintSkip() const { return ReadField<bool>("tileLodRepaintSkip"); }
        void tileLodRepaintSkip(bool value) const { WriteField<bool>("tileLodRepaintSkip", value); }
        bool tileLodMajorityMemo() const { return ReadField<bool>("tileLodMajorityMemo"); }
        void tileLodMajorityMemo(bool value) const { WriteField<bool>("tileLodMajorityMemo", value); }
        bool tileLodPyramid() const { return ReadField<bool>("tileLodPyramid"); }
        void tileLodPyramid(bool value) const { WriteField<bool>("tileLodPyramid", value); }
        bool tileLodPoliticalPyramid() const { return ReadField<bool>("tileLodPoliticalPyramid"); }
        void tileLodPoliticalPyramid(bool value) const { WriteField<bool>("tileLodPoliticalPyramid", value); }
        bool tileLodContestCachePaged() const { return ReadField<bool>("tileLodContestCachePaged"); }
        void tileLodContestCachePaged(bool value) const { WriteField<bool>("tileLodContestCachePaged", value); }
        bool tileLodExtentPaged() const { return ReadField<bool>("tileLodExtentPaged"); }
        void tileLodExtentPaged(bool value) const { WriteField<bool>("tileLodExtentPaged", value); }
        bool tileLodChunkTablesSparse() const { return ReadField<bool>("tileLodChunkTablesSparse"); }
        void tileLodChunkTablesSparse(bool value) const { WriteField<bool>("tileLodChunkTablesSparse", value); }
        bool tileLodOverlayPixelsPaged() const { return ReadField<bool>("tileLodOverlayPixelsPaged"); }
        void tileLodOverlayPixelsPaged(bool value) const { WriteField<bool>("tileLodOverlayPixelsPaged", value); }
        bool tileLodDeJureDense() const { return ReadField<bool>("tileLodDeJureDense"); }
        void tileLodDeJureDense(bool value) const { WriteField<bool>("tileLodDeJureDense", value); }
        bool tileLodAuditNodes() const { return ReadField<bool>("tileLodAuditNodes"); }
        void tileLodAuditNodes(bool value) const { WriteField<bool>("tileLodAuditNodes", value); }
        bool tileLodStateTraceNodes() const { return ReadField<bool>("tileLodStateTraceNodes"); }
        void tileLodStateTraceNodes(bool value) const { WriteField<bool>("tileLodStateTraceNodes", value); }
        bool tileLodPoliticsRuns() const { return ReadField<bool>("tileLodPoliticsRuns"); }
        void tileLodPoliticsRuns(bool value) const { WriteField<bool>("tileLodPoliticsRuns", value); }
        bool tileLodIdentityRescanSkip() const { return ReadField<bool>("tileLodIdentityRescanSkip"); }
        void tileLodIdentityRescanSkip(bool value) const { WriteField<bool>("tileLodIdentityRescanSkip", value); }
        bool tileLodIdentityIntern() const { return ReadField<bool>("tileLodIdentityIntern"); }
        void tileLodIdentityIntern(bool value) const { WriteField<bool>("tileLodIdentityIntern", value); }
        bool tileLodIdentityFrontierRelease() const { return ReadField<bool>("tileLodIdentityFrontierRelease"); }
        void tileLodIdentityFrontierRelease(bool value) const { WriteField<bool>("tileLodIdentityFrontierRelease", value); }
        bool tileLodKernelSlice() const { return ReadField<bool>("tileLodKernelSlice"); }
        void tileLodKernelSlice(bool value) const { WriteField<bool>("tileLodKernelSlice", value); }
        bool tileLodControlQuietSkip() const { return ReadField<bool>("tileLodControlQuietSkip"); }
        void tileLodControlQuietSkip(bool value) const { WriteField<bool>("tileLodControlQuietSkip", value); }
        bool tileLodDeJureAsync() const { return ReadField<bool>("tileLodDeJureAsync"); }
        void tileLodDeJureAsync(bool value) const { WriteField<bool>("tileLodDeJureAsync", value); }
        bool tileLodFoundingTally() const { return ReadField<bool>("tileLodFoundingTally"); }
        void tileLodFoundingTally(bool value) const { WriteField<bool>("tileLodFoundingTally", value); }
        bool tileLodPoliticsPeopleMemo() const { return ReadField<bool>("tileLodPoliticsPeopleMemo"); }
        void tileLodPoliticsPeopleMemo(bool value) const { WriteField<bool>("tileLodPoliticsPeopleMemo", value); }
        bool tileLodRevoltRunMemo() const { return ReadField<bool>("tileLodRevoltRunMemo"); }
        void tileLodRevoltRunMemo(bool value) const { WriteField<bool>("tileLodRevoltRunMemo", value); }
        bool tileLodLaneMemo() const { return ReadField<bool>("tileLodLaneMemo"); }
        void tileLodLaneMemo(bool value) const { WriteField<bool>("tileLodLaneMemo", value); }
        bool tileLodRenderOffTickFrames() const { return ReadField<bool>("tileLodRenderOffTickFrames"); }
        void tileLodRenderOffTickFrames(bool value) const { WriteField<bool>("tileLodRenderOffTickFrames", value); }
        bool tileLodStagedTick() const { return ReadField<bool>("tileLodStagedTick"); }
        void tileLodStagedTick(bool value) const { WriteField<bool>("tileLodStagedTick", value); }
        float tileLodStagedBudgetMinMs() const { return ReadField<float>("tileLodStagedBudgetMinMs"); }
        void tileLodStagedBudgetMinMs(float value) const { WriteField<float>("tileLodStagedBudgetMinMs", value); }
        float tileLodStagedBudgetMaxMs() const { return ReadField<float>("tileLodStagedBudgetMaxMs"); }
        void tileLodStagedBudgetMaxMs(float value) const { WriteField<float>("tileLodStagedBudgetMaxMs", value); }
        float tileLodStagedLandBy() const { return ReadField<float>("tileLodStagedLandBy"); }
        void tileLodStagedLandBy(float value) const { WriteField<float>("tileLodStagedLandBy", value); }
        float tileLodStagedTopSpeedFrameMs() const { return ReadField<float>("tileLodStagedTopSpeedFrameMs"); }
        void tileLodStagedTopSpeedFrameMs(float value) const { WriteField<float>("tileLodStagedTopSpeedFrameMs", value); }
        bool tileLodStagedAsyncFlood() const { return ReadField<bool>("tileLodStagedAsyncFlood"); }
        void tileLodStagedAsyncFlood(bool value) const { WriteField<bool>("tileLodStagedAsyncFlood", value); }
        bool tileLodSeedCandidates() const { return ReadField<bool>("tileLodSeedCandidates"); }
        void tileLodSeedCandidates(bool value) const { WriteField<bool>("tileLodSeedCandidates", value); }
        bool tileLodStagedGuard() const { return ReadField<bool>("tileLodStagedGuard"); }
        void tileLodStagedGuard(bool value) const { WriteField<bool>("tileLodStagedGuard", value); }
        bool tileLodValidate() const { return ReadField<bool>("tileLodValidate"); }
        void tileLodValidate(bool value) const { WriteField<bool>("tileLodValidate", value); }
        bool tileLodShadow() const { return ReadField<bool>("tileLodShadow"); }
        void tileLodShadow(bool value) const { WriteField<bool>("tileLodShadow", value); }
        bool tileLodSettleNarrow() const { return ReadField<bool>("tileLodSettleNarrow"); }
        void tileLodSettleNarrow(bool value) const { WriteField<bool>("tileLodSettleNarrow", value); }
        bool tileLodSettleLeavesTail() const { return ReadField<bool>("tileLodSettleLeavesTail"); }
        void tileLodSettleLeavesTail(bool value) const { WriteField<bool>("tileLodSettleLeavesTail", value); }
        bool tileLodSlotRecombine() const { return ReadField<bool>("tileLodSlotRecombine"); }
        void tileLodSlotRecombine(bool value) const { WriteField<bool>("tileLodSlotRecombine", value); }
        bool tileLodHatchDelta() const { return ReadField<bool>("tileLodHatchDelta"); }
        void tileLodHatchDelta(bool value) const { WriteField<bool>("tileLodHatchDelta", value); }
        bool tileLodCalendarDelta() const { return ReadField<bool>("tileLodCalendarDelta"); }
        void tileLodCalendarDelta(bool value) const { WriteField<bool>("tileLodCalendarDelta", value); }
        bool tileLodSweepQuiet() const { return ReadField<bool>("tileLodSweepQuiet"); }
        void tileLodSweepQuiet(bool value) const { WriteField<bool>("tileLodSweepQuiet", value); }
        bool tileLodConquerCandidates() const { return ReadField<bool>("tileLodConquerCandidates"); }
        void tileLodConquerCandidates(bool value) const { WriteField<bool>("tileLodConquerCandidates", value); }
        bool tileLodFrontCollectChunks() const { return ReadField<bool>("tileLodFrontCollectChunks"); }
        void tileLodFrontCollectChunks(bool value) const { WriteField<bool>("tileLodFrontCollectChunks", value); }
        bool tileLodLandUseRects() const { return ReadField<bool>("tileLodLandUseRects"); }
        void tileLodLandUseRects(bool value) const { WriteField<bool>("tileLodLandUseRects", value); }
        bool tileLodLabelRefitSame() const { return ReadField<bool>("tileLodLabelRefitSame"); }
        void tileLodLabelRefitSame(bool value) const { WriteField<bool>("tileLodLabelRefitSame", value); }
        bool tileLodSurveyRuns() const { return ReadField<bool>("tileLodSurveyRuns"); }
        void tileLodSurveyRuns(bool value) const { WriteField<bool>("tileLodSurveyRuns", value); }
        bool tileLodPaceFromLandings() const { return ReadField<bool>("tileLodPaceFromLandings"); }
        void tileLodPaceFromLandings(bool value) const { WriteField<bool>("tileLodPaceFromLandings", value); }
        bool tileLodRepaintNarrow() const { return ReadField<bool>("tileLodRepaintNarrow"); }
        void tileLodRepaintNarrow(bool value) const { WriteField<bool>("tileLodRepaintNarrow", value); }
        bool tileLodClusterBoxStamp() const { return ReadField<bool>("tileLodClusterBoxStamp"); }
        void tileLodClusterBoxStamp(bool value) const { WriteField<bool>("tileLodClusterBoxStamp", value); }
        bool tileLodPrebuildGridMaps() const { return ReadField<bool>("tileLodPrebuildGridMaps"); }
        void tileLodPrebuildGridMaps(bool value) const { WriteField<bool>("tileLodPrebuildGridMaps", value); }
        bool tileLodTickStepSplits() const { return ReadField<bool>("tileLodTickStepSplits"); }
        void tileLodTickStepSplits(bool value) const { WriteField<bool>("tileLodTickStepSplits", value); }
        bool tileLodHatchRenderTarget() const { return ReadField<bool>("tileLodHatchRenderTarget"); }
        void tileLodHatchRenderTarget(bool value) const { WriteField<bool>("tileLodHatchRenderTarget", value); }
        bool tileLodRepaintParallel() const { return ReadField<bool>("tileLodRepaintParallel"); }
        void tileLodRepaintParallel(bool value) const { WriteField<bool>("tileLodRepaintParallel", value); }
        bool tileLodNeverStall() const { return ReadField<bool>("tileLodNeverStall"); }
        void tileLodNeverStall(bool value) const { WriteField<bool>("tileLodNeverStall", value); }
        float tileLodNeverStallAfter() const { return ReadField<float>("tileLodNeverStallAfter"); }
        void tileLodNeverStallAfter(float value) const { WriteField<float>("tileLodNeverStallAfter", value); }
        float tileLodNeverStallLateMs() const { return ReadField<float>("tileLodNeverStallLateMs"); }
        void tileLodNeverStallLateMs(float value) const { WriteField<float>("tileLodNeverStallLateMs", value); }
        float tileLodNeverStallOtherMul() const { return ReadField<float>("tileLodNeverStallOtherMul"); }
        void tileLodNeverStallOtherMul(float value) const { WriteField<float>("tileLodNeverStallOtherMul", value); }
        bool tileLodSliderDefer() const { return ReadField<bool>("tileLodSliderDefer"); }
        void tileLodSliderDefer(bool value) const { WriteField<bool>("tileLodSliderDefer", value); }
        bool tileLodRepaintChunks() const { return ReadField<bool>("tileLodRepaintChunks"); }
        void tileLodRepaintChunks(bool value) const { WriteField<bool>("tileLodRepaintChunks", value); }
        bool tileLodRecolourSliced() const { return ReadField<bool>("tileLodRecolourSliced"); }
        void tileLodRecolourSliced(bool value) const { WriteField<bool>("tileLodRecolourSliced", value); }
        float tileLodStagedBudgetRefreshes() const { return ReadField<float>("tileLodStagedBudgetRefreshes"); }
        void tileLodStagedBudgetRefreshes(float value) const { WriteField<float>("tileLodStagedBudgetRefreshes", value); }
        bool tileLodKernelTrims() const { return ReadField<bool>("tileLodKernelTrims"); }
        void tileLodKernelTrims(bool value) const { WriteField<bool>("tileLodKernelTrims", value); }
        bool tileLodKernelParallel() const { return ReadField<bool>("tileLodKernelParallel"); }
        void tileLodKernelParallel(bool value) const { WriteField<bool>("tileLodKernelParallel", value); }
        int tileLodKernelThreads() const { return ReadField<int>("tileLodKernelThreads"); }
        void tileLodKernelThreads(int value) const { WriteField<int>("tileLodKernelThreads", value); }
        bool tileLodGrowIsoSkip() const { return ReadField<bool>("tileLodGrowIsoSkip"); }
        void tileLodGrowIsoSkip(bool value) const { WriteField<bool>("tileLodGrowIsoSkip", value); }
        bool tileLodBlockerPages() const { return ReadField<bool>("tileLodBlockerPages"); }
        void tileLodBlockerPages(bool value) const { WriteField<bool>("tileLodBlockerPages", value); }
        bool tileLodChainCursor() const { return ReadField<bool>("tileLodChainCursor"); }
        void tileLodChainCursor(bool value) const { WriteField<bool>("tileLodChainCursor", value); }
        bool tileLodLabelChunks() const { return ReadField<bool>("tileLodLabelChunks"); }
        void tileLodLabelChunks(bool value) const { WriteField<bool>("tileLodLabelChunks", value); }
        bool tileLodOwnedChunks() const { return ReadField<bool>("tileLodOwnedChunks"); }
        void tileLodOwnedChunks(bool value) const { WriteField<bool>("tileLodOwnedChunks", value); }
        bool tileLodTreatmentDelta() const { return ReadField<bool>("tileLodTreatmentDelta"); }
        void tileLodTreatmentDelta(bool value) const { WriteField<bool>("tileLodTreatmentDelta", value); }
        bool tileLodSweepStructure() const { return ReadField<bool>("tileLodSweepStructure"); }
        void tileLodSweepStructure(bool value) const { WriteField<bool>("tileLodSweepStructure", value); }
        bool tileLodSlotAppend() const { return ReadField<bool>("tileLodSlotAppend"); }
        void tileLodSlotAppend(bool value) const { WriteField<bool>("tileLodSlotAppend", value); }
        bool tileLodClaimantIndex() const { return ReadField<bool>("tileLodClaimantIndex"); }
        void tileLodClaimantIndex(bool value) const { WriteField<bool>("tileLodClaimantIndex", value); }
        bool tileLodCapitulationNeighbours() const { return ReadField<bool>("tileLodCapitulationNeighbours"); }
        void tileLodCapitulationNeighbours(bool value) const { WriteField<bool>("tileLodCapitulationNeighbours", value); }
        bool tileLodSupportTallyFast() const { return ReadField<bool>("tileLodSupportTallyFast"); }
        void tileLodSupportTallyFast(bool value) const { WriteField<bool>("tileLodSupportTallyFast", value); }
        bool tileLodAffairsIndex() const { return ReadField<bool>("tileLodAffairsIndex"); }
        void tileLodAffairsIndex(bool value) const { WriteField<bool>("tileLodAffairsIndex", value); }
        bool tileLodHatchChunkSkip() const { return ReadField<bool>("tileLodHatchChunkSkip"); }
        void tileLodHatchChunkSkip(bool value) const { WriteField<bool>("tileLodHatchChunkSkip", value); }
        bool tileLodFillOwnedChunks() const { return ReadField<bool>("tileLodFillOwnedChunks"); }
        void tileLodFillOwnedChunks(bool value) const { WriteField<bool>("tileLodFillOwnedChunks", value); }
        bool aiLod() const { return ReadField<bool>("aiLod"); }
        void aiLod(bool value) const { WriteField<bool>("aiLod", value); }
        bool aiLodLeader() const { return ReadField<bool>("aiLodLeader"); }
        void aiLodLeader(bool value) const { WriteField<bool>("aiLodLeader", value); }
        bool aiLodMilitary() const { return ReadField<bool>("aiLodMilitary"); }
        void aiLodMilitary(bool value) const { WriteField<bool>("aiLodMilitary", value); }
        bool aiLodIndustry() const { return ReadField<bool>("aiLodIndustry"); }
        void aiLodIndustry(bool value) const { WriteField<bool>("aiLodIndustry", value); }
        bool aiLodStatePolitics() const { return ReadField<bool>("aiLodStatePolitics"); }
        void aiLodStatePolitics(bool value) const { WriteField<bool>("aiLodStatePolitics", value); }
        bool aiLodLocalPolitics() const { return ReadField<bool>("aiLodLocalPolitics"); }
        void aiLodLocalPolitics(bool value) const { WriteField<bool>("aiLodLocalPolitics", value); }
        int aiLodRegionalMul() const { return ReadField<int>("aiLodRegionalMul"); }
        void aiLodRegionalMul(int value) const { WriteField<int>("aiLodRegionalMul", value); }
        int aiLodDistantMul() const { return ReadField<int>("aiLodDistantMul"); }
        void aiLodDistantMul(int value) const { WriteField<int>("aiLodDistantMul", value); }
        int aiLodWarMulCap() const { return ReadField<int>("aiLodWarMulCap"); }
        void aiLodWarMulCap(int value) const { WriteField<int>("aiLodWarMulCap", value); }
        int aiLodRegionalPadTiles() const { return ReadField<int>("aiLodRegionalPadTiles"); }
        void aiLodRegionalPadTiles(int value) const { WriteField<int>("aiLodRegionalPadTiles", value); }
        int aiLodDemoteAfterTicks() const { return ReadField<int>("aiLodDemoteAfterTicks"); }
        void aiLodDemoteAfterTicks(int value) const { WriteField<int>("aiLodDemoteAfterTicks", value); }
        bool aiLodWarMatch() const { return ReadField<bool>("aiLodWarMatch"); }
        void aiLodWarMatch(bool value) const { WriteField<bool>("aiLodWarMatch", value); }
        bool aiLodOverlay() const { return ReadField<bool>("aiLodOverlay"); }
        void aiLodOverlay(bool value) const { WriteField<bool>("aiLodOverlay", value); }
        int startYearBC() const { return ReadField<int>("startYearBC"); }
        void startYearBC(int value) const { WriteField<int>("startYearBC", value); }
        int startYearAd() const { return ReadField<int>("startYearAd"); }
        void startYearAd(int value) const { WriteField<int>("startYearAd", value); }
        int startMonth() const { return ReadField<int>("startMonth"); }
        void startMonth(int value) const { WriteField<int>("startMonth", value); }
        int startDay() const { return ReadField<int>("startDay"); }
        void startDay(int value) const { WriteField<int>("startDay", value); }
        float ticksPerDay() const { return ReadField<float>("ticksPerDay"); }
        void ticksPerDay(float value) const { WriteField<float>("ticksPerDay", value); }
        float ticksPerYear() const { return ReadField<float>("ticksPerYear"); }
        void ticksPerYear(float value) const { WriteField<float>("ticksPerYear", value); }
    };
}
