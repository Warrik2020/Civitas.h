#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class MixingRules : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MixingRules(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "MixingRules") {}
    public:
        int HoldCap(uint8_t open) const { void* args[] = { &open }; return CallStaticValue<int>("HoldCap", args, 1); }
        float PushWeight(int kind) const { void* args[] = { &kind }; return CallStaticValue<float>("PushWeight", args, 1); }
        bool AxisMixes(int axis) const { void* args[] = { &axis }; return CallStaticValue<bool>("AxisMixes", args, 1); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void SetEnabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        uint8_t OpenNormal() const { return ReadStaticField<uint8_t>("OpenNormal"); }
        uint8_t OpenFree() const { return ReadStaticField<uint8_t>("OpenFree"); }
        uint8_t OpenApart() const { return ReadStaticField<uint8_t>("OpenApart"); }
        int HoldCapUnowned() const { return ReadStaticField<int>("HoldCapUnowned"); }
        int HoldBothOfficialBonus() const { return ReadStaticField<int>("HoldBothOfficialBonus"); }
        float HoldPressedMul() const { return ReadStaticField<float>("HoldPressedMul"); }
        float HoldReligionMul() const { return ReadStaticField<float>("HoldReligionMul"); }
        int HoldMin() const { return ReadStaticField<int>("HoldMin"); }
        int MixMinShare() const { return ReadStaticField<int>("MixMinShare"); }
        float ScoreDecayYears() const { return ReadStaticField<float>("ScoreDecayYears"); }
        float CircuitYears() const { return ReadStaticField<float>("CircuitYears"); }
        float BusyMass() const { return ReadStaticField<float>("BusyMass"); }
        float YearsEthnic() const { return ReadStaticField<float>("YearsEthnic"); }
        float YearsReligion() const { return ReadStaticField<float>("YearsReligion"); }
        float MixDensityCap() const { return ReadStaticField<float>("MixDensityCap"); }
        float MigrationMixWeight() const { return ReadStaticField<float>("MigrationMixWeight"); }
        float SingleSectorMul() const { return ReadStaticField<float>("SingleSectorMul"); }
        float WeightFree() const { return ReadStaticField<float>("WeightFree"); }
        float WeightNormal() const { return ReadStaticField<float>("WeightNormal"); }
        float WeightApart() const { return ReadStaticField<float>("WeightApart"); }
        float WeightUnowned() const { return ReadStaticField<float>("WeightUnowned"); }
        float WeightInternational() const { return ReadStaticField<float>("WeightInternational"); }
        float WeightBothOfficial() const { return ReadStaticField<float>("WeightBothOfficial"); }
        float WeightSibling() const { return ReadStaticField<float>("WeightSibling"); }
        float WeightCousin() const { return ReadStaticField<float>("WeightCousin"); }
        float WeightDistant() const { return ReadStaticField<float>("WeightDistant"); }
        float WeightUnrelated() const { return ReadStaticField<float>("WeightUnrelated"); }
        float PairCooldownYears() const { return ReadStaticField<float>("PairCooldownYears"); }
        int MaxSpawnsPerAxisPerYear() const { return ReadStaticField<int>("MaxSpawnsPerAxisPerYear"); }
        int MaxSpawnsWorldPerYear() const { return ReadStaticField<int>("MaxSpawnsWorldPerYear"); }
        int MaxLiveMixedSmall() const { return ReadStaticField<int>("MaxLiveMixedSmall"); }
        int MaxLiveMixedLarge() const { return ReadStaticField<int>("MaxLiveMixedLarge"); }
        int MaxGeneration() const { return ReadStaticField<int>("MaxGeneration"); }
        int MaxGroupId() const { return ReadStaticField<int>("MaxGroupId"); }
        int ChildExclusionSectors() const { return ReadStaticField<int>("ChildExclusionSectors"); }
        float PushTrafficPerYear() const { return ReadStaticField<float>("PushTrafficPerYear"); }
        float PushWeightSpear() const { return ReadStaticField<float>("PushWeightSpear"); }
        float PushWeightWave() const { return ReadStaticField<float>("PushWeightWave"); }
        float PushWeightEncircle() const { return ReadStaticField<float>("PushWeightEncircle"); }
        float PushBornShare() const { return ReadStaticField<float>("PushBornShare"); }
        float PushBornSeamMul() const { return ReadStaticField<float>("PushBornSeamMul"); }
        int BirthCore() const { return ReadStaticField<int>("BirthCore"); }
        int BirthRing() const { return ReadStaticField<int>("BirthRing"); }
        int BirthMinTiles() const { return ReadStaticField<int>("BirthMinTiles"); }
        int BirthMaxTilesSmall() const { return ReadStaticField<int>("BirthMaxTilesSmall"); }
        int BirthMaxTilesLarge() const { return ReadStaticField<int>("BirthMaxTilesLarge"); }
        bool CradlesEnabled() const { return ReadStaticField<bool>("CradlesEnabled"); }
        void SetCradlesEnabled(bool value) const { WriteStaticField<bool>("CradlesEnabled", value); }
        float CradleRadius() const { return ReadStaticField<float>("CradleRadius"); }
        float CradleWobble() const { return ReadStaticField<float>("CradleWobble"); }
        int CradleMaxTilesSmall() const { return ReadStaticField<int>("CradleMaxTilesSmall"); }
        int CradleMaxTilesLarge() const { return ReadStaticField<int>("CradleMaxTilesLarge"); }
        float CradleYears() const { return ReadStaticField<float>("CradleYears"); }
        float CradlePush() const { return ReadStaticField<float>("CradlePush"); }
        float CradleGuard() const { return ReadStaticField<float>("CradleGuard"); }
        float ForgePush() const { return ReadStaticField<float>("ForgePush"); }
        float ForgeResist() const { return ReadStaticField<float>("ForgeResist"); }
        float ForgeComplete() const { return ReadStaticField<float>("ForgeComplete"); }
        float ForgeParentsGone() const { return ReadStaticField<float>("ForgeParentsGone"); }
        float ForgeStallYears() const { return ReadStaticField<float>("ForgeStallYears"); }
        float ForgeTimeoutYears() const { return ReadStaticField<float>("ForgeTimeoutYears"); }
        float ForgeBillMul() const { return ReadStaticField<float>("ForgeBillMul"); }
    };
}
