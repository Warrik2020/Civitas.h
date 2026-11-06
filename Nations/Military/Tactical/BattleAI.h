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
        void Think(void* sim, int side, void* controls, float dt) const { void* __callArgs[] = { sim, &side, controls, &dt }; CallStatic("Think", __callArgs, 4); }
    };
}
