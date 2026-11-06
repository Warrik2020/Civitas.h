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
        void Evaluate(void* it) const { void* __callArgs[] = { it }; CallStatic("Evaluate", __callArgs, 1); }
        void Evaluate(void* it, bool ai) const { void* __callArgs[] = { it, &ai }; CallStatic("Evaluate", __callArgs, 2); }
        void Prime(void* it, bool ai) const { void* __callArgs[] = { it, &ai }; CallStatic("Prime", __callArgs, 2); }
    };
}
