#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering
{
    class GridTextureUploader : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GridTextureUploader(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering", "GridTextureUploader") {}
    public:
        bool SupportsBlockSource(int width, int height) const { void* args[] = { &width, &height }; return CallStaticValue<bool>("SupportsBlockSource", args, 2); }
        bool WholeAllowedFor(int width, int height) const { void* args[] = { &width, &height }; return CallStaticValue<bool>("WholeAllowedFor", args, 2); }
        void MarkBulk() const { Call("MarkBulk", nullptr, 0); }
        void MarkPrompt() const { Call("MarkPrompt", nullptr, 0); }
        void MarkXY(int x, int y) const { void* args[] = { &x, &y }; Call("MarkXY", args, 2); }
        void MarkIndex(int index) const { void* args[] = { &index }; Call("MarkIndex", args, 1); }
        int MarkIndexBlock(int index) const { void* args[] = { &index }; return CallValue<int>("MarkIndexBlock", args, 1); }
        int BlockOfXY(int x, int y) const { void* args[] = { &x, &y }; return CallValue<int>("BlockOfXY", args, 2); }
        void MarkBlock(int block) const { void* args[] = { &block }; Call("MarkBlock", args, 1); }
        void MarkAll() const { Call("MarkAll", nullptr, 0); }
        void Upload(void* view) const { void* args[] = { &view }; Call("Upload", args, 1); }
        void Upload() const { Call("Upload", nullptr, 0); }
        int CatchUp(void* src, int x0, int y0, int x1, int y1) const { void* args[] = { src, &x0, &y0, &x1, &y1 }; return CallValue<int>("CatchUp", args, 5); }
        int CountDeferred(int x0, int y0, int x1, int y1) const { void* args[] = { &x0, &y0, &x1, &y1 }; return CallValue<int>("CountDeferred", args, 4); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        int BlockSize() const { return ReadStaticField<int>("BlockSize"); }
        int MaxBlocksPerUpload() const { return ReadStaticField<int>("MaxBlocksPerUpload"); }
        bool ViewScheduled() const { return ReadField<bool>("ViewScheduled"); }
        void SetViewScheduled(bool value) const { WriteField<bool>("ViewScheduled", value); }
    };
}
