#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class LeaderCreationPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LeaderCreationPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "LeaderCreationPanel") {}
    public:
        bool Open(int nationId, void* onCrowned) const { void* __callArgs[] = { &nationId, onCrowned }; return CallStaticValue<bool>("Open", __callArgs, 2); }
        bool IsEnabled(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<bool>("IsEnabled", __callArgs, 1); }
    };
}
