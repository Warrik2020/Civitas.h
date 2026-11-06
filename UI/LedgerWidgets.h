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
        void incTax(void* value) const { WriteField<void*>("incTax", value); }
        void* incTrade() const { return ReadField<void*>("incTrade"); }
        void incTrade(void* value) const { WriteField<void*>("incTrade", value); }
        void* incTribute() const { return ReadField<void*>("incTribute"); }
        void incTribute(void* value) const { WriteField<void*>("incTribute", value); }
        void* incCorruption() const { return ReadField<void*>("incCorruption"); }
        void incCorruption(void* value) const { WriteField<void*>("incCorruption", value); }
        void* incTotal() const { return ReadField<void*>("incTotal"); }
        void incTotal(void* value) const { WriteField<void*>("incTotal", value); }
        void* expAdmin() const { return ReadField<void*>("expAdmin"); }
        void expAdmin(void* value) const { WriteField<void*>("expAdmin", value); }
        void* expMilitary() const { return ReadField<void*>("expMilitary"); }
        void expMilitary(void* value) const { WriteField<void*>("expMilitary", value); }
        void* expSpend() const { return ReadField<void*>("expSpend"); }
        void expSpend(void* value) const { WriteField<void*>("expSpend", value); }
        void* expTribute() const { return ReadField<void*>("expTribute"); }
        void expTribute(void* value) const { WriteField<void*>("expTribute", value); }
        void* expTotal() const { return ReadField<void*>("expTotal"); }
        void expTotal(void* value) const { WriteField<void*>("expTotal", value); }
        void* balance() const { return ReadField<void*>("balance"); }
        void balance(void* value) const { WriteField<void*>("balance", value); }
    };
}
