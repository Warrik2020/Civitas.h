#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering
{
    class MapStyle : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapStyle(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering", "MapStyle") {}
    public:
        int CheapVersion() const { return CallValue<int>("CheapVersion", nullptr, 0); }
        int ReliefVersion() const { return CallValue<int>("ReliefVersion", nullptr, 0); }
        int CoastVersion() const { return CallValue<int>("CoastVersion", nullptr, 0); }
        int FrameVersion() const { return CallValue<int>("FrameVersion", nullptr, 0); }
        bool oceanGradient() const { return ReadField<bool>("oceanGradient"); }
        void SetOceanGradient(bool value) const { WriteField<bool>("oceanGradient", value); }
        float oceanGradientStrength() const { return ReadField<float>("oceanGradientStrength"); }
        void SetOceanGradientStrength(float value) const { WriteField<float>("oceanGradientStrength", value); }
        void* oceanShallow() const { return ReadField<void*>("oceanShallow"); }
        void SetOceanShallow(void* value) const { WriteField<void*>("oceanShallow", value); }
        void* oceanDeep() const { return ReadField<void*>("oceanDeep"); }
        void SetOceanDeep(void* value) const { WriteField<void*>("oceanDeep", value); }
        float oceanLightRadius() const { return ReadField<float>("oceanLightRadius"); }
        void SetOceanLightRadius(float value) const { WriteField<float>("oceanLightRadius", value); }
        float oceanFalloff() const { return ReadField<float>("oceanFalloff"); }
        void SetOceanFalloff(float value) const { WriteField<float>("oceanFalloff", value); }
        bool oceanTexture() const { return ReadField<bool>("oceanTexture"); }
        void SetOceanTexture(bool value) const { WriteField<bool>("oceanTexture", value); }
        float oceanTextureStrength() const { return ReadField<float>("oceanTextureStrength"); }
        void SetOceanTextureStrength(float value) const { WriteField<float>("oceanTextureStrength", value); }
        float oceanPatches() const { return ReadField<float>("oceanPatches"); }
        void SetOceanPatches(float value) const { WriteField<float>("oceanPatches", value); }
        float oceanPatchScalePx() const { return ReadField<float>("oceanPatchScalePx"); }
        void SetOceanPatchScalePx(float value) const { WriteField<float>("oceanPatchScalePx", value); }
        float oceanWaveScalePx() const { return ReadField<float>("oceanWaveScalePx"); }
        void SetOceanWaveScalePx(float value) const { WriteField<float>("oceanWaveScalePx", value); }
        float oceanWaveRelief() const { return ReadField<float>("oceanWaveRelief"); }
        void SetOceanWaveRelief(float value) const { WriteField<float>("oceanWaveRelief", value); }
        float oceanWaveSpeed() const { return ReadField<float>("oceanWaveSpeed"); }
        void SetOceanWaveSpeed(float value) const { WriteField<float>("oceanWaveSpeed", value); }
        void* oceanWindDir() const { return ReadField<void*>("oceanWindDir"); }
        void SetOceanWindDir(void* value) const { WriteField<void*>("oceanWindDir", value); }
        bool relief() const { return ReadField<bool>("relief"); }
        void SetRelief(bool value) const { WriteField<bool>("relief", value); }
        float reliefStrength() const { return ReadField<float>("reliefStrength"); }
        void SetReliefStrength(float value) const { WriteField<float>("reliefStrength", value); }
        int reliefDownscale() const { return ReadField<int>("reliefDownscale"); }
        void SetReliefDownscale(int value) const { WriteField<int>("reliefDownscale", value); }
        float reliefFeatureScale() const { return ReadField<float>("reliefFeatureScale"); }
        void SetReliefFeatureScale(float value) const { WriteField<float>("reliefFeatureScale", value); }
        float reliefExaggeration() const { return ReadField<float>("reliefExaggeration"); }
        void SetReliefExaggeration(float value) const { WriteField<float>("reliefExaggeration", value); }
        void* reliefLightDir() const { return ReadField<void*>("reliefLightDir"); }
        void SetReliefLightDir(void* value) const { WriteField<void*>("reliefLightDir", value); }
        float reliefHypsometric() const { return ReadField<float>("reliefHypsometric"); }
        void SetReliefHypsometric(float value) const { WriteField<float>("reliefHypsometric", value); }
        float reliefCoastalPlainPx() const { return ReadField<float>("reliefCoastalPlainPx"); }
        void SetReliefCoastalPlainPx(float value) const { WriteField<float>("reliefCoastalPlainPx", value); }
        float shelfWidthPx() const { return ReadField<float>("shelfWidthPx"); }
        void SetShelfWidthPx(float value) const { WriteField<float>("shelfWidthPx", value); }
        float shelfDarken() const { return ReadField<float>("shelfDarken"); }
        void SetShelfDarken(float value) const { WriteField<float>("shelfDarken", value); }
        float reliefTint() const { return ReadField<float>("reliefTint"); }
        void SetReliefTint(float value) const { WriteField<float>("reliefTint", value); }
        void* reliefLightTint() const { return ReadField<void*>("reliefLightTint"); }
        void SetReliefLightTint(void* value) const { WriteField<void*>("reliefLightTint", value); }
        void* reliefShadowTint() const { return ReadField<void*>("reliefShadowTint"); }
        void SetReliefShadowTint(void* value) const { WriteField<void*>("reliefShadowTint", value); }
        bool coastline() const { return ReadField<bool>("coastline"); }
        void SetCoastline(bool value) const { WriteField<bool>("coastline", value); }
        float coastStrength() const { return ReadField<float>("coastStrength"); }
        void SetCoastStrength(float value) const { WriteField<float>("coastStrength", value); }
        float coastWidthPx() const { return ReadField<float>("coastWidthPx"); }
        void SetCoastWidthPx(float value) const { WriteField<float>("coastWidthPx", value); }
        float coastFeatherPx() const { return ReadField<float>("coastFeatherPx"); }
        void SetCoastFeatherPx(float value) const { WriteField<float>("coastFeatherPx", value); }
        void* coastColor() const { return ReadField<void*>("coastColor"); }
        void SetCoastColor(void* value) const { WriteField<void*>("coastColor", value); }
        float coastMaxScreenPx() const { return ReadField<float>("coastMaxScreenPx"); }
        void SetCoastMaxScreenPx(float value) const { WriteField<float>("coastMaxScreenPx", value); }
        bool frame() const { return ReadField<bool>("frame"); }
        void SetFrame(bool value) const { WriteField<bool>("frame", value); }
        float frameWidth() const { return ReadField<float>("frameWidth"); }
        void SetFrameWidth(float value) const { WriteField<float>("frameWidth", value); }
        float frameTrimWidth() const { return ReadField<float>("frameTrimWidth"); }
        void SetFrameTrimWidth(float value) const { WriteField<float>("frameTrimWidth", value); }
        void* frameColor() const { return ReadField<void*>("frameColor"); }
        void SetFrameColor(void* value) const { WriteField<void*>("frameColor", value); }
        void* frameTrimColor() const { return ReadField<void*>("frameTrimColor"); }
        void SetFrameTrimColor(void* value) const { WriteField<void*>("frameTrimColor", value); }
        float frameInnerShadow() const { return ReadField<float>("frameInnerShadow"); }
        void SetFrameInnerShadow(float value) const { WriteField<float>("frameInnerShadow", value); }
        float frameOutsideDarken() const { return ReadField<float>("frameOutsideDarken"); }
        void SetFrameOutsideDarken(float value) const { WriteField<float>("frameOutsideDarken", value); }
    };
}
