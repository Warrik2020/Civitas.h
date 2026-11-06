#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class ArmourBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmourBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "ArmourBalance") {}
    public:
        bool CoversFront(int k) const { void* args[] = { &k }; return CallStaticValue<bool>("CoversFront", args, 1); }
        bool CoversRear(int k, int c) const { void* args[] = { &k, &c }; return CallStaticValue<bool>("CoversRear", args, 2); }
        float SeeThrough(int m) const { void* args[] = { &m }; return CallStaticValue<float>("SeeThrough", args, 1); }
        bool IsLoad(int k) const { void* args[] = { &k }; return CallStaticValue<bool>("IsLoad", args, 1); }
        float Articulation(int k) const { void* args[] = { &k }; return CallStaticValue<float>("Articulation", args, 1); }
        float MaterialStiffness(int m) const { void* args[] = { &m }; return CallStaticValue<float>("MaterialStiffness", args, 1); }
        float WrapFactor(int k) const { void* args[] = { &k }; return CallStaticValue<float>("WrapFactor", args, 1); }
        void ThreatMix(float year, void* into) const { void* args[] = { &year, into }; CallStatic("ThreatMix", args, 2); }
        void Check() const { CallStatic("Check", nullptr, 0); }
        int ThreatCount() const { return ReadStaticField<int>("ThreatCount"); }
        float MannequinHeight() const { return ReadStaticField<float>("MannequinHeight"); }
        float LoadShellMm() const { return ReadStaticField<float>("LoadShellMm"); }
        float LoadKgPerLitre() const { return ReadStaticField<float>("LoadKgPerLitre"); }
        float LoadFullLitres() const { return ReadStaticField<float>("LoadFullLitres"); }
        float LoadBonusCap() const { return ReadStaticField<float>("LoadBonusCap"); }
        float LoadNoBeltLitres() const { return ReadStaticField<float>("LoadNoBeltLitres"); }
        void* ConstructionRigidity() const { return ReadStaticField<void*>("ConstructionRigidity"); }
        float JointPenaltyMax() const { return ReadStaticField<float>("JointPenaltyMax"); }
        float BalanceOffsetMm() const { return ReadStaticField<float>("BalanceOffsetMm"); }
        float BalancePenaltyMax() const { return ReadStaticField<float>("BalancePenaltyMax"); }
        float HeadFreeKg() const { return ReadStaticField<float>("HeadFreeKg"); }
        float HeadSpanKg() const { return ReadStaticField<float>("HeadSpanKg"); }
        float HeadPenaltyMax() const { return ReadStaticField<float>("HeadPenaltyMax"); }
        float ChafePenalty() const { return ReadStaticField<float>("ChafePenalty"); }
        float BeltlessLoadPenalty() const { return ReadStaticField<float>("BeltlessLoadPenalty"); }
        float PouchOnJointPenalty() const { return ReadStaticField<float>("PouchOnJointPenalty"); }
        float PouchOnJointPenaltyMax() const { return ReadStaticField<float>("PouchOnJointPenaltyMax"); }
        float ErgoFloor() const { return ReadStaticField<float>("ErgoFloor"); }
        float MixBlendYears() const { return ReadStaticField<float>("MixBlendYears"); }
        void* ThreatScaleMm() const { return ReadStaticField<void*>("ThreatScaleMm"); }
        void* Protection() const { return ReadStaticField<void*>("Protection"); }
        void* ConstructionMul() const { return ReadStaticField<void*>("ConstructionMul"); }
        void* ConstructionEffort() const { return ReadStaticField<void*>("ConstructionEffort"); }
        float PaddingBluntPerMm() const { return ReadStaticField<float>("PaddingBluntPerMm"); }
        void* PaddingMul() const { return ReadStaticField<void*>("PaddingMul"); }
        void* PaddingEffort() const { return ReadStaticField<void*>("PaddingEffort"); }
        void* LiftKgPer10kMm2() const { return ReadStaticField<void*>("LiftKgPer10kMm2"); }
        void* PowerEffort() const { return ReadStaticField<void*>("PowerEffort"); }
        float StrengthPerMm2() const { return ReadStaticField<float>("StrengthPerMm2"); }
        float StrengthCap() const { return ReadStaticField<float>("StrengthCap"); }
        float MobilityFreeKg() const { return ReadStaticField<float>("MobilityFreeKg"); }
        float MobilitySpanKg() const { return ReadStaticField<float>("MobilitySpanKg"); }
        float MobilityFloor() const { return ReadStaticField<float>("MobilityFloor"); }
        float MobilityExp() const { return ReadStaticField<float>("MobilityExp"); }
        float VisionPerFace() const { return ReadStaticField<float>("VisionPerFace"); }
        float VisionSensorRelief() const { return ReadStaticField<float>("VisionSensorRelief"); }
        float VisionPenalty() const { return ReadStaticField<float>("VisionPenalty"); }
        float ShieldFactor() const { return ReadStaticField<float>("ShieldFactor"); }
        float CarriedKgMax() const { return ReadStaticField<float>("CarriedKgMax"); }
        float ComplexityPerExtraPart() const { return ReadStaticField<float>("ComplexityPerExtraPart"); }
        int ComplexityFreeParts() const { return ReadStaticField<int>("ComplexityFreeParts"); }
        float RawTopArmour() const { return ReadStaticField<float>("RawTopArmour"); }
        float BaselineMin() const { return ReadStaticField<float>("BaselineMin"); }
    };
}
