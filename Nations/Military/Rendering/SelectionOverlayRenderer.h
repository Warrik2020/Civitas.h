#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering
{
    class SelectionOverlayRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SelectionOverlayRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering", "SelectionOverlayRenderer") {}
    public:
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void Sync(void* selected, void* screenBox, void* cam, void* refused, float time, float counterDrawScale, void* grid = nullptr) const { void* args[] = { selected, screenBox, cam, refused, &time, &counterDrawScale, grid }; Call("Sync", args, 7); }
    };
}
