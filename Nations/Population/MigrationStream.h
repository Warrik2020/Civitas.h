#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Population
{
    class MigrationStream : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MigrationStream(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Population", "MigrationStream") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int fromNation() const { return ReadField<int>("fromNation"); }
        void fromNation(int value) const { WriteField<int>("fromNation", value); }
        int toNation() const { return ReadField<int>("toNation"); }
        void toNation(int value) const { WriteField<int>("toNation", value); }
        int avoidNation() const { return ReadField<int>("avoidNation"); }
        void avoidNation(int value) const { WriteField<int>("avoidNation", value); }
        int anchor() const { return ReadField<int>("anchor"); }
        void anchor(int value) const { WriteField<int>("anchor", value); }
        int ticksLeft() const { return ReadField<int>("ticksLeft"); }
        void ticksLeft(int value) const { WriteField<int>("ticksLeft", value); }
        int step() const { return ReadField<int>("step"); }
        void step(int value) const { WriteField<int>("step", value); }
        void* packet() const { return ReadField<void*>("packet"); }
        void packet(void* value) const { WriteField<void*>("packet", value); }
    };
}
