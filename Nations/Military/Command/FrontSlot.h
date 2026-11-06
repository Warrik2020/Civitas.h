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
        void SetPost(int value) const { WriteField<int>("post", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        uint8_t tier() const { return ReadField<uint8_t>("tier"); }
        void SetTier(uint8_t value) const { WriteField<uint8_t>("tier", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        float order() const { return ReadField<float>("order"); }
        void SetOrder(float value) const { WriteField<float>("order", value); }
        void* offset() const { return ReadField<void*>("offset"); }
        void SetOffset(void* value) const { WriteField<void*>("offset", value); }
    };
}
