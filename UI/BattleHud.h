#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class BattleHud : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleHud(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "BattleHud") {}
    public:
        void ShowResult(void* r) const { void* __callArgs[] = { r }; CallStatic("ShowResult", __callArgs, 1); }
        void* Controls() const { return ReadStaticField<void*>("Controls"); }
    };
}
