#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerMigration : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerMigration(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerMigration") {}
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
        float people() const { return ReadField<float>("people"); }
        void people(float value) const { WriteField<float>("people", value); }
        int origin() const { return ReadField<int>("origin"); }
        void origin(int value) const { WriteField<int>("origin", value); }
        void* mix() const { return ReadField<void*>("mix"); }
        void mix(void* value) const { WriteField<void*>("mix", value); }
    };
}
