#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Labels
{
    class NationLabelConfig : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationLabelConfig(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Labels", "NationLabelConfig") {}
    public:
        float spineFillFraction() const { return ReadField<float>("spineFillFraction"); }
        void spineFillFraction(float value) const { WriteField<float>("spineFillFraction", value); }
        float heightMargin() const { return ReadField<float>("heightMargin"); }
        void heightMargin(float value) const { WriteField<float>("heightMargin", value); }
        float spillMultiple() const { return ReadField<float>("spillMultiple"); }
        void spillMultiple(float value) const { WriteField<float>("spillMultiple", value); }
        int maxSpineSlices() const { return ReadField<int>("maxSpineSlices"); }
        void maxSpineSlices(int value) const { WriteField<int>("maxSpineSlices", value); }
        float labelBridgeGapPx() const { return ReadField<float>("labelBridgeGapPx"); }
        void labelBridgeGapPx(float value) const { WriteField<float>("labelBridgeGapPx", value); }
        int maxNamesPerNation() const { return ReadField<int>("maxNamesPerNation"); }
        void maxNamesPerNation(int value) const { WriteField<int>("maxNamesPerNation", value); }
        float minLabelAreaFraction() const { return ReadField<float>("minLabelAreaFraction"); }
        void minLabelAreaFraction(float value) const { WriteField<float>("minLabelAreaFraction", value); }
        float minNamedMapShare() const { return ReadField<float>("minNamedMapShare"); }
        void minNamedMapShare(float value) const { WriteField<float>("minNamedMapShare", value); }
        float curveStrength() const { return ReadField<float>("curveStrength"); }
        void curveStrength(float value) const { WriteField<float>("curveStrength", value); }
        float minTextHeightWorld() const { return ReadField<float>("minTextHeightWorld"); }
        void minTextHeightWorld(float value) const { WriteField<float>("minTextHeightWorld", value); }
        float refitGrowthFraction() const { return ReadField<float>("refitGrowthFraction"); }
        void refitGrowthFraction(float value) const { WriteField<float>("refitGrowthFraction", value); }
        int refitMinClaims() const { return ReadField<int>("refitMinClaims"); }
        void refitMinClaims(int value) const { WriteField<int>("refitMinClaims", value); }
        float refitInterval() const { return ReadField<float>("refitInterval"); }
        void refitInterval(float value) const { WriteField<float>("refitInterval", value); }
        float refitRetryInterval() const { return ReadField<float>("refitRetryInterval"); }
        void refitRetryInterval(float value) const { WriteField<float>("refitRetryInterval", value); }
        int refitsPerFrame() const { return ReadField<int>("refitsPerFrame"); }
        void refitsPerFrame(int value) const { WriteField<int>("refitsPerFrame", value); }
        float labelZ() const { return ReadField<float>("labelZ"); }
        void labelZ(float value) const { WriteField<float>("labelZ", value); }
        bool uppercase() const { return ReadField<bool>("uppercase"); }
        void uppercase(bool value) const { WriteField<bool>("uppercase", value); }
        bool tintTextWithNationColor() const { return ReadField<bool>("tintTextWithNationColor"); }
        void tintTextWithNationColor(bool value) const { WriteField<bool>("tintTextWithNationColor", value); }
        float tintMinBrightness() const { return ReadField<float>("tintMinBrightness"); }
        void tintMinBrightness(float value) const { WriteField<float>("tintMinBrightness", value); }
        float tintMinContrast() const { return ReadField<float>("tintMinContrast"); }
        void tintMinContrast(float value) const { WriteField<float>("tintMinContrast", value); }
        void* textColor() const { return ReadField<void*>("textColor"); }
        void textColor(void* value) const { WriteField<void*>("textColor", value); }
        float outlineWidth() const { return ReadField<float>("outlineWidth"); }
        void outlineWidth(float value) const { WriteField<float>("outlineWidth", value); }
        bool outlineUsesNationColor() const { return ReadField<bool>("outlineUsesNationColor"); }
        void outlineUsesNationColor(bool value) const { WriteField<bool>("outlineUsesNationColor", value); }
        void* outlineColor() const { return ReadField<void*>("outlineColor"); }
        void outlineColor(void* value) const { WriteField<void*>("outlineColor", value); }
        float dropShadowStrength() const { return ReadField<float>("dropShadowStrength"); }
        void dropShadowStrength(float value) const { WriteField<float>("dropShadowStrength", value); }
        void* shadowColor() const { return ReadField<void*>("shadowColor"); }
        void shadowColor(void* value) const { WriteField<void*>("shadowColor", value); }
        void* dropShadowOffset() const { return ReadField<void*>("dropShadowOffset"); }
        void dropShadowOffset(void* value) const { WriteField<void*>("dropShadowOffset", value); }
        float dropShadowSoftness() const { return ReadField<float>("dropShadowSoftness"); }
        void dropShadowSoftness(float value) const { WriteField<float>("dropShadowSoftness", value); }
        float fadeBelowScreenHeight() const { return ReadField<float>("fadeBelowScreenHeight"); }
        void fadeBelowScreenHeight(float value) const { WriteField<float>("fadeBelowScreenHeight", value); }
        float fadeOutAboveTilePx() const { return ReadField<float>("fadeOutAboveTilePx"); }
        void fadeOutAboveTilePx(float value) const { WriteField<float>("fadeOutAboveTilePx", value); }
        float hideAboveTilePx() const { return ReadField<float>("hideAboveTilePx"); }
        void hideAboveTilePx(float value) const { WriteField<float>("hideAboveTilePx", value); }
    };
}
