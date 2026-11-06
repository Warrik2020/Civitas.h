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
        void nation(int value) const { WriteField<int>("nation", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        void* target() const { return ReadField<void*>("target"); }
        void target(void* value) const { WriteField<void*>("target", value); }
        int year() const { return ReadField<int>("year"); }
        void year(int value) const { WriteField<int>("year", value); }
    };
}
