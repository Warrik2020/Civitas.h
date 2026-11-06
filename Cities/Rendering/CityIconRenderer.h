#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Rendering
{
    class CityIconRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityIconRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Rendering", "CityIconRenderer") {}
    public:
        void Sync(void* cities, void* nations) const { void* __callArgs[] = { cities, nations }; Call("Sync", __callArgs, 2); }
        bool IsDrawn(int cityId) const { void* __callArgs[] = { &cityId }; return CallValue<bool>("IsDrawn", __callArgs, 1); }
        void SetVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetVisible", __callArgs, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        bool SkipUnchanged() const { return ReadStaticField<bool>("SkipUnchanged"); }
        void SkipUnchanged(bool value) const { WriteStaticField<bool>("SkipUnchanged", value); }
    };
}
