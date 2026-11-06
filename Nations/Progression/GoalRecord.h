#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class GoalRecord : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GoalRecord(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "GoalRecord") {}
    public:
        int nation() const { return ReadField<int>("nation"); }
        void SetNation(int value) const { WriteField<int>("nation", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        void* target() const { return ReadField<void*>("target"); }
        void SetTarget(void* value) const { WriteField<void*>("target", value); }
        int year() const { return ReadField<int>("year"); }
        void SetYear(int value) const { WriteField<int>("year", value); }
    };
}
