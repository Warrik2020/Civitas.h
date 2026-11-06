#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleAI : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleAI(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleAI") {}
    public:
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        void Think(void* sim, int side, void* controls, float dt) const { void* args[] = { sim, &side, controls, &dt }; CallStatic("Think", args, 4); }
        void* own() const { return ReadField<void*>("own"); }
        void SetOwn(void* value) const { WriteField<void*>("own", value); }
        void* enemy() const { return ReadField<void*>("enemy"); }
        void SetEnemy(void* value) const { WriteField<void*>("enemy", value); }
        void* axis() const { return ReadField<void*>("axis"); }
        void SetAxis(void* value) const { WriteField<void*>("axis", value); }
        float strength() const { return ReadField<float>("strength"); }
        void SetStrength(float value) const { WriteField<float>("strength", value); }
        float startStrength() const { return ReadField<float>("startStrength"); }
        void SetStartStrength(float value) const { WriteField<float>("startStrength", value); }
        bool collapsed() const { return ReadField<bool>("collapsed"); }
        void SetCollapsed(bool value) const { WriteField<bool>("collapsed", value); }
        int enemyAlive() const { return ReadField<int>("enemyAlive"); }
        void SetEnemyAlive(int value) const { WriteField<int>("enemyAlive", value); }
    };
}
