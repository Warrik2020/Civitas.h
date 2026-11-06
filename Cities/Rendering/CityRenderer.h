#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Rendering
{
    class CityRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Rendering", "CityRenderer") {}
    public:
        void Sync(void* cities) const { void* __callArgs[] = { cities }; Call("Sync", __callArgs, 1); }
        void Forget(int cityId) const { void* __callArgs[] = { &cityId }; Call("Forget", __callArgs, 1); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
    };
}
