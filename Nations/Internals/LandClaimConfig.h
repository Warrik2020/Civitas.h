#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LandClaimConfig : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LandClaimConfig(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LandClaimConfig") {}
    public:
        float peopleShareMin() const { return ReadField<float>("peopleShareMin"); }
        void peopleShareMin(float value) const { WriteField<float>("peopleShareMin", value); }
        float majorityShareMin() const { return ReadField<float>("majorityShareMin"); }
        void majorityShareMin(float value) const { WriteField<float>("majorityShareMin", value); }
        float costDaysReal() const { return ReadField<float>("costDaysReal"); }
        void costDaysReal(float value) const { WriteField<float>("costDaysReal", value); }
        float costDaysFrontier() const { return ReadField<float>("costDaysFrontier"); }
        void costDaysFrontier(float value) const { WriteField<float>("costDaysFrontier", value); }
        float costDaysFabricated() const { return ReadField<float>("costDaysFabricated"); }
        void costDaysFabricated(float value) const { WriteField<float>("costDaysFabricated", value); }
        float matureYearsReal() const { return ReadField<float>("matureYearsReal"); }
        void matureYearsReal(float value) const { WriteField<float>("matureYearsReal", value); }
        float matureYearsFrontier() const { return ReadField<float>("matureYearsFrontier"); }
        void matureYearsFrontier(float value) const { WriteField<float>("matureYearsFrontier", value); }
        float matureYearsFabricated() const { return ReadField<float>("matureYearsFabricated"); }
        void matureYearsFabricated(float value) const { WriteField<float>("matureYearsFabricated", value); }
        float aggressionReal() const { return ReadField<float>("aggressionReal"); }
        void aggressionReal(float value) const { WriteField<float>("aggressionReal", value); }
        float aggressionFabricated() const { return ReadField<float>("aggressionFabricated"); }
        void aggressionFabricated(float value) const { WriteField<float>("aggressionFabricated", value); }
        float opinionReal() const { return ReadField<float>("opinionReal"); }
        void opinionReal(float value) const { WriteField<float>("opinionReal", value); }
        float opinionFabricated() const { return ReadField<float>("opinionFabricated"); }
        void opinionFabricated(float value) const { WriteField<float>("opinionFabricated", value); }
        float opinionCap() const { return ReadField<float>("opinionCap"); }
        void opinionCap(float value) const { WriteField<float>("opinionCap", value); }
        int maxClaims() const { return ReadField<int>("maxClaims"); }
        void maxClaims(int value) const { WriteField<int>("maxClaims", value); }
        float peaceValueMul() const { return ReadField<float>("peaceValueMul"); }
        void peaceValueMul(float value) const { WriteField<float>("peaceValueMul", value); }
        int textMax() const { return ReadField<int>("textMax"); }
        void textMax(int value) const { WriteField<int>("textMax", value); }
    };
}
