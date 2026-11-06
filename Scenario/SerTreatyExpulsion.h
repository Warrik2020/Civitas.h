#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerTreatyExpulsion : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerTreatyExpulsion(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerTreatyExpulsion") {}
    public:
        int fileId() const { return ReadField<int>("fileId"); }
        void fileId(int value) const { WriteField<int>("fileId", value); }
        int axis() const { return ReadField<int>("axis"); }
        void axis(int value) const { WriteField<int>("axis", value); }
        int fromNationId() const { return ReadField<int>("fromNationId"); }
        void fromNationId(int value) const { WriteField<int>("fromNationId", value); }
        void* tiles() const { return ReadField<void*>("tiles"); }
        void tiles(void* value) const { WriteField<void*>("tiles", value); }
        int cursor() const { return ReadField<int>("cursor"); }
        void cursor(int value) const { WriteField<int>("cursor", value); }
        int ticksLeft() const { return ReadField<int>("ticksLeft"); }
        void ticksLeft(int value) const { WriteField<int>("ticksLeft", value); }
        int64_t removedQ() const { return ReadField<int64_t>("removedQ"); }
        void removedQ(int64_t value) const { WriteField<int64_t>("removedQ", value); }
    };
}
