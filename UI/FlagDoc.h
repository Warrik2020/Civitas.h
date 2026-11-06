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
        void* Get(int x, int y) const { void* args[] = { &x, &y }; return Call("Get", args, 2); }
        bool IsPaintable(int x, int y) const { void* args[] = { &x, &y }; return CallValue<bool>("IsPaintable", args, 2); }
        void* PixelsCopy() const { return Call("PixelsCopy", nullptr, 0); }
        void LoadPixels(void* src, int sw, int sh) const { void* args[] = { src, &sw, &sh }; Call("LoadPixels", args, 3); }
        void Resize(int w, int h) const { void* args[] = { &w, &h }; Call("Resize", args, 2); }
        void Dab(int x, int y, void* c, int size, bool erase) const { void* args[] = { &x, &y, c, &size, &erase }; Call("Dab", args, 5); }
        void DabLine(int x0, int y0, int x1, int y1, void* c, int size, bool erase) const { void* args[] = { &x0, &y0, &x1, &y1, c, &size, &erase }; Call("DabLine", args, 7); }
        void PreviewShape(int tool, int x0, int y0, int x1, int y1, void* c, int size, bool filled, bool erase) const { void* args[] = { &tool, &x0, &y0, &x1, &y1, c, &size, &filled, &erase }; Call("PreviewShape", args, 9); }
        void CommitShape(int tool, int x0, int y0, int x1, int y1, void* c, int size, bool filled, bool erase) const { void* args[] = { &tool, &x0, &y0, &x1, &y1, c, &size, &filled, &erase }; Call("CommitShape", args, 9); }
        void CancelPreview() const { Call("CancelPreview", nullptr, 0); }
        void Fill(int x, int y, void* c) const { void* args[] = { &x, &y, c }; Call("Fill", args, 3); }
        void Replace(int x, int y, void* c) const { void* args[] = { &x, &y, c }; Call("Replace", args, 3); }
        void FillAll(void* c) const { void* args[] = { c }; Call("FillAll", args, 1); }
        void ClearAll() const { Call("ClearAll", nullptr, 0); }
        void Outline(void* c, int thickness) const { void* args[] = { c, &thickness }; Call("Outline", args, 2); }
        void ApplyLayout(int layout, void* a, void* b) const { void* args[] = { &layout, a, b }; Call("ApplyLayout", args, 3); }
        void StampPixels(void* src, int sw, int sh) const { void* args[] = { src, &sw, &sh }; Call("StampPixels", args, 3); }
        void Render(int layout, void* a, void* b, int w, int h, void* dst) const { void* args[] = { &layout, a, b, &w, &h, dst }; CallStatic("Render", args, 6); }
        void* Sizes() const { return ReadStaticField<void*>("Sizes"); }
        bool MirrorX() const { return ReadField<bool>("MirrorX"); }
        void SetMirrorX(bool value) const { WriteField<bool>("MirrorX", value); }
        bool MirrorY() const { return ReadField<bool>("MirrorY"); }
        void SetMirrorY(bool value) const { WriteField<bool>("MirrorY", value); }
    };
}
