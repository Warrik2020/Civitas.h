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
        void* Bind(void* grid) const { void* __callArgs[] = { grid }; return CallStatic("Bind", __callArgs, 1); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        void Publish(void* cfg, float ticksPerYear) const { void* __callArgs[] = { cfg, &ticksPerYear }; CallStatic("Publish", __callArgs, 2); }
        bool EnsureSeeded(void* grid, void* nations, void* getInternals, void* cities, void* identity) const { void* __callArgs[] = { grid, nations, getInternals, cities, identity }; return CallStaticValue<bool>("EnsureSeeded", __callArgs, 5); }
        float MeanPeople() const { return CallStaticValue<float>("MeanPeople", nullptr, 0); }
        void BookDraw(int nation, float people) const { void* __callArgs[] = { &nation, &people }; CallStatic("BookDraw", __callArgs, 2); }
        void BookGain(int nation, float people) const { void* __callArgs[] = { &nation, &people }; CallStatic("BookGain", __callArgs, 2); }
        float RealmPeople(int nation) const { void* __callArgs[] = { &nation }; return CallStaticValue<float>("RealmPeople", __callArgs, 1); }
        void EndTick(int tick, void* getInternals, void* getRelation, int span = 1) const { void* __callArgs[] = { &tick, getInternals, getRelation, &span }; CallStatic("EndTick", __callArgs, 4); }
        void NoteTaken(int winnerId, int loserId, int tile) const { void* __callArgs[] = { &winnerId, &loserId, &tile }; CallStatic("NoteTaken", __callArgs, 3); }
        bool SendSettlers(int nation, void* cities, void* town, float people) const { void* __callArgs[] = { &nation, cities, town, &people }; return CallStaticValue<bool>("SendSettlers", __callArgs, 4); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void Enabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        void* Settings() const { return ReadStaticField<void*>("Settings"); }
    };
}
