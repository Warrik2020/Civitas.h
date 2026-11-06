#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Research
{
    class ResearchAI : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ResearchAI(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Research", "ResearchAI") {}
    public:
        void Evaluate(void* it, void* cfg) const { void* args[] = { it, cfg }; CallStatic("Evaluate", args, 2); }
        void EvaluateSlot(void* it, void* cfg, int slot) const { void* args[] = { it, cfg, &slot }; CallStatic("EvaluateSlot", args, 3); }
    };
}
