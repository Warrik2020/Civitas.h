#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::States::Labels
{
    class StateLabelConfig : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateLabelConfig(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.States.Labels", "StateLabelConfig") {}
    public:
        float hidePx() const { return ReadField<float>("hidePx"); }
        void hidePx(float value) const { WriteField<float>("hidePx", value); }
        float fadePx() const { return ReadField<float>("fadePx"); }
        void fadePx(float value) const { WriteField<float>("fadePx", value); }
        float showExitFactor() const { return ReadField<float>("showExitFactor"); }
        void showExitFactor(float value) const { WriteField<float>("showExitFactor", value); }
        float densityCellPx() const { return ReadField<float>("densityCellPx"); }
        void densityCellPx(float value) const { WriteField<float>("densityCellPx", value); }
        int densityMax() const { return ReadField<int>("densityMax"); }
        void densityMax(int value) const { WriteField<int>("densityMax", value); }
        float cullMarginTiles() const { return ReadField<float>("cullMarginTiles"); }
        void cullMarginTiles(float value) const { WriteField<float>("cullMarginTiles", value); }
        int maxLabels() const { return ReadField<int>("maxLabels"); }
        void maxLabels(int value) const { WriteField<int>("maxLabels", value); }
        float refitSeconds() const { return ReadField<float>("refitSeconds"); }
        void refitSeconds(float value) const { WriteField<float>("refitSeconds", value); }
        int fitsPerFrame() const { return ReadField<int>("fitsPerFrame"); }
        void fitsPerFrame(int value) const { WriteField<int>("fitsPerFrame", value); }
    };
}
