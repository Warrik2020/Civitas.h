#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class TradePanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TradePanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "TradePanel") {}
    public:
        void Show(int playerId, int targetId, void* onResolved) const { void* __callArgs[] = { &playerId, &targetId, onResolved }; CallStatic("Show", __callArgs, 3); }
        void ShowOffer(void* offer, void* onResolved) const { void* __callArgs[] = { offer, onResolved }; CallStatic("ShowOffer", __callArgs, 2); }
    };
}
