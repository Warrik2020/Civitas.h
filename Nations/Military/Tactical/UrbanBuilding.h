#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class UrbanBuilding : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UrbanBuilding(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "UrbanBuilding") {}
    public:
        void* centre() const { return ReadField<void*>("centre"); }
        void SetCentre(void* value) const { WriteField<void*>("centre", value); }
        void* half() const { return ReadField<void*>("half"); }
        void SetHalf(void* value) const { WriteField<void*>("half", value); }
        uint8_t dir() const { return ReadField<uint8_t>("dir"); }
        void SetDir(uint8_t value) const { WriteField<uint8_t>("dir", value); }
        uint8_t kind() const { return ReadField<uint8_t>("kind"); }
        void SetKind(uint8_t value) const { WriteField<uint8_t>("kind", value); }
        uint8_t cover() const { return ReadField<uint8_t>("cover"); }
        void SetCover(uint8_t value) const { WriteField<uint8_t>("cover", value); }
        uint8_t pad() const { return ReadField<uint8_t>("pad"); }
        void SetPad(uint8_t value) const { WriteField<uint8_t>("pad", value); }
    };
}
