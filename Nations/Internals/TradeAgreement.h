#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class TradeAgreement : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TradeAgreement(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "TradeAgreement") {}
    public:
        int TicksLeft(int tick) const { void* args[] = { &tick }; return CallValue<int>("TicksLeft", args, 1); }
        bool Involves(int nationId) const { void* args[] = { &nationId }; return CallValue<bool>("Involves", args, 1); }
        bool Between(int x, int y) const { void* args[] = { &x, &y }; return CallValue<bool>("Between", args, 2); }
        int Other(int self) const { void* args[] = { &self }; return CallValue<int>("Other", args, 1); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
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
        int startTick() const { return ReadField<int>("startTick"); }
        void SetStartTick(int value) const { WriteField<int>("startTick", value); }
        int endTick() const { return ReadField<int>("endTick"); }
        void SetEndTick(int value) const { WriteField<int>("endTick", value); }
        float delivered() const { return ReadField<float>("delivered"); }
        void SetDelivered(float value) const { WriteField<float>("delivered", value); }
        float paid() const { return ReadField<float>("paid"); }
        void SetPaid(float value) const { WriteField<float>("paid", value); }
        int shortTicks() const { return ReadField<int>("shortTicks"); }
        void SetShortTicks(int value) const { WriteField<int>("shortTicks", value); }
        bool lastShortWasPayment() const { return ReadField<bool>("lastShortWasPayment"); }
        void SetLastShortWasPayment(bool value) const { WriteField<bool>("lastShortWasPayment", value); }
        float lastDelivered() const { return ReadField<float>("lastDelivered"); }
        void SetLastDelivered(float value) const { WriteField<float>("lastDelivered", value); }
    };
}
