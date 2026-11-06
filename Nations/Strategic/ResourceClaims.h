#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Strategic
{
    class ResourceClaims : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ResourceClaims(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Strategic", "ResourceClaims") {}
    public:
        bool Lacks(int nationId, int k, void* it) const { void* args[] = { &nationId, &k, it }; return CallStaticValue<bool>("Lacks", args, 3); }
        bool LacksHere(int claimantId, void* tiles, int& kind) const { void* args[] = { &claimantId, tiles, &kind }; return CallStaticValue<bool>("LacksHere", args, 3); }
        float NeedWeightInNation(int claimantId, int otherId, void* grid, void* it) const { void* args[] = { &claimantId, &otherId, grid, it }; return CallStaticValue<float>("NeedWeightInNation", args, 4); }
        bool OpenDepositPull(int nationId, void* grid, float cx, float cy, float radius, void* it, void* pull) const { void* args[] = { &nationId, grid, &cx, &cy, &radius, it, pull }; return CallStaticValue<bool>("OpenDepositPull", args, 7); }
        float WarRollMul(int claimantId, int otherId, void* grid, void* it) const { void* args[] = { &claimantId, &otherId, grid, it }; return CallStaticValue<float>("WarRollMul", args, 4); }
        float NeedWeight(int claimantId, void* tiles) const { void* args[] = { &claimantId, tiles }; return CallStaticValue<float>("NeedWeight", args, 2); }
    };
}
