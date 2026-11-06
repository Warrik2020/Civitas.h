#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class FlagDoc : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FlagDoc(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "FlagDoc") {}
    public:
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void BeginEdit() const { Call("BeginEdit", nullptr, 0); }
        void Undo() const { Call("Undo", nullptr, 0); }
        void Redo() const { Call("Redo", nullptr, 0); }
        void MarkSaved() const { Call("MarkSaved", nullptr, 0); }
        void ResetHistory() const { Call("ResetHistory", nullptr, 0); }
        void* Get(int x, int y) const { void* __callArgs[] = { &x, &y }; return Call("Get", __callArgs, 2); }
        bool IsPaintable(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<bool>("IsPaintable", __callArgs, 2); }
        void* PixelsCopy() const { return Call("PixelsCopy", nullptr, 0); }
        void LoadPixels(void* src, int sw, int sh) const { void* __callArgs[] = { src, &sw, &sh }; Call("LoadPixels", __callArgs, 3); }
        void Resize(int w, int h) const { void* __callArgs[] = { &w, &h }; Call("Resize", __callArgs, 2); }
        void Dab(int x, int y, void* c, int size, bool erase) const { void* __callArgs[] = { &x, &y, c, &size, &erase }; Call("Dab", __callArgs, 5); }
        void DabLine(int x0, int y0, int x1, int y1, void* c, int size, bool erase) const { void* __callArgs[] = { &x0, &y0, &x1, &y1, c, &size, &erase }; Call("DabLine", __callArgs, 7); }
        void PreviewShape(int tool, int x0, int y0, int x1, int y1, void* c, int size, bool filled, bool erase) const { void* __callArgs[] = { &tool, &x0, &y0, &x1, &y1, c, &size, &filled, &erase }; Call("PreviewShape", __callArgs, 9); }
        void CommitShape(int tool, int x0, int y0, int x1, int y1, void* c, int size, bool filled, bool erase) const { void* __callArgs[] = { &tool, &x0, &y0, &x1, &y1, c, &size, &filled, &erase }; Call("CommitShape", __callArgs, 9); }
        void CancelPreview() const { Call("CancelPreview", nullptr, 0); }
        void Fill(int x, int y, void* c) const { void* __callArgs[] = { &x, &y, c }; Call("Fill", __callArgs, 3); }
        void Replace(int x, int y, void* c) const { void* __callArgs[] = { &x, &y, c }; Call("Replace", __callArgs, 3); }
        void FillAll(void* c) const { void* __callArgs[] = { c }; Call("FillAll", __callArgs, 1); }
        void ClearAll() const { Call("ClearAll", nullptr, 0); }
        void Outline(void* c, int thickness) const { void* __callArgs[] = { c, &thickness }; Call("Outline", __callArgs, 2); }
        void ApplyLayout(int layout, void* a, void* b) const { void* __callArgs[] = { &layout, a, b }; Call("ApplyLayout", __callArgs, 3); }
        void StampPixels(void* src, int sw, int sh) const { void* __callArgs[] = { src, &sw, &sh }; Call("StampPixels", __callArgs, 3); }
        void Render(int layout, void* a, void* b, int w, int h, void* dst) const { void* __callArgs[] = { &layout, a, b, &w, &h, dst }; CallStatic("Render", __callArgs, 6); }
        void* Sizes() const { return ReadStaticField<void*>("Sizes"); }
        bool MirrorX() const { return ReadField<bool>("MirrorX"); }
        void MirrorX(bool value) const { WriteField<bool>("MirrorX", value); }
        bool MirrorY() const { return ReadField<bool>("MirrorY"); }
        void MirrorY(bool value) const { WriteField<bool>("MirrorY", value); }
    };
}
