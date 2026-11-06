#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class RealmLadder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RealmLadder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "RealmLadder") {}
    public:
        void Build(void* r, void* x) const { void* __callArgs[] = { r, &x }; CallStatic("Build", __callArgs, 2); }
        void* LinkName(int l) const { void* __callArgs[] = { &l }; return CallStatic("LinkName", __callArgs, 1); }
    };
}
