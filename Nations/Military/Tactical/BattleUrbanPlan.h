#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleUrbanPlan : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleUrbanPlan(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleUrbanPlan") {}
    public:
        uint32_t CitySeed(void* c) const { void* __callArgs[] = { c }; return CallStaticValue<uint32_t>("CitySeed", __callArgs, 1); }
        void Bake(void* setup, void* arenaTiles, void* cities, void* fightCentre) const { void* __callArgs[] = { setup, arenaTiles, cities, fightCentre }; CallStatic("Bake", __callArgs, 4); }
        void Bake(void* setup, void* frame, void* sizeTiles, void* cities, void* fightCentre) const { void* __callArgs[] = { setup, frame, sizeTiles, cities, fightCentre }; CallStatic("Bake", __callArgs, 5); }
        void BakeSynthetic(void* setup, void* centre, float radius, uint32_t seed) const { void* __callArgs[] = { setup, centre, &radius, &seed }; CallStatic("BakeSynthetic", __callArgs, 4); }
    };
}
