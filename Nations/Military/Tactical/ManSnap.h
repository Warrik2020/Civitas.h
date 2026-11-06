#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class ManSnap : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ManSnap(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "ManSnap") {}
    public:
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        void* vel() const { return ReadField<void*>("vel"); }
        void SetVel(void* value) const { WriteField<void*>("vel", value); }
        int bat() const { return ReadField<int>("bat"); }
        void SetBat(int value) const { WriteField<int>("bat", value); }
        uint8_t state() const { return ReadField<uint8_t>("state"); }
        void SetState(uint8_t value) const { WriteField<uint8_t>("state", value); }
        uint8_t posture() const { return ReadField<uint8_t>("posture"); }
        void SetPosture(uint8_t value) const { WriteField<uint8_t>("posture", value); }
        uint8_t heading() const { return ReadField<uint8_t>("heading"); }
        void SetHeading(uint8_t value) const { WriteField<uint8_t>("heading", value); }
        uint8_t side() const { return ReadField<uint8_t>("side"); }
        void SetSide(uint8_t value) const { WriteField<uint8_t>("side", value); }
    };
}
