#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class Shell : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Shell(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "Shell") {}
    public:
        void* from() const { return ReadField<void*>("from"); }
        void SetFrom(void* value) const { WriteField<void*>("from", value); }
        void* to() const { return ReadField<void*>("to"); }
        void SetTo(void* value) const { WriteField<void*>("to", value); }
        float t() const { return ReadField<float>("t"); }
        void SetT(float value) const { WriteField<float>("t", value); }
        float flight() const { return ReadField<float>("flight"); }
        void SetFlight(float value) const { WriteField<float>("flight", value); }
        float blast() const { return ReadField<float>("blast"); }
        void SetBlast(float value) const { WriteField<float>("blast", value); }
        int targetBat() const { return ReadField<int>("targetBat"); }
        void SetTargetBat(int value) const { WriteField<int>("targetBat", value); }
        int targetStart() const { return ReadField<int>("targetStart"); }
        void SetTargetStart(int value) const { WriteField<int>("targetStart", value); }
        int targetCount() const { return ReadField<int>("targetCount"); }
        void SetTargetCount(int value) const { WriteField<int>("targetCount", value); }
        int attackerDiv() const { return ReadField<int>("attackerDiv"); }
        void SetAttackerDiv(int value) const { WriteField<int>("attackerDiv", value); }
        int maxKills() const { return ReadField<int>("maxKills"); }
        void SetMaxKills(int value) const { WriteField<int>("maxKills", value); }
        uint8_t alive() const { return ReadField<uint8_t>("alive"); }
        void SetAlive(uint8_t value) const { WriteField<uint8_t>("alive", value); }
        uint8_t kind() const { return ReadField<uint8_t>("kind"); }
        void SetKind(uint8_t value) const { WriteField<uint8_t>("kind", value); }
    };
}
