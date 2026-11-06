#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class DraftAge : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DraftAge(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "DraftAge") {}
    public:
        int Of(void* it) const { void* args[] = { it }; return CallStaticValue<int>("Of", args, 1); }
        float Depth(int age) const { void* args[] = { &age }; return CallStaticValue<float>("Depth", args, 1); }
        float Depth(void* it) const { void* args[] = { it }; return CallStaticValue<float>("Depth", args, 1); }
        int StepOf(int age) const { void* args[] = { &age }; return CallStaticValue<int>("StepOf", args, 1); }
        float YouthShare(int age) const { void* args[] = { &age }; return CallStaticValue<float>("YouthShare", args, 1); }
        float CapMul(void* it) const { void* args[] = { it }; return CallStaticValue<float>("CapMul", args, 1); }
        float IntakeMul(void* it) const { void* args[] = { it }; return CallStaticValue<float>("IntakeMul", args, 1); }
        float GrowthMul(void* it) const { void* args[] = { it }; return CallStaticValue<float>("GrowthMul", args, 1); }
        float WearinessMul(void* it) const { void* args[] = { it }; return CallStaticValue<float>("WearinessMul", args, 1); }
        void Set(void* it, int age) const { void* args[] = { it, &age }; CallStatic("Set", args, 2); }
        bool Young(void* d, int tick) const { void* args[] = { d, &tick }; return CallStaticValue<bool>("Young", args, 2); }
        float FightMul(void* d, int tick) const { void* args[] = { d, &tick }; return CallStaticValue<float>("FightMul", args, 2); }
        int YoungestAge(void* d, int tick, float ticksPerYear) const { void* args[] = { d, &tick, &ticksPerYear }; return CallStaticValue<int>("YoungestAge", args, 3); }
        void StampNew(void* d, void* it, int tick, float ticksPerYear) const { void* args[] = { d, it, &tick, &ticksPerYear }; CallStatic("StampNew", args, 4); }
        void NoteRefit(void* d, void* it, float men, int tick, float ticksPerYear) const { void* args[] = { d, it, &men, &tick, &ticksPerYear }; CallStatic("NoteRefit", args, 5); }
        void Restore(void* d, float youth, int grownTick) const { void* args[] = { d, &youth, &grownTick }; CallStatic("Restore", args, 3); }
        int AiFloor(void* it) const { void* args[] = { it }; return CallStaticValue<int>("AiFloor", args, 1); }
        void AiStep(void* it, void* cfg, int tick, float ticksPerYear) const { void* args[] = { it, cfg, &tick, &ticksPerYear }; CallStatic("AiStep", args, 4); }
        int Adult() const { return ReadStaticField<int>("Adult"); }
        int Lowest() const { return ReadStaticField<int>("Lowest"); }
        void* Steps() const { return ReadStaticField<void*>("Steps"); }
        float CapBonus() const { return ReadStaticField<float>("CapBonus"); }
        float IntakeBonus() const { return ReadStaticField<float>("IntakeBonus"); }
        float GrowthLoss() const { return ReadStaticField<float>("GrowthLoss"); }
        float WearinessBonus() const { return ReadStaticField<float>("WearinessBonus"); }
        float YouthShareMax() const { return ReadStaticField<float>("YouthShareMax"); }
        float FightLoss() const { return ReadStaticField<float>("FightLoss"); }
        float AiLowerBelow() const { return ReadStaticField<float>("AiLowerBelow"); }
        float AiRaiseAbove() const { return ReadStaticField<float>("AiRaiseAbove"); }
        float AiStepYears() const { return ReadStaticField<float>("AiStepYears"); }
    };
}
