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
        int CellsWide(int level) const { void* args[] = { &level }; return CallValue<int>("CellsWide", args, 1); }
        int CellsHigh(int level) const { void* args[] = { &level }; return CallValue<int>("CellsHigh", args, 1); }
        void OnWrite(int x, int y) const { void* args[] = { &x, &y }; Call("OnWrite", args, 2); }
        void TrackChangedChunks(bool on) const { void* args[] = { &on }; Call("TrackChangedChunks", args, 1); }
        bool TryTakeChangedChunk(int& chunk) const { void* args[] = { &chunk }; return CallValue<bool>("TryTakeChangedChunk", args, 1); }
        void Build() const { Call("Build", nullptr, 0); }
        bool CellUniform(int k, int cx, int cy) const { void* args[] = { &k, &cx, &cy }; return CallValue<bool>("CellUniform", args, 3); }
        bool ChunkUniform(int cx, int cy) const { void* args[] = { &cx, &cy }; return CallValue<bool>("ChunkUniform", args, 2); }
        int LevelAt(int x, int y) const { void* args[] = { &x, &y }; return CallValue<int>("LevelAt", args, 2); }
        int LevelFromBelow(int x, int y) const { void* args[] = { &x, &y }; return CallValue<int>("LevelFromBelow", args, 2); }
        int RunEndFromBelow(int x, int y) const { void* args[] = { &x, &y }; return CallValue<int>("RunEndFromBelow", args, 2); }
        void NodeAt(int x, int y, int& x0, int& y0, int& level) const { void* args[] = { &x, &y, &x0, &y0, &level }; Call("NodeAt", args, 5); }
        int RunEnd(int x, int y) const { void* args[] = { &x, &y }; return CallValue<int>("RunEnd", args, 2); }
        int UniformCells(int level) const { void* args[] = { &level }; return CallValue<int>("UniformCells", args, 1); }
        int64_t NodesAt(int level) const { void* args[] = { &level }; return CallValue<int64_t>("NodesAt", args, 1); }
        bool CellConsistent(int k, int cx, int cy) const { void* args[] = { &k, &cx, &cy }; return CallValue<bool>("CellConsistent", args, 3); }
        int VerifyAll() const { return CallValue<int>("VerifyAll", nullptr, 0); }
        bool CellUniformBruteForce(int k, int cx, int cy) const { void* args[] = { &k, &cx, &cy }; return CallValue<bool>("CellUniformBruteForce", args, 3); }
        bool CellMatchesBruteForce(int k, int cx, int cy) const { void* args[] = { &k, &cx, &cy }; return CallValue<bool>("CellMatchesBruteForce", args, 3); }
        int TopLevel() const { return ReadField<int>("TopLevel"); }
    };
}
