#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Control
{
    class ControlSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ControlSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Control", "ControlSystem") {}
    public:
        void ResetRuntime() const { CallStatic("ResetRuntime", nullptr, 0); }
        void DailyPass(void* n, void* it, void* cfg, void* ctx) const { void* __callArgs[] = { n, it, cfg, &ctx }; CallStatic("DailyPass", __callArgs, 4); }
        void Restore(void* n, void* it, void* g) const { void* __callArgs[] = { n, it, g }; CallStatic("Restore", __callArgs, 3); }
    };
}
