#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class TileRegionFill : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TileRegionFill(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "TileRegionFill") {}
    public:
        void Begin(int minX, int minY, int maxX, int maxY, void* background) const { void* __callArgs[] = { &minX, &minY, &maxX, &maxY, background }; Call("Begin", __callArgs, 5); }
        void Set(int x, int y, void* c) const { void* __callArgs[] = { &x, &y, c }; Call("Set", __callArgs, 3); }
        void SetTile(int tile, void* c) const { void* __callArgs[] = { &tile, c }; Call("SetTile", __callArgs, 2); }
        void End() const { Call("End", nullptr, 0); }
        void Fill(void* tiles, void* col) const { void* __callArgs[] = { tiles, col }; Call("Fill", __callArgs, 2); }
        void FillOverload5(void* tiles, void* col) const { void* __callArgs[] = { tiles, col }; Call("Fill", __callArgs, 2); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Add(int tile, void* col) const { void* __callArgs[] = { &tile, col }; Call("Add", __callArgs, 2); }
        void Add(void* tiles, void* col) const { void* __callArgs[] = { tiles, col }; Call("Add", __callArgs, 2); }
        void Commit() const { Call("Commit", nullptr, 0); }
        void Shroud(void* land, int minX, int minY, int maxX, int maxY, void* col) const { void* __callArgs[] = { land, &minX, &minY, &maxX, &maxY, col }; Call("Shroud", __callArgs, 6); }
        void SetHatch(float period, float bar, bool antiDiagonal) const { void* __callArgs[] = { &period, &bar, &antiDiagonal }; Call("SetHatch", __callArgs, 3); }
        void SetTint(void* tint) const { void* __callArgs[] = { tint }; Call("SetTint", __callArgs, 1); }
        void Hide() const { Call("Hide", nullptr, 0); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
    };
}
