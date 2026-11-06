#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Map
{
    class MapScreen : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapScreen(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map", "MapScreen") {}
    public:
        void* ScreenToWorld(void* cam, void* screen) const { void* __callArgs[] = { cam, screen }; return CallStatic("ScreenToWorld", __callArgs, 2); }
        void* ScreenToWorldOverload1(void* cam, void* screen) const { void* __callArgs[] = { cam, screen }; return CallStatic("ScreenToWorld", __callArgs, 2); }
        void* ScreenToRender(void* cam, void* screen) const { void* __callArgs[] = { cam, screen }; return CallStatic("ScreenToRender", __callArgs, 2); }
        void* WorldToScreen(void* cam, void* logical) const { void* __callArgs[] = { cam, logical }; return CallStatic("WorldToScreen", __callArgs, 2); }
        void* RenderToScreen(void* cam, void* render) const { void* __callArgs[] = { cam, render }; return CallStatic("RenderToScreen", __callArgs, 2); }
        void* ViewportToWorld(void* cam, void* viewport) const { void* __callArgs[] = { cam, viewport }; return CallStatic("ViewportToWorld", __callArgs, 2); }
        void* ViewportToRender(void* cam, void* viewport) const { void* __callArgs[] = { cam, viewport }; return CallStatic("ViewportToRender", __callArgs, 2); }
        void* WorldToViewport(void* cam, void* logical) const { void* __callArgs[] = { cam, logical }; return CallStatic("WorldToViewport", __callArgs, 2); }
        void* CameraPosition(void* cam) const { void* __callArgs[] = { cam }; return CallStatic("CameraPosition", __callArgs, 1); }
        float PixelsPerWorldUnit(void* cam) const { void* __callArgs[] = { cam }; return CallStaticValue<float>("PixelsPerWorldUnit", __callArgs, 1); }
        void* ForMapText(void* m) const { void* __callArgs[] = { m }; return CallStatic("ForMapText", __callArgs, 1); }
        void CopyView(void* from, void* to) const { void* __callArgs[] = { from, to }; CallStatic("CopyView", __callArgs, 2); }
        void MakeFlat(void* cam, void* from, float& z, void* rotation) const { void* __callArgs[] = { cam, from, &z, &rotation }; CallStatic("MakeFlat", __callArgs, 4); }
        void* ViewProjection(void* cam) const { void* __callArgs[] = { cam }; return CallStatic("ViewProjection", __callArgs, 1); }
    };
}
