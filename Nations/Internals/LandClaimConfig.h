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
        void SetPeopleShareMin(float value) const { WriteField<float>("peopleShareMin", value); }
        float majorityShareMin() const { return ReadField<float>("majorityShareMin"); }
        void SetMajorityShareMin(float value) const { WriteField<float>("majorityShareMin", value); }
        float costDaysReal() const { return ReadField<float>("costDaysReal"); }
        void SetCostDaysReal(float value) const { WriteField<float>("costDaysReal", value); }
        float costDaysFrontier() const { return ReadField<float>("costDaysFrontier"); }
        void SetCostDaysFrontier(float value) const { WriteField<float>("costDaysFrontier", value); }
        float costDaysFabricated() const { return ReadField<float>("costDaysFabricated"); }
        void SetCostDaysFabricated(float value) const { WriteField<float>("costDaysFabricated", value); }
        float matureYearsReal() const { return ReadField<float>("matureYearsReal"); }
        void SetMatureYearsReal(float value) const { WriteField<float>("matureYearsReal", value); }
        float matureYearsFrontier() const { return ReadField<float>("matureYearsFrontier"); }
        void SetMatureYearsFrontier(float value) const { WriteField<float>("matureYearsFrontier", value); }
        float matureYearsFabricated() const { return ReadField<float>("matureYearsFabricated"); }
        void SetMatureYearsFabricated(float value) const { WriteField<float>("matureYearsFabricated", value); }
        float aggressionReal() const { return ReadField<float>("aggressionReal"); }
        void SetAggressionReal(float value) const { WriteField<float>("aggressionReal", value); }
        float aggressionFabricated() const { return ReadField<float>("aggressionFabricated"); }
        void SetAggressionFabricated(float value) const { WriteField<float>("aggressionFabricated", value); }
        float opinionReal() const { return ReadField<float>("opinionReal"); }
        void SetOpinionReal(float value) const { WriteField<float>("opinionReal", value); }
        float opinionFabricated() const { return ReadField<float>("opinionFabricated"); }
        void SetOpinionFabricated(float value) const { WriteField<float>("opinionFabricated", value); }
        float opinionCap() const { return ReadField<float>("opinionCap"); }
        void SetOpinionCap(float value) const { WriteField<float>("opinionCap", value); }
        int maxClaims() const { return ReadField<int>("maxClaims"); }
        void SetMaxClaims(int value) const { WriteField<int>("maxClaims", value); }
        float peaceValueMul() const { return ReadField<float>("peaceValueMul"); }
        void SetPeaceValueMul(float value) const { WriteField<float>("peaceValueMul", value); }
        int textMax() const { return ReadField<int>("textMax"); }
        void SetTextMax(int value) const { WriteField<int>("textMax", value); }
    };
}
