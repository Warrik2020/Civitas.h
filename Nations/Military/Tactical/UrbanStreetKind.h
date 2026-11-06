#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class UrbanStreetKind : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UrbanStreetKind(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "UrbanStreetKind") {}
    public:
        uint8_t Lane() const { return ReadStaticField<uint8_t>("Lane"); }
        uint8_t Street() const { return ReadStaticField<uint8_t>("Street"); }
        uint8_t Avenue() const { return ReadStaticField<uint8_t>("Avenue"); }
    };
}
