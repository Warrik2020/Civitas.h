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
        void saturation(float value) const { WriteField<float>("saturation", value); }
        float value() const { return ReadField<float>("value"); }
        void value(float value) const { WriteField<float>("value", value); }
        float warmth() const { return ReadField<float>("warmth"); }
        void warmth(float value) const { WriteField<float>("warmth", value); }
        void* warmTint() const { return ReadField<void*>("warmTint"); }
        void warmTint(void* value) const { WriteField<void*>("warmTint", value); }
        float soften() const { return ReadField<float>("soften"); }
        void soften(float value) const { WriteField<float>("soften", value); }
        float multiply() const { return ReadField<float>("multiply"); }
        void multiply(float value) const { WriteField<float>("multiply", value); }
        float patchiness() const { return ReadField<float>("patchiness"); }
        void patchiness(float value) const { WriteField<float>("patchiness", value); }
        void* weight() const { return ReadField<void*>("weight"); }
        void weight(void* value) const { WriteField<void*>("weight", value); }
        void* keep() const { return ReadField<void*>("keep"); }
        void keep(void* value) const { WriteField<void*>("keep", value); }
        float tileVariation() const { return ReadField<float>("tileVariation"); }
        void tileVariation(float value) const { WriteField<float>("tileVariation", value); }
    };
}
