#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class FireMode : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FireMode(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "FireMode") {}
    public:
        uint8_t AtWill() const { return ReadStaticField<uint8_t>("AtWill"); }
        uint8_t Volley() const { return ReadStaticField<uint8_t>("Volley"); }
        uint8_t Hold() const { return ReadStaticField<uint8_t>("Hold"); }
        uint8_t ReturnOnly() const { return ReadStaticField<uint8_t>("ReturnOnly"); }
    };
}
