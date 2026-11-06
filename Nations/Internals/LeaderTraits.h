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
        void* DisplayName(int t) const { void* __callArgs[] = { &t }; return CallStatic("DisplayName", __callArgs, 1); }
        void* Blurb(int t) const { void* __callArgs[] = { &t }; return CallStatic("Blurb", __callArgs, 1); }
        int CostOf(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<int>("CostOf", __callArgs, 1); }
        float ResearchMulOf(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<float>("ResearchMulOf", __callArgs, 1); }
        float OpinionAddOf(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<float>("OpinionAddOf", __callArgs, 1); }
        int LifespanDeltaOf(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<int>("LifespanDeltaOf", __callArgs, 1); }
        void* PersonalityOf(int t) const { void* __callArgs[] = { &t }; return CallStatic("PersonalityOf", __callArgs, 1); }
        void* ModifiersOf(int t) const { void* __callArgs[] = { &t }; return CallStatic("ModifiersOf", __callArgs, 1); }
        int64_t Opposite(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<int64_t>("Opposite", __callArgs, 1); }
        bool IsFlaw(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<bool>("IsFlaw", __callArgs, 1); }
        bool IsValid(int raw) const { void* __callArgs[] = { &raw }; return CallStaticValue<bool>("IsValid", __callArgs, 1); }
        int64_t Bit(int t) const { void* __callArgs[] = { &t }; return CallStaticValue<int64_t>("Bit", __callArgs, 1); }
        bool Has(int64_t mask, int t) const { void* __callArgs[] = { &mask, &t }; return CallStaticValue<bool>("Has", __callArgs, 2); }
        int64_t Sanitise(int64_t mask) const { void* __callArgs[] = { &mask }; return CallStaticValue<int64_t>("Sanitise", __callArgs, 1); }
        int PointsSpent(int64_t mask) const { void* __callArgs[] = { &mask }; return CallStaticValue<int>("PointsSpent", __callArgs, 1); }
        int CountOf(int64_t mask) const { void* __callArgs[] = { &mask }; return CallStaticValue<int>("CountOf", __callArgs, 1); }
        void* Combined(int64_t mask, float& researchMul, float& opinionAdd) const { void* __callArgs[] = { &mask, &researchMul, &opinionAdd }; return CallStatic("Combined", __callArgs, 3); }
        int LifespanDelta(int64_t mask) const { void* __callArgs[] = { &mask }; return CallStaticValue<int>("LifespanDelta", __callArgs, 1); }
        void* PersonalityShift(int64_t mask) const { void* __callArgs[] = { &mask }; return CallStatic("PersonalityShift", __callArgs, 1); }
        void AppendNames(void* sb, int64_t mask, const char* separator = ", ") const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* __callArgs[] = { sb, &mask, managed_2 }; CallStatic("AppendNames", __callArgs, 3); }
        void AppendEffects(void* sb, int t, const char* separator = ", ", bool colorize = false) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* __callArgs[] = { sb, &t, managed_2, &colorize }; CallStatic("AppendEffects", __callArgs, 4); }
        int64_t Roll(int archetype) const { void* __callArgs[] = { &archetype }; return CallStaticValue<int64_t>("Roll", __callArgs, 1); }
        int Count() const { return ReadStaticField<int>("Count"); }
        void* All() const { return ReadStaticField<void*>("All"); }
    };
}
