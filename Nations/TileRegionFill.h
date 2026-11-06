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
        void Begin(int minX, int minY, int maxX, int maxY, void* background) const { void* args[] = { &minX, &minY, &maxX, &maxY, background }; Call("Begin", args, 5); }
        void Set(int x, int y, void* c) const { void* args[] = { &x, &y, c }; Call("Set", args, 3); }
        void SetTile(int tile, void* c) const { void* args[] = { &tile, c }; Call("SetTile", args, 2); }
        void End() const { Call("End", nullptr, 0); }
        void Fill(void* tiles, void* col) const { void* args[] = { tiles, col }; Call("Fill", args, 2); }
        void Fill(void* tiles, void* col) const { void* args[] = { tiles, col }; Call("Fill", args, 2); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Add(int tile, void* col) const { void* args[] = { &tile, col }; Call("Add", args, 2); }
        void Add(void* tiles, void* col) const { void* args[] = { tiles, col }; Call("Add", args, 2); }
        void Commit() const { Call("Commit", nullptr, 0); }
        void Shroud(void* land, int minX, int minY, int maxX, int maxY, void* col) const { void* args[] = { land, &minX, &minY, &maxX, &maxY, col }; Call("Shroud", args, 6); }
        void SetHatch(float period, float bar, bool antiDiagonal) const { void* args[] = { &period, &bar, &antiDiagonal }; Call("SetHatch", args, 3); }
        void SetTint(void* tint) const { void* args[] = { tint }; Call("SetTint", args, 1); }
        void Hide() const { Call("Hide", nullptr, 0); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
    };
}
