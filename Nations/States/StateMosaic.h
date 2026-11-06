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
        int NeckWords(int tileCount) const { void* args[] = { &tileCount }; return CallStaticValue<int>("NeckWords", args, 1); }
        bool IsNeck(void* neck, int tile) const { void* args[] = { neck, &tile }; return CallStaticValue<bool>("IsNeck", args, 2); }
        int Build(void* grid, void* cfg, void* outCell, void* outNeck, int seed, void* region = nullptr) const { void* args[] = { grid, cfg, outCell, outNeck, &seed, region }; return CallStaticValue<int>("Build", args, 6); }
        int SpeckFloorFor(void* cfg, int landTileCount) const { void* args[] = { cfg, &landTileCount }; return CallStaticValue<int>("SpeckFloorFor", args, 2); }
        void Push(int distance, int tile) const { void* args[] = { &distance, &tile }; Call("Push", args, 2); }
        int Pop(int bucket) const { void* args[] = { &bucket }; return CallValue<int>("Pop", args, 1); }
        int Mask() const { return ReadStaticField<int>("Mask"); }
        void* Size() const { return ReadField<void*>("Size"); }
        int Queued() const { return ReadField<int>("Queued"); }
        void SetQueued(int value) const { WriteField<int>("Queued", value); }
    };
}
