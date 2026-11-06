#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class NationScale : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationScale(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "NationScale") {}
    public:
        float ScaleOf(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("ScaleOf", args, 2); }
        float AttackMulOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("AttackMulOf", args, 1); }
        float DamageTakenMulOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("DamageTakenMulOf", args, 1); }
        void Publish(int nationId, void* it, void* cfg) const { void* args[] = { &nationId, it, cfg }; CallStatic("Publish", args, 3); }
        void EnsureCapacity(int nationId) const { void* args[] = { &nationId }; CallStatic("EnsureCapacity", args, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void* attack() const { return ReadStaticField<void*>("attack"); }
        void SetAttack(void* value) const { WriteStaticField<void*>("attack", value); }
        void* damageTaken() const { return ReadStaticField<void*>("damageTaken"); }
        void SetDamageTaken(void* value) const { WriteStaticField<void*>("damageTaken", value); }
    };
}
