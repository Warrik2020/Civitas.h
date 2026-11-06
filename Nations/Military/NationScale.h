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
        float ScaleOf(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("ScaleOf", __callArgs, 2); }
        float AttackMulOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("AttackMulOf", __callArgs, 1); }
        float DamageTakenMulOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("DamageTakenMulOf", __callArgs, 1); }
        void Publish(int nationId, void* it, void* cfg) const { void* __callArgs[] = { &nationId, it, cfg }; CallStatic("Publish", __callArgs, 3); }
        void EnsureCapacity(int nationId) const { void* __callArgs[] = { &nationId }; CallStatic("EnsureCapacity", __callArgs, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void* attack() const { return ReadStaticField<void*>("attack"); }
        void attack(void* value) const { WriteStaticField<void*>("attack", value); }
        void* damageTaken() const { return ReadStaticField<void*>("damageTaken"); }
        void damageTaken(void* value) const { WriteStaticField<void*>("damageTaken", value); }
    };
}
