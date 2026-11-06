#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class CombatStats : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CombatStats(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "CombatStats") {}
    public:
        float AttackOn(float targetHardness) const { void* args[] = { &targetHardness }; return CallValue<float>("AttackOn", args, 1); }
        void* Scaled(float k) const { void* args[] = { &k }; return Call("Scaled", args, 1); }
        float soft() const { return ReadField<float>("soft"); }
        void SetSoft(float value) const { WriteField<float>("soft", value); }
        float hard() const { return ReadField<float>("hard"); }
        void SetHard(float value) const { WriteField<float>("hard", value); }
        float defence() const { return ReadField<float>("defence"); }
        void SetDefence(float value) const { WriteField<float>("defence", value); }
        float breakthrough() const { return ReadField<float>("breakthrough"); }
        void SetBreakthrough(float value) const { WriteField<float>("breakthrough", value); }
        float hardness() const { return ReadField<float>("hardness"); }
        void SetHardness(float value) const { WriteField<float>("hardness", value); }
        float armour() const { return ReadField<float>("armour"); }
        void SetArmour(float value) const { WriteField<float>("armour", value); }
        float piercing() const { return ReadField<float>("piercing"); }
        void SetPiercing(float value) const { WriteField<float>("piercing", value); }
    };
}
