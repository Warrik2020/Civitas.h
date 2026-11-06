#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class LockdownRecord : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LockdownRecord(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "LockdownRecord") {}
    public:
        int occupier() const { return ReadField<int>("occupier"); }
        void SetOccupier(int value) const { WriteField<int>("occupier", value); }
        int host() const { return ReadField<int>("host"); }
        void SetHost(int value) const { WriteField<int>("host", value); }
        int stateId() const { return ReadField<int>("stateId"); }
        void SetStateId(int value) const { WriteField<int>("stateId", value); }
        int progressTicks() const { return ReadField<int>("progressTicks"); }
        void SetProgressTicks(int value) const { WriteField<int>("progressTicks", value); }
        bool locked() const { return ReadField<bool>("locked"); }
        void SetLocked(bool value) const { WriteField<bool>("locked", value); }
    };
}
