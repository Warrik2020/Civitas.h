#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerLpIncident : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerLpIncident(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerLpIncident") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int flags() const { return ReadField<int>("flags"); }
        void flags(int value) const { WriteField<int>("flags", value); }
        int actor() const { return ReadField<int>("actor"); }
        void actor(int value) const { WriteField<int>("actor", value); }
        int target() const { return ReadField<int>("target"); }
        void target(int value) const { WriteField<int>("target", value); }
        int tick() const { return ReadField<int>("tick"); }
        void tick(int value) const { WriteField<int>("tick", value); }
    };
}
