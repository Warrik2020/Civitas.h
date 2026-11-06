#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering::Fx
{
    class WarFxFlags : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarFxFlags(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering.Fx", "WarFxFlags") {}
    public:
        uint8_t Alive() const { return ReadStaticField<uint8_t>("Alive"); }
        uint8_t Dead() const { return ReadStaticField<uint8_t>("Dead"); }
        uint8_t Align() const { return ReadStaticField<uint8_t>("Align"); }
        uint8_t CastShadow() const { return ReadStaticField<uint8_t>("CastShadow"); }
        uint8_t Coarse() const { return ReadStaticField<uint8_t>("Coarse"); }
    };
}
