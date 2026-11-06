#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Labels
{
    class CityLabelConfig : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityLabelConfig(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Labels", "CityLabelConfig") {}
    public:
        float nameSizeTiles() const { return ReadField<float>("nameSizeTiles"); }
        void nameSizeTiles(float value) const { WriteField<float>("nameSizeTiles", value); }
        float populationSizeFrac() const { return ReadField<float>("populationSizeFrac"); }
        void populationSizeFrac(float value) const { WriteField<float>("populationSizeFrac", value); }
        float lineGapFrac() const { return ReadField<float>("lineGapFrac"); }
        void lineGapFrac(float value) const { WriteField<float>("lineGapFrac", value); }
        float riseTiles() const { return ReadField<float>("riseTiles"); }
        void riseTiles(float value) const { WriteField<float>("riseTiles", value); }
        float capitalScale() const { return ReadField<float>("capitalScale"); }
        void capitalScale(float value) const { WriteField<float>("capitalScale", value); }
        void* nameColor() const { return ReadField<void*>("nameColor"); }
        void nameColor(void* value) const { WriteField<void*>("nameColor", value); }
        void* populationColor() const { return ReadField<void*>("populationColor"); }
        void populationColor(void* value) const { WriteField<void*>("populationColor", value); }
        float outlineWidth() const { return ReadField<float>("outlineWidth"); }
        void outlineWidth(float value) const { WriteField<float>("outlineWidth", value); }
        void* outlineColor() const { return ReadField<void*>("outlineColor"); }
        void outlineColor(void* value) const { WriteField<void*>("outlineColor", value); }
        float shadowStrength() const { return ReadField<float>("shadowStrength"); }
        void shadowStrength(float value) const { WriteField<float>("shadowStrength", value); }
        float shadowOffset() const { return ReadField<float>("shadowOffset"); }
        void shadowOffset(float value) const { WriteField<float>("shadowOffset", value); }
        float shadowSoftness() const { return ReadField<float>("shadowSoftness"); }
        void shadowSoftness(float value) const { WriteField<float>("shadowSoftness", value); }
        float hidePx() const { return ReadField<float>("hidePx"); }
        void hidePx(float value) const { WriteField<float>("hidePx", value); }
        float fadePx() const { return ReadField<float>("fadePx"); }
        void fadePx(float value) const { WriteField<float>("fadePx", value); }
        float showExitFactor() const { return ReadField<float>("showExitFactor"); }
        void showExitFactor(float value) const { WriteField<float>("showExitFactor", value); }
        float populationMinPx() const { return ReadField<float>("populationMinPx"); }
        void populationMinPx(float value) const { WriteField<float>("populationMinPx", value); }
        float densityCellPx() const { return ReadField<float>("densityCellPx"); }
        void densityCellPx(float value) const { WriteField<float>("densityCellPx", value); }
        int densityMax() const { return ReadField<int>("densityMax"); }
        void densityMax(int value) const { WriteField<int>("densityMax", value); }
        float cullMarginTiles() const { return ReadField<float>("cullMarginTiles"); }
        void cullMarginTiles(float value) const { WriteField<float>("cullMarginTiles", value); }
        int maxLabels() const { return ReadField<int>("maxLabels"); }
        void maxLabels(int value) const { WriteField<int>("maxLabels", value); }
    };
}
