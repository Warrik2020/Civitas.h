#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class Man : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Man(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "Man") {}
    public:
        void* pos() const { return ReadField<void*>("pos"); }
        void pos(void* value) const { WriteField<void*>("pos", value); }
        void* vel() const { return ReadField<void*>("vel"); }
        void vel(void* value) const { WriteField<void*>("vel", value); }
        void* slot() const { return ReadField<void*>("slot"); }
        void slot(void* value) const { WriteField<void*>("slot", value); }
        float fireT() const { return ReadField<float>("fireT"); }
        void fireT(float value) const { WriteField<float>("fireT", value); }
        float stateT() const { return ReadField<float>("stateT"); }
        void stateT(float value) const { WriteField<float>("stateT", value); }
        uint16_t bat() const { return ReadField<uint16_t>("bat"); }
        void bat(uint16_t value) const { WriteField<uint16_t>("bat", value); }
        uint8_t rank() const { return ReadField<uint8_t>("rank"); }
        void rank(uint8_t value) const { WriteField<uint8_t>("rank", value); }
        uint8_t state() const { return ReadField<uint8_t>("state"); }
        void state(uint8_t value) const { WriteField<uint8_t>("state", value); }
        uint8_t hp() const { return ReadField<uint8_t>("hp"); }
        void hp(uint8_t value) const { WriteField<uint8_t>("hp", value); }
        uint8_t weapon() const { return ReadField<uint8_t>("weapon"); }
        void weapon(uint8_t value) const { WriteField<uint8_t>("weapon", value); }
        uint8_t flags() const { return ReadField<uint8_t>("flags"); }
        void flags(uint8_t value) const { WriteField<uint8_t>("flags", value); }
        uint8_t heading() const { return ReadField<uint8_t>("heading"); }
        void heading(uint8_t value) const { WriteField<uint8_t>("heading", value); }
    };
}
