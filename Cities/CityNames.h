#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Cities
{
    class CityNames : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityNames(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities", "CityNames") {}
    public:
        void* RollRoot(int c) const { void* __callArgs[] = { &c }; return CallStatic("RollRoot", __callArgs, 1); }
        void* RollSuffix(int c, void* flavour) const { void* __callArgs[] = { &c, flavour }; return CallStatic("RollSuffix", __callArgs, 2); }
        int RootCount(int c) const { void* __callArgs[] = { &c }; return CallStaticValue<int>("RootCount", __callArgs, 1); }
        int SuffixCount(int c) const { void* __callArgs[] = { &c }; return CallStaticValue<int>("SuffixCount", __callArgs, 1); }
        int FlavourCount(int c, void* f) const { void* __callArgs[] = { &c, f }; return CallStaticValue<int>("FlavourCount", __callArgs, 2); }
        void* Root(int c, int i) const { void* __callArgs[] = { &c, &i }; return CallStatic("Root", __callArgs, 2); }
        void* Suffix(int c, int i) const { void* __callArgs[] = { &c, &i }; return CallStatic("Suffix", __callArgs, 2); }
        void* FlavourSuffix(int c, void* f, int i) const { void* __callArgs[] = { &c, f, &i }; return CallStatic("FlavourSuffix", __callArgs, 3); }
        int TableLength(int table) const { void* __callArgs[] = { &table }; return CallStaticValue<int>("TableLength", __callArgs, 1); }
        int TableCount() const { return ReadStaticField<int>("TableCount"); }
    };
}
