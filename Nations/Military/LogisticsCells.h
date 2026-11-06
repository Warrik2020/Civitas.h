#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class LogisticsCells : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LogisticsCells(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "LogisticsCells") {}
    public:
        int CellOf(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<int>("CellOf", __callArgs, 2); }
        int CellX(int cell) const { void* __callArgs[] = { &cell }; return CallValue<int>("CellX", __callArgs, 1); }
        int CellY(int cell) const { void* __callArgs[] = { &cell }; return CallValue<int>("CellY", __callArgs, 1); }
        bool RefreshHardIfBuilt() const { return CallValue<bool>("RefreshHardIfBuilt", nullptr, 0); }
        void SeedRoads(void* tileLevels) const { void* __callArgs[] = { tileLevels }; Call("SeedRoads", __callArgs, 1); }
        void NoteRoad(int tile, int level) const { void* __callArgs[] = { &tile, &level }; Call("NoteRoad", __callArgs, 2); }
        bool TakeRoadDirty(void* rect) const { void* __callArgs[] = { &rect }; return CallValue<bool>("TakeRoadDirty", __callArgs, 1); }
        void Validate(int cx0, int cy0, int cx1, int cy1) const { void* __callArgs[] = { &cx0, &cy0, &cx1, &cy1 }; Call("Validate", __callArgs, 4); }
        int ValidateStep(int cx0, int cy0, int cx1, int cy1, int& cursor, int budget, bool& done) const { void* __callArgs[] = { &cx0, &cy0, &cx1, &cy1, &cursor, &budget, &done }; return CallValue<int>("ValidateStep", __callArgs, 7); }
        void InvalidateAll() const { Call("InvalidateAll", nullptr, 0); }
        void* grid() const { return ReadField<void*>("grid"); }
        int shift() const { return ReadField<int>("shift"); }
        int cellTiles() const { return ReadField<int>("cellTiles"); }
        int cw() const { return ReadField<int>("cw"); }
        int ch() const { return ReadField<int>("ch"); }
        int count() const { return ReadField<int>("count"); }
        void* land() const { return ReadField<void*>("land"); }
        void* hard() const { return ReadField<void*>("hard"); }
        void* repTile() const { return ReadField<void*>("repTile"); }
        void* landShare() const { return ReadField<void*>("landShare"); }
        void* ownA() const { return ReadField<void*>("ownA"); }
        void* ownB() const { return ReadField<void*>("ownB"); }
        void* originA() const { return ReadField<void*>("originA"); }
        void* road() const { return ReadField<void*>("road"); }
        int NoOwner() const { return ReadStaticField<int>("NoOwner"); }
        int RedrawCost() const { return ReadStaticField<int>("RedrawCost"); }
    };
}
