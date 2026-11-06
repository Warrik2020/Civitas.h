#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class BowMeasures : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BowMeasures(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "BowMeasures") {}
    public:
        int partCount() const { return ReadField<int>("partCount"); }
        void partCount(int value) const { WriteField<int>("partCount", value); }
        int limbCount() const { return ReadField<int>("limbCount"); }
        void limbCount(int value) const { WriteField<int>("limbCount", value); }
        float spanMm() const { return ReadField<float>("spanMm"); }
        void spanMm(float value) const { WriteField<float>("spanMm", value); }
        float strokeMm() const { return ReadField<float>("strokeMm"); }
        void strokeMm(float value) const { WriteField<float>("strokeMm", value); }
        float missileLengthMm() const { return ReadField<float>("missileLengthMm"); }
        void missileLengthMm(float value) const { WriteField<float>("missileLengthMm", value); }
        float missileMassG() const { return ReadField<float>("missileMassG"); }
        void missileMassG(float value) const { WriteField<float>("missileMassG", value); }
        float overallLength() const { return ReadField<float>("overallLength"); }
        void overallLength(float value) const { WriteField<float>("overallLength", value); }
        float overallHeight() const { return ReadField<float>("overallHeight"); }
        void overallHeight(float value) const { WriteField<float>("overallHeight", value); }
        float weightKg() const { return ReadField<float>("weightKg"); }
        void weightKg(float value) const { WriteField<float>("weightKg", value); }
        bool hasLimb() const { return ReadField<bool>("hasLimb"); }
        void hasLimb(bool value) const { WriteField<bool>("hasLimb", value); }
        bool hasRiser() const { return ReadField<bool>("hasRiser"); }
        void hasRiser(bool value) const { WriteField<bool>("hasRiser", value); }
        bool hasString() const { return ReadField<bool>("hasString"); }
        void hasString(bool value) const { WriteField<bool>("hasString", value); }
        bool hasMissile() const { return ReadField<bool>("hasMissile"); }
        void hasMissile(bool value) const { WriteField<bool>("hasMissile", value); }
        bool hasLath() const { return ReadField<bool>("hasLath"); }
        void hasLath(bool value) const { WriteField<bool>("hasLath", value); }
        bool hasTiller() const { return ReadField<bool>("hasTiller"); }
        void hasTiller(bool value) const { WriteField<bool>("hasTiller", value); }
        bool hasNut() const { return ReadField<bool>("hasNut"); }
        void hasNut(bool value) const { WriteField<bool>("hasNut", value); }
        bool hasTrigger() const { return ReadField<bool>("hasTrigger"); }
        void hasTrigger(bool value) const { WriteField<bool>("hasTrigger", value); }
        bool hasStirrup() const { return ReadField<bool>("hasStirrup"); }
        void hasStirrup(bool value) const { WriteField<bool>("hasStirrup", value); }
        bool hasSpanner() const { return ReadField<bool>("hasSpanner"); }
        void hasSpanner(bool value) const { WriteField<bool>("hasSpanner", value); }
        bool hasSight() const { return ReadField<bool>("hasSight"); }
        void hasSight(bool value) const { WriteField<bool>("hasSight", value); }
        int limbMaterial() const { return ReadField<int>("limbMaterial"); }
        void limbMaterial(int value) const { WriteField<int>("limbMaterial", value); }
        bool stringSeen() const { return ReadField<bool>("stringSeen"); }
        void stringSeen(bool value) const { WriteField<bool>("stringSeen", value); }
    };
}
