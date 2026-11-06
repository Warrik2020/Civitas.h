#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerLpBeat : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerLpBeat(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerLpBeat") {}
    public:
        int tick() const { return ReadField<int>("tick"); }
        void tick(int value) const { WriteField<int>("tick", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int cause() const { return ReadField<int>("cause"); }
        void cause(int value) const { WriteField<int>("cause", value); }
        int flags() const { return ReadField<int>("flags"); }
        void flags(int value) const { WriteField<int>("flags", value); }
        int actor() const { return ReadField<int>("actor"); }
        void actor(int value) const { WriteField<int>("actor", value); }
        int target() const { return ReadField<int>("target"); }
        void target(int value) const { WriteField<int>("target", value); }
        int third() const { return ReadField<int>("third"); }
        void third(int value) const { WriteField<int>("third", value); }
        int placeTile() const { return ReadField<int>("placeTile"); }
        void placeTile(int value) const { WriteField<int>("placeTile", value); }
        float value() const { return ReadField<float>("value"); }
        void value(float value) const { WriteField<float>("value", value); }
        void* place() const { return ReadField<void*>("place"); }
        void place(void* value) const { WriteField<void*>("place", value); }
    };
}
