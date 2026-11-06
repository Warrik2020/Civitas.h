#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class PeopleOrigin : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleOrigin(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "PeopleOrigin") {}
    public:
        int ForRoot(int rootGroupId) const { void* args[] = { &rootGroupId }; return CallStaticValue<int>("ForRoot", args, 1); }
        bool IsStateless(int origin) const { void* args[] = { &origin }; return CallStaticValue<bool>("IsStateless", args, 1); }
        int RootOf(int origin) const { void* args[] = { &origin }; return CallStaticValue<int>("RootOf", args, 1); }
        int NationOf(int origin) const { void* args[] = { &origin }; return CallStaticValue<int>("NationOf", args, 1); }
        bool IsValid(int origin) const { void* args[] = { &origin }; return CallStaticValue<bool>("IsValid", args, 1); }
        int DenseIndex(int origin, int nationCap) const { void* args[] = { &origin, &nationCap }; return CallStaticValue<int>("DenseIndex", args, 2); }
        int ScratchSize(int nationCap, int groupCap) const { void* args[] = { &nationCap, &groupCap }; return CallStaticValue<int>("ScratchSize", args, 2); }
        int StatelessBase() const { return ReadStaticField<int>("StatelessBase"); }
    };
}
