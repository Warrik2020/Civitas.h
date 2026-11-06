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
        void SetPartCount(int value) const { WriteField<int>("partCount", value); }
        int limbCount() const { return ReadField<int>("limbCount"); }
        void SetLimbCount(int value) const { WriteField<int>("limbCount", value); }
        float spanMm() const { return ReadField<float>("spanMm"); }
        void SetSpanMm(float value) const { WriteField<float>("spanMm", value); }
        float strokeMm() const { return ReadField<float>("strokeMm"); }
        void SetStrokeMm(float value) const { WriteField<float>("strokeMm", value); }
        float missileLengthMm() const { return ReadField<float>("missileLengthMm"); }
        void SetMissileLengthMm(float value) const { WriteField<float>("missileLengthMm", value); }
        float missileMassG() const { return ReadField<float>("missileMassG"); }
        void SetMissileMassG(float value) const { WriteField<float>("missileMassG", value); }
        float overallLength() const { return ReadField<float>("overallLength"); }
        void SetOverallLength(float value) const { WriteField<float>("overallLength", value); }
        float overallHeight() const { return ReadField<float>("overallHeight"); }
        void SetOverallHeight(float value) const { WriteField<float>("overallHeight", value); }
        float weightKg() const { return ReadField<float>("weightKg"); }
        void SetWeightKg(float value) const { WriteField<float>("weightKg", value); }
        bool hasLimb() const { return ReadField<bool>("hasLimb"); }
        void SetHasLimb(bool value) const { WriteField<bool>("hasLimb", value); }
        bool hasRiser() const { return ReadField<bool>("hasRiser"); }
        void SetHasRiser(bool value) const { WriteField<bool>("hasRiser", value); }
        bool hasString() const { return ReadField<bool>("hasString"); }
        void SetHasString(bool value) const { WriteField<bool>("hasString", value); }
        bool hasMissile() const { return ReadField<bool>("hasMissile"); }
        void SetHasMissile(bool value) const { WriteField<bool>("hasMissile", value); }
        bool hasLath() const { return ReadField<bool>("hasLath"); }
        void SetHasLath(bool value) const { WriteField<bool>("hasLath", value); }
        bool hasTiller() const { return ReadField<bool>("hasTiller"); }
        void SetHasTiller(bool value) const { WriteField<bool>("hasTiller", value); }
        bool hasNut() const { return ReadField<bool>("hasNut"); }
        void SetHasNut(bool value) const { WriteField<bool>("hasNut", value); }
        bool hasTrigger() const { return ReadField<bool>("hasTrigger"); }
        void SetHasTrigger(bool value) const { WriteField<bool>("hasTrigger", value); }
        bool hasStirrup() const { return ReadField<bool>("hasStirrup"); }
        void SetHasStirrup(bool value) const { WriteField<bool>("hasStirrup", value); }
        bool hasSpanner() const { return ReadField<bool>("hasSpanner"); }
        void SetHasSpanner(bool value) const { WriteField<bool>("hasSpanner", value); }
        bool hasSight() const { return ReadField<bool>("hasSight"); }
        void SetHasSight(bool value) const { WriteField<bool>("hasSight", value); }
        int limbMaterial() const { return ReadField<int>("limbMaterial"); }
        void SetLimbMaterial(int value) const { WriteField<int>("limbMaterial", value); }
        bool stringSeen() const { return ReadField<bool>("stringSeen"); }
        void SetStringSeen(bool value) const { WriteField<bool>("stringSeen", value); }
    };
}
