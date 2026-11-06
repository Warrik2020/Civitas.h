#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class Soldier : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Soldier(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "Soldier") {}
    public:
        int target() const { return ReadField<int>("target"); }
        void target(int value) const { WriteField<int>("target", value); }
        int melee() const { return ReadField<int>("melee"); }
        void melee(int value) const { WriteField<int>("melee", value); }
        int threatBy() const { return ReadField<int>("threatBy"); }
        void threatBy(int value) const { WriteField<int>("threatBy", value); }
        int readyStep() const { return ReadField<int>("readyStep"); }
        void readyStep(int value) const { WriteField<int>("readyStep", value); }
        int affStamp() const { return ReadField<int>("affStamp"); }
        void affStamp(int value) const { WriteField<int>("affStamp", value); }
        int stamp() const { return ReadField<int>("stamp"); }
        void stamp(int value) const { WriteField<int>("stamp", value); }
        uint16_t supp() const { return ReadField<uint16_t>("supp"); }
        void supp(uint16_t value) const { WriteField<uint16_t>("supp", value); }
        uint16_t fear() const { return ReadField<uint16_t>("fear"); }
        void fear(uint16_t value) const { WriteField<uint16_t>("fear", value); }
        void* coverOff() const { return ReadField<void*>("coverOff"); }
        void coverOff(void* value) const { WriteField<void*>("coverOff", value); }
        uint8_t mind() const { return ReadField<uint8_t>("mind"); }
        void mind(uint8_t value) const { WriteField<uint8_t>("mind", value); }
        uint8_t posture() const { return ReadField<uint8_t>("posture"); }
        void posture(uint8_t value) const { WriteField<uint8_t>("posture", value); }
        uint8_t fallDir() const { return ReadField<uint8_t>("fallDir"); }
        void fallDir(uint8_t value) const { WriteField<uint8_t>("fallDir", value); }
        uint8_t flags() const { return ReadField<uint8_t>("flags"); }
        void flags(uint8_t value) const { WriteField<uint8_t>("flags", value); }
    };
}
