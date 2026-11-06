#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical::Rendering
{
    class BattleWeaponGlyphs : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleWeaponGlyphs(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical.Rendering", "BattleWeaponGlyphs") {}
    public:
        int Of(void* bd, void* p) const { void* args[] = { &bd, &p }; return CallStaticValue<int>("Of", args, 2); }
        void Add(int g, void* v, void* c, void* t, void* ctr, void* right, void* up, float hw, float hh, float stroke, void* col) const { void* args[] = { &g, v, c, t, ctr, right, up, &hw, &hh, &stroke, col }; CallStatic("Add", args, 11); }
    };
}
