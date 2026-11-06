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
        void Restore(void* s) const { void* args[] = { s }; CallStatic("Restore", args, 1); }
        void Send(int kind, int fromNation, int toNation, int avoidNation, int fromTile, int anchor, void* pk) const { void* args[] = { &kind, &fromNation, &toNation, &avoidNation, &fromTile, &anchor, &pk }; CallStatic("Send", args, 7); }
        void Tick(void* f, void* s, int span) const { void* args[] = { f, s, &span }; CallStatic("Tick", args, 3); }
        void Ring(int k, int& dx, int& dy) const { void* args[] = { &k, &dx, &dy }; CallStatic("Ring", args, 3); }
        bool FindLanding(void* f, int fromTile, int toNation, int avoid, int kinOrigin, int& anchor, int maxChunks = 24) const { void* args[] = { f, &fromTile, &toNation, &avoid, &kinOrigin, &anchor, &maxChunks }; return CallStaticValue<bool>("FindLanding", args, 7); }
        float PeopleOnTheRoad() const { return CallStaticValue<float>("PeopleOnTheRoad", nullptr, 0); }
        int AnyButAvoid() const { return ReadStaticField<int>("AnyButAvoid"); }
        int Pool() const { return ReadStaticField<int>("Pool"); }
        int MaxRadius() const { return ReadStaticField<int>("MaxRadius"); }
        int TravelTicksBase() const { return ReadStaticField<int>("TravelTicksBase"); }
        void SetTravelTicksBase(int value) const { WriteStaticField<int>("TravelTicksBase", value); }
        float TilesPerTick() const { return ReadStaticField<float>("TilesPerTick"); }
        void SetTilesPerTick(float value) const { WriteStaticField<float>("TilesPerTick", value); }
        int LandingTilesPerTick() const { return ReadStaticField<int>("LandingTilesPerTick"); }
        void SetLandingTilesPerTick(int value) const { WriteStaticField<int>("LandingTilesPerTick", value); }
    };
}
