#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerNaval : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerNaval(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerNaval") {}
    public:
        void* beachheads() const { return ReadField<void*>("beachheads"); }
        void SetBeachheads(void* value) const { WriteField<void*>("beachheads", value); }
        void* fleets() const { return ReadField<void*>("fleets"); }
        void SetFleets(void* value) const { WriteField<void*>("fleets", value); }
        void* fleetBuilds() const { return ReadField<void*>("fleetBuilds"); }
        void SetFleetBuilds(void* value) const { WriteField<void*>("fleetBuilds", value); }
        void* taskForces() const { return ReadField<void*>("taskForces"); }
        void SetTaskForces(void* value) const { WriteField<void*>("taskForces", value); }
    };
}
