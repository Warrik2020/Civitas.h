#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class GoalOption : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GoalOption(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "GoalOption") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int target() const { return ReadField<int>("target"); }
        void target(int value) const { WriteField<int>("target", value); }
        void* targetName() const { return ReadField<void*>("targetName"); }
        void targetName(void* value) const { WriteField<void*>("targetName", value); }
        void* note() const { return ReadField<void*>("note"); }
        void note(void* value) const { WriteField<void*>("note", value); }
        void* ai() const { return ReadField<void*>("ai"); }
        void ai(void* value) const { WriteField<void*>("ai", value); }
    };
}
