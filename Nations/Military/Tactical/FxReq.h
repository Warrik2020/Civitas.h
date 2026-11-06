#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class FxReq : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FxReq(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "FxReq") {}
    public:
        void* a() const { return ReadField<void*>("a"); }
        void SetA(void* value) const { WriteField<void*>("a", value); }
        void* b() const { return ReadField<void*>("b"); }
        void SetB(void* value) const { WriteField<void*>("b", value); }
        uint32_t color() const { return ReadField<uint32_t>("color"); }
        void SetColor(uint32_t value) const { WriteField<uint32_t>("color", value); }
        float size() const { return ReadField<float>("size"); }
        void SetSize(float value) const { WriteField<float>("size", value); }
        float flight() const { return ReadField<float>("flight"); }
        void SetFlight(float value) const { WriteField<float>("flight", value); }
        uint8_t kind() const { return ReadField<uint8_t>("kind"); }
        void SetKind(uint8_t value) const { WriteField<uint8_t>("kind", value); }
    };
}
