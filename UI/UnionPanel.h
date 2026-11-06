#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UnionPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnionPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UnionPanel") {}
    public:
        void Show(int playerId, int otherId, void* onResolved, void* kind = nullptr, void* theyLead = nullptr) const { void* __callArgs[] = { &playerId, &otherId, onResolved, kind, theyLead }; CallStatic("Show", __callArgs, 5); }
        void ShowOffer(void* offer, void* onResolved) const { void* __callArgs[] = { offer, onResolved }; CallStatic("ShowOffer", __callArgs, 2); }
        void CloseIfOpen() const { CallStatic("CloseIfOpen", nullptr, 0); }
    };
}
