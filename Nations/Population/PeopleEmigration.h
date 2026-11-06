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
        void Note(int nation, float leaving, int dest, float fleeing) const { void* args[] = { &nation, &leaving, &dest, &fleeing }; CallStatic("Note", args, 4); }
        void Step(void* f, int tick, int ticksPerMonth, void* getInternals, void* getRelation) const { void* args[] = { f, &tick, &ticksPerMonth, getInternals, getRelation }; CallStatic("Step", args, 5); }
        float Transfer(void* f, int from, int to, float amount) const { void* args[] = { f, &from, &to, &amount }; return CallStaticValue<float>("Transfer", args, 4); }
        float leaving() const { return ReadField<float>("leaving"); }
        void SetLeaving(float value) const { WriteField<float>("leaving", value); }
        float fleeing() const { return ReadField<float>("fleeing"); }
        void SetFleeing(float value) const { WriteField<float>("fleeing", value); }
        int dest() const { return ReadField<int>("dest"); }
        void SetDest(int value) const { WriteField<int>("dest", value); }
        int lastFlush() const { return ReadField<int>("lastFlush"); }
        void SetLastFlush(int value) const { WriteField<int>("lastFlush", value); }
    };
}
