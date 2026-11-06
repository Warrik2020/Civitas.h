#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyStep : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyStep(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyStep") {}
    public:
        void* key() const { return ReadField<void*>("key"); }
        void key(void* value) const { WriteField<void*>("key", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        int part() const { return ReadField<int>("part"); }
        void part(int value) const { WriteField<int>("part", value); }
        void* stretch() const { return ReadField<void*>("stretch"); }
        void stretch(void* value) const { WriteField<void*>("stretch", value); }
        int pos() const { return ReadField<int>("pos"); }
        void pos(int value) const { WriteField<int>("pos", value); }
        bool pair() const { return ReadField<bool>("pair"); }
        void pair(bool value) const { WriteField<bool>("pair", value); }
        int months() const { return ReadField<int>("months"); }
        void months(int value) const { WriteField<int>("months", value); }
        float fee() const { return ReadField<float>("fee"); }
        void fee(float value) const { WriteField<float>("fee", value); }
        float ties() const { return ReadField<float>("ties"); }
        void ties(float value) const { WriteField<float>("ties", value); }
        int tiesScope() const { return ReadField<int>("tiesScope"); }
        void tiesScope(int value) const { WriteField<int>("tiesScope", value); }
        void* effects() const { return ReadField<void*>("effects"); }
        void effects(void* value) const { WriteField<void*>("effects", value); }
        int status() const { return ReadField<int>("status"); }
        void status(int value) const { WriteField<int>("status", value); }
        float progress() const { return ReadField<float>("progress"); }
        void progress(float value) const { WriteField<float>("progress", value); }
        float paid() const { return ReadField<float>("paid"); }
        void paid(float value) const { WriteField<float>("paid", value); }
        void* answers() const { return ReadField<void*>("answers"); }
        void answers(void* value) const { WriteField<void*>("answers", value); }
    };
}
