#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class UrbanStreet : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UrbanStreet(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "UrbanStreet") {}
    public:
        void* a() const { return ReadField<void*>("a"); }
        void a(void* value) const { WriteField<void*>("a", value); }
        void* b() const { return ReadField<void*>("b"); }
        void b(void* value) const { WriteField<void*>("b", value); }
        void* halfWidth() const { return ReadField<void*>("halfWidth"); }
        void halfWidth(void* value) const { WriteField<void*>("halfWidth", value); }
        uint8_t kind() const { return ReadField<uint8_t>("kind"); }
        void kind(uint8_t value) const { WriteField<uint8_t>("kind", value); }
        uint8_t district() const { return ReadField<uint8_t>("district"); }
        void district(uint8_t value) const { WriteField<uint8_t>("district", value); }
    };
}
