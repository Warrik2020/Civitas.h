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
        float AttackOn(float targetHardness) const { void* __callArgs[] = { &targetHardness }; return CallValue<float>("AttackOn", __callArgs, 1); }
        void* Scaled(float k) const { void* __callArgs[] = { &k }; return Call("Scaled", __callArgs, 1); }
        float soft() const { return ReadField<float>("soft"); }
        void soft(float value) const { WriteField<float>("soft", value); }
        float hard() const { return ReadField<float>("hard"); }
        void hard(float value) const { WriteField<float>("hard", value); }
        float defence() const { return ReadField<float>("defence"); }
        void defence(float value) const { WriteField<float>("defence", value); }
        float breakthrough() const { return ReadField<float>("breakthrough"); }
        void breakthrough(float value) const { WriteField<float>("breakthrough", value); }
        float hardness() const { return ReadField<float>("hardness"); }
        void hardness(float value) const { WriteField<float>("hardness", value); }
        float armour() const { return ReadField<float>("armour"); }
        void armour(float value) const { WriteField<float>("armour", value); }
        float piercing() const { return ReadField<float>("piercing"); }
        void piercing(float value) const { WriteField<float>("piercing", value); }
    };
}
