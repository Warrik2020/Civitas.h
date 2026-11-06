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
        void* NameOf(int trait) const { void* args[] = { &trait }; return CallStatic("NameOf", args, 1); }
        void* BlurbOf(int trait) const { void* args[] = { &trait }; return CallStatic("BlurbOf", args, 1); }
        void* ModifiersOf(int trait) const { void* args[] = { &trait }; return CallStatic("ModifiersOf", args, 1); }
        int TraitOf(int foundingNationId) const { void* args[] = { &foundingNationId }; return CallStaticValue<int>("TraitOf", args, 1); }
        int TraitOf(void* g) const { void* args[] = { g }; return CallStaticValue<int>("TraitOf", args, 1); }
        int Count() const { return ReadStaticField<int>("Count"); }
    };
}
