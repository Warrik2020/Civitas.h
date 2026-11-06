#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class NationLogisticsSummary : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationLogisticsSummary(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "NationLogisticsSummary") {}
    public:
        int divisions() const { return ReadField<int>("divisions"); }
        void SetDivisions(int value) const { WriteField<int>("divisions", value); }
        int overstretched() const { return ReadField<int>("overstretched"); }
        void SetOverstretched(int value) const { WriteField<int>("overstretched", value); }
        int starving() const { return ReadField<int>("starving"); }
        void SetStarving(int value) const { WriteField<int>("starving", value); }
        int encircled() const { return ReadField<int>("encircled"); }
        void SetEncircled(int value) const { WriteField<int>("encircled", value); }
        float worstPowerMul() const { return ReadField<float>("worstPowerMul"); }
        void SetWorstPowerMul(float value) const { WriteField<float>("worstPowerMul", value); }
        float attritionPerDay() const { return ReadField<float>("attritionPerDay"); }
        void SetAttritionPerDay(float value) const { WriteField<float>("attritionPerDay", value); }
        float strained01() const { return ReadField<float>("strained01"); }
        void SetStrained01(float value) const { WriteField<float>("strained01", value); }
        float meanPowerMul() const { return ReadField<float>("meanPowerMul"); }
        void SetMeanPowerMul(float value) const { WriteField<float>("meanPowerMul", value); }
        void* Empty() const { return ReadStaticField<void*>("Empty"); }
    };
}
