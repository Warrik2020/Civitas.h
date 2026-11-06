#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering::Fx
{
    class MapWind : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapWind(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering.Fx", "MapWind") {}
    public:
        void* Tiles(float time) const { void* args[] = { &time }; return CallStatic("Tiles", args, 1); }
    };
}
