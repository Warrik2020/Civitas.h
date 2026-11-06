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
        void Sync(void* sites, int version, bool animating, void* cfg, int gridWidth) const { void* __callArgs[] = { sites, &version, &animating, cfg, &gridWidth }; Call("Sync", __callArgs, 5); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
    };
}
