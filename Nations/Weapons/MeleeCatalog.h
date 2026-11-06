#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class MeleeCatalog : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MeleeCatalog(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "MeleeCatalog") {}
    public:
        void* Spec(int kind) const { void* args[] = { &kind }; return CallStatic("Spec", args, 1); }
        void* KindName(int kind) const { void* args[] = { &kind }; return CallStatic("KindName", args, 1); }
        bool IsStriking(int k) const { void* args[] = { &k }; return CallStaticValue<bool>("IsStriking", args, 1); }
        bool IsBladed(int k) const { void* args[] = { &k }; return CallStaticValue<bool>("IsBladed", args, 1); }
        void* Kinds() const { return ReadStaticField<void*>("Kinds"); }
        void* Constructions() const { return ReadStaticField<void*>("Constructions"); }
        void* Hardenings() const { return ReadStaticField<void*>("Hardenings"); }
        void* Edges() const { return ReadStaticField<void*>("Edges"); }
        void* Grips() const { return ReadStaticField<void*>("Grips"); }
        void* Ladders() const { return ReadStaticField<void*>("Ladders"); }
        void* LadderNames() const { return ReadStaticField<void*>("LadderNames"); }
    };
}
