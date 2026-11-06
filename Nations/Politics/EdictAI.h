#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class EdictAI : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EdictAI(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "EdictAI") {}
    public:
        void EvaluateEdicts(void* n, void* it, void* mgr) const { void* args[] = { n, it, mgr }; CallStatic("EvaluateEdicts", args, 3); }
    };
}
