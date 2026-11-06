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
        uint32_t CitySeed(void* c) const { void* args[] = { c }; return CallStaticValue<uint32_t>("CitySeed", args, 1); }
        void Bake(void* setup, void* arenaTiles, void* cities, void* fightCentre) const { void* args[] = { setup, arenaTiles, cities, fightCentre }; CallStatic("Bake", args, 4); }
        void Bake(void* setup, void* frame, void* sizeTiles, void* cities, void* fightCentre) const { void* args[] = { setup, frame, sizeTiles, cities, fightCentre }; CallStatic("Bake", args, 5); }
        void BakeSynthetic(void* setup, void* centre, float radius, uint32_t seed) const { void* args[] = { setup, centre, &radius, &seed }; CallStatic("BakeSynthetic", args, 4); }
    };
}
