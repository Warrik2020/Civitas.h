#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class UnionAI : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnionAI(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "UnionAI") {}
    public:
        void Evaluate(void* n, void* it, void* myRelations, void* ctx, void* mgr) const { void* __callArgs[] = { n, it, myRelations, &ctx, mgr }; CallStatic("Evaluate", __callArgs, 5); }
    };
}
