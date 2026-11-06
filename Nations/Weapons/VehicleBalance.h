#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class VehicleBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VehicleBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "VehicleBalance") {}
    public:
        void Check() const { CallStatic("Check", nullptr, 0); }
        void* KwPerBayLitre() const { return ReadStaticField<void*>("KwPerBayLitre"); }
        void* KgPerKw() const { return ReadStaticField<void*>("KgPerKw"); }
        void* EngineReliability() const { return ReadStaticField<void*>("EngineReliability"); }
        void* EngineEffort() const { return ReadStaticField<void*>("EngineEffort"); }
        void* SuspensionMul() const { return ReadStaticField<void*>("SuspensionMul"); }
        void* SuspensionEffort() const { return ReadStaticField<void*>("SuspensionEffort"); }
        void* PlateQuality() const { return ReadStaticField<void*>("PlateQuality"); }
        void* PlateReactive() const { return ReadStaticField<void*>("PlateReactive"); }
        void* PlateAps() const { return ReadStaticField<void*>("PlateAps"); }
        void* PlateEffort() const { return ReadStaticField<void*>("PlateEffort"); }
        void* AmmoVelocity() const { return ReadStaticField<void*>("AmmoVelocity"); }
        void* AmmoPenetration() const { return ReadStaticField<void*>("AmmoPenetration"); }
        void* AmmoEffort() const { return ReadStaticField<void*>("AmmoEffort"); }
        float HeatCalibres() const { return ReadStaticField<float>("HeatCalibres"); }
        void* FireControlMul() const { return ReadStaticField<void*>("FireControlMul"); }
        void* FireControlEffort() const { return ReadStaticField<void*>("FireControlEffort"); }
        float SteelKgPerMm3() const { return ReadStaticField<float>("SteelKgPerMm3"); }
        float TopBottomPlateFraction() const { return ReadStaticField<float>("TopBottomPlateFraction"); }
        float RearPlateFraction() const { return ReadStaticField<float>("RearPlateFraction"); }
        float SidePlateFraction() const { return ReadStaticField<float>("SidePlateFraction"); }
        float RearNormalX() const { return ReadStaticField<float>("RearNormalX"); }
        float TopNormalY() const { return ReadStaticField<float>("TopNormalY"); }
        float SlopeCap() const { return ReadStaticField<float>("SlopeCap"); }
        float SlopeCosMin() const { return ReadStaticField<float>("SlopeCosMin"); }
        float FrontNormalX() const { return ReadStaticField<float>("FrontNormalX"); }
        float TrackWidthFraction() const { return ReadStaticField<float>("TrackWidthFraction"); }
        float TrackKgPerMm2() const { return ReadStaticField<float>("TrackKgPerMm2"); }
        float StructureKgPerM3() const { return ReadStaticField<float>("StructureKgPerM3"); }
        float ReactiveBlockKg() const { return ReadStaticField<float>("ReactiveBlockKg"); }
        float CrewTonnes() const { return ReadStaticField<float>("CrewTonnes"); }
        float KphPerKwPerTonne() const { return ReadStaticField<float>("KphPerKwPerTonne"); }
        float SpeedMinKph() const { return ReadStaticField<float>("SpeedMinKph"); }
        float SpeedMaxKph() const { return ReadStaticField<float>("SpeedMaxKph"); }
        float MobilityBase() const { return ReadStaticField<float>("MobilityBase"); }
        float MobilityPerKpa() const { return ReadStaticField<float>("MobilityPerKpa"); }
        float MobilityFloor() const { return ReadStaticField<float>("MobilityFloor"); }
        float GroundKpaMax() const { return ReadStaticField<float>("GroundKpaMax"); }
        float WeightTonnesMax() const { return ReadStaticField<float>("WeightTonnesMax"); }
        float OverPoweredKwPerTonne() const { return ReadStaticField<float>("OverPoweredKwPerTonne"); }
        float HeavyTonnes() const { return ReadStaticField<float>("HeavyTonnes"); }
        float TurretRingCrew3Mm() const { return ReadStaticField<float>("TurretRingCrew3Mm"); }
        float TurretRingCrew2Mm() const { return ReadStaticField<float>("TurretRingCrew2Mm"); }
        float TurretRingFraction() const { return ReadStaticField<float>("TurretRingFraction"); }
        float CasemateRof() const { return ReadStaticField<float>("CasemateRof"); }
        float MuzzleVelocityBase() const { return ReadStaticField<float>("MuzzleVelocityBase"); }
        float ReferenceCalibres() const { return ReadStaticField<float>("ReferenceCalibres"); }
        float CalibresMin() const { return ReadStaticField<float>("CalibresMin"); }
        float CalibresMax() const { return ReadStaticField<float>("CalibresMax"); }
        float PenetrationCalibre() const { return ReadStaticField<float>("PenetrationCalibre"); }
        float PenetrationVelocityRef() const { return ReadStaticField<float>("PenetrationVelocityRef"); }
        float PenetrationVelocityExp() const { return ReadStaticField<float>("PenetrationVelocityExp"); }
        float BarrelCalibresMin() const { return ReadStaticField<float>("BarrelCalibresMin"); }
        float BarrelCalibresWarn() const { return ReadStaticField<float>("BarrelCalibresWarn"); }
        float BaseReliability() const { return ReadStaticField<float>("BaseReliability"); }
        float OverPoweredReliability() const { return ReadStaticField<float>("OverPoweredReliability"); }
        float HeavyReliability() const { return ReadStaticField<float>("HeavyReliability"); }
        float PenetrationRefMm() const { return ReadStaticField<float>("PenetrationRefMm"); }
        float FrontalRefMm() const { return ReadStaticField<float>("FrontalRefMm"); }
        float ScoreExp() const { return ReadStaticField<float>("ScoreExp"); }
        float MobilityExp() const { return ReadStaticField<float>("MobilityExp"); }
        float ReactiveBonus() const { return ReadStaticField<float>("ReactiveBonus"); }
        float ApsBonus() const { return ReadStaticField<float>("ApsBonus"); }
        float ComplexityBase() const { return ReadStaticField<float>("ComplexityBase"); }
        float ComplexityPerExtraPart() const { return ReadStaticField<float>("ComplexityPerExtraPart"); }
        int ComplexityFreeParts() const { return ReadStaticField<int>("ComplexityFreeParts"); }
        float SpeedRefKph() const { return ReadStaticField<float>("SpeedRefKph"); }
        float RawTopAttack() const { return ReadStaticField<float>("RawTopAttack"); }
        float RawTopDefence() const { return ReadStaticField<float>("RawTopDefence"); }
        float TyreWidthFraction() const { return ReadStaticField<float>("TyreWidthFraction"); }
        float WheelContactFraction() const { return ReadStaticField<float>("WheelContactFraction"); }
        float WheelShellMm() const { return ReadStaticField<float>("WheelShellMm"); }
        float WheelKgPerMm3() const { return ReadStaticField<float>("WheelKgPerMm3"); }
        float MobilityWheeledBase() const { return ReadStaticField<float>("MobilityWheeledBase"); }
        float MobilityWheeledPerKpa() const { return ReadStaticField<float>("MobilityWheeledPerKpa"); }
        float MobilityWheeledFloor() const { return ReadStaticField<float>("MobilityWheeledFloor"); }
        float BedKgPerM3() const { return ReadStaticField<float>("BedKgPerM3"); }
        float BodyKgPerM3() const { return ReadStaticField<float>("BodyKgPerM3"); }
        float TransportSpeedExp() const { return ReadStaticField<float>("TransportSpeedExp"); }
        float TransportMobilityExp() const { return ReadStaticField<float>("TransportMobilityExp"); }
        float TransportLoadExp() const { return ReadStaticField<float>("TransportLoadExp"); }
        float TransportReliabilityExp() const { return ReadStaticField<float>("TransportReliabilityExp"); }
        float RawTopTransport() const { return ReadStaticField<float>("RawTopTransport"); }
        void* Kinds() const { return ReadStaticField<void*>("Kinds"); }
    };
}
