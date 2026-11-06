#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering::Styles
{
    class LineBlock : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LineBlock(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering.Styles", "LineBlock") {}
    public:
        float widthTiles() const { return ReadField<float>("widthTiles"); }
        void SetWidthTiles(float value) const { WriteField<float>("widthTiles", value); }
        void* color() const { return ReadField<void*>("color"); }
        void SetColor(void* value) const { WriteField<void*>("color", value); }
        int ownerTint() const { return ReadField<int>("ownerTint"); }
        void SetOwnerTint(int value) const { WriteField<int>("ownerTint", value); }
        float darken() const { return ReadField<float>("darken"); }
        void SetDarken(float value) const { WriteField<float>("darken", value); }
        float opacity() const { return ReadField<float>("opacity"); }
        void SetOpacity(float value) const { WriteField<float>("opacity", value); }
        float minStrength() const { return ReadField<float>("minStrength"); }
        void SetMinStrength(float value) const { WriteField<float>("minStrength", value); }
        float wobbleTiles() const { return ReadField<float>("wobbleTiles"); }
        void SetWobbleTiles(float value) const { WriteField<float>("wobbleTiles", value); }
        float wobbleWavelengthTiles() const { return ReadField<float>("wobbleWavelengthTiles"); }
        void SetWobbleWavelengthTiles(float value) const { WriteField<float>("wobbleWavelengthTiles", value); }
    };
}
