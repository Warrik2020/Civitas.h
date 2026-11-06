#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering::Fx
{
    class WarFxBatch : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarFxBatch(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering.Fx", "WarFxBatch") {}
    public:
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void Add(void* p) const { void* args[] = { p }; Call("Add", args, 1); }
        void AddImmediate(void* p) const { void* args[] = { p }; Call("AddImmediate", args, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Advance(float dt, void* wind) const { void* args[] = { &dt, wind }; Call("Advance", args, 2); }
        void Build(float pxPerTile, float minPx, float heightShift, bool draw) const { void* args[] = { &pxPerTile, &minPx, &heightShift, &draw }; Call("Build", args, 4); }
        void Render(void* localToWorld) const { void* args[] = { localToWorld }; Call("Render", args, 1); }
        void Hide() const { Call("Hide", nullptr, 0); }
        void SetFade(float fade) const { void* args[] = { &fade }; Call("SetFade", args, 1); }
        void Execute(int i) const { void* args[] = { &i }; Call("Execute", args, 1); }
        void Execute() const { Call("Execute", nullptr, 0); }
        bool MarkCoarse() const { return ReadField<bool>("MarkCoarse"); }
        void SetMarkCoarse(bool value) const { WriteField<bool>("MarkCoarse", value); }
        float CoarseAlpha() const { return ReadField<float>("CoarseAlpha"); }
        void SetCoarseAlpha(float value) const { WriteField<float>("CoarseAlpha", value); }
        void* slab() const { return ReadField<void*>("slab"); }
        void SetSlab(void* value) const { WriteField<void*>("slab", value); }
        float dt() const { return ReadField<float>("dt"); }
        void SetDt(float value) const { WriteField<float>("dt", value); }
        void* wind() const { return ReadField<void*>("wind"); }
        void SetWind(void* value) const { WriteField<void*>("wind", value); }
        void* slab() const { return ReadField<void*>("slab"); }
        void SetSlab(void* value) const { WriteField<void*>("slab", value); }
        void* imm() const { return ReadField<void*>("imm"); }
        void SetImm(void* value) const { WriteField<void*>("imm", value); }
        int immCount() const { return ReadField<int>("immCount"); }
        void SetImmCount(int value) const { WriteField<int>("immCount", value); }
        void* dead() const { return ReadField<void*>("dead"); }
        void SetDead(void* value) const { WriteField<void*>("dead", value); }
        void* counts() const { return ReadField<void*>("counts"); }
        void SetCounts(void* value) const { WriteField<void*>("counts", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        void* col() const { return ReadField<void*>("col"); }
        void SetCol(void* value) const { WriteField<void*>("col", value); }
        void* uv0() const { return ReadField<void*>("uv0"); }
        void SetUv0(void* value) const { WriteField<void*>("uv0", value); }
        void* uv1() const { return ReadField<void*>("uv1"); }
        void SetUv1(void* value) const { WriteField<void*>("uv1", value); }
        int quadCap() const { return ReadField<int>("quadCap"); }
        void SetQuadCap(int value) const { WriteField<int>("quadCap", value); }
        float minTiles() const { return ReadField<float>("minTiles"); }
        void SetMinTiles(float value) const { WriteField<float>("minTiles", value); }
        float heightShift() const { return ReadField<float>("heightShift"); }
        void SetHeightShift(float value) const { WriteField<float>("heightShift", value); }
        float coarseAlpha() const { return ReadField<float>("coarseAlpha"); }
        void SetCoarseAlpha(float value) const { WriteField<float>("coarseAlpha", value); }
        bool draw() const { return ReadField<bool>("draw"); }
        void SetDraw(bool value) const { WriteField<bool>("draw", value); }
    };
}
