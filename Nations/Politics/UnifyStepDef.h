#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyStepDef : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyStepDef(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyStepDef") {}
    public:
        void* id() const { return ReadField<void*>("id"); }
        void SetId(void* value) const { WriteField<void*>("id", value); }
        void* file() const { return ReadField<void*>("file"); }
        void SetFile(void* value) const { WriteField<void*>("file", value); }
        int line() const { return ReadField<int>("line"); }
        void SetLine(int value) const { WriteField<int>("line", value); }
        int part() const { return ReadField<int>("part"); }
        void SetPart(int value) const { WriteField<int>("part", value); }
        int row() const { return ReadField<int>("row"); }
        void SetRow(int value) const { WriteField<int>("row", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        int monthsMin() const { return ReadField<int>("monthsMin"); }
        void SetMonthsMin(int value) const { WriteField<int>("monthsMin", value); }
        int monthsMax() const { return ReadField<int>("monthsMax"); }
        void SetMonthsMax(int value) const { WriteField<int>("monthsMax", value); }
        float fee() const { return ReadField<float>("fee"); }
        void SetFee(float value) const { WriteField<float>("fee", value); }
        float tiesMin() const { return ReadField<float>("tiesMin"); }
        void SetTiesMin(float value) const { WriteField<float>("tiesMin", value); }
        float tiesMax() const { return ReadField<float>("tiesMax"); }
        void SetTiesMax(float value) const { WriteField<float>("tiesMax", value); }
        int tiesScope() const { return ReadField<int>("tiesScope"); }
        void SetTiesScope(int value) const { WriteField<int>("tiesScope", value); }
        float weight() const { return ReadField<float>("weight"); }
        void SetWeight(float value) const { WriteField<float>("weight", value); }
        int gainsMin() const { return ReadField<int>("gainsMin"); }
        void SetGainsMin(int value) const { WriteField<int>("gainsMin", value); }
        int gainsMax() const { return ReadField<int>("gainsMax"); }
        void SetGainsMax(int value) const { WriteField<int>("gainsMax", value); }
        int costsMin() const { return ReadField<int>("costsMin"); }
        void SetCostsMin(int value) const { WriteField<int>("costsMin", value); }
        int costsMax() const { return ReadField<int>("costsMax"); }
        void SetCostsMax(int value) const { WriteField<int>("costsMax", value); }
        void* when() const { return ReadField<void*>("when"); }
        void* require() const { return ReadField<void*>("require"); }
        void* gains() const { return ReadField<void*>("gains"); }
        void* costs() const { return ReadField<void*>("costs"); }
        void* actions() const { return ReadField<void*>("actions"); }
    };
}
