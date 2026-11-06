#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Population
{
    class MigrationSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MigrationSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Population", "MigrationSystem") {}
    public:
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        void Restore(void* s) const { void* __callArgs[] = { s }; CallStatic("Restore", __callArgs, 1); }
        void Send(int kind, int fromNation, int toNation, int avoidNation, int fromTile, int anchor, void* pk) const { void* __callArgs[] = { &kind, &fromNation, &toNation, &avoidNation, &fromTile, &anchor, &pk }; CallStatic("Send", __callArgs, 7); }
        void Tick(void* f, void* s, int span) const { void* __callArgs[] = { f, s, &span }; CallStatic("Tick", __callArgs, 3); }
        void Ring(int k, int& dx, int& dy) const { void* __callArgs[] = { &k, &dx, &dy }; CallStatic("Ring", __callArgs, 3); }
        bool FindLanding(void* f, int fromTile, int toNation, int avoid, int kinOrigin, int& anchor, int maxChunks = 24) const { void* __callArgs[] = { f, &fromTile, &toNation, &avoid, &kinOrigin, &anchor, &maxChunks }; return CallStaticValue<bool>("FindLanding", __callArgs, 7); }
        float PeopleOnTheRoad() const { return CallStaticValue<float>("PeopleOnTheRoad", nullptr, 0); }
        int AnyButAvoid() const { return ReadStaticField<int>("AnyButAvoid"); }
        int Pool() const { return ReadStaticField<int>("Pool"); }
        int MaxRadius() const { return ReadStaticField<int>("MaxRadius"); }
        int TravelTicksBase() const { return ReadStaticField<int>("TravelTicksBase"); }
        void TravelTicksBase(int value) const { WriteStaticField<int>("TravelTicksBase", value); }
        float TilesPerTick() const { return ReadStaticField<float>("TilesPerTick"); }
        void TilesPerTick(float value) const { WriteStaticField<float>("TilesPerTick", value); }
        int LandingTilesPerTick() const { return ReadStaticField<int>("LandingTilesPerTick"); }
        void LandingTilesPerTick(int value) const { WriteStaticField<int>("LandingTilesPerTick", value); }
    };
}
