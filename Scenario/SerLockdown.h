#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerLockdown : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerLockdown(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerLockdown") {}
    public:
        int occupier() const { return ReadField<int>("occupier"); }
        void occupier(int value) const { WriteField<int>("occupier", value); }
        int host() const { return ReadField<int>("host"); }
        void host(int value) const { WriteField<int>("host", value); }
        int stateId() const { return ReadField<int>("stateId"); }
        void stateId(int value) const { WriteField<int>("stateId", value); }
        int progressTicks() const { return ReadField<int>("progressTicks"); }
        void progressTicks(int value) const { WriteField<int>("progressTicks", value); }
        bool locked() const { return ReadField<bool>("locked"); }
        void locked(bool value) const { WriteField<bool>("locked", value); }
    };
}
