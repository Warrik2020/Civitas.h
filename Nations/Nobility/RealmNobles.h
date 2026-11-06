#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Nobility
{
    class RealmNobles : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RealmNobles(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Nobility", "RealmNobles") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        float alarm() const { return ReadField<float>("alarm"); }
        void alarm(float value) const { WriteField<float>("alarm", value); }
        int nextHonourTick() const { return ReadField<int>("nextHonourTick"); }
        void nextHonourTick(int value) const { WriteField<int>("nextHonourTick", value); }
        int nextDemandTick() const { return ReadField<int>("nextDemandTick"); }
        void nextDemandTick(int value) const { WriteField<int>("nextDemandTick", value); }
        bool seeded() const { return ReadField<bool>("seeded"); }
        void seeded(bool value) const { WriteField<bool>("seeded", value); }
        int crownBaronies() const { return ReadField<int>("crownBaronies"); }
        void crownBaronies(int value) const { WriteField<int>("crownBaronies", value); }
        int houseBaronies() const { return ReadField<int>("houseBaronies"); }
        void houseBaronies(int value) const { WriteField<int>("houseBaronies", value); }
        int crownTiles() const { return ReadField<int>("crownTiles"); }
        void crownTiles(int value) const { WriteField<int>("crownTiles", value); }
        int houseTiles() const { return ReadField<int>("houseTiles"); }
        void houseTiles(int value) const { WriteField<int>("houseTiles", value); }
    };
}
