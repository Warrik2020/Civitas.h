#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AggressionEvent : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AggressionEvent(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AggressionEvent") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int other() const { return ReadField<int>("other"); }
        void SetOther(int value) const { WriteField<int>("other", value); }
        float amount() const { return ReadField<float>("amount"); }
        void SetAmount(float value) const { WriteField<float>("amount", value); }
        int year() const { return ReadField<int>("year"); }
        void SetYear(int value) const { WriteField<int>("year", value); }
    };
}
