#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class ImpactKind : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ImpactKind(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "ImpactKind") {}
    public:
        uint8_t Round() const { return ReadStaticField<uint8_t>("Round"); }
        uint8_t Blow() const { return ReadStaticField<uint8_t>("Blow"); }
        uint8_t Blast() const { return ReadStaticField<uint8_t>("Blast"); }
        uint8_t Roundshot() const { return ReadStaticField<uint8_t>("Roundshot"); }
    };
}
