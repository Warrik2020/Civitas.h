#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiMetrics : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiMetrics(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiMetrics") {}
    public:
        void* RowPadding(int vertical = 4) const { void* args[] = { &vertical }; return CallStatic("RowPadding", args, 1); }
        void* IndentedRowPadding(int levels = 1, int vertical = 4) const { void* args[] = { &levels, &vertical }; return CallStatic("IndentedRowPadding", args, 2); }
        void* BodyMargin(float vertical = 0f) const { void* args[] = { &vertical }; return CallStatic("BodyMargin", args, 1); }
        void* PanelPadding(int bottom = 16) const { void* args[] = { &bottom }; return CallStatic("PanelPadding", args, 1); }
        void FitScrollViewport(void* viewportLe, void* content, float available, bool followCanvas = true) const { void* args[] = { viewportLe, content, &available, &followCanvas }; CallStatic("FitScrollViewport", args, 4); }
        float MeasuredHeight(void* rt) const { void* args[] = { rt }; return CallStaticValue<float>("MeasuredHeight", args, 1); }
        void ApplyRow(void* layout, int vertical = 4, float gap = 8f) const { void* args[] = { layout, &vertical, &gap }; CallStatic("ApplyRow", args, 3); }
        int Gutter() const { return ReadStaticField<int>("Gutter"); }
        int Indent() const { return ReadStaticField<int>("Indent"); }
        float GapTight() const { return ReadStaticField<float>("GapTight"); }
        float Gap() const { return ReadStaticField<float>("Gap"); }
        float GapWide() const { return ReadStaticField<float>("GapWide"); }
        float GapSection() const { return ReadStaticField<float>("GapSection"); }
        int PadTight() const { return ReadStaticField<int>("PadTight"); }
        int Pad() const { return ReadStaticField<int>("Pad"); }
        int PadWide() const { return ReadStaticField<int>("PadWide"); }
        float RowCompact() const { return ReadStaticField<float>("RowCompact"); }
        float Row() const { return ReadStaticField<float>("Row"); }
        float RowMedium() const { return ReadStaticField<float>("RowMedium"); }
        float RowTall() const { return ReadStaticField<float>("RowTall"); }
        float RowBar() const { return ReadStaticField<float>("RowBar"); }
        float HudInset() const { return ReadStaticField<float>("HudInset"); }
        float HudLane() const { return ReadStaticField<float>("HudLane"); }
        float HudRound() const { return ReadStaticField<float>("HudRound"); }
        float HudRail() const { return ReadStaticField<float>("HudRail"); }
        float HudCrestRadius() const { return ReadStaticField<float>("HudCrestRadius"); }
        float HudBar() const { return ReadStaticField<float>("HudBar"); }
        float HudFlag() const { return ReadStaticField<float>("HudFlag"); }
        float HeaderFlag() const { return ReadStaticField<float>("HeaderFlag"); }
        float CheckBox() const { return ReadStaticField<float>("CheckBox"); }
        float PolicyCellW() const { return ReadStaticField<float>("PolicyCellW"); }
        float PolicyCellH() const { return ReadStaticField<float>("PolicyCellH"); }
        float ToolButton() const { return ReadStaticField<float>("ToolButton"); }
        float ToolButtonInset() const { return ReadStaticField<float>("ToolButtonInset"); }
        float FontSmall() const { return ReadStaticField<float>("FontSmall"); }
        float FontBody() const { return ReadStaticField<float>("FontBody"); }
        float FontHeading() const { return ReadStaticField<float>("FontHeading"); }
        float FontTitle() const { return ReadStaticField<float>("FontTitle"); }
        float FontEyebrow() const { return ReadStaticField<float>("FontEyebrow"); }
        float FontDisplay() const { return ReadStaticField<float>("FontDisplay"); }
        float LetterspaceWide() const { return ReadStaticField<float>("LetterspaceWide"); }
        float Letterspace() const { return ReadStaticField<float>("Letterspace"); }
        float Radius() const { return ReadStaticField<float>("Radius"); }
        float RadiusTight() const { return ReadStaticField<float>("RadiusTight"); }
        float RadiusPill() const { return ReadStaticField<float>("RadiusPill"); }
        float Hairline() const { return ReadStaticField<float>("Hairline"); }
        int CardPad() const { return ReadStaticField<int>("CardPad"); }
        float CardGap() const { return ReadStaticField<float>("CardGap"); }
        float TrackHeight() const { return ReadStaticField<float>("TrackHeight"); }
        float SliderPill() const { return ReadStaticField<float>("SliderPill"); }
        float NumberBox() const { return ReadStaticField<float>("NumberBox"); }
        float HandleSize() const { return ReadStaticField<float>("HandleSize"); }
        float ShadowSpread() const { return ReadStaticField<float>("ShadowSpread"); }
        float ScrollRail() const { return ReadStaticField<float>("ScrollRail"); }
        bool SettleZoomFits() const { return ReadStaticField<bool>("SettleZoomFits"); }
        void SetSettleZoomFits(bool value) const { WriteStaticField<bool>("SettleZoomFits", value); }
        bool SkipUnchangedFits() const { return ReadStaticField<bool>("SkipUnchangedFits"); }
        void SetSkipUnchangedFits(bool value) const { WriteStaticField<bool>("SkipUnchangedFits", value); }
        bool NoScroll() const { return ReadStaticField<bool>("NoScroll"); }
        void SetNoScroll(bool value) const { WriteStaticField<bool>("NoScroll", value); }
        float MinZoom() const { return ReadStaticField<float>("MinZoom"); }
    };
}
