#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleTerrain : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleTerrain(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleTerrain") {}
    public:
        void Bake(void* setup, void* arenaTiles, void* grid, void* cities) const { void* args[] = { setup, arenaTiles, grid, cities }; CallStatic("Bake", args, 4); }
        void Bake(void* setup, void* frame, void* sizeTiles, void* grid, void* cities) const { void* args[] = { setup, frame, sizeTiles, grid, cities }; CallStatic("Bake", args, 5); }
    };
}
