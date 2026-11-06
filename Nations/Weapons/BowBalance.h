#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class BowBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BowBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "BowBalance") {}
    public:
        void Check() const { CallStatic("Check", nullptr, 0); }
        void* LimbStore() const { return ReadStaticField<void*>("LimbStore"); }
        void* VirtualMassG() const { return ReadStaticField<void*>("VirtualMassG"); }
        void* LimbReliability() const { return ReadStaticField<void*>("LimbReliability"); }
        void* LimbEffort() const { return ReadStaticField<void*>("LimbEffort"); }
        void* LimbDrawCeilingLbf() const { return ReadStaticField<void*>("LimbDrawCeilingLbf"); }
        void* LathDrawCeilingLbf() const { return ReadStaticField<void*>("LathDrawCeilingLbf"); }
        void* StringMass() const { return ReadStaticField<void*>("StringMass"); }
        void* StringReliability() const { return ReadStaticField<void*>("StringReliability"); }
        void* StringEffort() const { return ReadStaticField<void*>("StringEffort"); }
        void* HeadGrams() const { return ReadStaticField<void*>("HeadGrams"); }
        void* ShaftGramsPerMm() const { return ReadStaticField<void*>("ShaftGramsPerMm"); }
        void* MissilePierce() const { return ReadStaticField<void*>("MissilePierce"); }
        void* MissileRange() const { return ReadStaticField<void*>("MissileRange"); }
        void* MissileEffort() const { return ReadStaticField<void*>("MissileEffort"); }
        void* LooseAccuracy() const { return ReadStaticField<void*>("LooseAccuracy"); }
        void* LooseRate() const { return ReadStaticField<void*>("LooseRate"); }
        void* LooseEffort() const { return ReadStaticField<void*>("LooseEffort"); }
        void* LockAccuracy() const { return ReadStaticField<void*>("LockAccuracy"); }
        void* LockReliability() const { return ReadStaticField<void*>("LockReliability"); }
        void* LockEffort() const { return ReadStaticField<void*>("LockEffort"); }
        void* SpanSeconds() const { return ReadStaticField<void*>("SpanSeconds"); }
        void* SpanGearKg() const { return ReadStaticField<void*>("SpanGearKg"); }
        void* SpanCeilingLbf() const { return ReadStaticField<void*>("SpanCeilingLbf"); }
        void* SpanEffort() const { return ReadStaticField<void*>("SpanEffort"); }
        float SpanReferenceLbf() const { return ReadStaticField<float>("SpanReferenceLbf"); }
        float SpanExponent() const { return ReadStaticField<float>("SpanExponent"); }
        float CrossbowAimSeconds() const { return ReadStaticField<float>("CrossbowAimSeconds"); }
        float BowStartLbf() const { return ReadStaticField<float>("BowStartLbf"); }
        float CrossbowStartLbf() const { return ReadStaticField<float>("CrossbowStartLbf"); }
        float BowMinLbf() const { return ReadStaticField<float>("BowMinLbf"); }
        float BowMaxLbf() const { return ReadStaticField<float>("BowMaxLbf"); }
        float CrossbowMinLbf() const { return ReadStaticField<float>("CrossbowMinLbf"); }
        float CrossbowMaxLbf() const { return ReadStaticField<float>("CrossbowMaxLbf"); }
        float BowBaseRpm() const { return ReadStaticField<float>("BowBaseRpm"); }
        float BowFreeDrawLbf() const { return ReadStaticField<float>("BowFreeDrawLbf"); }
        float BowDrawSpanLbf() const { return ReadStaticField<float>("BowDrawSpanLbf"); }
        float BowRateFloor() const { return ReadStaticField<float>("BowRateFloor"); }
        float BowComfortableLbf() const { return ReadStaticField<float>("BowComfortableLbf"); }
        float BowStrainSpanLbf() const { return ReadStaticField<float>("BowStrainSpanLbf"); }
        float BowStrainAccuracyFloor() const { return ReadStaticField<float>("BowStrainAccuracyFloor"); }
        float BowAccuracyBase() const { return ReadStaticField<float>("BowAccuracyBase"); }
        float CrossbowAccuracyBase() const { return ReadStaticField<float>("CrossbowAccuracyBase"); }
        float SightAccuracy() const { return ReadStaticField<float>("SightAccuracy"); }
        float SightRange() const { return ReadStaticField<float>("SightRange"); }
        float FlightDrag() const { return ReadStaticField<float>("FlightDrag"); }
        float BowEffectiveFrac() const { return ReadStaticField<float>("BowEffectiveFrac"); }
        float CrossbowEffectiveFrac() const { return ReadStaticField<float>("CrossbowEffectiveFrac"); }
        float Gravity() const { return ReadStaticField<float>("Gravity"); }
        float DefaultDrawMm() const { return ReadStaticField<float>("DefaultDrawMm"); }
        float MaxDrawOfSpan() const { return ReadStaticField<float>("MaxDrawOfSpan"); }
        float MinDrawMm() const { return ReadStaticField<float>("MinDrawMm"); }
        float MaxDrawMm() const { return ReadStaticField<float>("MaxDrawMm"); }
        float DefaultStrokeMm() const { return ReadStaticField<float>("DefaultStrokeMm"); }
        float MinStrokeMm() const { return ReadStaticField<float>("MinStrokeMm"); }
        float MaxStrokeMm() const { return ReadStaticField<float>("MaxStrokeMm"); }
        float BowMinSpanMm() const { return ReadStaticField<float>("BowMinSpanMm"); }
        float BowMaxSpanMm() const { return ReadStaticField<float>("BowMaxSpanMm"); }
        float CrossbowMinSpanMm() const { return ReadStaticField<float>("CrossbowMinSpanMm"); }
        float CrossbowMaxSpanMm() const { return ReadStaticField<float>("CrossbowMaxSpanMm"); }
        int FreePartCount() const { return ReadStaticField<int>("FreePartCount"); }
        float ExtraPartReliability() const { return ReadStaticField<float>("ExtraPartReliability"); }
        float ComplexityPerExtraPart() const { return ReadStaticField<float>("ComplexityPerExtraPart"); }
    };
}
