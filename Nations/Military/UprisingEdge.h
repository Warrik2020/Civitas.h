#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class UprisingEdge : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UprisingEdge(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "UprisingEdge") {}
    public:
        float AttackMulOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("AttackMulOf", __callArgs, 1); }
        float DamageTakenMulOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("DamageTakenMulOf", __callArgs, 1); }
        void Publish(int nationId, float fervour, float attackBonus, float defenceBonus) const { void* __callArgs[] = { &nationId, &fervour, &attackBonus, &defenceBonus }; CallStatic("Publish", __callArgs, 4); }
        void Reset(int nationId) const { void* __callArgs[] = { &nationId }; CallStatic("Reset", __callArgs, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void EnsureCapacity(int nationId) const { void* __callArgs[] = { &nationId }; CallStatic("EnsureCapacity", __callArgs, 1); }
        void* attack() const { return ReadStaticField<void*>("attack"); }
        void attack(void* value) const { WriteStaticField<void*>("attack", value); }
        void* damageTaken() const { return ReadStaticField<void*>("damageTaken"); }
        void damageTaken(void* value) const { WriteStaticField<void*>("damageTaken", value); }
    };
}
