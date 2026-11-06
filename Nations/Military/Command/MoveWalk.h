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
        int Classify(void* mil, void* grid, int tile) const { void* __callArgs[] = { mil, grid, &tile }; return CallStaticValue<int>("Classify", __callArgs, 3); }
        int Classify(void* d, void* mil, void* grid, int tile) const { void* __callArgs[] = { d, mil, grid, &tile }; return CallStaticValue<int>("Classify", __callArgs, 4); }
        int Classify(void* d, void* mil, void* grid, int x, int y) const { void* __callArgs[] = { d, mil, grid, &x, &y }; return CallStaticValue<int>("Classify", __callArgs, 5); }
        bool Passable(int c, bool allowPress) const { void* __callArgs[] = { &c, &allowPress }; return CallStaticValue<bool>("Passable", __callArgs, 2); }
        bool CanStand(void* d, void* mil, void* grid, void* p) const { void* __callArgs[] = { d, mil, grid, p }; return CallStaticValue<bool>("CanStand", __callArgs, 4); }
        bool SegmentOk(void* d, void* mil, void* grid, void* a, void* b, bool allowPress, float& standT, int& stopTile) const { void* __callArgs[] = { d, mil, grid, a, b, &allowPress, &standT, &stopTile }; return CallStaticValue<bool>("SegmentOk", __callArgs, 8); }
        void* StandPoint(void* a, void* b, float standT) const { void* __callArgs[] = { a, b, &standT }; return CallStatic("StandPoint", __callArgs, 3); }
    };
}
