#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class FrontSlot : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrontSlot(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "FrontSlot") {}
    public:
        int post() const { return ReadField<int>("post"); }
        void post(int value) const { WriteField<int>("post", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        uint8_t tier() const { return ReadField<uint8_t>("tier"); }
        void tier(uint8_t value) const { WriteField<uint8_t>("tier", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void pos(void* value) const { WriteField<void*>("pos", value); }
        float order() const { return ReadField<float>("order"); }
        void order(float value) const { WriteField<float>("order", value); }
        void* offset() const { return ReadField<void*>("offset"); }
        void offset(void* value) const { WriteField<void*>("offset", value); }
    };
}
