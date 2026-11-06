#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleLedger : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleLedger(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleLedger") {}
    public:
        void Register_(void* sim, int div, void* spec) const { void* args[] = { sim, &div, spec }; Call("Register", args, 3); }
        float Start(int div) const { void* args[] = { &div }; return CallValue<float>("Start", args, 1); }
        float Alive(void* sim, int div) const { void* args[] = { sim, &div }; return CallValue<float>("Alive", args, 2); }
        float Drain(void* sim, int div) const { void* args[] = { sim, &div }; return CallValue<float>("Drain", args, 2); }
        int DrainTopKiller(void* sim, int div, void* scratch) const { void* args[] = { sim, &div, scratch }; return CallStaticValue<int>("DrainTopKiller", args, 3); }
        float ArmourTankWeight() const { return ReadStaticField<float>("ArmourTankWeight"); }
        float ArmourRiflemanWeight() const { return ReadStaticField<float>("ArmourRiflemanWeight"); }
        float ArmourTruckWeight() const { return ReadStaticField<float>("ArmourTruckWeight"); }
        float start() const { return ReadField<float>("start"); }
        void SetStart(float value) const { WriteField<float>("start", value); }
        float booked() const { return ReadField<float>("booked"); }
        void SetBooked(float value) const { WriteField<float>("booked", value); }
        float wTank() const { return ReadField<float>("wTank"); }
        void SetWTank(float value) const { WriteField<float>("wTank", value); }
        float wInfantry() const { return ReadField<float>("wInfantry"); }
        void SetWInfantry(float value) const { WriteField<float>("wInfantry", value); }
        float wVehicle() const { return ReadField<float>("wVehicle"); }
        void SetWVehicle(float value) const { WriteField<float>("wVehicle", value); }
        float wOther() const { return ReadField<float>("wOther"); }
        void SetWOther(float value) const { WriteField<float>("wOther", value); }
    };
}
