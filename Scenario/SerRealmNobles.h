#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerRealmNobles : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerRealmNobles(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerRealmNobles") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int nextHonourTick() const { return ReadField<int>("nextHonourTick"); }
        void nextHonourTick(int value) const { WriteField<int>("nextHonourTick", value); }
        int nextDemandTick() const { return ReadField<int>("nextDemandTick"); }
        void nextDemandTick(int value) const { WriteField<int>("nextDemandTick", value); }
        float alarm() const { return ReadField<float>("alarm"); }
        void alarm(float value) const { WriteField<float>("alarm", value); }
        bool seeded() const { return ReadField<bool>("seeded"); }
        void seeded(bool value) const { WriteField<bool>("seeded", value); }
    };
}
