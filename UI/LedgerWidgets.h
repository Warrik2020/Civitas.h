#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class LedgerWidgets : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LedgerWidgets(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "LedgerWidgets") {}
    public:
        void* incTax() const { return ReadField<void*>("incTax"); }
        void SetIncTax(void* value) const { WriteField<void*>("incTax", value); }
        void* incTrade() const { return ReadField<void*>("incTrade"); }
        void SetIncTrade(void* value) const { WriteField<void*>("incTrade", value); }
        void* incTribute() const { return ReadField<void*>("incTribute"); }
        void SetIncTribute(void* value) const { WriteField<void*>("incTribute", value); }
        void* incCorruption() const { return ReadField<void*>("incCorruption"); }
        void SetIncCorruption(void* value) const { WriteField<void*>("incCorruption", value); }
        void* incTotal() const { return ReadField<void*>("incTotal"); }
        void SetIncTotal(void* value) const { WriteField<void*>("incTotal", value); }
        void* expAdmin() const { return ReadField<void*>("expAdmin"); }
        void SetExpAdmin(void* value) const { WriteField<void*>("expAdmin", value); }
        void* expMilitary() const { return ReadField<void*>("expMilitary"); }
        void SetExpMilitary(void* value) const { WriteField<void*>("expMilitary", value); }
        void* expSpend() const { return ReadField<void*>("expSpend"); }
        void SetExpSpend(void* value) const { WriteField<void*>("expSpend", value); }
        void* expTribute() const { return ReadField<void*>("expTribute"); }
        void SetExpTribute(void* value) const { WriteField<void*>("expTribute", value); }
        void* expTotal() const { return ReadField<void*>("expTotal"); }
        void SetExpTotal(void* value) const { WriteField<void*>("expTotal", value); }
        void* balance() const { return ReadField<void*>("balance"); }
        void SetBalance(void* value) const { WriteField<void*>("balance", value); }
    };
}
