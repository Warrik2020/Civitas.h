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
        void Activate(int chunk) const { void* args[] = { &chunk }; Call("Activate", args, 1); }
        void Deactivate(int chunk) const { void* args[] = { &chunk }; Call("Deactivate", args, 1); }
        bool AnyActiveIn(int x0, int y0, int x1, int y1) const { void* args[] = { &x0, &y0, &x1, &y1 }; return CallValue<bool>("AnyActiveIn", args, 4); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void ActivateTile(int x, int y) const { void* args[] = { &x, &y }; Call("ActivateTile", args, 2); }
        void ActivateRect(int x0, int y0, int x1, int y1) const { void* args[] = { &x0, &y0, &x1, &y1 }; Call("ActivateRect", args, 4); }
        void ActivateNeighbors(int chunk) const { void* args[] = { &chunk }; Call("ActivateNeighbors", args, 1); }
        void ChunkTileRange(int chunk, int& x0, int& y0, int& x1, int& y1) const { void* args[] = { &chunk, &x0, &y0, &x1, &y1 }; Call("ChunkTileRange", args, 5); }
        int NextActive(int from) const { void* args[] = { &from }; return CallValue<int>("NextActive", args, 1); }
        int ChunkShift() const { return ReadStaticField<int>("ChunkShift"); }
        int ChunkSize() const { return ReadStaticField<int>("ChunkSize"); }
        int EdgeMargin() const { return ReadStaticField<int>("EdgeMargin"); }
        int BackstopIntervalTicks() const { return ReadStaticField<int>("BackstopIntervalTicks"); }
    };
}
