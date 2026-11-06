#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering::Styles
{
    class FillBlock : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FillBlock(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering.Styles", "FillBlock") {}
    public:
        float saturation() const { return ReadField<float>("saturation"); }
        void SetSaturation(float value) const { WriteField<float>("saturation", value); }
        float value() const { return ReadField<float>("value"); }
        void SetValue(float value) const { WriteField<float>("value", value); }
        float warmth() const { return ReadField<float>("warmth"); }
        void SetWarmth(float value) const { WriteField<float>("warmth", value); }
        void* warmTint() const { return ReadField<void*>("warmTint"); }
        void SetWarmTint(void* value) const { WriteField<void*>("warmTint", value); }
        float soften() const { return ReadField<float>("soften"); }
        void SetSoften(float value) const { WriteField<float>("soften", value); }
        float multiply() const { return ReadField<float>("multiply"); }
        void SetMultiply(float value) const { WriteField<float>("multiply", value); }
        float patchiness() const { return ReadField<float>("patchiness"); }
        void SetPatchiness(float value) const { WriteField<float>("patchiness", value); }
        void* weight() const { return ReadField<void*>("weight"); }
        void SetWeight(void* value) const { WriteField<void*>("weight", value); }
        void* keep() const { return ReadField<void*>("keep"); }
        void SetKeep(void* value) const { WriteField<void*>("keep", value); }
        float tileVariation() const { return ReadField<float>("tileVariation"); }
        void SetTileVariation(float value) const { WriteField<float>("tileVariation", value); }
    };
}
