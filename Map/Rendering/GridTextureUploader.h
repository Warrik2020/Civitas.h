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
        bool SupportsBlockSource(int width, int height) const { void* __callArgs[] = { &width, &height }; return CallStaticValue<bool>("SupportsBlockSource", __callArgs, 2); }
        bool WholeAllowedFor(int width, int height) const { void* __callArgs[] = { &width, &height }; return CallStaticValue<bool>("WholeAllowedFor", __callArgs, 2); }
        void MarkBulk() const { Call("MarkBulk", nullptr, 0); }
        void MarkPrompt() const { Call("MarkPrompt", nullptr, 0); }
        void MarkXY(int x, int y) const { void* __callArgs[] = { &x, &y }; Call("MarkXY", __callArgs, 2); }
        void MarkIndex(int index) const { void* __callArgs[] = { &index }; Call("MarkIndex", __callArgs, 1); }
        int MarkIndexBlock(int index) const { void* __callArgs[] = { &index }; return CallValue<int>("MarkIndexBlock", __callArgs, 1); }
        int BlockOfXY(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<int>("BlockOfXY", __callArgs, 2); }
        void MarkBlock(int block) const { void* __callArgs[] = { &block }; Call("MarkBlock", __callArgs, 1); }
        void MarkAll() const { Call("MarkAll", nullptr, 0); }
        void Upload(void* view) const { void* __callArgs[] = { &view }; Call("Upload", __callArgs, 1); }
        void Upload() const { Call("Upload", nullptr, 0); }
        int CatchUp(void* src, int x0, int y0, int x1, int y1) const { void* __callArgs[] = { src, &x0, &y0, &x1, &y1 }; return CallValue<int>("CatchUp", __callArgs, 5); }
        int CountDeferred(int x0, int y0, int x1, int y1) const { void* __callArgs[] = { &x0, &y0, &x1, &y1 }; return CallValue<int>("CountDeferred", __callArgs, 4); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        int BlockSize() const { return ReadStaticField<int>("BlockSize"); }
        int MaxBlocksPerUpload() const { return ReadStaticField<int>("MaxBlocksPerUpload"); }
        bool ViewScheduled() const { return ReadField<bool>("ViewScheduled"); }
        void ViewScheduled(bool value) const { WriteField<bool>("ViewScheduled", value); }
    };
}
