#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class DiplomaticRequestPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DiplomaticRequestPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "DiplomaticRequestPanel") {}
    public:
        void Show(int playerId, int targetId, void* onResolved) const { void* __callArgs[] = { &playerId, &targetId, onResolved }; CallStatic("Show", __callArgs, 3); }
    };
}
