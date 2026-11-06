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
        void Register_(void* sim, int div, void* spec) const { void* __callArgs[] = { sim, &div, spec }; Call("Register", __callArgs, 3); }
        float Start(int div) const { void* __callArgs[] = { &div }; return CallValue<float>("Start", __callArgs, 1); }
        float Alive(void* sim, int div) const { void* __callArgs[] = { sim, &div }; return CallValue<float>("Alive", __callArgs, 2); }
        float Drain(void* sim, int div) const { void* __callArgs[] = { sim, &div }; return CallValue<float>("Drain", __callArgs, 2); }
        int DrainTopKiller(void* sim, int div, void* scratch) const { void* __callArgs[] = { sim, &div, scratch }; return CallStaticValue<int>("DrainTopKiller", __callArgs, 3); }
        float ArmourTankWeight() const { return ReadStaticField<float>("ArmourTankWeight"); }
        float ArmourRiflemanWeight() const { return ReadStaticField<float>("ArmourRiflemanWeight"); }
        float ArmourTruckWeight() const { return ReadStaticField<float>("ArmourTruckWeight"); }
    };
}
