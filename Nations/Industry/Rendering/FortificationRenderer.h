#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Industry::Rendering
{
    class FortificationRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FortificationRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Industry.Rendering", "FortificationRenderer") {}
    public:
        void Sync(void* sites, int version, bool animating, void* cfg, int gridWidth) const { void* args[] = { sites, &version, &animating, cfg, &gridWidth }; Call("Sync", args, 5); }
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
    };
}
