#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerUnifyStep : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerUnifyStep(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerUnifyStep") {}
    public:
        void* key() const { return ReadField<void*>("key"); }
        void SetKey(void* value) const { WriteField<void*>("key", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* stretch() const { return ReadField<void*>("stretch"); }
        void SetStretch(void* value) const { WriteField<void*>("stretch", value); }
        void* answers() const { return ReadField<void*>("answers"); }
        void SetAnswers(void* value) const { WriteField<void*>("answers", value); }
        int part() const { return ReadField<int>("part"); }
        void SetPart(int value) const { WriteField<int>("part", value); }
        int pos() const { return ReadField<int>("pos"); }
        void SetPos(int value) const { WriteField<int>("pos", value); }
        bool pair() const { return ReadField<bool>("pair"); }
        void SetPair(bool value) const { WriteField<bool>("pair", value); }
        int months() const { return ReadField<int>("months"); }
        void SetMonths(int value) const { WriteField<int>("months", value); }
        float fee() const { return ReadField<float>("fee"); }
        void SetFee(float value) const { WriteField<float>("fee", value); }
        float ties() const { return ReadField<float>("ties"); }
        void SetTies(float value) const { WriteField<float>("ties", value); }
        int tiesScope() const { return ReadField<int>("tiesScope"); }
        void SetTiesScope(int value) const { WriteField<int>("tiesScope", value); }
        int status() const { return ReadField<int>("status"); }
        void SetStatus(int value) const { WriteField<int>("status", value); }
        float progress() const { return ReadField<float>("progress"); }
        void SetProgress(float value) const { WriteField<float>("progress", value); }
        float paid() const { return ReadField<float>("paid"); }
        void SetPaid(float value) const { WriteField<float>("paid", value); }
        void* effectKeys() const { return ReadField<void*>("effectKeys"); }
        void SetEffectKeys(void* value) const { WriteField<void*>("effectKeys", value); }
        void* effectScopes() const { return ReadField<void*>("effectScopes"); }
        void SetEffectScopes(void* value) const { WriteField<void*>("effectScopes", value); }
        void* effectValues() const { return ReadField<void*>("effectValues"); }
        void SetEffectValues(void* value) const { WriteField<void*>("effectValues", value); }
    };
}
