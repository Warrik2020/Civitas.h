#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class TradeOfferSettingsLive : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TradeOfferSettingsLive(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "TradeOfferSettingsLive") {}
    public:
        void* muted() const { return ReadField<void*>("muted"); }
        void SetMuted(void* value) const { WriteField<void*>("muted", value); }
        void* locks() const { return ReadField<void*>("locks"); }
    };
}
