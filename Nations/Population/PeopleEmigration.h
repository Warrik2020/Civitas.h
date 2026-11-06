#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Population
{
    class PeopleEmigration : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleEmigration(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Population", "PeopleEmigration") {}
    public:
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        void Note(int nation, float leaving, int dest, float fleeing) const { void* __callArgs[] = { &nation, &leaving, &dest, &fleeing }; CallStatic("Note", __callArgs, 4); }
        void Step(void* f, int tick, int ticksPerMonth, void* getInternals, void* getRelation) const { void* __callArgs[] = { f, &tick, &ticksPerMonth, getInternals, getRelation }; CallStatic("Step", __callArgs, 5); }
        float Transfer(void* f, int from, int to, float amount) const { void* __callArgs[] = { f, &from, &to, &amount }; return CallStaticValue<float>("Transfer", __callArgs, 4); }
    };
}
