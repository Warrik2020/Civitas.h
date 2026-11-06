#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class TileRemap : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TileRemap(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "TileRemap") {}
    public:
        void UseRefill(void* refill) const { void* __callArgs[] = { refill }; Call("UseRefill", __callArgs, 1); }
        int OldOf(int x1, int y1) const { void* __callArgs[] = { &x1, &y1 }; return CallValue<int>("OldOf", __callArgs, 2); }
        void* Runs(void* runs) const { void* __callArgs[] = { runs }; return Call("Runs", __callArgs, 1); }
        int Tile(int i0) const { void* __callArgs[] = { &i0 }; return CallValue<int>("Tile", __callArgs, 1); }
        void Block(int i0, void* into) const { void* __callArgs[] = { &i0, into }; Call("Block", __callArgs, 2); }
        void Edge(int key, void* into) const { void* __callArgs[] = { &key, into }; Call("Edge", __callArgs, 2); }
        void* Pos(float x, float y) const { void* __callArgs[] = { &x, &y }; return Call("Pos", __callArgs, 2); }
        void* Point(float x, float y) const { void* __callArgs[] = { &x, &y }; return Call("Point", __callArgs, 2); }
        float Length(float tiles) const { void* __callArgs[] = { &tiles }; return CallValue<float>("Length", __callArgs, 1); }
        int Area(int tiles) const { void* __callArgs[] = { &tiles }; return CallValue<int>("Area", __callArgs, 1); }
        int64_t Area(int64_t tiles) const { void* __callArgs[] = { &tiles }; return CallValue<int64_t>("Area", __callArgs, 1); }
        int OldWidth() const { return ReadField<int>("OldWidth"); }
        int OldHeight() const { return ReadField<int>("OldHeight"); }
        int NewWidth() const { return ReadField<int>("NewWidth"); }
        int NewHeight() const { return ReadField<int>("NewHeight"); }
        double Ratio() const { return ReadField<double>("Ratio"); }
    };
}
