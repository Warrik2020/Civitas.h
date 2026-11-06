#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Rendering
{
    class FarmRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FarmRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Rendering", "FarmRenderer") {}
    public:
        void Sync(void* clusters) const { void* __callArgs[] = { clusters }; Call("Sync", __callArgs, 1); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
    };
}
