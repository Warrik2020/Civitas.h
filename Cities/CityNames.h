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
        void* RollRoot(int c) const { void* args[] = { &c }; return CallStatic("RollRoot", args, 1); }
        void* RollSuffix(int c, void* flavour) const { void* args[] = { &c, flavour }; return CallStatic("RollSuffix", args, 2); }
        int RootCount(int c) const { void* args[] = { &c }; return CallStaticValue<int>("RootCount", args, 1); }
        int SuffixCount(int c) const { void* args[] = { &c }; return CallStaticValue<int>("SuffixCount", args, 1); }
        int FlavourCount(int c, void* f) const { void* args[] = { &c, f }; return CallStaticValue<int>("FlavourCount", args, 2); }
        void* Root(int c, int i) const { void* args[] = { &c, &i }; return CallStatic("Root", args, 2); }
        void* Suffix(int c, int i) const { void* args[] = { &c, &i }; return CallStatic("Suffix", args, 2); }
        void* FlavourSuffix(int c, void* f, int i) const { void* args[] = { &c, f, &i }; return CallStatic("FlavourSuffix", args, 3); }
        int TableLength(int table) const { void* args[] = { &table }; return CallStaticValue<int>("TableLength", args, 1); }
        int TableCount() const { return ReadStaticField<int>("TableCount"); }
    };
}
