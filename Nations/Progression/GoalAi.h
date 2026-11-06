#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class GoalAi : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GoalAi(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "GoalAi") {}
    public:
        float Score(int k, void* a) const { void* args[] = { &k, &a }; return CallStaticValue<float>("Score", args, 2); }
        float Jitter(int nation, int year, int k, int target) const { void* args[] = { &nation, &year, &k, &target }; return CallStaticValue<float>("Jitter", args, 4); }
        int Pick(int nation, int year, void* options) const { void* args[] = { &nation, &year, options }; return CallStaticValue<int>("Pick", args, 3); }
        int PickDelayMonths() const { return ReadStaticField<int>("PickDelayMonths"); }
        int FirstPickSpreadMonths() const { return ReadStaticField<int>("FirstPickSpreadMonths"); }
        float Spread() const { return ReadStaticField<float>("Spread"); }
        int GiveUpYears() const { return ReadStaticField<int>("GiveUpYears"); }
    };
}
