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
        void from(int value) const { WriteField<int>("from", value); }
        int to() const { return ReadField<int>("to"); }
        void to(int value) const { WriteField<int>("to", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int units() const { return ReadField<int>("units"); }
        void units(int value) const { WriteField<int>("units", value); }
        int endTick() const { return ReadField<int>("endTick"); }
        void endTick(int value) const { WriteField<int>("endTick", value); }
    };
}
