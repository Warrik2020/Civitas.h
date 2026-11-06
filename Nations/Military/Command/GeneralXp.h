#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class GeneralXp : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GeneralXp(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "GeneralXp") {}
    public:
        int ToNext(int skill) const { void* __callArgs[] = { &skill }; return CallStaticValue<int>("ToNext", __callArgs, 1); }
        float Progress(void* g) const { void* __callArgs[] = { g }; return CallStaticValue<float>("Progress", __callArgs, 1); }
        void Gain(void* store, int ticks) const { void* __callArgs[] = { store, &ticks }; CallStatic("Gain", __callArgs, 2); }
        void Fights(void* store, void* a, int& attacking, int& defending) const { void* __callArgs[] = { store, a, &attacking, &defending }; CallStatic("Fights", __callArgs, 4); }
        void Grow(void* g, bool attacking) const { void* __callArgs[] = { g, &attacking }; CallStatic("Grow", __callArgs, 2); }
        int MaxSkill() const { return ReadStaticField<int>("MaxSkill"); }
        int PerDivisionTick() const { return ReadStaticField<int>("PerDivisionTick"); }
        int PerLevel() const { return ReadStaticField<int>("PerLevel"); }
        float MarshalShare() const { return ReadStaticField<float>("MarshalShare"); }
        int SampleTicks() const { return ReadStaticField<int>("SampleTicks"); }
    };
}
