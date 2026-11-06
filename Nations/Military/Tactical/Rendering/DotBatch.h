#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical::Rendering
{
    class DotBatch : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DotBatch(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical.Rendering", "DotBatch") {}
    public:
        void Upload(void* dots, int count, float pxPerTile, float minDotPx, float haloPx = 0f) const { void* args[] = { dots, &count, &pxPerTile, &minDotPx, &haloPx }; Call("Upload", args, 5); }
        void UploadGathered(void* dots, void* batchCount, void* batchOffset, int batches, int batchSize, int count, float pxPerTile, float minDotPx, float haloPx = 0f) const { void* args[] = { dots, batchCount, batchOffset, &batches, &batchSize, &count, &pxPerTile, &minDotPx, &haloPx }; Call("UploadGathered", args, 9); }
        void Render(void* arenaToWorld, void* worldBounds) const { void* args[] = { arenaToWorld, worldBounds }; Call("Render", args, 2); }
        void Hide() const { Call("Hide", nullptr, 0); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void Execute(int i) const { void* args[] = { &i }; Call("Execute", args, 1); }
        void Emit(void* d, int v, float minTiles, float haloTiles, void* pos, void* col, void* uv) const { void* args[] = { &d, &v, &minTiles, &haloTiles, pos, col, uv }; CallStatic("Emit", args, 7); }
        void Execute(int bi) const { void* args[] = { &bi }; Call("Execute", args, 1); }
        void* dots() const { return ReadField<void*>("dots"); }
        void SetDots(void* value) const { WriteField<void*>("dots", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        void* col() const { return ReadField<void*>("col"); }
        void SetCol(void* value) const { WriteField<void*>("col", value); }
        void* uv() const { return ReadField<void*>("uv"); }
        void SetUv(void* value) const { WriteField<void*>("uv", value); }
        float minTiles() const { return ReadField<float>("minTiles"); }
        void SetMinTiles(float value) const { WriteField<float>("minTiles", value); }
        float haloTiles() const { return ReadField<float>("haloTiles"); }
        void SetHaloTiles(float value) const { WriteField<float>("haloTiles", value); }
        void* dots() const { return ReadField<void*>("dots"); }
        void SetDots(void* value) const { WriteField<void*>("dots", value); }
        void* batchCount() const { return ReadField<void*>("batchCount"); }
        void SetBatchCount(void* value) const { WriteField<void*>("batchCount", value); }
        void* batchOffset() const { return ReadField<void*>("batchOffset"); }
        void SetBatchOffset(void* value) const { WriteField<void*>("batchOffset", value); }
        int batchSize() const { return ReadField<int>("batchSize"); }
        void SetBatchSize(int value) const { WriteField<int>("batchSize", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        void* col() const { return ReadField<void*>("col"); }
        void SetCol(void* value) const { WriteField<void*>("col", value); }
        void* uv() const { return ReadField<void*>("uv"); }
        void SetUv(void* value) const { WriteField<void*>("uv", value); }
        float minTiles() const { return ReadField<float>("minTiles"); }
        void SetMinTiles(float value) const { WriteField<float>("minTiles", value); }
        float haloTiles() const { return ReadField<float>("haloTiles"); }
        void SetHaloTiles(float value) const { WriteField<float>("haloTiles", value); }
    };
}
