#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Strategic
{
    class ResourceLease : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ResourceLease(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Strategic", "ResourceLease") {}
    public:
        int from() const { return ReadField<int>("from"); }
        void SetFrom(int value) const { WriteField<int>("from", value); }
        int to() const { return ReadField<int>("to"); }
        void SetTo(int value) const { WriteField<int>("to", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int units() const { return ReadField<int>("units"); }
        void SetUnits(int value) const { WriteField<int>("units", value); }
        int endTick() const { return ReadField<int>("endTick"); }
        void SetEndTick(int value) const { WriteField<int>("endTick", value); }
    };
}
