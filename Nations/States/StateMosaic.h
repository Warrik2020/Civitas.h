#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::States
{
    class StateMosaic : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateMosaic(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.States", "StateMosaic") {}
    public:
        int NeckWords(int tileCount) const { void* __callArgs[] = { &tileCount }; return CallStaticValue<int>("NeckWords", __callArgs, 1); }
        bool IsNeck(void* neck, int tile) const { void* __callArgs[] = { neck, &tile }; return CallStaticValue<bool>("IsNeck", __callArgs, 2); }
        int Build(void* grid, void* cfg, void* outCell, void* outNeck, int seed, void* region = nullptr) const { void* __callArgs[] = { grid, cfg, outCell, outNeck, &seed, region }; return CallStaticValue<int>("Build", __callArgs, 6); }
        int SpeckFloorFor(void* cfg, int landTileCount) const { void* __callArgs[] = { cfg, &landTileCount }; return CallStaticValue<int>("SpeckFloorFor", __callArgs, 2); }
    };
}
