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
        void Sync(void* cities, void* nations) const { void* args[] = { cities, nations }; Call("Sync", args, 2); }
        bool IsDrawn(int cityId) const { void* args[] = { &cityId }; return CallValue<bool>("IsDrawn", args, 1); }
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
        bool SkipUnchanged() const { return ReadStaticField<bool>("SkipUnchanged"); }
        void SetSkipUnchanged(bool value) const { WriteStaticField<bool>("SkipUnchanged", value); }
    };
}
