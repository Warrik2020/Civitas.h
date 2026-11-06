#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering::Lens
{
    class MapLensPass : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapLensPass(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering.Lens", "MapLensPass") {}
    public:
        void Setup(float far, float farStart, float near, float nearEnd, float vignette, float inner, float aspect, bool flipMask) const { void* args[] = { &far, &farStart, &near, &nearEnd, &vignette, &inner, &aspect, &flipMask }; Call("Setup", args, 8); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void RecordRenderGraph(void* renderGraph, void* frameData) const { void* args[] = { renderGraph, frameData }; Call("RecordRenderGraph", args, 2); }
        void* mild() const { return ReadField<void*>("mild"); }
        void SetMild(void* value) const { WriteField<void*>("mild", value); }
        void* strong() const { return ReadField<void*>("strong"); }
        void SetStrong(void* value) const { WriteField<void*>("strong", value); }
        void* mat() const { return ReadField<void*>("mat"); }
        void SetMat(void* value) const { WriteField<void*>("mat", value); }
        int pass() const { return ReadField<int>("pass"); }
        void SetPass(int value) const { WriteField<int>("pass", value); }
        void* props() const { return ReadField<void*>("props"); }
        void SetProps(void* value) const { WriteField<void*>("props", value); }
    };
}
