#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class VassalRestorePanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VassalRestorePanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "VassalRestorePanel") {}
    public:
        void Show(int playerId, void* onCreated) const { void* __callArgs[] = { &playerId, onCreated }; CallStatic("Show", __callArgs, 2); }
    };
}
