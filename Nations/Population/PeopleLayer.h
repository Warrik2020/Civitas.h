#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Population
{
    class PeopleLayer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleLayer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Population", "PeopleLayer") {}
    public:
        void* Bind(void* grid) const { void* args[] = { grid }; return CallStatic("Bind", args, 1); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        void Publish(void* cfg, float ticksPerYear) const { void* args[] = { cfg, &ticksPerYear }; CallStatic("Publish", args, 2); }
        bool EnsureSeeded(void* grid, void* nations, void* getInternals, void* cities, void* identity) const { void* args[] = { grid, nations, getInternals, cities, identity }; return CallStaticValue<bool>("EnsureSeeded", args, 5); }
        float MeanPeople() const { return CallStaticValue<float>("MeanPeople", nullptr, 0); }
        void BookDraw(int nation, float people) const { void* args[] = { &nation, &people }; CallStatic("BookDraw", args, 2); }
        void BookGain(int nation, float people) const { void* args[] = { &nation, &people }; CallStatic("BookGain", args, 2); }
        float RealmPeople(int nation) const { void* args[] = { &nation }; return CallStaticValue<float>("RealmPeople", args, 1); }
        void EndTick(int tick, void* getInternals, void* getRelation, int span = 1) const { void* args[] = { &tick, getInternals, getRelation, &span }; CallStatic("EndTick", args, 4); }
        void NoteTaken(int winnerId, int loserId, int tile) const { void* args[] = { &winnerId, &loserId, &tile }; CallStatic("NoteTaken", args, 3); }
        bool SendSettlers(int nation, void* cities, void* town, float people) const { void* args[] = { &nation, cities, town, &people }; return CallStaticValue<bool>("SendSettlers", args, 4); }
        double Ms(int64_t ticks) const { void* args[] = { &ticks }; return CallStaticValue<double>("Ms", args, 1); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void SetEnabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        void* Settings() const { return ReadStaticField<void*>("Settings"); }
        int64_t moveTicks() const { return ReadStaticField<int64_t>("moveTicks"); }
        void SetMoveTicks(int64_t value) const { WriteStaticField<int64_t>("moveTicks", value); }
        int64_t sweepTicks() const { return ReadStaticField<int64_t>("sweepTicks"); }
        void SetSweepTicks(int64_t value) const { WriteStaticField<int64_t>("sweepTicks", value); }
        int64_t catchTicks() const { return ReadStaticField<int64_t>("catchTicks"); }
        void SetCatchTicks(int64_t value) const { WriteStaticField<int64_t>("catchTicks", value); }
        int64_t flushTicks() const { return ReadStaticField<int64_t>("flushTicks"); }
        void SetFlushTicks(int64_t value) const { WriteStaticField<int64_t>("flushTicks", value); }
        int64_t weightTicks() const { return ReadStaticField<int64_t>("weightTicks"); }
        void SetWeightTicks(int64_t value) const { WriteStaticField<int64_t>("weightTicks", value); }
    };
}
