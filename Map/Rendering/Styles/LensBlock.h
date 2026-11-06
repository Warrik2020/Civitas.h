#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering::Styles
{
    class LensBlock : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LensBlock(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering.Styles", "LensBlock") {}
    public:
        float vignette() const { return ReadField<float>("vignette"); }
        void SetVignette(float value) const { WriteField<float>("vignette", value); }
        float vignetteInner() const { return ReadField<float>("vignetteInner"); }
        void SetVignetteInner(float value) const { WriteField<float>("vignetteInner", value); }
        float farBlur() const { return ReadField<float>("farBlur"); }
        void SetFarBlur(float value) const { WriteField<float>("farBlur", value); }
        float farBlurStart() const { return ReadField<float>("farBlurStart"); }
        void SetFarBlurStart(float value) const { WriteField<float>("farBlurStart", value); }
        float nearBlur() const { return ReadField<float>("nearBlur"); }
        void SetNearBlur(float value) const { WriteField<float>("nearBlur", value); }
        float nearBlurEnd() const { return ReadField<float>("nearBlurEnd"); }
        void SetNearBlurEnd(float value) const { WriteField<float>("nearBlurEnd", value); }
        void* nearBlurTilePx() const { return ReadField<void*>("nearBlurTilePx"); }
        void SetNearBlurTilePx(void* value) const { WriteField<void*>("nearBlurTilePx", value); }
    };
}
