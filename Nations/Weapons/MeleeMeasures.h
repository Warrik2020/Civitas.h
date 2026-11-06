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
        void partCount(int value) const { WriteField<int>("partCount", value); }
        float overallLength() const { return ReadField<float>("overallLength"); }
        void overallLength(float value) const { WriteField<float>("overallLength", value); }
        float overallHeight() const { return ReadField<float>("overallHeight"); }
        void overallHeight(float value) const { WriteField<float>("overallHeight", value); }
        float strikeMinX() const { return ReadField<float>("strikeMinX"); }
        void strikeMinX(float value) const { WriteField<float>("strikeMinX", value); }
        float strikeMaxX() const { return ReadField<float>("strikeMaxX"); }
        void strikeMaxX(float value) const { WriteField<float>("strikeMaxX", value); }
        float strikeLength() const { return ReadField<float>("strikeLength"); }
        void strikeLength(float value) const { WriteField<float>("strikeLength", value); }
        float massKg() const { return ReadField<float>("massKg"); }
        void massKg(float value) const { WriteField<float>("massKg", value); }
        float strikeMassKg() const { return ReadField<float>("strikeMassKg"); }
        void strikeMassKg(float value) const { WriteField<float>("strikeMassKg", value); }
        float headMassF() const { return ReadField<float>("headMassF"); }
        void headMassF(float value) const { WriteField<float>("headMassF", value); }
        float gripX() const { return ReadField<float>("gripX"); }
        void gripX(float value) const { WriteField<float>("gripX", value); }
        float comX() const { return ReadField<float>("comX"); }
        void comX(float value) const { WriteField<float>("comX", value); }
        float balanceMm() const { return ReadField<float>("balanceMm"); }
        void balanceMm(float value) const { WriteField<float>("balanceMm", value); }
        float inertiaKgM2() const { return ReadField<float>("inertiaKgM2"); }
        void inertiaKgM2(float value) const { WriteField<float>("inertiaKgM2", value); }
        float lateralMm() const { return ReadField<float>("lateralMm"); }
        void lateralMm(float value) const { WriteField<float>("lateralMm", value); }
        float lateralPartMm() const { return ReadField<float>("lateralPartMm"); }
        void lateralPartMm(float value) const { WriteField<float>("lateralPartMm", value); }
        int lateralPart() const { return ReadField<int>("lateralPart"); }
        void lateralPart(int value) const { WriteField<int>("lateralPart", value); }
        float pointAngleDeg() const { return ReadField<float>("pointAngleDeg"); }
        void pointAngleDeg(float value) const { WriteField<float>("pointAngleDeg", value); }
        float edgeMm() const { return ReadField<float>("edgeMm"); }
        void edgeMm(float value) const { WriteField<float>("edgeMm", value); }
        bool hasBlade() const { return ReadField<bool>("hasBlade"); }
        void hasBlade(bool value) const { WriteField<bool>("hasBlade", value); }
        bool hasTang() const { return ReadField<bool>("hasTang"); }
        void hasTang(bool value) const { WriteField<bool>("hasTang", value); }
        bool hasGuard() const { return ReadField<bool>("hasGuard"); }
        void hasGuard(bool value) const { WriteField<bool>("hasGuard", value); }
        bool hasPommel() const { return ReadField<bool>("hasPommel"); }
        void hasPommel(bool value) const { WriteField<bool>("hasPommel", value); }
        bool hasGrip() const { return ReadField<bool>("hasGrip"); }
        void hasGrip(bool value) const { WriteField<bool>("hasGrip", value); }
        bool hasShaft() const { return ReadField<bool>("hasShaft"); }
        void hasShaft(bool value) const { WriteField<bool>("hasShaft", value); }
        bool hasSpearHead() const { return ReadField<bool>("hasSpearHead"); }
        void hasSpearHead(bool value) const { WriteField<bool>("hasSpearHead", value); }
        bool hasAxeHead() const { return ReadField<bool>("hasAxeHead"); }
        void hasAxeHead(bool value) const { WriteField<bool>("hasAxeHead", value); }
        bool hasMaceHead() const { return ReadField<bool>("hasMaceHead"); }
        void hasMaceHead(bool value) const { WriteField<bool>("hasMaceHead", value); }
        bool hasHook() const { return ReadField<bool>("hasHook"); }
        void hasHook(bool value) const { WriteField<bool>("hasHook", value); }
        bool hasSpike() const { return ReadField<bool>("hasSpike"); }
        void hasSpike(bool value) const { WriteField<bool>("hasSpike", value); }
        bool hasLanget() const { return ReadField<bool>("hasLanget"); }
        void hasLanget(bool value) const { WriteField<bool>("hasLanget", value); }
        bool hasFerrule() const { return ReadField<bool>("hasFerrule"); }
        void hasFerrule(bool value) const { WriteField<bool>("hasFerrule", value); }
        bool hasChain() const { return ReadField<bool>("hasChain"); }
        void hasChain(bool value) const { WriteField<bool>("hasChain", value); }
        bool strikeSeen() const { return ReadField<bool>("strikeSeen"); }
        void strikeSeen(bool value) const { WriteField<bool>("strikeSeen", value); }
        int strikeMaterial() const { return ReadField<int>("strikeMaterial"); }
        void strikeMaterial(int value) const { WriteField<int>("strikeMaterial", value); }
    };
}
