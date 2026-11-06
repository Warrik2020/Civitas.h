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
        void Upload(void* dots, int count, float pxPerTile, float minDotPx, float haloPx = 0.0f) const { void* __callArgs[] = { dots, &count, &pxPerTile, &minDotPx, &haloPx }; Call("Upload", __callArgs, 5); }
        void UploadGathered(void* dots, void* batchCount, void* batchOffset, int batches, int batchSize, int count, float pxPerTile, float minDotPx, float haloPx = 0.0f) const { void* __callArgs[] = { dots, batchCount, batchOffset, &batches, &batchSize, &count, &pxPerTile, &minDotPx, &haloPx }; Call("UploadGathered", __callArgs, 9); }
        void Render(void* arenaToWorld, void* worldBounds) const { void* __callArgs[] = { arenaToWorld, worldBounds }; Call("Render", __callArgs, 2); }
        void Hide() const { Call("Hide", nullptr, 0); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
    };
}
