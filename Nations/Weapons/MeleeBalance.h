#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class MeleeBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MeleeBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "MeleeBalance") {}
    public:
        void Check() const { CallStatic("Check", nullptr, 0); }
        void* EdgeHold() const { return ReadStaticField<void*>("EdgeHold"); }
        void* Hardness() const { return ReadStaticField<void*>("Hardness"); }
        void* Toughness() const { return ReadStaticField<void*>("Toughness"); }
        void* ConstructionDurability() const { return ReadStaticField<void*>("ConstructionDurability"); }
        void* ConstructionEffort() const { return ReadStaticField<void*>("ConstructionEffort"); }
        void* ConstructionFinish() const { return ReadStaticField<void*>("ConstructionFinish"); }
        void* HardeningCut() const { return ReadStaticField<void*>("HardeningCut"); }
        void* HardeningDurability() const { return ReadStaticField<void*>("HardeningDurability"); }
        void* HardeningEffort() const { return ReadStaticField<void*>("HardeningEffort"); }
        void* EdgeCut() const { return ReadStaticField<void*>("EdgeCut"); }
        void* EdgeEffort() const { return ReadStaticField<void*>("EdgeEffort"); }
        void* GripAgility() const { return ReadStaticField<void*>("GripAgility"); }
        void* GripDurability() const { return ReadStaticField<void*>("GripDurability"); }
        void* GripEffort() const { return ReadStaticField<void*>("GripEffort"); }
        void* Kinds() const { return ReadStaticField<void*>("Kinds"); }
        float SwingBaseRadPerS() const { return ReadStaticField<float>("SwingBaseRadPerS"); }
        float SwingInertiaKgM2() const { return ReadStaticField<float>("SwingInertiaKgM2"); }
        float ThrustSpeedMps() const { return ReadStaticField<float>("ThrustSpeedMps"); }
        float TwoHandThrust() const { return ReadStaticField<float>("TwoHandThrust"); }
        float ThrustArmKg() const { return ReadStaticField<float>("ThrustArmKg"); }
        float ReachStartMm() const { return ReadStaticField<float>("ReachStartMm"); }
        float ReachSpanMm() const { return ReadStaticField<float>("ReachSpanMm"); }
        float ReachExp() const { return ReadStaticField<float>("ReachExp"); }
        float CutJ() const { return ReadStaticField<float>("CutJ"); }
        float ThrustJ() const { return ReadStaticField<float>("ThrustJ"); }
        float BluntJ() const { return ReadStaticField<float>("BluntJ"); }
        float EdgeRefMm() const { return ReadStaticField<float>("EdgeRefMm"); }
        float EdgeExp() const { return ReadStaticField<float>("EdgeExp"); }
        float PointFullDeg() const { return ReadStaticField<float>("PointFullDeg"); }
        float PointSpanDeg() const { return ReadStaticField<float>("PointSpanDeg"); }
        float PointFloor() const { return ReadStaticField<float>("PointFloor"); }
        float AgilityInertiaFree() const { return ReadStaticField<float>("AgilityInertiaFree"); }
        float AgilityInertiaSpan() const { return ReadStaticField<float>("AgilityInertiaSpan"); }
        float AgilityFloor() const { return ReadStaticField<float>("AgilityFloor"); }
        float BalanceSpanMm() const { return ReadStaticField<float>("BalanceSpanMm"); }
        float BalancePenalty() const { return ReadStaticField<float>("BalancePenalty"); }
        float NoTangDurability() const { return ReadStaticField<float>("NoTangDurability"); }
        float LangetDurability() const { return ReadStaticField<float>("LangetDurability"); }
        float DurabilityExp() const { return ReadStaticField<float>("DurabilityExp"); }
        float StoneMaxStrikeMm() const { return ReadStaticField<float>("StoneMaxStrikeMm"); }
        float SpikelessBlunt() const { return ReadStaticField<float>("SpikelessBlunt"); }
        float CutPiercing() const { return ReadStaticField<float>("CutPiercing"); }
        float ComplexityPerExtraPart() const { return ReadStaticField<float>("ComplexityPerExtraPart"); }
        int ComplexityFreeParts() const { return ReadStaticField<int>("ComplexityFreeParts"); }
        float RawTopMelee() const { return ReadStaticField<float>("RawTopMelee"); }
    };
}
