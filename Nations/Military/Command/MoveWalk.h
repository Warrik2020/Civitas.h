#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class MoveWalk : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MoveWalk(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "MoveWalk") {}
    public:
        int Classify(void* mil, void* grid, int tile) const { void* args[] = { mil, grid, &tile }; return CallStaticValue<int>("Classify", args, 3); }
        int Classify(void* d, void* mil, void* grid, int tile) const { void* args[] = { d, mil, grid, &tile }; return CallStaticValue<int>("Classify", args, 4); }
        int Classify(void* d, void* mil, void* grid, int x, int y) const { void* args[] = { d, mil, grid, &x, &y }; return CallStaticValue<int>("Classify", args, 5); }
        bool Passable(int c, bool allowPress) const { void* args[] = { &c, &allowPress }; return CallStaticValue<bool>("Passable", args, 2); }
        bool CanStand(void* d, void* mil, void* grid, void* p) const { void* args[] = { d, mil, grid, p }; return CallStaticValue<bool>("CanStand", args, 4); }
        bool SegmentOk(void* d, void* mil, void* grid, void* a, void* b, bool allowPress, float& standT, int& stopTile) const { void* args[] = { d, mil, grid, a, b, &allowPress, &standT, &stopTile }; return CallStaticValue<bool>("SegmentOk", args, 8); }
        void* StandPoint(void* a, void* b, float standT) const { void* args[] = { a, b, &standT }; return CallStatic("StandPoint", args, 3); }
    };
}
