#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerNobility : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerNobility(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerNobility") {}
    public:
        int format() const { return ReadField<int>("format"); }
        void format(int value) const { WriteField<int>("format", value); }
        int mosaicSeed() const { return ReadField<int>("mosaicSeed"); }
        void mosaicSeed(int value) const { WriteField<int>("mosaicSeed", value); }
        int baronyTarget() const { return ReadField<int>("baronyTarget"); }
        void baronyTarget(int value) const { WriteField<int>("baronyTarget", value); }
        int nextHouseId() const { return ReadField<int>("nextHouseId"); }
        void nextHouseId(int value) const { WriteField<int>("nextHouseId", value); }
        void* houses() const { return ReadField<void*>("houses"); }
        void houses(void* value) const { WriteField<void*>("houses", value); }
        void* holdings() const { return ReadField<void*>("holdings"); }
        void holdings(void* value) const { WriteField<void*>("holdings", value); }
        void* realms() const { return ReadField<void*>("realms"); }
        void realms(void* value) const { WriteField<void*>("realms", value); }
    };
}
