#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class PosturePolicy : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PosturePolicy(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "PosturePolicy") {}
    public:
        uint8_t Stand() const { return ReadStaticField<uint8_t>("Stand"); }
        uint8_t Kneel() const { return ReadStaticField<uint8_t>("Kneel"); }
        uint8_t Prone() const { return ReadStaticField<uint8_t>("Prone"); }
        uint8_t Shields() const { return ReadStaticField<uint8_t>("Shields"); }
    };
}
