#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class WeaponBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "WeaponBalance") {}
    public:
        float LateralHandling(float offsetMm) const { void* __callArgs[] = { &offsetMm }; return CallStaticValue<float>("LateralHandling", __callArgs, 1); }
        void Check() const { CallStatic("Check", nullptr, 0); }
        void Len(void* table, void* enumType, const char* name) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { table, enumType, managed_2 }; CallStatic("Len", __callArgs, 3); }
        void* DensityGPerCm3() const { return ReadStaticField<void*>("DensityGPerCm3"); }
        void* BarrelStrength() const { return ReadStaticField<void*>("BarrelStrength"); }
        void* BarrelReliability() const { return ReadStaticField<void*>("BarrelReliability"); }
        void* MaterialComplexity() const { return ReadStaticField<void*>("MaterialComplexity"); }
        void* PartDepthMm() const { return ReadStaticField<void*>("PartDepthMm"); }
        float BarrelTaper() const { return ReadStaticField<float>("BarrelTaper"); }
        float TouchToleranceMm() const { return ReadStaticField<float>("TouchToleranceMm"); }
        float MinPartAreaMm2() const { return ReadStaticField<float>("MinPartAreaMm2"); }
        int FreePartCount() const { return ReadStaticField<int>("FreePartCount"); }
        int ComplexityFreeParts() const { return ReadStaticField<int>("ComplexityFreeParts"); }
        float ComplexityPerExtraPart() const { return ReadStaticField<float>("ComplexityPerExtraPart"); }
        float DustCoverReliability() const { return ReadStaticField<float>("DustCoverReliability"); }
        float DustCoverComplexity() const { return ReadStaticField<float>("DustCoverComplexity"); }
        void* MuzzleVelocityBase() const { return ReadStaticField<void*>("MuzzleVelocityBase"); }
        void* BarrelLengthExponent() const { return ReadStaticField<void*>("BarrelLengthExponent"); }
        void* ReferenceCalibre() const { return ReadStaticField<void*>("ReferenceCalibre"); }
        void* PropellantReliability() const { return ReadStaticField<void*>("PropellantReliability"); }
        float WallPressureRef() const { return ReadStaticField<float>("WallPressureRef"); }
        float ReferenceBarrelLength() const { return ReadStaticField<float>("ReferenceBarrelLength"); }
        float VelocityLengthMin() const { return ReadStaticField<float>("VelocityLengthMin"); }
        float VelocityLengthMax() const { return ReadStaticField<float>("VelocityLengthMax"); }
        float VelocityCalibreExponent() const { return ReadStaticField<float>("VelocityCalibreExponent"); }
        float WallMarginWarn() const { return ReadStaticField<float>("WallMarginWarn"); }
        float WallMarginReliability() const { return ReadStaticField<float>("WallMarginReliability"); }
        float VelocityFloorMs() const { return ReadStaticField<float>("VelocityFloorMs"); }
        float LoadStep() const { return ReadStaticField<float>("LoadStep"); }
        void* ProjectileShape() const { return ReadStaticField<void*>("ProjectileShape"); }
        void* AmmoVelocity() const { return ReadStaticField<void*>("AmmoVelocity"); }
        void* RangeShape() const { return ReadStaticField<void*>("RangeShape"); }
        void* AmmoAccuracy() const { return ReadStaticField<void*>("AmmoAccuracy"); }
        void* CartridgeLengthCal() const { return ReadStaticField<void*>("CartridgeLengthCal"); }
        void* CartridgeDiaCal() const { return ReadStaticField<void*>("CartridgeDiaCal"); }
        float MinCartridgeLength() const { return ReadStaticField<float>("MinCartridgeLength"); }
        float LeadDensityGPerMm3() const { return ReadStaticField<float>("LeadDensityGPerMm3"); }
        void* IgnitionReliability() const { return ReadStaticField<void*>("IgnitionReliability"); }
        void* IgnitionComplexity() const { return ReadStaticField<void*>("IgnitionComplexity"); }
        void* ActionReliability() const { return ReadStaticField<void*>("ActionReliability"); }
        void* ActionComplexity() const { return ReadStaticField<void*>("ActionComplexity"); }
        void* ActionCyclic() const { return ReadStaticField<void*>("ActionCyclic"); }
        float MuzzlePaperCyclic() const { return ReadStaticField<float>("MuzzlePaperCyclic"); }
        float MuzzleMinieCyclic() const { return ReadStaticField<float>("MuzzleMinieCyclic"); }
        float BreechMetallicCyclic() const { return ReadStaticField<float>("BreechMetallicCyclic"); }
        float TouchHoleFire() const { return ReadStaticField<float>("TouchHoleFire"); }
        float SelectiveSustainRelief() const { return ReadStaticField<float>("SelectiveSustainRelief"); }
        float AutoCyclic() const { return ReadStaticField<float>("AutoCyclic"); }
        float BeltSustainedCyclic() const { return ReadStaticField<float>("BeltSustainedCyclic"); }
        float ExtraBarrelFire() const { return ReadStaticField<float>("ExtraBarrelFire"); }
        void* FeedReliability() const { return ReadStaticField<void*>("FeedReliability"); }
        void* FeedComplexity() const { return ReadStaticField<void*>("FeedComplexity"); }
        void* FeedReloadMin() const { return ReadStaticField<void*>("FeedReloadMin"); }
        float TubeReloadPerRoundMin() const { return ReadStaticField<float>("TubeReloadPerRoundMin"); }
        float BoxPackingBrass() const { return ReadStaticField<float>("BoxPackingBrass"); }
        float BoxPackingPaper() const { return ReadStaticField<float>("BoxPackingPaper"); }
        float DrumPacking() const { return ReadStaticField<float>("DrumPacking"); }
        float HopperPacking() const { return ReadStaticField<float>("HopperPacking"); }
        float HelicalPacking() const { return ReadStaticField<float>("HelicalPacking"); }
        int BoxCapacityMax() const { return ReadStaticField<int>("BoxCapacityMax"); }
        int DrumCapacityMax() const { return ReadStaticField<int>("DrumCapacityMax"); }
        int HopperCapacityMax() const { return ReadStaticField<int>("HopperCapacityMax"); }
        int HelicalCapacityMax() const { return ReadStaticField<int>("HelicalCapacityMax"); }
        int HelicalCapacityMin() const { return ReadStaticField<int>("HelicalCapacityMin"); }
        int StripperCapacity() const { return ReadStaticField<int>("StripperCapacity"); }
        int StripperCapacityWithWell() const { return ReadStaticField<int>("StripperCapacityWithWell"); }
        int EnBlocCapacity() const { return ReadStaticField<int>("EnBlocCapacity"); }
        int CylinderMin() const { return ReadStaticField<int>("CylinderMin"); }
        int CylinderMax() const { return ReadStaticField<int>("CylinderMax"); }
        int CylinderDefault() const { return ReadStaticField<int>("CylinderDefault"); }
        float BeltRoundsMin() const { return ReadStaticField<float>("BeltRoundsMin"); }
        float BeltRoundsMax() const { return ReadStaticField<float>("BeltRoundsMax"); }
        void* BoreRange() const { return ReadStaticField<void*>("BoreRange"); }
        void* BoreAccuracy() const { return ReadStaticField<void*>("BoreAccuracy"); }
        void* BoreComplexity() const { return ReadStaticField<void*>("BoreComplexity"); }
        void* SightRange() const { return ReadStaticField<void*>("SightRange"); }
        void* SightAccuracy() const { return ReadStaticField<void*>("SightAccuracy"); }
        void* SightComplexity() const { return ReadStaticField<void*>("SightComplexity"); }
        void* CoolingSustain() const { return ReadStaticField<void*>("CoolingSustain"); }
        void* CoolingComplexity() const { return ReadStaticField<void*>("CoolingComplexity"); }
        float NoCoolingAutoReliability() const { return ReadStaticField<float>("NoCoolingAutoReliability"); }
        void* ManufactureAccuracy() const { return ReadStaticField<void*>("ManufactureAccuracy"); }
        void* ManufactureReliability() const { return ReadStaticField<void*>("ManufactureReliability"); }
        void* ManufactureEffort() const { return ReadStaticField<void*>("ManufactureEffort"); }
        float RangePerVelocity() const { return ReadStaticField<float>("RangePerVelocity"); }
        float RangeCapM() const { return ReadStaticField<float>("RangeCapM"); }
        float StockAccuracy() const { return ReadStaticField<float>("StockAccuracy"); }
        float PoleAccuracy() const { return ReadStaticField<float>("PoleAccuracy"); }
        float NoStockAccuracy() const { return ReadStaticField<float>("NoStockAccuracy"); }
        float RecoilFreeJ() const { return ReadStaticField<float>("RecoilFreeJ"); }
        float RecoilSpanJ() const { return ReadStaticField<float>("RecoilSpanJ"); }
        float RecoilAccuracyFloor() const { return ReadStaticField<float>("RecoilAccuracyFloor"); }
        float SightRadiusRef() const { return ReadStaticField<float>("SightRadiusRef"); }
        float SightRadiusExponent() const { return ReadStaticField<float>("SightRadiusExponent"); }
        float SightRadiusMin() const { return ReadStaticField<float>("SightRadiusMin"); }
        float SightRadiusMax() const { return ReadStaticField<float>("SightRadiusMax"); }
        float SelectiveAccuracy() const { return ReadStaticField<float>("SelectiveAccuracy"); }
        float HandlingIdealWeight() const { return ReadStaticField<float>("HandlingIdealWeight"); }
        float HandlingWeightSpan() const { return ReadStaticField<float>("HandlingWeightSpan"); }
        float HandlingWeightFloor() const { return ReadStaticField<float>("HandlingWeightFloor"); }
        float HandlingIdealLength() const { return ReadStaticField<float>("HandlingIdealLength"); }
        float HandlingLengthSpan() const { return ReadStaticField<float>("HandlingLengthSpan"); }
        float HandlingLengthFloor() const { return ReadStaticField<float>("HandlingLengthFloor"); }
        float GripHandling() const { return ReadStaticField<float>("GripHandling"); }
        float BullpupHandling() const { return ReadStaticField<float>("BullpupHandling"); }
        float PoleHandling() const { return ReadStaticField<float>("PoleHandling"); }
        float StockGripAreaMm2() const { return ReadStaticField<float>("StockGripAreaMm2"); }
        float StockGripBehindMm() const { return ReadStaticField<float>("StockGripBehindMm"); }
        float StockGripDropMm() const { return ReadStaticField<float>("StockGripDropMm"); }
        float StockGripDepthMm() const { return ReadStaticField<float>("StockGripDepthMm"); }
        float CrewTwoAboveKg() const { return ReadStaticField<float>("CrewTwoAboveKg"); }
        float CrewThreeAboveKg() const { return ReadStaticField<float>("CrewThreeAboveKg"); }
        float LateralFreeMm() const { return ReadStaticField<float>("LateralFreeMm"); }
        float LateralSpanMm() const { return ReadStaticField<float>("LateralSpanMm"); }
        float LateralFloor() const { return ReadStaticField<float>("LateralFloor"); }
        float LateralMaxMm() const { return ReadStaticField<float>("LateralMaxMm"); }
        float LateralNoticeMm() const { return ReadStaticField<float>("LateralNoticeMm"); }
        float BlackPowderSelfLoadingReliability() const { return ReadStaticField<float>("BlackPowderSelfLoadingReliability"); }
        float BlackPowderMagazineReliability() const { return ReadStaticField<float>("BlackPowderMagazineReliability"); }
        float ExtraPartReliability() const { return ReadStaticField<float>("ExtraPartReliability"); }
        float LethalityJ() const { return ReadStaticField<float>("LethalityJ"); }
        float LethalityExp() const { return ReadStaticField<float>("LethalityExp"); }
        float RofRef() const { return ReadStaticField<float>("RofRef"); }
        float RofExp() const { return ReadStaticField<float>("RofExp"); }
        float RangeUtilityM() const { return ReadStaticField<float>("RangeUtilityM"); }
        float RangeExp() const { return ReadStaticField<float>("RangeExp"); }
        float AccuracyExp() const { return ReadStaticField<float>("AccuracyExp"); }
        float ReliabilityExp() const { return ReadStaticField<float>("ReliabilityExp"); }
        float HandlingExp() const { return ReadStaticField<float>("HandlingExp"); }
        float SelectiveFireBonus() const { return ReadStaticField<float>("SelectiveFireBonus"); }
        float RawModern() const { return ReadStaticField<float>("RawModern"); }
        void* GunInternals() const { return ReadStaticField<void*>("GunInternals"); }
        void* Kinds() const { return ReadStaticField<void*>("Kinds"); }
        float QualityExponent() const { return ReadStaticField<float>("QualityExponent"); }
        float QualityMin() const { return ReadStaticField<float>("QualityMin"); }
        float QualityMax() const { return ReadStaticField<float>("QualityMax"); }
        float ProductionMulMin() const { return ReadStaticField<float>("ProductionMulMin"); }
        float ProductionMulMax() const { return ReadStaticField<float>("ProductionMulMax"); }
        float RetoolProductionMul() const { return ReadStaticField<float>("RetoolProductionMul"); }
        int RetoolTicks() const { return ReadStaticField<int>("RetoolTicks"); }
        float RetoolGoldMin() const { return ReadStaticField<float>("RetoolGoldMin"); }
        float RetoolIncomeTicks() const { return ReadStaticField<float>("RetoolIncomeTicks"); }
        float RetoolRelMin() const { return ReadStaticField<float>("RetoolRelMin"); }
        float RetoolRelMax() const { return ReadStaticField<float>("RetoolRelMax"); }
        int RearmPerPass() const { return ReadStaticField<int>("RearmPerPass"); }
        float RearmArmsFraction() const { return ReadStaticField<float>("RearmArmsFraction"); }
        float RearmMinOrgFraction() const { return ReadStaticField<float>("RearmMinOrgFraction"); }
        float RearmMinManpowerFraction() const { return ReadStaticField<float>("RearmMinManpowerFraction"); }
        float AiSupportShare() const { return ReadStaticField<float>("AiSupportShare"); }
        int AiAdoptIntervalTicks() const { return ReadStaticField<int>("AiAdoptIntervalTicks"); }
    };
}
