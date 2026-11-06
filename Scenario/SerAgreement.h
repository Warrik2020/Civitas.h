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
        void supplierId(int value) const { WriteField<int>("supplierId", value); }
        int receiverId() const { return ReadField<int>("receiverId"); }
        void receiverId(int value) const { WriteField<int>("receiverId", value); }
        int pool() const { return ReadField<int>("pool"); }
        void pool(int value) const { WriteField<int>("pool", value); }
        float perTick() const { return ReadField<float>("perTick"); }
        void perTick(float value) const { WriteField<float>("perTick", value); }
        float pricePerUnit() const { return ReadField<float>("pricePerUnit"); }
        void pricePerUnit(float value) const { WriteField<float>("pricePerUnit", value); }
        int ticksLeft() const { return ReadField<int>("ticksLeft"); }
        void ticksLeft(int value) const { WriteField<int>("ticksLeft", value); }
        float delivered() const { return ReadField<float>("delivered"); }
        void delivered(float value) const { WriteField<float>("delivered", value); }
        float paid() const { return ReadField<float>("paid"); }
        void paid(float value) const { WriteField<float>("paid", value); }
        int shortTicks() const { return ReadField<int>("shortTicks"); }
        void shortTicks(int value) const { WriteField<int>("shortTicks", value); }
    };
}
