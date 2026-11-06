#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class TilePyramid : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TilePyramid(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "TilePyramid") {}
    public:
        void Invalidate() const { Call("Invalidate", nullptr, 0); }
        int CellsWide(int level) const { void* __callArgs[] = { &level }; return CallValue<int>("CellsWide", __callArgs, 1); }
        int CellsHigh(int level) const { void* __callArgs[] = { &level }; return CallValue<int>("CellsHigh", __callArgs, 1); }
        void OnWrite(int x, int y) const { void* __callArgs[] = { &x, &y }; Call("OnWrite", __callArgs, 2); }
        void TrackChangedChunks(bool on) const { void* __callArgs[] = { &on }; Call("TrackChangedChunks", __callArgs, 1); }
        bool TryTakeChangedChunk(int& chunk) const { void* __callArgs[] = { &chunk }; return CallValue<bool>("TryTakeChangedChunk", __callArgs, 1); }
        void Build() const { Call("Build", nullptr, 0); }
        bool CellUniform(int k, int cx, int cy) const { void* __callArgs[] = { &k, &cx, &cy }; return CallValue<bool>("CellUniform", __callArgs, 3); }
        bool ChunkUniform(int cx, int cy) const { void* __callArgs[] = { &cx, &cy }; return CallValue<bool>("ChunkUniform", __callArgs, 2); }
        int LevelAt(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<int>("LevelAt", __callArgs, 2); }
        int LevelFromBelow(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<int>("LevelFromBelow", __callArgs, 2); }
        int RunEndFromBelow(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<int>("RunEndFromBelow", __callArgs, 2); }
        void NodeAt(int x, int y, int& x0, int& y0, int& level) const { void* __callArgs[] = { &x, &y, &x0, &y0, &level }; Call("NodeAt", __callArgs, 5); }
        int RunEnd(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<int>("RunEnd", __callArgs, 2); }
        int UniformCells(int level) const { void* __callArgs[] = { &level }; return CallValue<int>("UniformCells", __callArgs, 1); }
        int64_t NodesAt(int level) const { void* __callArgs[] = { &level }; return CallValue<int64_t>("NodesAt", __callArgs, 1); }
        bool CellConsistent(int k, int cx, int cy) const { void* __callArgs[] = { &k, &cx, &cy }; return CallValue<bool>("CellConsistent", __callArgs, 3); }
        int VerifyAll() const { return CallValue<int>("VerifyAll", nullptr, 0); }
        bool CellUniformBruteForce(int k, int cx, int cy) const { void* __callArgs[] = { &k, &cx, &cy }; return CallValue<bool>("CellUniformBruteForce", __callArgs, 3); }
        bool CellMatchesBruteForce(int k, int cx, int cy) const { void* __callArgs[] = { &k, &cx, &cy }; return CallValue<bool>("CellMatchesBruteForce", __callArgs, 3); }
        int TopLevel() const { return ReadField<int>("TopLevel"); }
    };
}
