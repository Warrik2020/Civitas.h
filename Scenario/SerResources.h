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
        void SetFormat(int value) const { WriteField<int>("format", value); }
        void* tiles() const { return ReadField<void*>("tiles"); }
        void SetTiles(void* value) const { WriteField<void*>("tiles", value); }
        void* kinds() const { return ReadField<void*>("kinds"); }
        void SetKinds(void* value) const { WriteField<void*>("kinds", value); }
        void* richness() const { return ReadField<void*>("richness"); }
        void SetRichness(void* value) const { WriteField<void*>("richness", value); }
        void* marketNation() const { return ReadField<void*>("marketNation"); }
        void SetMarketNation(void* value) const { WriteField<void*>("marketNation", value); }
        void* marketKind() const { return ReadField<void*>("marketKind"); }
        void SetMarketKind(void* value) const { WriteField<void*>("marketKind", value); }
        void* marketUnits() const { return ReadField<void*>("marketUnits"); }
        void SetMarketUnits(void* value) const { WriteField<void*>("marketUnits", value); }
        void* leaseFrom() const { return ReadField<void*>("leaseFrom"); }
        void SetLeaseFrom(void* value) const { WriteField<void*>("leaseFrom", value); }
        void* leaseTo() const { return ReadField<void*>("leaseTo"); }
        void SetLeaseTo(void* value) const { WriteField<void*>("leaseTo", value); }
        void* leaseKind() const { return ReadField<void*>("leaseKind"); }
        void SetLeaseKind(void* value) const { WriteField<void*>("leaseKind", value); }
        void* leaseUnits() const { return ReadField<void*>("leaseUnits"); }
        void SetLeaseUnits(void* value) const { WriteField<void*>("leaseUnits", value); }
        void* leaseEnd() const { return ReadField<void*>("leaseEnd"); }
        void SetLeaseEnd(void* value) const { WriteField<void*>("leaseEnd", value); }
        bool startingArmouries() const { return ReadField<bool>("startingArmouries"); }
        void SetStartingArmouries(bool value) const { WriteField<bool>("startingArmouries", value); }
    };
}
