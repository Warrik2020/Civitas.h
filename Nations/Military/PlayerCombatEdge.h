#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class PlayerCombatEdge : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PlayerCombatEdge(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "PlayerCombatEdge") {}
    public:
        void Publish(int nationId, void* cfg) const { void* __callArgs[] = { &nationId, cfg }; CallStatic("Publish", __callArgs, 2); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        bool AppliesTo(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<bool>("AppliesTo", __callArgs, 1); }
        float AttackMulOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("AttackMulOf", __callArgs, 1); }
        float DamageTakenMulOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("DamageTakenMulOf", __callArgs, 1); }
        int playerNationId() const { return ReadStaticField<int>("playerNationId"); }
        void playerNationId(int value) const { WriteStaticField<int>("playerNationId", value); }
        float attack() const { return ReadStaticField<float>("attack"); }
        void attack(float value) const { WriteStaticField<float>("attack", value); }
        float damageTaken() const { return ReadStaticField<float>("damageTaken"); }
        void damageTaken(float value) const { WriteStaticField<float>("damageTaken", value); }
    };
}
