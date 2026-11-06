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
        float ClampFloor(float floor) const { void* __callArgs[] = { &floor }; return CallValue<float>("ClampFloor", __callArgs, 1); }
        float contactYears() const { return ReadField<float>("contactYears"); }
        void contactYears(float value) const { WriteField<float>("contactYears", value); }
        int stepShare() const { return ReadField<int>("stepShare"); }
        void stepShare(int value) const { WriteField<int>("stepShare", value); }
        float floorSkirmish() const { return ReadField<float>("floorSkirmish"); }
        void floorSkirmish(float value) const { WriteField<float>("floorSkirmish", value); }
        float floorTolerated() const { return ReadField<float>("floorTolerated"); }
        void floorTolerated(float value) const { WriteField<float>("floorTolerated", value); }
        float floorPersecuted() const { return ReadField<float>("floorPersecuted"); }
        void floorPersecuted(float value) const { WriteField<float>("floorPersecuted", value); }
        float floorPersecutedUnpressed() const { return ReadField<float>("floorPersecutedUnpressed"); }
        void floorPersecutedUnpressed(float value) const { WriteField<float>("floorPersecutedUnpressed", value); }
        float floorEqual() const { return ReadField<float>("floorEqual"); }
        void floorEqual(float value) const { WriteField<float>("floorEqual", value); }
        float floorRamp() const { return ReadField<float>("floorRamp"); }
        void floorRamp(float value) const { WriteField<float>("floorRamp", value); }
        float homelandPull() const { return ReadField<float>("homelandPull"); }
        void homelandPull(float value) const { WriteField<float>("homelandPull", value); }
        float fingerLean() const { return ReadField<float>("fingerLean"); }
        void fingerLean(float value) const { WriteField<float>("fingerLean", value); }
        float grainHold() const { return ReadField<float>("grainHold"); }
        void grainHold(float value) const { WriteField<float>("grainHold", value); }
        float reachLean() const { return ReadField<float>("reachLean"); }
        void reachLean(float value) const { WriteField<float>("reachLean", value); }
        float reachThreshold() const { return ReadField<float>("reachThreshold"); }
        void reachThreshold(float value) const { WriteField<float>("reachThreshold", value); }
        float adminWeight() const { return ReadField<float>("adminWeight"); }
        void adminWeight(float value) const { WriteField<float>("adminWeight", value); }
        float settleAdminWeight() const { return ReadField<float>("settleAdminWeight"); }
        void settleAdminWeight(float value) const { WriteField<float>("settleAdminWeight", value); }
        float assimilationPushMultiplier() const { return ReadField<float>("assimilationPushMultiplier"); }
        void assimilationPushMultiplier(float value) const { WriteField<float>("assimilationPushMultiplier", value); }
        float borderGuardResistance() const { return ReadField<float>("borderGuardResistance"); }
        void borderGuardResistance(float value) const { WriteField<float>("borderGuardResistance", value); }
        float promotionZoneMultiplier() const { return ReadField<float>("promotionZoneMultiplier"); }
        void promotionZoneMultiplier(float value) const { WriteField<float>("promotionZoneMultiplier", value); }
        float driftStrength() const { return ReadField<float>("driftStrength"); }
        void driftStrength(float value) const { WriteField<float>("driftStrength", value); }
        float driftWavelengthTiles() const { return ReadField<float>("driftWavelengthTiles"); }
        void driftWavelengthTiles(float value) const { WriteField<float>("driftWavelengthTiles", value); }
        float driftPeriodYears() const { return ReadField<float>("driftPeriodYears"); }
        void driftPeriodYears(float value) const { WriteField<float>("driftPeriodYears", value); }
        float driftContrast() const { return ReadField<float>("driftContrast"); }
        void driftContrast(float value) const { WriteField<float>("driftContrast", value); }
        int pushContactPerPush() const { return ReadField<int>("pushContactPerPush"); }
        void pushContactPerPush(int value) const { WriteField<int>("pushContactPerPush", value); }
        int pushMin() const { return ReadField<int>("pushMin"); }
        void pushMin(int value) const { WriteField<int>("pushMin", value); }
        int pushMax() const { return ReadField<int>("pushMax"); }
        void pushMax(int value) const { WriteField<int>("pushMax", value); }
        int pushPlanTicks() const { return ReadField<int>("pushPlanTicks"); }
        void pushPlanTicks(int value) const { WriteField<int>("pushPlanTicks", value); }
        float pushRateMul() const { return ReadField<float>("pushRateMul"); }
        void pushRateMul(float value) const { WriteField<float>("pushRateMul", value); }
        int pushStepShare() const { return ReadField<int>("pushStepShare"); }
        void pushStepShare(int value) const { WriteField<int>("pushStepShare", value); }
        float spearWeight() const { return ReadField<float>("spearWeight"); }
        void spearWeight(float value) const { WriteField<float>("spearWeight", value); }
        float waveWeight() const { return ReadField<float>("waveWeight"); }
        void waveWeight(float value) const { WriteField<float>("waveWeight", value); }
        float encircleWeight() const { return ReadField<float>("encircleWeight"); }
        void encircleWeight(float value) const { WriteField<float>("encircleWeight", value); }
        float spearBoost() const { return ReadField<float>("spearBoost"); }
        void spearBoost(float value) const { WriteField<float>("spearBoost", value); }
        void* spearLength() const { return ReadField<void*>("spearLength"); }
        void spearLength(void* value) const { WriteField<void*>("spearLength", value); }
        void* spearHalfWidth() const { return ReadField<void*>("spearHalfWidth"); }
        void spearHalfWidth(void* value) const { WriteField<void*>("spearHalfWidth", value); }
        void* spearBaseWidth() const { return ReadField<void*>("spearBaseWidth"); }
        void spearBaseWidth(void* value) const { WriteField<void*>("spearBaseWidth", value); }
        void* spearYears() const { return ReadField<void*>("spearYears"); }
        void spearYears(void* value) const { WriteField<void*>("spearYears", value); }
        float waveBoost() const { return ReadField<float>("waveBoost"); }
        void waveBoost(float value) const { WriteField<float>("waveBoost", value); }
        void* waveDepth() const { return ReadField<void*>("waveDepth"); }
        void waveDepth(void* value) const { WriteField<void*>("waveDepth", value); }
        void* waveHalfWidth() const { return ReadField<void*>("waveHalfWidth"); }
        void waveHalfWidth(void* value) const { WriteField<void*>("waveHalfWidth", value); }
        void* waveYears() const { return ReadField<void*>("waveYears"); }
        void waveYears(void* value) const { WriteField<void*>("waveYears", value); }
        float encircleBoost() const { return ReadField<float>("encircleBoost"); }
        void encircleBoost(float value) const { WriteField<float>("encircleBoost", value); }
        float pocketBoost() const { return ReadField<float>("pocketBoost"); }
        void pocketBoost(float value) const { WriteField<float>("pocketBoost", value); }
        void* encircleSpread() const { return ReadField<void*>("encircleSpread"); }
        void encircleSpread(void* value) const { WriteField<void*>("encircleSpread", value); }
        void* encircleDepth() const { return ReadField<void*>("encircleDepth"); }
        void encircleDepth(void* value) const { WriteField<void*>("encircleDepth", value); }
        void* prongHalfWidth() const { return ReadField<void*>("prongHalfWidth"); }
        void prongHalfWidth(void* value) const { WriteField<void*>("prongHalfWidth", value); }
        void* encircleYears() const { return ReadField<void*>("encircleYears"); }
        void encircleYears(void* value) const { WriteField<void*>("encircleYears", value); }
        float pocketYears() const { return ReadField<float>("pocketYears"); }
        void pocketYears(float value) const { WriteField<float>("pocketYears", value); }
        float bindingLean() const { return ReadField<float>("bindingLean"); }
        void bindingLean(float value) const { WriteField<float>("bindingLean", value); }
        float bindingShareNeed() const { return ReadField<float>("bindingShareNeed"); }
        void bindingShareNeed(float value) const { WriteField<float>("bindingShareNeed", value); }
        float bindingShareDrop() const { return ReadField<float>("bindingShareDrop"); }
        void bindingShareDrop(float value) const { WriteField<float>("bindingShareDrop", value); }
        float bindingFlipMargin() const { return ReadField<float>("bindingFlipMargin"); }
        void bindingFlipMargin(float value) const { WriteField<float>("bindingFlipMargin", value); }
        int bindingMinSamples() const { return ReadField<int>("bindingMinSamples"); }
        void bindingMinSamples(int value) const { WriteField<int>("bindingMinSamples", value); }
    };
}
