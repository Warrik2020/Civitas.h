#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class ManFlags : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ManFlags(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "ManFlags") {}
    public:
        uint8_t InBuilding() const { return ReadStaticField<uint8_t>("InBuilding"); }
        uint8_t Seeking() const { return ReadStaticField<uint8_t>("Seeking"); }
        uint8_t AtWindow() const { return ReadStaticField<uint8_t>("AtWindow"); }
        uint8_t InWorks() const { return ReadStaticField<uint8_t>("InWorks"); }
        uint8_t InCrater() const { return ReadStaticField<uint8_t>("InCrater"); }
    };
}
