#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityAxisConfig : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityAxisConfig(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityAxisConfig") {}
    public:
        float ClampFloor(float floor) const { void* args[] = { &floor }; return CallValue<float>("ClampFloor", args, 1); }
        float contactYears() const { return ReadField<float>("contactYears"); }
        void SetContactYears(float value) const { WriteField<float>("contactYears", value); }
        int stepShare() const { return ReadField<int>("stepShare"); }
        void SetStepShare(int value) const { WriteField<int>("stepShare", value); }
        float floorSkirmish() const { return ReadField<float>("floorSkirmish"); }
        void SetFloorSkirmish(float value) const { WriteField<float>("floorSkirmish", value); }
        float floorTolerated() const { return ReadField<float>("floorTolerated"); }
        void SetFloorTolerated(float value) const { WriteField<float>("floorTolerated", value); }
        float floorPersecuted() const { return ReadField<float>("floorPersecuted"); }
        void SetFloorPersecuted(float value) const { WriteField<float>("floorPersecuted", value); }
        float floorPersecutedUnpressed() const { return ReadField<float>("floorPersecutedUnpressed"); }
        void SetFloorPersecutedUnpressed(float value) const { WriteField<float>("floorPersecutedUnpressed", value); }
        float floorEqual() const { return ReadField<float>("floorEqual"); }
        void SetFloorEqual(float value) const { WriteField<float>("floorEqual", value); }
        float floorRamp() const { return ReadField<float>("floorRamp"); }
        void SetFloorRamp(float value) const { WriteField<float>("floorRamp", value); }
        float homelandPull() const { return ReadField<float>("homelandPull"); }
        void SetHomelandPull(float value) const { WriteField<float>("homelandPull", value); }
        float fingerLean() const { return ReadField<float>("fingerLean"); }
        void SetFingerLean(float value) const { WriteField<float>("fingerLean", value); }
        float grainHold() const { return ReadField<float>("grainHold"); }
        void SetGrainHold(float value) const { WriteField<float>("grainHold", value); }
        float reachLean() const { return ReadField<float>("reachLean"); }
        void SetReachLean(float value) const { WriteField<float>("reachLean", value); }
        float reachThreshold() const { return ReadField<float>("reachThreshold"); }
        void SetReachThreshold(float value) const { WriteField<float>("reachThreshold", value); }
        float adminWeight() const { return ReadField<float>("adminWeight"); }
        void SetAdminWeight(float value) const { WriteField<float>("adminWeight", value); }
        float settleAdminWeight() const { return ReadField<float>("settleAdminWeight"); }
        void SetSettleAdminWeight(float value) const { WriteField<float>("settleAdminWeight", value); }
        float assimilationPushMultiplier() const { return ReadField<float>("assimilationPushMultiplier"); }
        void SetAssimilationPushMultiplier(float value) const { WriteField<float>("assimilationPushMultiplier", value); }
        float borderGuardResistance() const { return ReadField<float>("borderGuardResistance"); }
        void SetBorderGuardResistance(float value) const { WriteField<float>("borderGuardResistance", value); }
        float promotionZoneMultiplier() const { return ReadField<float>("promotionZoneMultiplier"); }
        void SetPromotionZoneMultiplier(float value) const { WriteField<float>("promotionZoneMultiplier", value); }
        float driftStrength() const { return ReadField<float>("driftStrength"); }
        void SetDriftStrength(float value) const { WriteField<float>("driftStrength", value); }
        float driftWavelengthTiles() const { return ReadField<float>("driftWavelengthTiles"); }
        void SetDriftWavelengthTiles(float value) const { WriteField<float>("driftWavelengthTiles", value); }
        float driftPeriodYears() const { return ReadField<float>("driftPeriodYears"); }
        void SetDriftPeriodYears(float value) const { WriteField<float>("driftPeriodYears", value); }
        float driftContrast() const { return ReadField<float>("driftContrast"); }
        void SetDriftContrast(float value) const { WriteField<float>("driftContrast", value); }
        int pushContactPerPush() const { return ReadField<int>("pushContactPerPush"); }
        void SetPushContactPerPush(int value) const { WriteField<int>("pushContactPerPush", value); }
        int pushMin() const { return ReadField<int>("pushMin"); }
        void SetPushMin(int value) const { WriteField<int>("pushMin", value); }
        int pushMax() const { return ReadField<int>("pushMax"); }
        void SetPushMax(int value) const { WriteField<int>("pushMax", value); }
        int pushPlanTicks() const { return ReadField<int>("pushPlanTicks"); }
        void SetPushPlanTicks(int value) const { WriteField<int>("pushPlanTicks", value); }
        float pushRateMul() const { return ReadField<float>("pushRateMul"); }
        void SetPushRateMul(float value) const { WriteField<float>("pushRateMul", value); }
        int pushStepShare() const { return ReadField<int>("pushStepShare"); }
        void SetPushStepShare(int value) const { WriteField<int>("pushStepShare", value); }
        float spearWeight() const { return ReadField<float>("spearWeight"); }
        void SetSpearWeight(float value) const { WriteField<float>("spearWeight", value); }
        float waveWeight() const { return ReadField<float>("waveWeight"); }
        void SetWaveWeight(float value) const { WriteField<float>("waveWeight", value); }
        float encircleWeight() const { return ReadField<float>("encircleWeight"); }
        void SetEncircleWeight(float value) const { WriteField<float>("encircleWeight", value); }
        float spearBoost() const { return ReadField<float>("spearBoost"); }
        void SetSpearBoost(float value) const { WriteField<float>("spearBoost", value); }
        void* spearLength() const { return ReadField<void*>("spearLength"); }
        void SetSpearLength(void* value) const { WriteField<void*>("spearLength", value); }
        void* spearHalfWidth() const { return ReadField<void*>("spearHalfWidth"); }
        void SetSpearHalfWidth(void* value) const { WriteField<void*>("spearHalfWidth", value); }
        void* spearBaseWidth() const { return ReadField<void*>("spearBaseWidth"); }
        void SetSpearBaseWidth(void* value) const { WriteField<void*>("spearBaseWidth", value); }
        void* spearYears() const { return ReadField<void*>("spearYears"); }
        void SetSpearYears(void* value) const { WriteField<void*>("spearYears", value); }
        float waveBoost() const { return ReadField<float>("waveBoost"); }
        void SetWaveBoost(float value) const { WriteField<float>("waveBoost", value); }
        void* waveDepth() const { return ReadField<void*>("waveDepth"); }
        void SetWaveDepth(void* value) const { WriteField<void*>("waveDepth", value); }
        void* waveHalfWidth() const { return ReadField<void*>("waveHalfWidth"); }
        void SetWaveHalfWidth(void* value) const { WriteField<void*>("waveHalfWidth", value); }
        void* waveYears() const { return ReadField<void*>("waveYears"); }
        void SetWaveYears(void* value) const { WriteField<void*>("waveYears", value); }
        float encircleBoost() const { return ReadField<float>("encircleBoost"); }
        void SetEncircleBoost(float value) const { WriteField<float>("encircleBoost", value); }
        float pocketBoost() const { return ReadField<float>("pocketBoost"); }
        void SetPocketBoost(float value) const { WriteField<float>("pocketBoost", value); }
        void* encircleSpread() const { return ReadField<void*>("encircleSpread"); }
        void SetEncircleSpread(void* value) const { WriteField<void*>("encircleSpread", value); }
        void* encircleDepth() const { return ReadField<void*>("encircleDepth"); }
        void SetEncircleDepth(void* value) const { WriteField<void*>("encircleDepth", value); }
        void* prongHalfWidth() const { return ReadField<void*>("prongHalfWidth"); }
        void SetProngHalfWidth(void* value) const { WriteField<void*>("prongHalfWidth", value); }
        void* encircleYears() const { return ReadField<void*>("encircleYears"); }
        void SetEncircleYears(void* value) const { WriteField<void*>("encircleYears", value); }
        float pocketYears() const { return ReadField<float>("pocketYears"); }
        void SetPocketYears(float value) const { WriteField<float>("pocketYears", value); }
        float bindingLean() const { return ReadField<float>("bindingLean"); }
        void SetBindingLean(float value) const { WriteField<float>("bindingLean", value); }
        float bindingShareNeed() const { return ReadField<float>("bindingShareNeed"); }
        void SetBindingShareNeed(float value) const { WriteField<float>("bindingShareNeed", value); }
        float bindingShareDrop() const { return ReadField<float>("bindingShareDrop"); }
        void SetBindingShareDrop(float value) const { WriteField<float>("bindingShareDrop", value); }
        float bindingFlipMargin() const { return ReadField<float>("bindingFlipMargin"); }
        void SetBindingFlipMargin(float value) const { WriteField<float>("bindingFlipMargin", value); }
        int bindingMinSamples() const { return ReadField<int>("bindingMinSamples"); }
        void SetBindingMinSamples(int value) const { WriteField<int>("bindingMinSamples", value); }
    };
}
