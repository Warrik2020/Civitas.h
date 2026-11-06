#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::MainMenu
{
    class MenuUiKit : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MenuUiKit(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.MainMenu", "MenuUiKit") {}
    public:
        void* MakeSideFade(void* canvas, float strength = 0.92f) const { void* __callArgs[] = { canvas, &strength }; return CallStatic("MakeSideFade", __callArgs, 2); }
        void* MakeRailText(void* canvas, float top, float height, float size) const { void* __callArgs[] = { canvas, &top, &height, &size }; return CallStatic("MakeRailText", __callArgs, 4); }
        void* MakeRail(void* canvas, float top) const { void* __callArgs[] = { canvas, &top }; return CallStatic("MakeRail", __callArgs, 2); }
        void* MakeEntry(void* rail, const char* label, void* onClick, bool sub = false) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* __callArgs[] = { rail, managed_1, onClick, &sub }; return CallStatic("MakeEntry", __callArgs, 4); }
        void PlaceBeside(void* window, float top = 56.0f) const { void* __callArgs[] = { window, &top }; CallStatic("PlaceBeside", __callArgs, 2); }
        void SpanBeside(void* window, float top = 56.0f) const { void* __callArgs[] = { window, &top }; CallStatic("SpanBeside", __callArgs, 2); }
        void FitBody(void* window, void* fit, void* content) const { void* __callArgs[] = { window, fit, content }; CallStatic("FitBody", __callArgs, 3); }
        void* MakeRule(void* parent, const char* name = "Rule") const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { parent, managed_1 }; return CallStatic("MakeRule", __callArgs, 2); }
        void* AddSubtitle(void* window, const char* text) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { window, managed_1 }; return CallStatic("AddSubtitle", __callArgs, 2); }
        void* MakePrimaryButton(void* parent, const char* label, float width, void* onClick) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* __callArgs[] = { parent, managed_1, &width, onClick }; return CallStatic("MakePrimaryButton", __callArgs, 4); }
        void* MakeFooter(void* window, void* onBack) const { void* __callArgs[] = { window, onBack }; return CallStatic("MakeFooter", __callArgs, 2); }
        void AddSpacer(void* row) const { void* __callArgs[] = { row }; CallStatic("AddSpacer", __callArgs, 1); }
        bool TmpEssentialsPresent() const { return CallStaticValue<bool>("TmpEssentialsPresent", nullptr, 0); }
        void* MakeCanvas(void* parent, const char* name, int sortingOrder) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { parent, managed_1, &sortingOrder }; return CallStatic("MakeCanvas", __callArgs, 3); }
        void* MakeBackdrop(void* canvas, void* color) const { void* __callArgs[] = { canvas, color }; return CallStatic("MakeBackdrop", __callArgs, 2); }
        void* MakeWindow(void* canvas, const char* title, float width, void* titleText) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* __callArgs[] = { canvas, managed_1, &width, &titleText }; return CallStatic("MakeWindow", __callArgs, 4); }
        void* MakeScrollBody(void* window, void* fitTarget) const { void* __callArgs[] = { window, &fitTarget }; return CallStatic("MakeScrollBody", __callArgs, 2); }
        void* MakeScrollbar(void* parent, void* direction) const { void* __callArgs[] = { parent, direction }; return CallStatic("MakeScrollbar", __callArgs, 2); }
        void* MakeRow(void* parent) const { void* __callArgs[] = { parent }; return CallStatic("MakeRow", __callArgs, 1); }
        void* MakeColumn(void* parent, void* padding) const { void* __callArgs[] = { parent, padding }; return CallStatic("MakeColumn", __callArgs, 2); }
        void* MakeText(void* parent, float size, void* style) const { void* __callArgs[] = { parent, &size, style }; return CallStatic("MakeText", __callArgs, 3); }
        void* MakeBody(void* parent) const { void* __callArgs[] = { parent }; return CallStatic("MakeBody", __callArgs, 1); }
        void* AddSectionHeader(void* parent, const char* caption) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* __callArgs[] = { parent, managed_1 }; return CallStatic("AddSectionHeader", __callArgs, 2); }
        void* MakeButton(void* parent, const char* label, float width, void* onClick) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* __callArgs[] = { parent, managed_1, &width, onClick }; return CallStatic("MakeButton", __callArgs, 4); }
        void* MakeInput(void* parent, float width) const { void* __callArgs[] = { parent, &width }; return CallStatic("MakeInput", __callArgs, 2); }
        void* MakeSlider(void* parent, void* fillColor, float width) const { void* __callArgs[] = { parent, fillColor, &width }; return CallStatic("MakeSlider", __callArgs, 3); }
        void* MakeSliderWithBox(void* parent, const char* caption, float value, float captionWidth = 160.0f) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* __callArgs[] = { parent, managed_1, &value, &captionWidth }; return CallStatic("MakeSliderWithBox", __callArgs, 4); }
        void* AddSliderWithBox(void* row, float value) const { void* __callArgs[] = { row, &value }; return CallStatic("AddSliderWithBox", __callArgs, 2); }
        void* MakeDifficultyDial(void* parent, int level, void* onChanged = nullptr, float captionWidth = 160.0f) const { void* __callArgs[] = { parent, &level, onChanged, &captionWidth }; return CallStatic("MakeDifficultyDial", __callArgs, 4); }
        void* AddDifficultyDial(void* row, int level, void* onChanged = nullptr) const { void* __callArgs[] = { row, &level, onChanged }; return CallStatic("AddDifficultyDial", __callArgs, 3); }
        void* MakeAggressionDial(void* parent, int aggression, void* onChanged = nullptr, float captionWidth = 160.0f) const { void* __callArgs[] = { parent, &aggression, onChanged, &captionWidth }; return CallStatic("MakeAggressionDial", __callArgs, 4); }
        void* MakeWorldSizeDial(void* parent, float scale, void* onChanged, float captionWidth = 160.0f) const { void* __callArgs[] = { parent, &scale, onChanged, &captionWidth }; return CallStatic("MakeWorldSizeDial", __callArgs, 4); }
        void* MakeNumberRow(void* parent, const char* caption, float captionWidth, void* onApply) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* __callArgs[] = { parent, managed_1, &captionWidth, onApply }; return CallStatic("MakeNumberRow", __callArgs, 4); }
        void* CommitOnEdit(void* input, void* onCommit) const { void* __callArgs[] = { input, onCommit }; return CallStatic("CommitOnEdit", __callArgs, 2); }
        void* MakeCaptionRow(void* parent, const char* caption, void* label, float captionWidth = 160.0f) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* __callArgs[] = { parent, managed_1, &label, &captionWidth }; return CallStatic("MakeCaptionRow", __callArgs, 4); }
        void* MakeCaptionRow(void* parent, const char* caption, float captionWidth = 160.0f) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* __callArgs[] = { parent, managed_1, &captionWidth }; return CallStatic("MakeCaptionRow", __callArgs, 3); }
        void* MakeIndentedRow(void* parent, float captionWidth = 160.0f) const { void* __callArgs[] = { parent, &captionWidth }; return CallStatic("MakeIndentedRow", __callArgs, 2); }
        void TintState(void* btn, bool on) const { void* __callArgs[] = { btn, &on }; CallStatic("TintState", __callArgs, 2); }
        void* MakeStateToggle(void* parent, const char* caption, bool on, void* onChanged, const char* onText = "On", const char* offText = "Off", float captionWidth = 160.0f, float buttonWidth = 90.0f) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* managed_4 = Api() && Api()->NewString ? Api()->NewString(onText ? onText : "") : nullptr; void* managed_5 = Api() && Api()->NewString ? Api()->NewString(offText ? offText : "") : nullptr; void* __callArgs[] = { parent, managed_1, &on, onChanged, managed_4, managed_5, &captionWidth, &buttonWidth }; return CallStatic("MakeStateToggle", __callArgs, 8); }
        void* MakeSegmented(void* parent, const char* caption, void* options, int selected, void* onPick, float captionWidth = 160.0f) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* __callArgs[] = { parent, managed_1, options, &selected, onPick, &captionWidth }; return CallStatic("MakeSegmented", __callArgs, 6); }
        void* MakeFold(void* parent, const char* caption, bool open, void* onToggled) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* __callArgs[] = { parent, managed_1, &open, onToggled }; return CallStatic("MakeFold", __callArgs, 4); }
        void* MakeBackButton(void* row, void* onBack) const { void* __callArgs[] = { row, onBack }; return CallStatic("MakeBackButton", __callArgs, 2); }
        void HideOtherCanvases(void* except, void* store, int skipAtOrAbove = 2147483647) const { void* __callArgs[] = { except, store, &skipAtOrAbove }; CallStatic("HideOtherCanvases", __callArgs, 3); }
        void SweepCanvases(void* except, void* store, int skipAtOrAbove) const { void* __callArgs[] = { except, store, &skipAtOrAbove }; CallStatic("SweepCanvases", __callArgs, 3); }
        void RestoreCanvases(void* store) const { void* __callArgs[] = { store }; CallStatic("RestoreCanvases", __callArgs, 1); }
        float RailX() const { return ReadStaticField<float>("RailX"); }
        float RailWidth() const { return ReadStaticField<float>("RailWidth"); }
        float PaneLeft() const { return ReadStaticField<float>("PaneLeft"); }
        float PaneTop() const { return ReadStaticField<float>("PaneTop"); }
        float PaneBottom() const { return ReadStaticField<float>("PaneBottom"); }
        float SideInset() const { return ReadStaticField<float>("SideInset"); }
        float EntryHeight() const { return ReadStaticField<float>("EntryHeight"); }
        float CornerInset() const { return ReadStaticField<float>("CornerInset"); }
        float CornerBaseline() const { return ReadStaticField<float>("CornerBaseline"); }
        float CaptionWidth() const { return ReadStaticField<float>("CaptionWidth"); }
        float BodyMax() const { return ReadStaticField<float>("BodyMax"); }
        float DifficultyTierWidth() const { return ReadStaticField<float>("DifficultyTierWidth"); }
        float WorldSizeValueWidth() const { return ReadStaticField<float>("WorldSizeValueWidth"); }
    };
}
