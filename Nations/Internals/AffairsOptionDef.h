#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsOptionDef : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsOptionDef(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsOptionDef") {}
    public:
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        void* hint() const { return ReadField<void*>("hint"); }
        void SetHint(void* value) const { WriteField<void*>("hint", value); }
        bool isDefault() const { return ReadField<bool>("isDefault"); }
        void SetIsDefault(bool value) const { WriteField<bool>("isDefault", value); }
        void* show() const { return ReadField<void*>("show"); }
        void SetShow(void* value) const { WriteField<void*>("show", value); }
        void* endOutcome() const { return ReadField<void*>("endOutcome"); }
        void SetEndOutcome(void* value) const { WriteField<void*>("endOutcome", value); }
        void* costs() const { return ReadField<void*>("costs"); }
        void* effects() const { return ReadField<void*>("effects"); }
        void* next() const { return ReadField<void*>("next"); }
        void* ai() const { return ReadField<void*>("ai"); }
        int line() const { return ReadField<int>("line"); }
        void SetLine(int value) const { WriteField<int>("line", value); }
    };
}
