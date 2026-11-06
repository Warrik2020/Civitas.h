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
        void UseRefill(void* refill) const { void* args[] = { refill }; Call("UseRefill", args, 1); }
        int OldOf(int x1, int y1) const { void* args[] = { &x1, &y1 }; return CallValue<int>("OldOf", args, 2); }
        void* Runs(void* runs) const { void* args[] = { runs }; return Call("Runs", args, 1); }
        int Tile(int i0) const { void* args[] = { &i0 }; return CallValue<int>("Tile", args, 1); }
        void Block(int i0, void* into) const { void* args[] = { &i0, into }; Call("Block", args, 2); }
        void Edge(int key, void* into) const { void* args[] = { &key, into }; Call("Edge", args, 2); }
        void* Pos(float x, float y) const { void* args[] = { &x, &y }; return Call("Pos", args, 2); }
        void* Point(float x, float y) const { void* args[] = { &x, &y }; return Call("Point", args, 2); }
        float Length(float tiles) const { void* args[] = { &tiles }; return CallValue<float>("Length", args, 1); }
        int Area(int tiles) const { void* args[] = { &tiles }; return CallValue<int>("Area", args, 1); }
        int64_t Area(int64_t tiles) const { void* args[] = { &tiles }; return CallValue<int64_t>("Area", args, 1); }
        int OldWidth() const { return ReadField<int>("OldWidth"); }
        int OldHeight() const { return ReadField<int>("OldHeight"); }
        int NewWidth() const { return ReadField<int>("NewWidth"); }
        int NewHeight() const { return ReadField<int>("NewHeight"); }
        double Ratio() const { return ReadField<double>("Ratio"); }
    };
}
