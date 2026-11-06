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
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int flags() const { return ReadField<int>("flags"); }
        void SetFlags(int value) const { WriteField<int>("flags", value); }
        int actor() const { return ReadField<int>("actor"); }
        void SetActor(int value) const { WriteField<int>("actor", value); }
        int target() const { return ReadField<int>("target"); }
        void SetTarget(int value) const { WriteField<int>("target", value); }
        int tick() const { return ReadField<int>("tick"); }
        void SetTick(int value) const { WriteField<int>("tick", value); }
    };
}
