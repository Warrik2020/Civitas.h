#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesZoneBrush : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesZoneBrush(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesZoneBrush") {}
    public:
        void Build(void* canvas) const { void* __callArgs[] = { canvas }; Call("Build", __callArgs, 1); }
        bool Begin(int axis, bool erase) const { void* __callArgs[] = { &axis, &erase }; return CallValue<bool>("Begin", __callArgs, 2); }
        void End(bool restoreWindow) const { void* __callArgs[] = { &restoreWindow }; Call("End", __callArgs, 1); }
        void Tick() const { Call("Tick", nullptr, 0); }
    };
}
