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
        bool Lacks(int nationId, int k, void* it) const { void* __callArgs[] = { &nationId, &k, it }; return CallStaticValue<bool>("Lacks", __callArgs, 3); }
        bool LacksHere(int claimantId, void* tiles, int& kind) const { void* __callArgs[] = { &claimantId, tiles, &kind }; return CallStaticValue<bool>("LacksHere", __callArgs, 3); }
        float NeedWeightInNation(int claimantId, int otherId, void* grid, void* it) const { void* __callArgs[] = { &claimantId, &otherId, grid, it }; return CallStaticValue<float>("NeedWeightInNation", __callArgs, 4); }
        bool OpenDepositPull(int nationId, void* grid, float cx, float cy, float radius, void* it, void* pull) const { void* __callArgs[] = { &nationId, grid, &cx, &cy, &radius, it, pull }; return CallStaticValue<bool>("OpenDepositPull", __callArgs, 7); }
        float WarRollMul(int claimantId, int otherId, void* grid, void* it) const { void* __callArgs[] = { &claimantId, &otherId, grid, it }; return CallStaticValue<float>("WarRollMul", __callArgs, 4); }
        float NeedWeight(int claimantId, void* tiles) const { void* __callArgs[] = { &claimantId, tiles }; return CallStaticValue<float>("NeedWeight", __callArgs, 2); }
    };
}
