#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class GiftPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GiftPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "GiftPanel") {}
    public:
        void Show(int playerId, int targetId, void* onDone) const { void* __callArgs[] = { &playerId, &targetId, onDone }; CallStatic("Show", __callArgs, 3); }
    };
}
