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
        int TicksLeft(int tick) const { void* __callArgs[] = { &tick }; return CallValue<int>("TicksLeft", __callArgs, 1); }
        bool Involves(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<bool>("Involves", __callArgs, 1); }
        bool Between(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<bool>("Between", __callArgs, 2); }
        int Other(int self) const { void* __callArgs[] = { &self }; return CallValue<int>("Other", __callArgs, 1); }
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int supplierId() const { return ReadField<int>("supplierId"); }
        void supplierId(int value) const { WriteField<int>("supplierId", value); }
        int receiverId() const { return ReadField<int>("receiverId"); }
        void receiverId(int value) const { WriteField<int>("receiverId", value); }
        int pool() const { return ReadField<int>("pool"); }
        void pool(int value) const { WriteField<int>("pool", value); }
        float perTick() const { return ReadField<float>("perTick"); }
        void perTick(float value) const { WriteField<float>("perTick", value); }
        float pricePerUnit() const { return ReadField<float>("pricePerUnit"); }
        void pricePerUnit(float value) const { WriteField<float>("pricePerUnit", value); }
        int startTick() const { return ReadField<int>("startTick"); }
        void startTick(int value) const { WriteField<int>("startTick", value); }
        int endTick() const { return ReadField<int>("endTick"); }
        void endTick(int value) const { WriteField<int>("endTick", value); }
        float delivered() const { return ReadField<float>("delivered"); }
        void delivered(float value) const { WriteField<float>("delivered", value); }
        float paid() const { return ReadField<float>("paid"); }
        void paid(float value) const { WriteField<float>("paid", value); }
        int shortTicks() const { return ReadField<int>("shortTicks"); }
        void shortTicks(int value) const { WriteField<int>("shortTicks", value); }
        bool lastShortWasPayment() const { return ReadField<bool>("lastShortWasPayment"); }
        void lastShortWasPayment(bool value) const { WriteField<bool>("lastShortWasPayment", value); }
        float lastDelivered() const { return ReadField<float>("lastDelivered"); }
        void lastDelivered(float value) const { WriteField<float>("lastDelivered", value); }
    };
}
