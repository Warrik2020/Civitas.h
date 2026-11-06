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
        void vignette(float value) const { WriteField<float>("vignette", value); }
        float vignetteInner() const { return ReadField<float>("vignetteInner"); }
        void vignetteInner(float value) const { WriteField<float>("vignetteInner", value); }
        float farBlur() const { return ReadField<float>("farBlur"); }
        void farBlur(float value) const { WriteField<float>("farBlur", value); }
        float farBlurStart() const { return ReadField<float>("farBlurStart"); }
        void farBlurStart(float value) const { WriteField<float>("farBlurStart", value); }
        float nearBlur() const { return ReadField<float>("nearBlur"); }
        void nearBlur(float value) const { WriteField<float>("nearBlur", value); }
        float nearBlurEnd() const { return ReadField<float>("nearBlurEnd"); }
        void nearBlurEnd(float value) const { WriteField<float>("nearBlurEnd", value); }
        void* nearBlurTilePx() const { return ReadField<void*>("nearBlurTilePx"); }
        void nearBlurTilePx(void* value) const { WriteField<void*>("nearBlurTilePx", value); }
    };
}
