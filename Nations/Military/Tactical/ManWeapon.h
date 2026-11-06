#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class ManWeapon : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ManWeapon(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "ManWeapon") {}
    public:
        uint8_t Primary() const { return ReadStaticField<uint8_t>("Primary"); }
        uint8_t MachineGun() const { return ReadStaticField<uint8_t>("MachineGun"); }
        uint8_t Crew() const { return ReadStaticField<uint8_t>("Crew"); }
        uint8_t Gun() const { return ReadStaticField<uint8_t>("Gun"); }
    };
}
