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
        int ForRoot(int rootGroupId) const { void* __callArgs[] = { &rootGroupId }; return CallStaticValue<int>("ForRoot", __callArgs, 1); }
        bool IsStateless(int origin) const { void* __callArgs[] = { &origin }; return CallStaticValue<bool>("IsStateless", __callArgs, 1); }
        int RootOf(int origin) const { void* __callArgs[] = { &origin }; return CallStaticValue<int>("RootOf", __callArgs, 1); }
        int NationOf(int origin) const { void* __callArgs[] = { &origin }; return CallStaticValue<int>("NationOf", __callArgs, 1); }
        bool IsValid(int origin) const { void* __callArgs[] = { &origin }; return CallStaticValue<bool>("IsValid", __callArgs, 1); }
        int DenseIndex(int origin, int nationCap) const { void* __callArgs[] = { &origin, &nationCap }; return CallStaticValue<int>("DenseIndex", __callArgs, 2); }
        int ScratchSize(int nationCap, int groupCap) const { void* __callArgs[] = { &nationCap, &groupCap }; return CallStaticValue<int>("ScratchSize", __callArgs, 2); }
        int StatelessBase() const { return ReadStaticField<int>("StatelessBase"); }
    };
}
