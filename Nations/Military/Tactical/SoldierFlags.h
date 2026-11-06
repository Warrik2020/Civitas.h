#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class SoldierFlags : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SoldierFlags(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "SoldierFlags") {}
    public:
        uint8_t HasCover() const { return ReadStaticField<uint8_t>("HasCover"); }
        uint8_t Aiming() const { return ReadStaticField<uint8_t>("Aiming"); }
        uint8_t ChargeImpact() const { return ReadStaticField<uint8_t>("ChargeImpact"); }
        uint8_t InCover() const { return ReadStaticField<uint8_t>("InCover"); }
    };
}
