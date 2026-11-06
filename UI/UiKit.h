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
        void* MakeCanvas(void* parent, const char* name, int sortingOrder) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { parent, managed_1, &sortingOrder }; return CallStatic("MakeCanvas", __callArgs, 3); }
        void* MakeScrim(void* canvas, void* color = nullptr) const { void* __callArgs[] = { canvas, color }; return CallStatic("MakeScrim", __callArgs, 2); }
        void* MakeWindow(void* parent, const char* name, int sortingOrder, float width, const char* eyebrow, const char* title, const char* subtitle = nullptr, void* onClose = nullptr, bool scrim = false, bool bodyColumn = true, void* medallion = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* managed_4 = Api() && Api()->NewString ? Api()->NewString(eyebrow ? eyebrow : "") : nullptr; void* managed_5 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* managed_6 = Api() && Api()->NewString ? Api()->NewString(subtitle ? subtitle : "") : nullptr; void* __callArgs[] = { parent, managed_1, &sortingOrder, &width, managed_4, managed_5, managed_6, onClose, &scrim, &bodyColumn, medallion }; return CallStatic("MakeWindow", __callArgs, 11); }
        void* MakeCloseButton(void* parent, void* onClose) const { void* __callArgs[] = { parent, onClose }; return CallStatic("MakeCloseButton", __callArgs, 2); }
        void* MakeScrollArea(void* parent, bool autoHideBar = true) const { void* __callArgs[] = { parent, &autoHideBar }; return CallStatic("MakeScrollArea", __callArgs, 2); }
        void* MakeCardRow(void* parent, const char* label, const char* sub = nullptr, float height = 36.0f) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(sub ? sub : "") : nullptr; void* __callArgs[] = { parent, managed_1, managed_2, &height }; return CallStatic("MakeCardRow", __callArgs, 4); }
        void* MakeSectionRule(void* parent, const char* text) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { parent, managed_1 }; return CallStatic("MakeSectionRule", __callArgs, 2); }
        void* MakeSectionRuleLeft(void* parent, const char* text) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { parent, managed_1 }; return CallStatic("MakeSectionRuleLeft", __callArgs, 2); }
        void* MakeDropdown(void* parent, const char* title, bool open, void* onToggle = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* __callArgs[] = { parent, managed_1, &open, onToggle }; return CallStatic("MakeDropdown", __callArgs, 4); }
        void* MakeOutlineButton(void* parent, const char* label, void* onClick, float width = 0.0f, void* line = nullptr, void* text = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* __callArgs[] = { parent, managed_1, onClick, &width, line, text }; return CallStatic("MakeOutlineButton", __callArgs, 6); }
        void* MakeSlider(void* parent, const char* label, float min_, float max_, float value, void* mode, void* onChanged, const char* sub = nullptr, bool wholeNumbers = false) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* managed_7 = Api() && Api()->NewString ? Api()->NewString(sub ? sub : "") : nullptr; void* __callArgs[] = { parent, managed_1, &min_, &max_, &value, mode, onChanged, managed_7, &wholeNumbers }; return CallStatic("MakeSlider", __callArgs, 9); }
        void ClickAnywhere(void* slider) const { void* __callArgs[] = { slider }; CallStatic("ClickAnywhere", __callArgs, 1); }
        void* MakeToggleRow(void* parent, const char* label, bool on, void* onChanged, const char* sub = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* managed_4 = Api() && Api()->NewString ? Api()->NewString(sub ? sub : "") : nullptr; void* __callArgs[] = { parent, managed_1, &on, onChanged, managed_4 }; return CallStatic("MakeToggleRow", __callArgs, 5); }
        void* MakeSegmented(void* parent, void* options, int selected, void* onPick) const { void* __callArgs[] = { parent, options, &selected, onPick }; return CallStatic("MakeSegmented", __callArgs, 4); }
        void* MakeColumn(void* parent) const { void* __callArgs[] = { parent }; return CallStatic("MakeColumn", __callArgs, 1); }
        void* MakeLine(void* parent) const { void* __callArgs[] = { parent }; return CallStatic("MakeLine", __callArgs, 1); }
        void* MakeSmallLine(void* parent) const { void* __callArgs[] = { parent }; return CallStatic("MakeSmallLine", __callArgs, 1); }
        void* MakeActionRow(void* parent, const char* label, float width, void* onClick, void* button, void* buttonLabel, void* note) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* __callArgs[] = { parent, managed_1, &width, onClick, &button, &buttonLabel, &note }; return CallStatic("MakeActionRow", __callArgs, 7); }
        void* MakeChip(void* parent, float size) const { void* __callArgs[] = { parent, &size }; return CallStatic("MakeChip", __callArgs, 2); }
        void* MakeMeter(void* parent, void* targetColor, void* thresholdColor) const { void* __callArgs[] = { parent, targetColor, thresholdColor }; return CallStatic("MakeMeter", __callArgs, 3); }
        void* MakeKpiCard(void* row, const char* caption, void* onClick, void* captionLabel, void* glyph = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* __callArgs[] = { row, managed_1, onClick, &captionLabel, glyph }; return CallStatic("MakeKpiCard", __callArgs, 5); }
        void* MakeKpiRow(void* parent) const { void* __callArgs[] = { parent }; return CallStatic("MakeKpiRow", __callArgs, 1); }
        void* MakeTableRow(void* parent, float height, bool background = true) const { void* __callArgs[] = { parent, &height, &background }; return CallStatic("MakeTableRow", __callArgs, 3); }
        void* MakeCell(void* row, float width, void* style, void* align, void* color = nullptr, float fontSize = 15.0f) const { void* __callArgs[] = { row, &width, style, align, color, &fontSize }; return CallStatic("MakeCell", __callArgs, 6); }
        void* MakeHeadingCell(void* row, const char* text, float width, void* align) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { row, managed_1, &width, align }; return CallStatic("MakeHeadingCell", __callArgs, 4); }
        void* MakeTermRow(void* parent, float valueWidth = 64.0f, bool hidden = true) const { void* __callArgs[] = { parent, &valueWidth, &hidden }; return CallStatic("MakeTermRow", __callArgs, 3); }
        void SetTextIfChanged(void* label, void* sb) const { void* __callArgs[] = { label, sb }; CallStatic("SetTextIfChanged", __callArgs, 2); }
        void SetShown(void* go, bool on) const { void* __callArgs[] = { go, &on }; CallStatic("SetShown", __callArgs, 2); }
        void* SectionCaptionColor() const { return ReadStaticField<void*>("SectionCaptionColor"); }
        float KpiHeight() const { return ReadStaticField<float>("KpiHeight"); }
        bool SkipUnchangedText() const { return ReadStaticField<bool>("SkipUnchangedText"); }
        void SkipUnchangedText(bool value) const { WriteStaticField<bool>("SkipUnchangedText", value); }
    };
}
