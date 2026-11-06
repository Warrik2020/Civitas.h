#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering::Fx
{
    class WarFxParticle : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarFxParticle(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering.Fx", "WarFxParticle") {}
    public:
        void* pos() const { return ReadField<void*>("pos"); }
        void pos(void* value) const { WriteField<void*>("pos", value); }
        void* vel() const { return ReadField<void*>("vel"); }
        void vel(void* value) const { WriteField<void*>("vel", value); }
        float h() const { return ReadField<float>("h"); }
        void h(float value) const { WriteField<float>("h", value); }
        float vh() const { return ReadField<float>("vh"); }
        void vh(float value) const { WriteField<float>("vh", value); }
        float age() const { return ReadField<float>("age"); }
        void age(float value) const { WriteField<float>("age", value); }
        float life() const { return ReadField<float>("life"); }
        void life(float value) const { WriteField<float>("life", value); }
        float size0() const { return ReadField<float>("size0"); }
        void size0(float value) const { WriteField<float>("size0", value); }
        float size1() const { return ReadField<float>("size1"); }
        void size1(float value) const { WriteField<float>("size1", value); }
        float grow() const { return ReadField<float>("grow"); }
        void grow(float value) const { WriteField<float>("grow", value); }
        float stretch() const { return ReadField<float>("stretch"); }
        void stretch(float value) const { WriteField<float>("stretch", value); }
        float drag() const { return ReadField<float>("drag"); }
        void drag(float value) const { WriteField<float>("drag", value); }
        float gravity() const { return ReadField<float>("gravity"); }
        void gravity(float value) const { WriteField<float>("gravity", value); }
        float rot() const { return ReadField<float>("rot"); }
        void rot(float value) const { WriteField<float>("rot", value); }
        float spin() const { return ReadField<float>("spin"); }
        void spin(float value) const { WriteField<float>("spin", value); }
        float wind() const { return ReadField<float>("wind"); }
        void wind(float value) const { WriteField<float>("wind", value); }
        uint32_t col0() const { return ReadField<uint32_t>("col0"); }
        void col0(uint32_t value) const { WriteField<uint32_t>("col0", value); }
        uint32_t col1() const { return ReadField<uint32_t>("col1"); }
        void col1(uint32_t value) const { WriteField<uint32_t>("col1", value); }
        float extra() const { return ReadField<float>("extra"); }
        void extra(float value) const { WriteField<float>("extra", value); }
        float hold() const { return ReadField<float>("hold"); }
        void hold(float value) const { WriteField<float>("hold", value); }
        uint16_t seed() const { return ReadField<uint16_t>("seed"); }
        void seed(uint16_t value) const { WriteField<uint16_t>("seed", value); }
        uint8_t kind() const { return ReadField<uint8_t>("kind"); }
        void kind(uint8_t value) const { WriteField<uint8_t>("kind", value); }
        uint8_t flags() const { return ReadField<uint8_t>("flags"); }
        void flags(uint8_t value) const { WriteField<uint8_t>("flags", value); }
    };
}
