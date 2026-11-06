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
        void SetFillQuadVisible(bool visible) const { void* args[] = { &visible }; Call("SetFillQuadVisible", args, 1); }
        void PaintFill(int index, void* color) const { void* args[] = { &index, color }; Call("PaintFill", args, 2); }
        void PaintFillRaw(int index, void* color) const { void* args[] = { &index, color }; Call("PaintFillRaw", args, 2); }
        void MarkFillBlockAt(int x, int y) const { void* args[] = { &x, &y }; Call("MarkFillBlockAt", args, 2); }
        void NoteOwnerChanged(int index) const { void* args[] = { &index }; Call("NoteOwnerChanged", args, 1); }
        void RepaintAll(void* colorFn) const { void* args[] = { colorFn }; Call("RepaintAll", args, 1); }
        void UseChunkSummary(void* chunks) const { void* args[] = { chunks }; Call("UseChunkSummary", args, 1); }
        void Sync(void* nations) const { void* args[] = { nations }; Call("Sync", args, 1); }
        void SetMapStyle(void* border, void* ink) const { void* args[] = { border, ink }; Call("SetMapStyle", args, 2); }
        void SetBandsVisible(bool on) const { void* args[] = { &on }; Call("SetBandsVisible", args, 1); }
        void SetZoomFade(float alpha) const { void* args[] = { &alpha }; Call("SetZoomFade", args, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        int CatchUp(int x0, int y0, int x1, int y1) const { void* args[] = { &x0, &y0, &x1, &y1 }; return CallValue<int>("CatchUp", args, 4); }
        int CountDeferred(int x0, int y0, int x1, int y1) const { void* args[] = { &x0, &y0, &x1, &y1 }; return CallValue<int>("CountDeferred", args, 4); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void* ColorAt(int index, int x, int y) const { void* args[] = { &index, &x, &y }; return Call("ColorAt", args, 3); }
        bool TryOwnerColor(int owner, void* color) const { void* args[] = { &owner, &color }; return CallValue<bool>("TryOwnerColor", args, 2); }
        bool Step(void* r, float budgetMs) const { void* args[] = { r, &budgetMs }; return CallValue<bool>("Step", args, 2); }
        int ChunkVaries() const { return ReadStaticField<int>("ChunkVaries"); }
        int ChunkClear() const { return ReadStaticField<int>("ChunkClear"); }
        int ChunkSolid() const { return ReadStaticField<int>("ChunkSolid"); }
        void* bandV() const { return ReadField<void*>("bandV"); }
        void* bandC() const { return ReadField<void*>("bandC"); }
        void* bandT() const { return ReadField<void*>("bandT"); }
        void* bandU() const { return ReadField<void*>("bandU"); }
        void* lineV() const { return ReadField<void*>("lineV"); }
        void* lineC() const { return ReadField<void*>("lineC"); }
        void* lineT() const { return ReadField<void*>("lineT"); }
        void* lineU() const { return ReadField<void*>("lineU"); }
        void* skirtV() const { return ReadField<void*>("skirtV"); }
        void* skirtC() const { return ReadField<void*>("skirtC"); }
        void* skirtT() const { return ReadField<void*>("skirtT"); }
        void* skirtU() const { return ReadField<void*>("skirtU"); }
        void* painter() const { return ReadField<void*>("painter"); }
        void SetPainter(void* value) const { WriteField<void*>("painter", value); }
        void* n() const { return ReadField<void*>("n"); }
        void SetN(void* value) const { WriteField<void*>("n", value); }
        bool active() const { return ReadField<bool>("active"); }
        void SetActive(bool value) const { WriteField<bool>("active", value); }
        int stage() const { return ReadField<int>("stage"); }
        void SetStage(int value) const { WriteField<int>("stage", value); }
        int x0() const { return ReadField<int>("x0"); }
        void SetX0(int value) const { WriteField<int>("x0", value); }
        int y0() const { return ReadField<int>("y0"); }
        void SetY0(int value) const { WriteField<int>("y0", value); }
        int x1() const { return ReadField<int>("x1"); }
        void SetX1(int value) const { WriteField<int>("x1", value); }
        int y1() const { return ReadField<int>("y1"); }
        void SetY1(int value) const { WriteField<int>("y1", value); }
        float prevTrace() const { return ReadField<float>("prevTrace"); }
        void SetPrevTrace(float value) const { WriteField<float>("prevTrace", value); }
        void* raw() const { return ReadField<void*>("raw"); }
        int rawIdx() const { return ReadField<int>("rawIdx"); }
        void SetRawIdx(int value) const { WriteField<int>("rawIdx", value); }
        bool smoothing() const { return ReadField<bool>("smoothing"); }
        void SetSmoothing(bool value) const { WriteField<bool>("smoothing", value); }
        int strokeStage() const { return ReadField<int>("strokeStage"); }
        void SetStrokeStage(int value) const { WriteField<int>("strokeStage", value); }
        void* geo() const { return ReadField<void*>("geo"); }
        void SetGeo(void* value) const { WriteField<void*>("geo", value); }
        void* bandCol() const { return ReadField<void*>("bandCol"); }
        void SetBandCol(void* value) const { WriteField<void*>("bandCol", value); }
        void* lineCol() const { return ReadField<void*>("lineCol"); }
        void SetLineCol(void* value) const { WriteField<void*>("lineCol", value); }
        void* ribbonCol() const { return ReadField<void*>("ribbonCol"); }
        void SetRibbonCol(void* value) const { WriteField<void*>("ribbonCol", value); }
        bool edgeDraws() const { return ReadField<bool>("edgeDraws"); }
        void SetEdgeDraws(bool value) const { WriteField<bool>("edgeDraws", value); }
        bool ribbon() const { return ReadField<bool>("ribbon"); }
        void SetRibbon(bool value) const { WriteField<bool>("ribbon", value); }
        void* border() const { return ReadField<void*>("border"); }
        void SetBorder(void* value) const { WriteField<void*>("border", value); }
        void* ink() const { return ReadField<void*>("ink"); }
        void SetInk(void* value) const { WriteField<void*>("ink", value); }
    };
}
