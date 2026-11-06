#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class ActiveChunkSet : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ActiveChunkSet(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "ActiveChunkSet") {}
    public:
        void Activate(int chunk) const { void* __callArgs[] = { &chunk }; Call("Activate", __callArgs, 1); }
        void Deactivate(int chunk) const { void* __callArgs[] = { &chunk }; Call("Deactivate", __callArgs, 1); }
        bool AnyActiveIn(int x0, int y0, int x1, int y1) const { void* __callArgs[] = { &x0, &y0, &x1, &y1 }; return CallValue<bool>("AnyActiveIn", __callArgs, 4); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void ActivateTile(int x, int y) const { void* __callArgs[] = { &x, &y }; Call("ActivateTile", __callArgs, 2); }
        void ActivateRect(int x0, int y0, int x1, int y1) const { void* __callArgs[] = { &x0, &y0, &x1, &y1 }; Call("ActivateRect", __callArgs, 4); }
        void ActivateNeighbors(int chunk) const { void* __callArgs[] = { &chunk }; Call("ActivateNeighbors", __callArgs, 1); }
        void ChunkTileRange(int chunk, int& x0, int& y0, int& x1, int& y1) const { void* __callArgs[] = { &chunk, &x0, &y0, &x1, &y1 }; Call("ChunkTileRange", __callArgs, 5); }
        int NextActive(int from) const { void* __callArgs[] = { &from }; return CallValue<int>("NextActive", __callArgs, 1); }
        int ChunkShift() const { return ReadStaticField<int>("ChunkShift"); }
        int ChunkSize() const { return ReadStaticField<int>("ChunkSize"); }
        int EdgeMargin() const { return ReadStaticField<int>("EdgeMargin"); }
        int BackstopIntervalTicks() const { return ReadStaticField<int>("BackstopIntervalTicks"); }
    };
}
