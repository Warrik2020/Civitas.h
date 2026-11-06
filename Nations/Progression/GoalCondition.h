#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class GoalCondition : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GoalCondition(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "GoalCondition") {}
    public:
        void* text() const { return ReadField<void*>("text"); }
        void text(void* value) const { WriteField<void*>("text", value); }
        void* value() const { return ReadField<void*>("value"); }
        void value(void* value) const { WriteField<void*>("value", value); }
        bool met() const { return ReadField<bool>("met"); }
        void met(bool value) const { WriteField<bool>("met", value); }
    };
}
