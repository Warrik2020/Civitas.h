#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerResources : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerResources(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerResources") {}
    public:
        int format() const { return ReadField<int>("format"); }
        void format(int value) const { WriteField<int>("format", value); }
        void* tiles() const { return ReadField<void*>("tiles"); }
        void tiles(void* value) const { WriteField<void*>("tiles", value); }
        void* kinds() const { return ReadField<void*>("kinds"); }
        void kinds(void* value) const { WriteField<void*>("kinds", value); }
        void* richness() const { return ReadField<void*>("richness"); }
        void richness(void* value) const { WriteField<void*>("richness", value); }
        void* marketNation() const { return ReadField<void*>("marketNation"); }
        void marketNation(void* value) const { WriteField<void*>("marketNation", value); }
        void* marketKind() const { return ReadField<void*>("marketKind"); }
        void marketKind(void* value) const { WriteField<void*>("marketKind", value); }
        void* marketUnits() const { return ReadField<void*>("marketUnits"); }
        void marketUnits(void* value) const { WriteField<void*>("marketUnits", value); }
        void* leaseFrom() const { return ReadField<void*>("leaseFrom"); }
        void leaseFrom(void* value) const { WriteField<void*>("leaseFrom", value); }
        void* leaseTo() const { return ReadField<void*>("leaseTo"); }
        void leaseTo(void* value) const { WriteField<void*>("leaseTo", value); }
        void* leaseKind() const { return ReadField<void*>("leaseKind"); }
        void leaseKind(void* value) const { WriteField<void*>("leaseKind", value); }
        void* leaseUnits() const { return ReadField<void*>("leaseUnits"); }
        void leaseUnits(void* value) const { WriteField<void*>("leaseUnits", value); }
        void* leaseEnd() const { return ReadField<void*>("leaseEnd"); }
        void leaseEnd(void* value) const { WriteField<void*>("leaseEnd", value); }
        bool startingArmouries() const { return ReadField<bool>("startingArmouries"); }
        void startingArmouries(bool value) const { WriteField<bool>("startingArmouries", value); }
    };
}
