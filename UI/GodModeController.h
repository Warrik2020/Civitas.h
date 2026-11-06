#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class GodModeController : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GodModeController(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "GodModeController") {}
    public:
        void ExitEditorMode() const { CallStatic("ExitEditorMode", nullptr, 0); }
        void EnterEditorMode() const { CallStatic("EnterEditorMode", nullptr, 0); }
        void SetGodMode(bool on) const { void* __callArgs[] = { &on }; CallStatic("SetGodMode", __callArgs, 1); }
    };
}
