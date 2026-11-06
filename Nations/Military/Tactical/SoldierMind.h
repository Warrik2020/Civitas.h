#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class SoldierMind : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SoldierMind(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "SoldierMind") {}
    public:
        uint8_t Formed() const { return ReadStaticField<uint8_t>("Formed"); }
        uint8_t Engaging() const { return ReadStaticField<uint8_t>("Engaging"); }
        uint8_t Covering() const { return ReadStaticField<uint8_t>("Covering"); }
        uint8_t Pinned() const { return ReadStaticField<uint8_t>("Pinned"); }
        uint8_t Melee() const { return ReadStaticField<uint8_t>("Melee"); }
        uint8_t Wavering() const { return ReadStaticField<uint8_t>("Wavering"); }
        uint8_t Straggler() const { return ReadStaticField<uint8_t>("Straggler"); }
        uint8_t Routing() const { return ReadStaticField<uint8_t>("Routing"); }
        uint8_t Charging() const { return ReadStaticField<uint8_t>("Charging"); }
        uint8_t Rallying() const { return ReadStaticField<uint8_t>("Rallying"); }
    };
}
