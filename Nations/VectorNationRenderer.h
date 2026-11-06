#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class VectorNationRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VectorNationRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "VectorNationRenderer") {}
    public:
        void SetFillQuadVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetFillQuadVisible", __callArgs, 1); }
        void PaintFill(int index, void* color) const { void* __callArgs[] = { &index, color }; Call("PaintFill", __callArgs, 2); }
        void PaintFillRaw(int index, void* color) const { void* __callArgs[] = { &index, color }; Call("PaintFillRaw", __callArgs, 2); }
        void MarkFillBlockAt(int x, int y) const { void* __callArgs[] = { &x, &y }; Call("MarkFillBlockAt", __callArgs, 2); }
        void NoteOwnerChanged(int index) const { void* __callArgs[] = { &index }; Call("NoteOwnerChanged", __callArgs, 1); }
        void RepaintAll(void* colorFn) const { void* __callArgs[] = { colorFn }; Call("RepaintAll", __callArgs, 1); }
        void UseChunkSummary(void* chunks) const { void* __callArgs[] = { chunks }; Call("UseChunkSummary", __callArgs, 1); }
        void Sync(void* nations) const { void* __callArgs[] = { nations }; Call("Sync", __callArgs, 1); }
        void SetMapStyle(void* border, void* ink) const { void* __callArgs[] = { border, ink }; Call("SetMapStyle", __callArgs, 2); }
        void SetBandsVisible(bool on) const { void* __callArgs[] = { &on }; Call("SetBandsVisible", __callArgs, 1); }
        void SetZoomFade(float alpha) const { void* __callArgs[] = { &alpha }; Call("SetZoomFade", __callArgs, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        int CatchUp(int x0, int y0, int x1, int y1) const { void* __callArgs[] = { &x0, &y0, &x1, &y1 }; return CallValue<int>("CatchUp", __callArgs, 4); }
        int CountDeferred(int x0, int y0, int x1, int y1) const { void* __callArgs[] = { &x0, &y0, &x1, &y1 }; return CallValue<int>("CountDeferred", __callArgs, 4); }
        int ChunkVaries() const { return ReadStaticField<int>("ChunkVaries"); }
        int ChunkClear() const { return ReadStaticField<int>("ChunkClear"); }
        int ChunkSolid() const { return ReadStaticField<int>("ChunkSolid"); }
    };
}
