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
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int fromNation() const { return ReadField<int>("fromNation"); }
        void SetFromNation(int value) const { WriteField<int>("fromNation", value); }
        int toNation() const { return ReadField<int>("toNation"); }
        void SetToNation(int value) const { WriteField<int>("toNation", value); }
        int avoidNation() const { return ReadField<int>("avoidNation"); }
        void SetAvoidNation(int value) const { WriteField<int>("avoidNation", value); }
        int anchor() const { return ReadField<int>("anchor"); }
        void SetAnchor(int value) const { WriteField<int>("anchor", value); }
        int ticksLeft() const { return ReadField<int>("ticksLeft"); }
        void SetTicksLeft(int value) const { WriteField<int>("ticksLeft", value); }
        int step() const { return ReadField<int>("step"); }
        void SetStep(int value) const { WriteField<int>("step", value); }
        void* packet() const { return ReadField<void*>("packet"); }
        void SetPacket(void* value) const { WriteField<void*>("packet", value); }
    };
}
