#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class ArmyMods : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmyMods(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "ArmyMods") {}
    public:
        float attack() const { return ReadField<float>("attack"); }
        void attack(float value) const { WriteField<float>("attack", value); }
        float defence() const { return ReadField<float>("defence"); }
        void defence(float value) const { WriteField<float>("defence", value); }
        float planningRate() const { return ReadField<float>("planningRate"); }
        void planningRate(float value) const { WriteField<float>("planningRate", value); }
        float planningMax() const { return ReadField<float>("planningMax"); }
        void planningMax(float value) const { WriteField<float>("planningMax", value); }
        float supplyUse() const { return ReadField<float>("supplyUse"); }
        void supplyUse(float value) const { WriteField<float>("supplyUse", value); }
        float speed() const { return ReadField<float>("speed"); }
        void speed(float value) const { WriteField<float>("speed", value); }
    };
}
