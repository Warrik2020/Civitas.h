#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Strategic
{
    class ResourceNeeds : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ResourceNeeds(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Strategic", "ResourceNeeds") {}
    public:
        int Compute(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<int>("Compute", __callArgs, 1); }
        int Of(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<int>("Of", __callArgs, 1); }
        void* Material() const { return ReadStaticField<void*>("Material"); }
        void* Propellant() const { return ReadStaticField<void*>("Propellant"); }
        void* Missile() const { return ReadStaticField<void*>("Missile"); }
        void* BowLimb() const { return ReadStaticField<void*>("BowLimb"); }
        void* BowString() const { return ReadStaticField<void*>("BowString"); }
        void* GunTube() const { return ReadStaticField<void*>("GunTube"); }
        void* SiegeFrame() const { return ReadStaticField<void*>("SiegeFrame"); }
    };
}
