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
        void id(void* value) const { WriteField<void*>("id", value); }
        void* file() const { return ReadField<void*>("file"); }
        void file(void* value) const { WriteField<void*>("file", value); }
        int line() const { return ReadField<int>("line"); }
        void line(int value) const { WriteField<int>("line", value); }
        int part() const { return ReadField<int>("part"); }
        void part(int value) const { WriteField<int>("part", value); }
        int row() const { return ReadField<int>("row"); }
        void row(int value) const { WriteField<int>("row", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        int monthsMin() const { return ReadField<int>("monthsMin"); }
        void monthsMin(int value) const { WriteField<int>("monthsMin", value); }
        int monthsMax() const { return ReadField<int>("monthsMax"); }
        void monthsMax(int value) const { WriteField<int>("monthsMax", value); }
        float fee() const { return ReadField<float>("fee"); }
        void fee(float value) const { WriteField<float>("fee", value); }
        float tiesMin() const { return ReadField<float>("tiesMin"); }
        void tiesMin(float value) const { WriteField<float>("tiesMin", value); }
        float tiesMax() const { return ReadField<float>("tiesMax"); }
        void tiesMax(float value) const { WriteField<float>("tiesMax", value); }
        int tiesScope() const { return ReadField<int>("tiesScope"); }
        void tiesScope(int value) const { WriteField<int>("tiesScope", value); }
        float weight() const { return ReadField<float>("weight"); }
        void weight(float value) const { WriteField<float>("weight", value); }
        int gainsMin() const { return ReadField<int>("gainsMin"); }
        void gainsMin(int value) const { WriteField<int>("gainsMin", value); }
        int gainsMax() const { return ReadField<int>("gainsMax"); }
        void gainsMax(int value) const { WriteField<int>("gainsMax", value); }
        int costsMin() const { return ReadField<int>("costsMin"); }
        void costsMin(int value) const { WriteField<int>("costsMin", value); }
        int costsMax() const { return ReadField<int>("costsMax"); }
        void costsMax(int value) const { WriteField<int>("costsMax", value); }
        void* when() const { return ReadField<void*>("when"); }
        void* require() const { return ReadField<void*>("require"); }
        void* gains() const { return ReadField<void*>("gains"); }
        void* costs() const { return ReadField<void*>("costs"); }
        void* actions() const { return ReadField<void*>("actions"); }
    };
}
