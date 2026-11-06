#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering::Styles
{
    class BandBlock : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BandBlock(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering.Styles", "BandBlock") {}
    public:
        float widthTiles() const { return ReadField<float>("widthTiles"); }
        void SetWidthTiles(float value) const { WriteField<float>("widthTiles", value); }
        float alpha() const { return ReadField<float>("alpha"); }
        void SetAlpha(float value) const { WriteField<float>("alpha", value); }
        float darken() const { return ReadField<float>("darken"); }
        void SetDarken(float value) const { WriteField<float>("darken", value); }
        void* color() const { return ReadField<void*>("color"); }
        void SetColor(void* value) const { WriteField<void*>("color", value); }
        int ownerTint() const { return ReadField<int>("ownerTint"); }
        void SetOwnerTint(int value) const { WriteField<int>("ownerTint", value); }
        void* profile() const { return ReadField<void*>("profile"); }
        void SetProfile(void* value) const { WriteField<void*>("profile", value); }
        bool fitInside() const { return ReadField<bool>("fitInside"); }
        void SetFitInside(bool value) const { WriteField<bool>("fitInside", value); }
        bool politicalOnly() const { return ReadField<bool>("politicalOnly"); }
        void SetPoliticalOnly(bool value) const { WriteField<bool>("politicalOnly", value); }
    };
}
