#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class CivilWarPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CivilWarPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "CivilWarPanel") {}
    public:
        void Show(int playerId, void* report) const { void* __callArgs[] = { &playerId, report }; CallStatic("Show", __callArgs, 2); }
    };
}
