#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering::Styles
{
    class CoastBlock : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CoastBlock(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering.Styles", "CoastBlock") {}
    public:
        float shadow() const { return ReadField<float>("shadow"); }
        void SetShadow(float value) const { WriteField<float>("shadow", value); }
        void* shadowColor() const { return ReadField<void*>("shadowColor"); }
        void SetShadowColor(void* value) const { WriteField<void*>("shadowColor", value); }
        float shadowTiles() const { return ReadField<float>("shadowTiles"); }
        void SetShadowTiles(float value) const { WriteField<float>("shadowTiles", value); }
        float shadowMaxPx() const { return ReadField<float>("shadowMaxPx"); }
        void SetShadowMaxPx(float value) const { WriteField<float>("shadowMaxPx", value); }
    };
}
