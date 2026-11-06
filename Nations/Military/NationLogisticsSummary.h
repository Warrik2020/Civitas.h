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
        void divisions(int value) const { WriteField<int>("divisions", value); }
        int overstretched() const { return ReadField<int>("overstretched"); }
        void overstretched(int value) const { WriteField<int>("overstretched", value); }
        int starving() const { return ReadField<int>("starving"); }
        void starving(int value) const { WriteField<int>("starving", value); }
        int encircled() const { return ReadField<int>("encircled"); }
        void encircled(int value) const { WriteField<int>("encircled", value); }
        float worstPowerMul() const { return ReadField<float>("worstPowerMul"); }
        void worstPowerMul(float value) const { WriteField<float>("worstPowerMul", value); }
        float attritionPerDay() const { return ReadField<float>("attritionPerDay"); }
        void attritionPerDay(float value) const { WriteField<float>("attritionPerDay", value); }
        float strained01() const { return ReadField<float>("strained01"); }
        void strained01(float value) const { WriteField<float>("strained01", value); }
        float meanPowerMul() const { return ReadField<float>("meanPowerMul"); }
        void meanPowerMul(float value) const { WriteField<float>("meanPowerMul", value); }
        void* Empty() const { return ReadStaticField<void*>("Empty"); }
    };
}
