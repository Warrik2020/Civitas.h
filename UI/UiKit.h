#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiKit : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiKit(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiKit") {}
    public:
        void* MakeCanvas(void* parent, const char* name, int sortingOrder) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { parent, managed_1, &sortingOrder }; return CallStatic("MakeCanvas", args, 3); }
        void* MakeScrim(void* canvas, void* color = nullptr) const { void* args[] = { canvas, color }; return CallStatic("MakeScrim", args, 2); }
        void* MakeWindow(void* parent, const char* name, int sortingOrder, float width, const char* eyebrow, const char* title, const char* subtitle = nullptr, void* onClose = nullptr, bool scrim = false, bool bodyColumn = true, void* medallion = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* managed_4 = Api() && Api()->NewString ? Api()->NewString(eyebrow ? eyebrow : "") : nullptr; void* managed_5 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* managed_6 = Api() && Api()->NewString ? Api()->NewString(subtitle ? subtitle : "") : nullptr; void* args[] = { parent, managed_1, &sortingOrder, &width, managed_4, managed_5, managed_6, onClose, &scrim, &bodyColumn, medallion }; return CallStatic("MakeWindow", args, 11); }
        void* MakeCloseButton(void* parent, void* onClose) const { void* args[] = { parent, onClose }; return CallStatic("MakeCloseButton", args, 2); }
        void* MakeScrollArea(void* parent, bool autoHideBar = true) const { void* args[] = { parent, &autoHideBar }; return CallStatic("MakeScrollArea", args, 2); }
        void* MakeCardRow(void* parent, const char* label, const char* sub = nullptr, float height = 36f) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(sub ? sub : "") : nullptr; void* args[] = { parent, managed_1, managed_2, &height }; return CallStatic("MakeCardRow", args, 4); }
        void* MakeSectionRule(void* parent, const char* text) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* args[] = { parent, managed_1 }; return CallStatic("MakeSectionRule", args, 2); }
        void* MakeSectionRuleLeft(void* parent, const char* text) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* args[] = { parent, managed_1 }; return CallStatic("MakeSectionRuleLeft", args, 2); }
        void* MakeDropdown(void* parent, const char* title, bool open, void* onToggle = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* args[] = { parent, managed_1, &open, onToggle }; return CallStatic("MakeDropdown", args, 4); }
        void* MakeOutlineButton(void* parent, const char* label, void* onClick, float width = 0f, void* line = nullptr, void* text = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* args[] = { parent, managed_1, onClick, &width, line, text }; return CallStatic("MakeOutlineButton", args, 6); }
        void* MakeSlider(void* parent, const char* label, float min, float max, float value, void* mode, void* onChanged, const char* sub = nullptr, bool wholeNumbers = false) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* managed_7 = Api() && Api()->NewString ? Api()->NewString(sub ? sub : "") : nullptr; void* args[] = { parent, managed_1, &min, &max, &value, mode, onChanged, managed_7, &wholeNumbers }; return CallStatic("MakeSlider", args, 9); }
        void ClickAnywhere(void* slider) const { void* args[] = { slider }; CallStatic("ClickAnywhere", args, 1); }
        void* MakeToggleRow(void* parent, const char* label, bool on, void* onChanged, const char* sub = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* managed_4 = Api() && Api()->NewString ? Api()->NewString(sub ? sub : "") : nullptr; void* args[] = { parent, managed_1, &on, onChanged, managed_4 }; return CallStatic("MakeToggleRow", args, 5); }
        void* MakeSegmented(void* parent, void* options, int selected, void* onPick) const { void* args[] = { parent, options, &selected, onPick }; return CallStatic("MakeSegmented", args, 4); }
        void* MakeColumn(void* parent) const { void* args[] = { parent }; return CallStatic("MakeColumn", args, 1); }
        void* MakeLine(void* parent) const { void* args[] = { parent }; return CallStatic("MakeLine", args, 1); }
        void* MakeSmallLine(void* parent) const { void* args[] = { parent }; return CallStatic("MakeSmallLine", args, 1); }
        void* MakeActionRow(void* parent, const char* label, float width, void* onClick, void* button, void* buttonLabel, void* note) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* args[] = { parent, managed_1, &width, onClick, &button, &buttonLabel, &note }; return CallStatic("MakeActionRow", args, 7); }
        void* MakeChip(void* parent, float size) const { void* args[] = { parent, &size }; return CallStatic("MakeChip", args, 2); }
        void* MakeMeter(void* parent, void* targetColor, void* thresholdColor) const { void* args[] = { parent, targetColor, thresholdColor }; return CallStatic("MakeMeter", args, 3); }
        void* MakeKpiCard(void* row, const char* caption, void* onClick, void* captionLabel, void* glyph = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* args[] = { row, managed_1, onClick, &captionLabel, glyph }; return CallStatic("MakeKpiCard", args, 5); }
        void* MakeKpiRow(void* parent) const { void* args[] = { parent }; return CallStatic("MakeKpiRow", args, 1); }
        void* MakeTableRow(void* parent, float height, bool background = true) const { void* args[] = { parent, &height, &background }; return CallStatic("MakeTableRow", args, 3); }
        void* MakeCell(void* row, float width, void* style, void* align, void* color = nullptr, float fontSize = 15f) const { void* args[] = { row, &width, style, align, color, &fontSize }; return CallStatic("MakeCell", args, 6); }
        void* MakeHeadingCell(void* row, const char* text, float width, void* align) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* args[] = { row, managed_1, &width, align }; return CallStatic("MakeHeadingCell", args, 4); }
        void* MakeTermRow(void* parent, float valueWidth = 64f, bool hidden = true) const { void* args[] = { parent, &valueWidth, &hidden }; return CallStatic("MakeTermRow", args, 3); }
        void SetTextIfChanged(void* label, void* sb) const { void* args[] = { label, sb }; CallStatic("SetTextIfChanged", args, 2); }
        void SetShown(void* go, bool on) const { void* args[] = { go, &on }; CallStatic("SetShown", args, 2); }
        void SetVisible(bool shown) const { void* args[] = { &shown }; Call("SetVisible", args, 1); }
        void FitTo(float available, bool followCanvas = true) const { void* args[] = { &available, &followCanvas }; Call("FitTo", args, 2); }
        void SetShown(bool shown) const { void* args[] = { &shown }; Call("SetShown", args, 1); }
        void SetOpen(bool open) const { void* args[] = { &open }; Call("SetOpen", args, 1); }
        void SetOn(bool on) const { void* args[] = { &on }; Call("SetOn", args, 1); }
        void Select(int index) const { void* args[] = { &index }; Call("Select", args, 1); }
        void Set(float value, void* color) const { void* args[] = { &value, color }; Call("Set", args, 2); }
        void SetTarget(float v) const { void* args[] = { &v }; Call("SetTarget", args, 1); }
        void SetThreshold(float v) const { void* args[] = { &v }; Call("SetThreshold", args, 1); }
        void Flush(void* label, void* sb) const { void* args[] = { label, sb }; Call("Flush", args, 2); }
        void Set(void* label, const char* text) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* args[] = { label, managed_1 }; Call("Set", args, 2); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void* SectionCaptionColor() const { return ReadStaticField<void*>("SectionCaptionColor"); }
        float KpiHeight() const { return ReadStaticField<float>("KpiHeight"); }
        bool SkipUnchangedText() const { return ReadStaticField<bool>("SkipUnchangedText"); }
        void SetSkipUnchangedText(bool value) const { WriteStaticField<bool>("SkipUnchangedText", value); }
        void* canvasGo() const { return ReadField<void*>("canvasGo"); }
        void SetCanvasGo(void* value) const { WriteField<void*>("canvasGo", value); }
        void* canvas() const { return ReadField<void*>("canvas"); }
        void SetCanvas(void* value) const { WriteField<void*>("canvas", value); }
        void* scaler() const { return ReadField<void*>("scaler"); }
        void SetScaler(void* value) const { WriteField<void*>("scaler", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* body() const { return ReadField<void*>("body"); }
        void SetBody(void* value) const { WriteField<void*>("body", value); }
        void* header() const { return ReadField<void*>("header"); }
        void SetHeader(void* value) const { WriteField<void*>("header", value); }
        void* eyebrow() const { return ReadField<void*>("eyebrow"); }
        void SetEyebrow(void* value) const { WriteField<void*>("eyebrow", value); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* subtitle() const { return ReadField<void*>("subtitle"); }
        void SetSubtitle(void* value) const { WriteField<void*>("subtitle", value); }
        void* close() const { return ReadField<void*>("close"); }
        void SetClose(void* value) const { WriteField<void*>("close", value); }
        void* scrim() const { return ReadField<void*>("scrim"); }
        void SetScrim(void* value) const { WriteField<void*>("scrim", value); }
        void* shadow() const { return ReadField<void*>("shadow"); }
        void SetShadow(void* value) const { WriteField<void*>("shadow", value); }
        void* viewport() const { return ReadField<void*>("viewport"); }
        void SetViewport(void* value) const { WriteField<void*>("viewport", value); }
        void* content() const { return ReadField<void*>("content"); }
        void SetContent(void* value) const { WriteField<void*>("content", value); }
        void* scroll() const { return ReadField<void*>("scroll"); }
        void SetScroll(void* value) const { WriteField<void*>("scroll", value); }
        void* bar() const { return ReadField<void*>("bar"); }
        void SetBar(void* value) const { WriteField<void*>("bar", value); }
        void* fit() const { return ReadField<void*>("fit"); }
        void SetFit(void* value) const { WriteField<void*>("fit", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* card() const { return ReadField<void*>("card"); }
        void SetCard(void* value) const { WriteField<void*>("card", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        void* sub() const { return ReadField<void*>("sub"); }
        void SetSub(void* value) const { WriteField<void*>("sub", value); }
        void* slot() const { return ReadField<void*>("slot"); }
        void SetSlot(void* value) const { WriteField<void*>("slot", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* header() const { return ReadField<void*>("header"); }
        void SetHeader(void* value) const { WriteField<void*>("header", value); }
        void* caret() const { return ReadField<void*>("caret"); }
        void SetCaret(void* value) const { WriteField<void*>("caret", value); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* summary() const { return ReadField<void*>("summary"); }
        void SetSummary(void* value) const { WriteField<void*>("summary", value); }
        void* body() const { return ReadField<void*>("body"); }
        void SetBody(void* value) const { WriteField<void*>("body", value); }
        bool Open() const { return ReadField<bool>("Open"); }
        void SetOpen(bool value) const { WriteField<bool>("Open", value); }
        void* row() const { return ReadField<void*>("row"); }
        void SetRow(void* value) const { WriteField<void*>("row", value); }
        void* slider() const { return ReadField<void*>("slider"); }
        void SetSlider(void* value) const { WriteField<void*>("slider", value); }
        void* box() const { return ReadField<void*>("box"); }
        void SetBox(void* value) const { WriteField<void*>("box", value); }
        void* row() const { return ReadField<void*>("row"); }
        void SetRow(void* value) const { WriteField<void*>("row", value); }
        void* button() const { return ReadField<void*>("button"); }
        void SetButton(void* value) const { WriteField<void*>("button", value); }
        void* box() const { return ReadField<void*>("box"); }
        void SetBox(void* value) const { WriteField<void*>("box", value); }
        void* check() const { return ReadField<void*>("check"); }
        void SetCheck(void* value) const { WriteField<void*>("check", value); }
        bool On() const { return ReadField<bool>("On"); }
        void SetOn(bool value) const { WriteField<bool>("On", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* buttons() const { return ReadField<void*>("buttons"); }
        void SetButtons(void* value) const { WriteField<void*>("buttons", value); }
        void* labels() const { return ReadField<void*>("labels"); }
        void SetLabels(void* value) const { WriteField<void*>("labels", value); }
        int Selected() const { return ReadField<int>("Selected"); }
        void SetSelected(int value) const { WriteField<int>("Selected", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* fill() const { return ReadField<void*>("fill"); }
        void SetFill(void* value) const { WriteField<void*>("fill", value); }
        void* target() const { return ReadField<void*>("target"); }
        void SetTarget(void* value) const { WriteField<void*>("target", value); }
        void* threshold() const { return ReadField<void*>("threshold"); }
        void SetThreshold(void* value) const { WriteField<void*>("threshold", value); }
        void* fillImg() const { return ReadField<void*>("fillImg"); }
        void SetFillImg(void* value) const { WriteField<void*>("fillImg", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* caption() const { return ReadField<void*>("caption"); }
        void SetCaption(void* value) const { WriteField<void*>("caption", value); }
        void* value() const { return ReadField<void*>("value"); }
        void SetValue(void* value) const { WriteField<void*>("value", value); }
    };
}
