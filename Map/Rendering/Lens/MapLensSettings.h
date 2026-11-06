#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering::Lens
{
    class MapLensSettings : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapLensSettings(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering.Lens", "MapLensSettings") {}
    public:
        void SetBlur(bool on) const { void* __callArgs[] = { &on }; CallStatic("SetBlur", __callArgs, 1); }
        void SetVignette(bool on) const { void* __callArgs[] = { &on }; CallStatic("SetVignette", __callArgs, 1); }
    };
}
