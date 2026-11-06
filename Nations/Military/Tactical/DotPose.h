#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class DotPose : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DotPose(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "DotPose") {}
    public:
        uint8_t Stand() const { return ReadStaticField<uint8_t>("Stand"); }
        uint8_t Kneel() const { return ReadStaticField<uint8_t>("Kneel"); }
        uint8_t Prone() const { return ReadStaticField<uint8_t>("Prone"); }
        uint8_t Brace() const { return ReadStaticField<uint8_t>("Brace"); }
        uint8_t PostureMask() const { return ReadStaticField<uint8_t>("PostureMask"); }
        uint8_t Firing() const { return ReadStaticField<uint8_t>("Firing"); }
        uint8_t Spare() const { return ReadStaticField<uint8_t>("Spare"); }
    };
}
