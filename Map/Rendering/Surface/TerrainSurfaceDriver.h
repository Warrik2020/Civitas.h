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
        void SetNationFill(void* fill) const { void* __callArgs[] = { fill }; CallStatic("SetNationFill", __callArgs, 1); }
        void Init(void* map, void* land) const { void* __callArgs[] = { map, land }; Call("Init", __callArgs, 2); }
        void* TintKindProvider() const { return ReadStaticField<void*>("TintKindProvider"); }
        void TintKindProvider(void* value) const { WriteStaticField<void*>("TintKindProvider", value); }
        float TerritoryAlpha() const { return ReadStaticField<float>("TerritoryAlpha"); }
        void TerritoryAlpha(float value) const { WriteStaticField<float>("TerritoryAlpha", value); }
    };
}
