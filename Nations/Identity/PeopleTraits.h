#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class PeopleTraits : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleTraits(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "PeopleTraits") {}
    public:
        void* NameOf(int trait) const { void* __callArgs[] = { &trait }; return CallStatic("NameOf", __callArgs, 1); }
        void* BlurbOf(int trait) const { void* __callArgs[] = { &trait }; return CallStatic("BlurbOf", __callArgs, 1); }
        void* ModifiersOf(int trait) const { void* __callArgs[] = { &trait }; return CallStatic("ModifiersOf", __callArgs, 1); }
        int TraitOf(int foundingNationId) const { void* __callArgs[] = { &foundingNationId }; return CallStaticValue<int>("TraitOf", __callArgs, 1); }
        int TraitOf(void* g) const { void* __callArgs[] = { g }; return CallStaticValue<int>("TraitOf", __callArgs, 1); }
        int Count() const { return ReadStaticField<int>("Count"); }
    };
}
