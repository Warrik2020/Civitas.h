#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UltimatumPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UltimatumPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UltimatumPanel") {}
    public:
        void Show(int playerId, int targetId, void* onResolved) const { void* __callArgs[] = { &playerId, &targetId, onResolved }; CallStatic("Show", __callArgs, 3); }
    };
}
