#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerAggressionEvent : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerAggressionEvent(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerAggressionEvent") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int other() const { return ReadField<int>("other"); }
        void other(int value) const { WriteField<int>("other", value); }
        float amount() const { return ReadField<float>("amount"); }
        void amount(float value) const { WriteField<float>("amount", value); }
        int year() const { return ReadField<int>("year"); }
        void year(int value) const { WriteField<int>("year", value); }
    };
}
