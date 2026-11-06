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
        void SetNameSizeTiles(float value) const { WriteField<float>("nameSizeTiles", value); }
        float populationSizeFrac() const { return ReadField<float>("populationSizeFrac"); }
        void SetPopulationSizeFrac(float value) const { WriteField<float>("populationSizeFrac", value); }
        float lineGapFrac() const { return ReadField<float>("lineGapFrac"); }
        void SetLineGapFrac(float value) const { WriteField<float>("lineGapFrac", value); }
        float riseTiles() const { return ReadField<float>("riseTiles"); }
        void SetRiseTiles(float value) const { WriteField<float>("riseTiles", value); }
        float capitalScale() const { return ReadField<float>("capitalScale"); }
        void SetCapitalScale(float value) const { WriteField<float>("capitalScale", value); }
        void* nameColor() const { return ReadField<void*>("nameColor"); }
        void SetNameColor(void* value) const { WriteField<void*>("nameColor", value); }
        void* populationColor() const { return ReadField<void*>("populationColor"); }
        void SetPopulationColor(void* value) const { WriteField<void*>("populationColor", value); }
        float outlineWidth() const { return ReadField<float>("outlineWidth"); }
        void SetOutlineWidth(float value) const { WriteField<float>("outlineWidth", value); }
        void* outlineColor() const { return ReadField<void*>("outlineColor"); }
        void SetOutlineColor(void* value) const { WriteField<void*>("outlineColor", value); }
        float shadowStrength() const { return ReadField<float>("shadowStrength"); }
        void SetShadowStrength(float value) const { WriteField<float>("shadowStrength", value); }
        float shadowOffset() const { return ReadField<float>("shadowOffset"); }
        void SetShadowOffset(float value) const { WriteField<float>("shadowOffset", value); }
        float shadowSoftness() const { return ReadField<float>("shadowSoftness"); }
        void SetShadowSoftness(float value) const { WriteField<float>("shadowSoftness", value); }
        float hidePx() const { return ReadField<float>("hidePx"); }
        void SetHidePx(float value) const { WriteField<float>("hidePx", value); }
        float fadePx() const { return ReadField<float>("fadePx"); }
        void SetFadePx(float value) const { WriteField<float>("fadePx", value); }
        float showExitFactor() const { return ReadField<float>("showExitFactor"); }
        void SetShowExitFactor(float value) const { WriteField<float>("showExitFactor", value); }
        float populationMinPx() const { return ReadField<float>("populationMinPx"); }
        void SetPopulationMinPx(float value) const { WriteField<float>("populationMinPx", value); }
        float densityCellPx() const { return ReadField<float>("densityCellPx"); }
        void SetDensityCellPx(float value) const { WriteField<float>("densityCellPx", value); }
        int densityMax() const { return ReadField<int>("densityMax"); }
        void SetDensityMax(int value) const { WriteField<int>("densityMax", value); }
        float cullMarginTiles() const { return ReadField<float>("cullMarginTiles"); }
        void SetCullMarginTiles(float value) const { WriteField<float>("cullMarginTiles", value); }
        int maxLabels() const { return ReadField<int>("maxLabels"); }
        void SetMaxLabels(int value) const { WriteField<int>("maxLabels", value); }
    };
}
