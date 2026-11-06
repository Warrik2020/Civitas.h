#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class MeleeMeasures : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MeleeMeasures(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "MeleeMeasures") {}
    public:
        int partCount() const { return ReadField<int>("partCount"); }
        void SetPartCount(int value) const { WriteField<int>("partCount", value); }
        float overallLength() const { return ReadField<float>("overallLength"); }
        void SetOverallLength(float value) const { WriteField<float>("overallLength", value); }
        float overallHeight() const { return ReadField<float>("overallHeight"); }
        void SetOverallHeight(float value) const { WriteField<float>("overallHeight", value); }
        float strikeMinX() const { return ReadField<float>("strikeMinX"); }
        void SetStrikeMinX(float value) const { WriteField<float>("strikeMinX", value); }
        float strikeMaxX() const { return ReadField<float>("strikeMaxX"); }
        void SetStrikeMaxX(float value) const { WriteField<float>("strikeMaxX", value); }
        float strikeLength() const { return ReadField<float>("strikeLength"); }
        void SetStrikeLength(float value) const { WriteField<float>("strikeLength", value); }
        float massKg() const { return ReadField<float>("massKg"); }
        void SetMassKg(float value) const { WriteField<float>("massKg", value); }
        float strikeMassKg() const { return ReadField<float>("strikeMassKg"); }
        void SetStrikeMassKg(float value) const { WriteField<float>("strikeMassKg", value); }
        float headMassF() const { return ReadField<float>("headMassF"); }
        void SetHeadMassF(float value) const { WriteField<float>("headMassF", value); }
        float gripX() const { return ReadField<float>("gripX"); }
        void SetGripX(float value) const { WriteField<float>("gripX", value); }
        float comX() const { return ReadField<float>("comX"); }
        void SetComX(float value) const { WriteField<float>("comX", value); }
        float balanceMm() const { return ReadField<float>("balanceMm"); }
        void SetBalanceMm(float value) const { WriteField<float>("balanceMm", value); }
        float inertiaKgM2() const { return ReadField<float>("inertiaKgM2"); }
        void SetInertiaKgM2(float value) const { WriteField<float>("inertiaKgM2", value); }
        float lateralMm() const { return ReadField<float>("lateralMm"); }
        void SetLateralMm(float value) const { WriteField<float>("lateralMm", value); }
        float lateralPartMm() const { return ReadField<float>("lateralPartMm"); }
        void SetLateralPartMm(float value) const { WriteField<float>("lateralPartMm", value); }
        int lateralPart() const { return ReadField<int>("lateralPart"); }
        void SetLateralPart(int value) const { WriteField<int>("lateralPart", value); }
        float pointAngleDeg() const { return ReadField<float>("pointAngleDeg"); }
        void SetPointAngleDeg(float value) const { WriteField<float>("pointAngleDeg", value); }
        float edgeMm() const { return ReadField<float>("edgeMm"); }
        void SetEdgeMm(float value) const { WriteField<float>("edgeMm", value); }
        bool hasBlade() const { return ReadField<bool>("hasBlade"); }
        void SetHasBlade(bool value) const { WriteField<bool>("hasBlade", value); }
        bool hasTang() const { return ReadField<bool>("hasTang"); }
        void SetHasTang(bool value) const { WriteField<bool>("hasTang", value); }
        bool hasGuard() const { return ReadField<bool>("hasGuard"); }
        void SetHasGuard(bool value) const { WriteField<bool>("hasGuard", value); }
        bool hasPommel() const { return ReadField<bool>("hasPommel"); }
        void SetHasPommel(bool value) const { WriteField<bool>("hasPommel", value); }
        bool hasGrip() const { return ReadField<bool>("hasGrip"); }
        void SetHasGrip(bool value) const { WriteField<bool>("hasGrip", value); }
        bool hasShaft() const { return ReadField<bool>("hasShaft"); }
        void SetHasShaft(bool value) const { WriteField<bool>("hasShaft", value); }
        bool hasSpearHead() const { return ReadField<bool>("hasSpearHead"); }
        void SetHasSpearHead(bool value) const { WriteField<bool>("hasSpearHead", value); }
        bool hasAxeHead() const { return ReadField<bool>("hasAxeHead"); }
        void SetHasAxeHead(bool value) const { WriteField<bool>("hasAxeHead", value); }
        bool hasMaceHead() const { return ReadField<bool>("hasMaceHead"); }
        void SetHasMaceHead(bool value) const { WriteField<bool>("hasMaceHead", value); }
        bool hasHook() const { return ReadField<bool>("hasHook"); }
        void SetHasHook(bool value) const { WriteField<bool>("hasHook", value); }
        bool hasSpike() const { return ReadField<bool>("hasSpike"); }
        void SetHasSpike(bool value) const { WriteField<bool>("hasSpike", value); }
        bool hasLanget() const { return ReadField<bool>("hasLanget"); }
        void SetHasLanget(bool value) const { WriteField<bool>("hasLanget", value); }
        bool hasFerrule() const { return ReadField<bool>("hasFerrule"); }
        void SetHasFerrule(bool value) const { WriteField<bool>("hasFerrule", value); }
        bool hasChain() const { return ReadField<bool>("hasChain"); }
        void SetHasChain(bool value) const { WriteField<bool>("hasChain", value); }
        bool strikeSeen() const { return ReadField<bool>("strikeSeen"); }
        void SetStrikeSeen(bool value) const { WriteField<bool>("strikeSeen", value); }
        int strikeMaterial() const { return ReadField<int>("strikeMaterial"); }
        void SetStrikeMaterial(int value) const { WriteField<int>("strikeMaterial", value); }
    };
}
