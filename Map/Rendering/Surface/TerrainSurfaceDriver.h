#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering::Surface
{
    class TerrainSurfaceDriver : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TerrainSurfaceDriver(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering.Surface", "TerrainSurfaceDriver") {}
    public:
        void SetNationFill(void* fill) const { void* args[] = { fill }; CallStatic("SetNationFill", args, 1); }
        void Init(void* map, void* land) const { void* args[] = { map, land }; Call("Init", args, 2); }
        void* TintKindProvider() const { return ReadStaticField<void*>("TintKindProvider"); }
        void SetTintKindProvider(void* value) const { WriteStaticField<void*>("TintKindProvider", value); }
        float TerritoryAlpha() const { return ReadStaticField<float>("TerritoryAlpha"); }
        void SetTerritoryAlpha(float value) const { WriteStaticField<float>("TerritoryAlpha", value); }
    };
}
