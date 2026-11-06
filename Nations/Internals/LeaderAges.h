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
        void* DisplayName(int b) const { void* args[] = { &b }; return CallStatic("DisplayName", args, 1); }
        void* Blurb(int b) const { void* args[] = { &b }; return CallStatic("Blurb", args, 1); }
        float ResearchMulOf(int b) const { void* args[] = { &b }; return CallStaticValue<float>("ResearchMulOf", args, 1); }
        float OpinionAddOf(int b) const { void* args[] = { &b }; return CallStaticValue<float>("OpinionAddOf", args, 1); }
        void* ModifiersOf(int b) const { void* args[] = { &b }; return CallStatic("ModifiersOf", args, 1); }
        int BandOf(int ageYears, void* cfg) const { void* args[] = { &ageYears, cfg }; return CallStaticValue<int>("BandOf", args, 2); }
        int AgeAt(void* l, int tick, float ticksPerYear) const { void* args[] = { l, &tick, &ticksPerYear }; return CallStaticValue<int>("AgeAt", args, 3); }
        int BornTickFor(int tick, int ageYears, float ticksPerYear) const { void* args[] = { &tick, &ageYears, &ticksPerYear }; return CallStaticValue<int>("BornTickFor", args, 3); }
        void* BornDate(void* l, void* cfg, int toWorld = 0) const { void* args[] = { l, cfg, &toWorld }; return CallStatic("BornDate", args, 3); }
        void* AccessionDate(void* l, void* cfg, int toWorld = 0) const { void* args[] = { l, cfg, &toWorld }; return CallStatic("AccessionDate", args, 3); }
        int Count() const { return ReadStaticField<int>("Count"); }
    };
}
