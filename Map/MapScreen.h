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
        void* ScreenToWorld(void* cam, void* screen) const { void* args[] = { cam, screen }; return CallStatic("ScreenToWorld", args, 2); }
        void* ScreenToWorld(void* cam, void* screen) const { void* args[] = { cam, screen }; return CallStatic("ScreenToWorld", args, 2); }
        void* ScreenToRender(void* cam, void* screen) const { void* args[] = { cam, screen }; return CallStatic("ScreenToRender", args, 2); }
        void* WorldToScreen(void* cam, void* logical) const { void* args[] = { cam, logical }; return CallStatic("WorldToScreen", args, 2); }
        void* RenderToScreen(void* cam, void* render) const { void* args[] = { cam, render }; return CallStatic("RenderToScreen", args, 2); }
        void* ViewportToWorld(void* cam, void* viewport) const { void* args[] = { cam, viewport }; return CallStatic("ViewportToWorld", args, 2); }
        void* ViewportToRender(void* cam, void* viewport) const { void* args[] = { cam, viewport }; return CallStatic("ViewportToRender", args, 2); }
        void* WorldToViewport(void* cam, void* logical) const { void* args[] = { cam, logical }; return CallStatic("WorldToViewport", args, 2); }
        void* CameraPosition(void* cam) const { void* args[] = { cam }; return CallStatic("CameraPosition", args, 1); }
        float PixelsPerWorldUnit(void* cam) const { void* args[] = { cam }; return CallStaticValue<float>("PixelsPerWorldUnit", args, 1); }
        void* ForMapText(void* m) const { void* args[] = { m }; return CallStatic("ForMapText", args, 1); }
        void CopyView(void* from, void* to) const { void* args[] = { from, to }; CallStatic("CopyView", args, 2); }
        void MakeFlat(void* cam, void* from, float& z, void* rotation) const { void* args[] = { cam, from, &z, &rotation }; CallStatic("MakeFlat", args, 4); }
        void* ViewProjection(void* cam) const { void* args[] = { cam }; return CallStatic("ViewProjection", args, 1); }
        void* Of(void* cam) const { void* args[] = { cam }; return CallStatic("Of", args, 1); }
        bool SameAs(void* o) const { void* args[] = { &o }; return CallValue<bool>("SameAs", args, 1); }
        float Depth(void* logical) const { void* args[] = { logical }; return CallValue<float>("Depth", args, 1); }
        void* At(void* logical) const { void* args[] = { logical }; return Call("At", args, 1); }
        void* Stand(void* logical, float lift) const { void* args[] = { logical, &lift }; return Call("Stand", args, 2); }
        void* Card(float x, float y) const { void* args[] = { &x, &y }; return Call("Card", args, 2); }
        void* Offset(float x, float y) const { void* args[] = { &x, &y }; return Call("Offset", args, 2); }
        void Axes(float x, float y, void* right, void* up) const { void* args[] = { &x, &y, &right, &up }; Call("Axes", args, 4); }
        void* Local(void* map) const { void* args[] = { map }; return Call("Local", args, 1); }
        void* Turn(void* dir) const { void* args[] = { dir }; return Call("Turn", args, 1); }
        void* Reach(float halfX, float halfY) const { void* args[] = { &halfX, &halfY }; return Call("Reach", args, 2); }
        void Apply(void* from, void* into, int start, int end, void* at) const { void* args[] = { from, into, &start, &end, at }; Call("Apply", args, 5); }
        void Apply(void* verts, int start, void* at) const { void* args[] = { verts, &start, at }; Call("Apply", args, 3); }
        bool Tilted() const { return ReadField<bool>("Tilted"); }
        float Rise() const { return ReadField<float>("Rise"); }
        bool Tilted() const { return ReadField<bool>("Tilted"); }
    };
}
