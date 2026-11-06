#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class UnitOrders : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnitOrders(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "UnitOrders") {}
    public:
        int volleyStep() const { return ReadField<int>("volleyStep"); }
        void SetVolleyStep(int value) const { WriteField<int>("volleyStep", value); }
        int routStep() const { return ReadField<int>("routStep"); }
        void SetRoutStep(int value) const { WriteField<int>("routStep", value); }
        int targetForm() const { return ReadField<int>("targetForm"); }
        void SetTargetForm(int value) const { WriteField<int>("targetForm", value); }
        int chargeStep() const { return ReadField<int>("chargeStep"); }
        void SetChargeStep(int value) const { WriteField<int>("chargeStep", value); }
        uint8_t fireMode() const { return ReadField<uint8_t>("fireMode"); }
        void SetFireMode(uint8_t value) const { WriteField<uint8_t>("fireMode", value); }
        uint8_t nerve() const { return ReadField<uint8_t>("nerve"); }
        void SetNerve(uint8_t value) const { WriteField<uint8_t>("nerve", value); }
        uint8_t takeCover() const { return ReadField<uint8_t>("takeCover"); }
        void SetTakeCover(uint8_t value) const { WriteField<uint8_t>("takeCover", value); }
        uint8_t brace() const { return ReadField<uint8_t>("brace"); }
        void SetBrace(uint8_t value) const { WriteField<uint8_t>("brace", value); }
        uint8_t bounding() const { return ReadField<uint8_t>("bounding"); }
        void SetBounding(uint8_t value) const { WriteField<uint8_t>("bounding", value); }
        uint8_t engaged() const { return ReadField<uint8_t>("engaged"); }
        void SetEngaged(uint8_t value) const { WriteField<uint8_t>("engaged", value); }
        uint8_t screen() const { return ReadField<uint8_t>("screen"); }
        void SetScreen(uint8_t value) const { WriteField<uint8_t>("screen", value); }
        uint8_t pad1() const { return ReadField<uint8_t>("pad1"); }
        void SetPad1(uint8_t value) const { WriteField<uint8_t>("pad1", value); }
        float marchMul() const { return ReadField<float>("marchMul"); }
        void SetMarchMul(float value) const { WriteField<float>("marchMul", value); }
        float speedMul() const { return ReadField<float>("speedMul"); }
        void SetSpeedMul(float value) const { WriteField<float>("speedMul", value); }
    };
}
