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
        void* MakeSideFade(void* canvas, float strength) const { void* args[] = { canvas, &strength }; return CallStatic("MakeSideFade", args, 2); }
        void* MakeRailText(void* canvas, float top, float height, float size) const { void* args[] = { canvas, &top, &height, &size }; return CallStatic("MakeRailText", args, 4); }
        void* MakeRail(void* canvas, float top) const { void* args[] = { canvas, &top }; return CallStatic("MakeRail", args, 2); }
        void* MakeEntry(void* rail, const char* label, void* onClick, bool sub = false) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* args[] = { rail, managed_1, onClick, &sub }; return CallStatic("MakeEntry", args, 4); }
        void PlaceBeside(void* window, float top = 56f) const { void* args[] = { window, &top }; CallStatic("PlaceBeside", args, 2); }
        void SpanBeside(void* window, float top = 56f) const { void* args[] = { window, &top }; CallStatic("SpanBeside", args, 2); }
        void FitBody(void* window, void* fit, void* content) const { void* args[] = { window, fit, content }; CallStatic("FitBody", args, 3); }
        void* MakeRule(void* parent, const char* name = "Rule") const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { parent, managed_1 }; return CallStatic("MakeRule", args, 2); }
        void* AddSubtitle(void* window, const char* text) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* args[] = { window, managed_1 }; return CallStatic("AddSubtitle", args, 2); }
        void* MakePrimaryButton(void* parent, const char* label, float width, void* onClick) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* args[] = { parent, managed_1, &width, onClick }; return CallStatic("MakePrimaryButton", args, 4); }
        void* MakeFooter(void* window, void* onBack) const { void* args[] = { window, onBack }; return CallStatic("MakeFooter", args, 2); }
        void AddSpacer(void* row) const { void* args[] = { row }; CallStatic("AddSpacer", args, 1); }
        bool TmpEssentialsPresent() const { return CallStaticValue<bool>("TmpEssentialsPresent", nullptr, 0); }
        void* MakeCanvas(void* parent, const char* name, int sortingOrder) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { parent, managed_1, &sortingOrder }; return CallStatic("MakeCanvas", args, 3); }
        void* MakeBackdrop(void* canvas, void* color) const { void* args[] = { canvas, color }; return CallStatic("MakeBackdrop", args, 2); }
        void* MakeWindow(void* canvas, const char* title, float width, void* titleText) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* args[] = { canvas, managed_1, &width, &titleText }; return CallStatic("MakeWindow", args, 4); }
        void* MakeScrollBody(void* window, void* fitTarget) const { void* args[] = { window, &fitTarget }; return CallStatic("MakeScrollBody", args, 2); }
        void* MakeScrollbar(void* parent, void* direction) const { void* args[] = { parent, direction }; return CallStatic("MakeScrollbar", args, 2); }
        void* MakeRow(void* parent) const { void* args[] = { parent }; return CallStatic("MakeRow", args, 1); }
        void* MakeColumn(void* parent, void* padding) const { void* args[] = { parent, padding }; return CallStatic("MakeColumn", args, 2); }
        void* MakeText(void* parent, float size, void* style) const { void* args[] = { parent, &size, style }; return CallStatic("MakeText", args, 3); }
        void* MakeBody(void* parent) const { void* args[] = { parent }; return CallStatic("MakeBody", args, 1); }
        void* AddSectionHeader(void* parent, const char* caption) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* args[] = { parent, managed_1 }; return CallStatic("AddSectionHeader", args, 2); }
        void* MakeButton(void* parent, const char* label, float width, void* onClick) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* args[] = { parent, managed_1, &width, onClick }; return CallStatic("MakeButton", args, 4); }
        void* MakeInput(void* parent, float width) const { void* args[] = { parent, &width }; return CallStatic("MakeInput", args, 2); }
        void* MakeSlider(void* parent, void* fillColor, float width) const { void* args[] = { parent, fillColor, &width }; return CallStatic("MakeSlider", args, 3); }
        void* MakeSliderWithBox(void* parent, const char* caption, float value, float captionWidth = 160f) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* args[] = { parent, managed_1, &value, &captionWidth }; return CallStatic("MakeSliderWithBox", args, 4); }
        void* AddSliderWithBox(void* row, float value) const { void* args[] = { row, &value }; return CallStatic("AddSliderWithBox", args, 2); }
        void* MakeDifficultyDial(void* parent, int level, void* onChanged = nullptr, float captionWidth = 160f) const { void* args[] = { parent, &level, onChanged, &captionWidth }; return CallStatic("MakeDifficultyDial", args, 4); }
        void* AddDifficultyDial(void* row, int level, void* onChanged = nullptr) const { void* args[] = { row, &level, onChanged }; return CallStatic("AddDifficultyDial", args, 3); }
        void* MakeAggressionDial(void* parent, int aggression, void* onChanged = nullptr, float captionWidth = 160f) const { void* args[] = { parent, &aggression, onChanged, &captionWidth }; return CallStatic("MakeAggressionDial", args, 4); }
        void* MakeWorldSizeDial(void* parent, float scale, void* onChanged, float captionWidth = 160f) const { void* args[] = { parent, &scale, onChanged, &captionWidth }; return CallStatic("MakeWorldSizeDial", args, 4); }
        void* MakeNumberRow(void* parent, const char* caption, float captionWidth, void* onApply) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* args[] = { parent, managed_1, &captionWidth, onApply }; return CallStatic("MakeNumberRow", args, 4); }
        void* CommitOnEdit(void* input, void* onCommit) const { void* args[] = { input, onCommit }; return CallStatic("CommitOnEdit", args, 2); }
        void* MakeCaptionRow(void* parent, const char* caption, void* label, float captionWidth = 160f) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* args[] = { parent, managed_1, &label, &captionWidth }; return CallStatic("MakeCaptionRow", args, 4); }
        void* MakeCaptionRow(void* parent, const char* caption, float captionWidth = 160f) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* args[] = { parent, managed_1, &captionWidth }; return CallStatic("MakeCaptionRow", args, 3); }
        void* MakeIndentedRow(void* parent, float captionWidth = 160f) const { void* args[] = { parent, &captionWidth }; return CallStatic("MakeIndentedRow", args, 2); }
        void TintState(void* btn, bool on) const { void* args[] = { btn, &on }; CallStatic("TintState", args, 2); }
        void* MakeStateToggle(void* parent, const char* caption, bool on, void* onChanged, const char* onText = "On", const char* offText = "Off", float captionWidth = 160f, float buttonWidth = 90f) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* managed_4 = Api() && Api()->NewString ? Api()->NewString(onText ? onText : "") : nullptr; void* managed_5 = Api() && Api()->NewString ? Api()->NewString(offText ? offText : "") : nullptr; void* args[] = { parent, managed_1, &on, onChanged, managed_4, managed_5, &captionWidth, &buttonWidth }; return CallStatic("MakeStateToggle", args, 8); }
        void* MakeSegmented(void* parent, const char* caption, void* options, int selected, void* onPick, float captionWidth = 160f) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* args[] = { parent, managed_1, options, &selected, onPick, &captionWidth }; return CallStatic("MakeSegmented", args, 6); }
        void* MakeFold(void* parent, const char* caption, bool open, void* onToggled) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* args[] = { parent, managed_1, &open, onToggled }; return CallStatic("MakeFold", args, 4); }
        void* MakeBackButton(void* row, void* onBack) const { void* args[] = { row, onBack }; return CallStatic("MakeBackButton", args, 2); }
        void HideOtherCanvases(void* except, void* store, int skipAtOrAbove = 2147483647) const { void* args[] = { except, store, &skipAtOrAbove }; CallStatic("HideOtherCanvases", args, 3); }
        void SweepCanvases(void* except, void* store, int skipAtOrAbove) const { void* args[] = { except, store, &skipAtOrAbove }; CallStatic("SweepCanvases", args, 3); }
        void RestoreCanvases(void* store) const { void* args[] = { store }; CallStatic("RestoreCanvases", args, 1); }
        void SetSelected(bool on) const { void* args[] = { &on }; Call("SetSelected", args, 1); }
        void SetDanger(bool on) const { void* args[] = { &on }; Call("SetDanger", args, 1); }
        void SetOn(bool on) const { void* args[] = { &on }; Call("SetOn", args, 1); }
        void SetShown(bool shown) const { void* args[] = { &shown }; Call("SetShown", args, 1); }
        void SetNote(const char* text) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* args[] = { managed_0 }; Call("SetNote", args, 1); }
        void SetWithoutNotify(int level) const { void* args[] = { &level }; Call("SetWithoutNotify", args, 1); }
        void ShowTier() const { Call("ShowTier", nullptr, 0); }
        void SetRange(float min, float max, float scale) const { void* args[] = { &min, &max, &scale }; Call("SetRange", args, 3); }
        void SetWithoutNotify(float scale) const { void* args[] = { &scale }; Call("SetWithoutNotify", args, 1); }
        void SetWarning(bool warn) const { void* args[] = { &warn }; Call("SetWarning", args, 1); }
        void SetInteractable(bool live) const { void* args[] = { &live }; Call("SetInteractable", args, 1); }
        void ShowValue() const { Call("ShowValue", nullptr, 0); }
        void SetOn(bool on) const { void* args[] = { &on }; Call("SetOn", args, 1); }
        void SetInteractable(bool live) const { void* args[] = { &live }; Call("SetInteractable", args, 1); }
        void Select(int index) const { void* args[] = { &index }; Call("Select", args, 1); }
        void SetInteractable(bool live) const { void* args[] = { &live }; Call("SetInteractable", args, 1); }
        void SetOpen(bool open) const { void* args[] = { &open }; Call("SetOpen", args, 1); }
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
        void* row() const { return ReadField<void*>("row"); }
        void SetRow(void* value) const { WriteField<void*>("row", value); }
        void* button() const { return ReadField<void*>("button"); }
        void SetButton(void* value) const { WriteField<void*>("button", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        void* note() const { return ReadField<void*>("note"); }
        void SetNote(void* value) const { WriteField<void*>("note", value); }
        void* slider() const { return ReadField<void*>("slider"); }
        void SetSlider(void* value) const { WriteField<void*>("slider", value); }
        void* tier() const { return ReadField<void*>("tier"); }
        void SetTier(void* value) const { WriteField<void*>("tier", value); }
        int min() const { return ReadField<int>("min"); }
        void SetMin(int value) const { WriteField<int>("min", value); }
        int max() const { return ReadField<int>("max"); }
        void SetMax(int value) const { WriteField<int>("max", value); }
        void* row() const { return ReadField<void*>("row"); }
        void SetRow(void* value) const { WriteField<void*>("row", value); }
        void* slider() const { return ReadField<void*>("slider"); }
        void SetSlider(void* value) const { WriteField<void*>("slider", value); }
        void* value() const { return ReadField<void*>("value"); }
        void SetValue(void* value) const { WriteField<void*>("value", value); }
        void* reset() const { return ReadField<void*>("reset"); }
        void SetReset(void* value) const { WriteField<void*>("reset", value); }
        void* body() const { return ReadField<void*>("body"); }
        void SetBody(void* value) const { WriteField<void*>("body", value); }
        float Min() const { return ReadField<float>("Min"); }
        void SetMin(float value) const { WriteField<float>("Min", value); }
        float Max() const { return ReadField<float>("Max"); }
        void SetMax(float value) const { WriteField<float>("Max", value); }
        void* row() const { return ReadField<void*>("row"); }
        void SetRow(void* value) const { WriteField<void*>("row", value); }
        void* button() const { return ReadField<void*>("button"); }
        void SetButton(void* value) const { WriteField<void*>("button", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        bool On() const { return ReadField<bool>("On"); }
        void SetOn(bool value) const { WriteField<bool>("On", value); }
        void* row() const { return ReadField<void*>("row"); }
        void SetRow(void* value) const { WriteField<void*>("row", value); }
        void* buttons() const { return ReadField<void*>("buttons"); }
        void SetButtons(void* value) const { WriteField<void*>("buttons", value); }
        int Selected() const { return ReadField<int>("Selected"); }
        void SetSelected(int value) const { WriteField<int>("Selected", value); }
        void* head() const { return ReadField<void*>("head"); }
        void SetHead(void* value) const { WriteField<void*>("head", value); }
        void* body() const { return ReadField<void*>("body"); }
        void SetBody(void* value) const { WriteField<void*>("body", value); }
        void* chevron() const { return ReadField<void*>("chevron"); }
        void SetChevron(void* value) const { WriteField<void*>("chevron", value); }
        bool Open() const { return ReadField<bool>("Open"); }
        void SetOpen(bool value) const { WriteField<bool>("Open", value); }
    };
}
