#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class ArtilleryBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArtilleryBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "ArtilleryBalance") {}
    public:
        void Check() const { CallStatic("Check", nullptr, 0); }
        void* SkeinJPerLitre() const { return ReadStaticField<void*>("SkeinJPerLitre"); }
        void* CounterweightEfficiency() const { return ReadStaticField<void*>("CounterweightEfficiency"); }
        void* PowerEffort() const { return ReadStaticField<void*>("PowerEffort"); }
        void* FrameAccuracy() const { return ReadStaticField<void*>("FrameAccuracy"); }
        void* FrameReliability() const { return ReadStaticField<void*>("FrameReliability"); }
        void* FrameEffort() const { return ReadStaticField<void*>("FrameEffort"); }
        void* MissileAccuracy() const { return ReadStaticField<void*>("MissileAccuracy"); }
        void* MissileMassMul() const { return ReadStaticField<void*>("MissileMassMul"); }
        void* MissileBlastM() const { return ReadStaticField<void*>("MissileBlastM"); }
        void* MissileEffort() const { return ReadStaticField<void*>("MissileEffort"); }
        void* TubePressure() const { return ReadStaticField<void*>("TubePressure"); }
        void* TubeRange() const { return ReadStaticField<void*>("TubeRange"); }
        void* TubeAccuracy() const { return ReadStaticField<void*>("TubeAccuracy"); }
        void* TubeReliability() const { return ReadStaticField<void*>("TubeReliability"); }
        void* TubeEffort() const { return ReadStaticField<void*>("TubeEffort"); }
        float WallPerCalibre() const { return ReadStaticField<float>("WallPerCalibre"); }
        void* RecoilRof() const { return ReadStaticField<void*>("RecoilRof"); }
        void* RecoilAccuracy() const { return ReadStaticField<void*>("RecoilAccuracy"); }
        void* RecoilEffort() const { return ReadStaticField<void*>("RecoilEffort"); }
        void* ShellMassMul() const { return ReadStaticField<void*>("ShellMassMul"); }
        void* ShellBlastPerKg() const { return ReadStaticField<void*>("ShellBlastPerKg"); }
        void* ShellRange() const { return ReadStaticField<void*>("ShellRange"); }
        void* ShellAccuracy() const { return ReadStaticField<void*>("ShellAccuracy"); }
        void* ShellEffort() const { return ReadStaticField<void*>("ShellEffort"); }
        void* LayingAccuracy() const { return ReadStaticField<void*>("LayingAccuracy"); }
        void* LayingRange() const { return ReadStaticField<void*>("LayingRange"); }
        void* LayingEffort() const { return ReadStaticField<void*>("LayingEffort"); }
        void* PropellantVelocity() const { return ReadStaticField<void*>("PropellantVelocity"); }
        float IronKgPerMm3() const { return ReadStaticField<float>("IronKgPerMm3"); }
        float StoneKgPerMm3() const { return ReadStaticField<float>("StoneKgPerMm3"); }
        float SphereFraction() const { return ReadStaticField<float>("SphereFraction"); }
        float CalibreMin() const { return ReadStaticField<float>("CalibreMin"); }
        float CalibreMax() const { return ReadStaticField<float>("CalibreMax"); }
        float ReferenceCalibres() const { return ReadStaticField<float>("ReferenceCalibres"); }
        float CalibresMin() const { return ReadStaticField<float>("CalibresMin"); }
        float CalibresMax() const { return ReadStaticField<float>("CalibresMax"); }
        float TubeCalibresMin() const { return ReadStaticField<float>("TubeCalibresMin"); }
        float HowitzerVelocity() const { return ReadStaticField<float>("HowitzerVelocity"); }
        float HowitzerRange() const { return ReadStaticField<float>("HowitzerRange"); }
        float RangeFactor() const { return ReadStaticField<float>("RangeFactor"); }
        float RangeMinM() const { return ReadStaticField<float>("RangeMinM"); }
        float RangeMaxM() const { return ReadStaticField<float>("RangeMaxM"); }
        float MuzzleRof() const { return ReadStaticField<float>("MuzzleRof"); }
        float BreechRof() const { return ReadStaticField<float>("BreechRof"); }
        float RofShellRefKg() const { return ReadStaticField<float>("RofShellRefKg"); }
        float BaseReliability() const { return ReadStaticField<float>("BaseReliability"); }
        float ComplexityBase() const { return ReadStaticField<float>("ComplexityBase"); }
        float BreechComplexity() const { return ReadStaticField<float>("BreechComplexity"); }
        float ComplexityPerExtraPart() const { return ReadStaticField<float>("ComplexityPerExtraPart"); }
        int ComplexityFreeParts() const { return ReadStaticField<int>("ComplexityFreeParts"); }
        float CrewKgPerMan() const { return ReadStaticField<float>("CrewKgPerMan"); }
        int CrewMin() const { return ReadStaticField<int>("CrewMin"); }
        int CrewMax() const { return ReadStaticField<int>("CrewMax"); }
        float TowKphRef() const { return ReadStaticField<float>("TowKphRef"); }
        float TowRefKg() const { return ReadStaticField<float>("TowRefKg"); }
        float TowKphMin() const { return ReadStaticField<float>("TowKphMin"); }
        float TowKphMax() const { return ReadStaticField<float>("TowKphMax"); }
        float EmplacedKph() const { return ReadStaticField<float>("EmplacedKph"); }
        float DropPerArm() const { return ReadStaticField<float>("DropPerArm"); }
        float SkeinEfficiency() const { return ReadStaticField<float>("SkeinEfficiency"); }
        float SlingRange() const { return ReadStaticField<float>("SlingRange"); }
        float EngineVelocityMs() const { return ReadStaticField<float>("EngineVelocityMs"); }
        float EngineMissileKgMax() const { return ReadStaticField<float>("EngineMissileKgMax"); }
        float EngineRangeMaxM() const { return ReadStaticField<float>("EngineRangeMaxM"); }
        float CatapultRof() const { return ReadStaticField<float>("CatapultRof"); }
        float TrebuchetRof() const { return ReadStaticField<float>("TrebuchetRof"); }
        float EngineComplexityBase() const { return ReadStaticField<float>("EngineComplexityBase"); }
        float BlastRefM() const { return ReadStaticField<float>("BlastRefM"); }
        float EffectExp() const { return ReadStaticField<float>("EffectExp"); }
        float RofExp() const { return ReadStaticField<float>("RofExp"); }
        float RangeRefM() const { return ReadStaticField<float>("RangeRefM"); }
        float RangeExp() const { return ReadStaticField<float>("RangeExp"); }
        float AccuracyExp() const { return ReadStaticField<float>("AccuracyExp"); }
        float ReliabilityExp() const { return ReadStaticField<float>("ReliabilityExp"); }
    };
}
