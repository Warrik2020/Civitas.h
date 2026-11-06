#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class TemplateAI : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TemplateAI(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "TemplateAI") {}
    public:
        void Evaluate(void* it) const { void* args[] = { it }; CallStatic("Evaluate", args, 1); }
        void Evaluate(void* it, bool ai) const { void* args[] = { it, &ai }; CallStatic("Evaluate", args, 2); }
        void Prime(void* it, bool ai) const { void* args[] = { it, &ai }; CallStatic("Prime", args, 2); }
    };
}
