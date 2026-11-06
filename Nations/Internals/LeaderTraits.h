#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LeaderTraits : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LeaderTraits(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LeaderTraits") {}
    public:
        void* DisplayName(int t) const { void* args[] = { &t }; return CallStatic("DisplayName", args, 1); }
        void* Blurb(int t) const { void* args[] = { &t }; return CallStatic("Blurb", args, 1); }
        int CostOf(int t) const { void* args[] = { &t }; return CallStaticValue<int>("CostOf", args, 1); }
        float ResearchMulOf(int t) const { void* args[] = { &t }; return CallStaticValue<float>("ResearchMulOf", args, 1); }
        float OpinionAddOf(int t) const { void* args[] = { &t }; return CallStaticValue<float>("OpinionAddOf", args, 1); }
        int LifespanDeltaOf(int t) const { void* args[] = { &t }; return CallStaticValue<int>("LifespanDeltaOf", args, 1); }
        void* PersonalityOf(int t) const { void* args[] = { &t }; return CallStatic("PersonalityOf", args, 1); }
        void* ModifiersOf(int t) const { void* args[] = { &t }; return CallStatic("ModifiersOf", args, 1); }
        int64_t Opposite(int t) const { void* args[] = { &t }; return CallStaticValue<int64_t>("Opposite", args, 1); }
        bool IsFlaw(int t) const { void* args[] = { &t }; return CallStaticValue<bool>("IsFlaw", args, 1); }
        bool IsValid(int raw) const { void* args[] = { &raw }; return CallStaticValue<bool>("IsValid", args, 1); }
        int64_t Bit(int t) const { void* args[] = { &t }; return CallStaticValue<int64_t>("Bit", args, 1); }
        bool Has(int64_t mask, int t) const { void* args[] = { &mask, &t }; return CallStaticValue<bool>("Has", args, 2); }
        int64_t Sanitise(int64_t mask) const { void* args[] = { &mask }; return CallStaticValue<int64_t>("Sanitise", args, 1); }
        int PointsSpent(int64_t mask) const { void* args[] = { &mask }; return CallStaticValue<int>("PointsSpent", args, 1); }
        int CountOf(int64_t mask) const { void* args[] = { &mask }; return CallStaticValue<int>("CountOf", args, 1); }
        void* Combined(int64_t mask, float& researchMul, float& opinionAdd) const { void* args[] = { &mask, &researchMul, &opinionAdd }; return CallStatic("Combined", args, 3); }
        int LifespanDelta(int64_t mask) const { void* args[] = { &mask }; return CallStaticValue<int>("LifespanDelta", args, 1); }
        void* PersonalityShift(int64_t mask) const { void* args[] = { &mask }; return CallStatic("PersonalityShift", args, 1); }
        void AppendNames(void* sb, int64_t mask, const char* separator = ", ") const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* args[] = { sb, &mask, managed_2 }; CallStatic("AppendNames", args, 3); }
        void AppendEffects(void* sb, int t, const char* separator = ", ", bool colorize = false) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* args[] = { sb, &t, managed_2, &colorize }; CallStatic("AppendEffects", args, 4); }
        int64_t Roll(int archetype) const { void* args[] = { &archetype }; return CallStaticValue<int64_t>("Roll", args, 1); }
        int Count() const { return ReadStaticField<int>("Count"); }
        void* All() const { return ReadStaticField<void*>("All"); }
    };
}
