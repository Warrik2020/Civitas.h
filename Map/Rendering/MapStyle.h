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
        void oceanGradient(bool value) const { WriteField<bool>("oceanGradient", value); }
        float oceanGradientStrength() const { return ReadField<float>("oceanGradientStrength"); }
        void oceanGradientStrength(float value) const { WriteField<float>("oceanGradientStrength", value); }
        void* oceanShallow() const { return ReadField<void*>("oceanShallow"); }
        void oceanShallow(void* value) const { WriteField<void*>("oceanShallow", value); }
        void* oceanDeep() const { return ReadField<void*>("oceanDeep"); }
        void oceanDeep(void* value) const { WriteField<void*>("oceanDeep", value); }
        float oceanLightRadius() const { return ReadField<float>("oceanLightRadius"); }
        void oceanLightRadius(float value) const { WriteField<float>("oceanLightRadius", value); }
        float oceanFalloff() const { return ReadField<float>("oceanFalloff"); }
        void oceanFalloff(float value) const { WriteField<float>("oceanFalloff", value); }
        bool oceanTexture() const { return ReadField<bool>("oceanTexture"); }
        void oceanTexture(bool value) const { WriteField<bool>("oceanTexture", value); }
        float oceanTextureStrength() const { return ReadField<float>("oceanTextureStrength"); }
        void oceanTextureStrength(float value) const { WriteField<float>("oceanTextureStrength", value); }
        float oceanPatches() const { return ReadField<float>("oceanPatches"); }
        void oceanPatches(float value) const { WriteField<float>("oceanPatches", value); }
        float oceanPatchScalePx() const { return ReadField<float>("oceanPatchScalePx"); }
        void oceanPatchScalePx(float value) const { WriteField<float>("oceanPatchScalePx", value); }
        float oceanWaveScalePx() const { return ReadField<float>("oceanWaveScalePx"); }
        void oceanWaveScalePx(float value) const { WriteField<float>("oceanWaveScalePx", value); }
        float oceanWaveRelief() const { return ReadField<float>("oceanWaveRelief"); }
        void oceanWaveRelief(float value) const { WriteField<float>("oceanWaveRelief", value); }
        float oceanWaveSpeed() const { return ReadField<float>("oceanWaveSpeed"); }
        void oceanWaveSpeed(float value) const { WriteField<float>("oceanWaveSpeed", value); }
        void* oceanWindDir() const { return ReadField<void*>("oceanWindDir"); }
        void oceanWindDir(void* value) const { WriteField<void*>("oceanWindDir", value); }
        bool relief() const { return ReadField<bool>("relief"); }
        void relief(bool value) const { WriteField<bool>("relief", value); }
        float reliefStrength() const { return ReadField<float>("reliefStrength"); }
        void reliefStrength(float value) const { WriteField<float>("reliefStrength", value); }
        int reliefDownscale() const { return ReadField<int>("reliefDownscale"); }
        void reliefDownscale(int value) const { WriteField<int>("reliefDownscale", value); }
        float reliefFeatureScale() const { return ReadField<float>("reliefFeatureScale"); }
        void reliefFeatureScale(float value) const { WriteField<float>("reliefFeatureScale", value); }
        float reliefExaggeration() const { return ReadField<float>("reliefExaggeration"); }
        void reliefExaggeration(float value) const { WriteField<float>("reliefExaggeration", value); }
        void* reliefLightDir() const { return ReadField<void*>("reliefLightDir"); }
        void reliefLightDir(void* value) const { WriteField<void*>("reliefLightDir", value); }
        float reliefHypsometric() const { return ReadField<float>("reliefHypsometric"); }
        void reliefHypsometric(float value) const { WriteField<float>("reliefHypsometric", value); }
        float reliefCoastalPlainPx() const { return ReadField<float>("reliefCoastalPlainPx"); }
        void reliefCoastalPlainPx(float value) const { WriteField<float>("reliefCoastalPlainPx", value); }
        float shelfWidthPx() const { return ReadField<float>("shelfWidthPx"); }
        void shelfWidthPx(float value) const { WriteField<float>("shelfWidthPx", value); }
        float shelfDarken() const { return ReadField<float>("shelfDarken"); }
        void shelfDarken(float value) const { WriteField<float>("shelfDarken", value); }
        float reliefTint() const { return ReadField<float>("reliefTint"); }
        void reliefTint(float value) const { WriteField<float>("reliefTint", value); }
        void* reliefLightTint() const { return ReadField<void*>("reliefLightTint"); }
        void reliefLightTint(void* value) const { WriteField<void*>("reliefLightTint", value); }
        void* reliefShadowTint() const { return ReadField<void*>("reliefShadowTint"); }
        void reliefShadowTint(void* value) const { WriteField<void*>("reliefShadowTint", value); }
        bool coastline() const { return ReadField<bool>("coastline"); }
        void coastline(bool value) const { WriteField<bool>("coastline", value); }
        float coastStrength() const { return ReadField<float>("coastStrength"); }
        void coastStrength(float value) const { WriteField<float>("coastStrength", value); }
        float coastWidthPx() const { return ReadField<float>("coastWidthPx"); }
        void coastWidthPx(float value) const { WriteField<float>("coastWidthPx", value); }
        float coastFeatherPx() const { return ReadField<float>("coastFeatherPx"); }
        void coastFeatherPx(float value) const { WriteField<float>("coastFeatherPx", value); }
        void* coastColor() const { return ReadField<void*>("coastColor"); }
        void coastColor(void* value) const { WriteField<void*>("coastColor", value); }
        float coastMaxScreenPx() const { return ReadField<float>("coastMaxScreenPx"); }
        void coastMaxScreenPx(float value) const { WriteField<float>("coastMaxScreenPx", value); }
        bool frame() const { return ReadField<bool>("frame"); }
        void frame(bool value) const { WriteField<bool>("frame", value); }
        float frameWidth() const { return ReadField<float>("frameWidth"); }
        void frameWidth(float value) const { WriteField<float>("frameWidth", value); }
        float frameTrimWidth() const { return ReadField<float>("frameTrimWidth"); }
        void frameTrimWidth(float value) const { WriteField<float>("frameTrimWidth", value); }
        void* frameColor() const { return ReadField<void*>("frameColor"); }
        void frameColor(void* value) const { WriteField<void*>("frameColor", value); }
        void* frameTrimColor() const { return ReadField<void*>("frameTrimColor"); }
        void frameTrimColor(void* value) const { WriteField<void*>("frameTrimColor", value); }
        float frameInnerShadow() const { return ReadField<float>("frameInnerShadow"); }
        void frameInnerShadow(float value) const { WriteField<float>("frameInnerShadow", value); }
        float frameOutsideDarken() const { return ReadField<float>("frameOutsideDarken"); }
        void frameOutsideDarken(float value) const { WriteField<float>("frameOutsideDarken", value); }
    };
}
