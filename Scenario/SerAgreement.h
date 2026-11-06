#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerAgreement : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerAgreement(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerAgreement") {}
    public:
        int supplierId() const { return ReadField<int>("supplierId"); }
        void SetSupplierId(int value) const { WriteField<int>("supplierId", value); }
        int receiverId() const { return ReadField<int>("receiverId"); }
        void SetReceiverId(int value) const { WriteField<int>("receiverId", value); }
        int pool() const { return ReadField<int>("pool"); }
        void SetPool(int value) const { WriteField<int>("pool", value); }
        float perTick() const { return ReadField<float>("perTick"); }
        void SetPerTick(float value) const { WriteField<float>("perTick", value); }
        float pricePerUnit() const { return ReadField<float>("pricePerUnit"); }
        void SetPricePerUnit(float value) const { WriteField<float>("pricePerUnit", value); }
        int ticksLeft() const { return ReadField<int>("ticksLeft"); }
        void SetTicksLeft(int value) const { WriteField<int>("ticksLeft", value); }
        float delivered() const { return ReadField<float>("delivered"); }
        void SetDelivered(float value) const { WriteField<float>("delivered", value); }
        float paid() const { return ReadField<float>("paid"); }
        void SetPaid(float value) const { WriteField<float>("paid", value); }
        int shortTicks() const { return ReadField<int>("shortTicks"); }
        void SetShortTicks(int value) const { WriteField<int>("shortTicks", value); }
    };
}
