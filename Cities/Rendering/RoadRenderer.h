#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Rendering
{
    class RoadRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RoadRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Rendering", "RoadRenderer") {}
    public:
        void Sync(void* roads) const { void* __callArgs[] = { roads }; Call("Sync", __callArgs, 1); }
        void SetHighlight(void* r) const { void* __callArgs[] = { r }; Call("SetHighlight", __callArgs, 1); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void SetZoomFade(float minorAlpha, float majorAlpha) const { void* __callArgs[] = { &minorAlpha, &majorAlpha }; Call("SetZoomFade", __callArgs, 2); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
    };
}
