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
        float AttackMulOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("AttackMulOf", args, 1); }
        float DamageTakenMulOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("DamageTakenMulOf", args, 1); }
        void Publish(int nationId, float fervour, float attackBonus, float defenceBonus) const { void* args[] = { &nationId, &fervour, &attackBonus, &defenceBonus }; CallStatic("Publish", args, 4); }
        void Reset(int nationId) const { void* args[] = { &nationId }; CallStatic("Reset", args, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void EnsureCapacity(int nationId) const { void* args[] = { &nationId }; CallStatic("EnsureCapacity", args, 1); }
        void* attack() const { return ReadStaticField<void*>("attack"); }
        void SetAttack(void* value) const { WriteStaticField<void*>("attack", value); }
        void* damageTaken() const { return ReadStaticField<void*>("damageTaken"); }
        void SetDamageTaken(void* value) const { WriteStaticField<void*>("damageTaken", value); }
    };
}
