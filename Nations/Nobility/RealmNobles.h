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
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        float alarm() const { return ReadField<float>("alarm"); }
        void SetAlarm(float value) const { WriteField<float>("alarm", value); }
        int nextHonourTick() const { return ReadField<int>("nextHonourTick"); }
        void SetNextHonourTick(int value) const { WriteField<int>("nextHonourTick", value); }
        int nextDemandTick() const { return ReadField<int>("nextDemandTick"); }
        void SetNextDemandTick(int value) const { WriteField<int>("nextDemandTick", value); }
        bool seeded() const { return ReadField<bool>("seeded"); }
        void SetSeeded(bool value) const { WriteField<bool>("seeded", value); }
        int crownBaronies() const { return ReadField<int>("crownBaronies"); }
        void SetCrownBaronies(int value) const { WriteField<int>("crownBaronies", value); }
        int houseBaronies() const { return ReadField<int>("houseBaronies"); }
        void SetHouseBaronies(int value) const { WriteField<int>("houseBaronies", value); }
        int crownTiles() const { return ReadField<int>("crownTiles"); }
        void SetCrownTiles(int value) const { WriteField<int>("crownTiles", value); }
        int houseTiles() const { return ReadField<int>("houseTiles"); }
        void SetHouseTiles(int value) const { WriteField<int>("houseTiles", value); }
    };
}
