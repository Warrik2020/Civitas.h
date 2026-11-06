#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerRealmPeak : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerRealmPeak(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerRealmPeak") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int tiles() const { return ReadField<int>("tiles"); }
        void SetTiles(int value) const { WriteField<int>("tiles", value); }
        int worldTick() const { return ReadField<int>("worldTick"); }
        void SetWorldTick(int value) const { WriteField<int>("worldTick", value); }
        void* anchors() const { return ReadField<void*>("anchors"); }
        void SetAnchors(void* value) const { WriteField<void*>("anchors", value); }
        void* weights() const { return ReadField<void*>("weights"); }
        void SetWeights(void* value) const { WriteField<void*>("weights", value); }
    };
}
