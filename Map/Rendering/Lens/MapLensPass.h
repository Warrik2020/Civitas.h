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
        void Setup(float far_, float farStart, float near_, float nearEnd, float vignette, float inner, float aspect, bool flipMask) const { void* __callArgs[] = { &far_, &farStart, &near_, &nearEnd, &vignette, &inner, &aspect, &flipMask }; Call("Setup", __callArgs, 8); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void RecordRenderGraph(void* renderGraph, void* frameData) const { void* __callArgs[] = { renderGraph, frameData }; Call("RecordRenderGraph", __callArgs, 2); }
    };
}
