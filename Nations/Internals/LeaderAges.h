#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LeaderAges : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LeaderAges(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LeaderAges") {}
    public:
        void* DisplayName(int b) const { void* __callArgs[] = { &b }; return CallStatic("DisplayName", __callArgs, 1); }
        void* Blurb(int b) const { void* __callArgs[] = { &b }; return CallStatic("Blurb", __callArgs, 1); }
        float ResearchMulOf(int b) const { void* __callArgs[] = { &b }; return CallStaticValue<float>("ResearchMulOf", __callArgs, 1); }
        float OpinionAddOf(int b) const { void* __callArgs[] = { &b }; return CallStaticValue<float>("OpinionAddOf", __callArgs, 1); }
        void* ModifiersOf(int b) const { void* __callArgs[] = { &b }; return CallStatic("ModifiersOf", __callArgs, 1); }
        int BandOf(int ageYears, void* cfg) const { void* __callArgs[] = { &ageYears, cfg }; return CallStaticValue<int>("BandOf", __callArgs, 2); }
        int AgeAt(void* l, int tick, float ticksPerYear) const { void* __callArgs[] = { l, &tick, &ticksPerYear }; return CallStaticValue<int>("AgeAt", __callArgs, 3); }
        int BornTickFor(int tick, int ageYears, float ticksPerYear) const { void* __callArgs[] = { &tick, &ageYears, &ticksPerYear }; return CallStaticValue<int>("BornTickFor", __callArgs, 3); }
        void* BornDate(void* l, void* cfg, int toWorld = 0) const { void* __callArgs[] = { l, cfg, &toWorld }; return CallStatic("BornDate", __callArgs, 3); }
        void* AccessionDate(void* l, void* cfg, int toWorld = 0) const { void* __callArgs[] = { l, cfg, &toWorld }; return CallStatic("AccessionDate", __callArgs, 3); }
        int Count() const { return ReadStaticField<int>("Count"); }
    };
}
