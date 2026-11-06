#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiTheme : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiTheme(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiTheme") {}
    public:
        void ApplyPanel(void* img) const { void* __callArgs[] = { img }; CallStatic("ApplyPanel", __callArgs, 1); }
        void ApplyPanel(void* img, void* fallback) const { void* __callArgs[] = { img, fallback }; CallStatic("ApplyPanel", __callArgs, 2); }
        void ApplyTitlePlate(void* img) const { void* __callArgs[] = { img }; CallStatic("ApplyTitlePlate", __callArgs, 1); }
        void ApplyGoldButton(void* img) const { void* __callArgs[] = { img }; CallStatic("ApplyGoldButton", __callArgs, 1); }
        void MarkTab(void* tab, bool on) const { void* __callArgs[] = { tab, &on }; CallStatic("MarkTab", __callArgs, 2); }
        void ApplyHeader(void* img) const { void* __callArgs[] = { img }; CallStatic("ApplyHeader", __callArgs, 1); }
        void ApplyHeader(void* img, void* fallback) const { void* __callArgs[] = { img, fallback }; CallStatic("ApplyHeader", __callArgs, 2); }
        void ApplyButton(void* img) const { void* __callArgs[] = { img }; CallStatic("ApplyButton", __callArgs, 1); }
        void ApplyButton(void* img, void* stateColor) const { void* __callArgs[] = { img, stateColor }; CallStatic("ApplyButton", __callArgs, 2); }
        void ApplyCard(void* img) const { void* __callArgs[] = { img }; CallStatic("ApplyCard", __callArgs, 1); }
        void ApplyRaised(void* img) const { void* __callArgs[] = { img }; CallStatic("ApplyRaised", __callArgs, 1); }
        void ApplyPill(void* img, void* fill) const { void* __callArgs[] = { img, fill }; CallStatic("ApplyPill", __callArgs, 2); }
        void ApplyOutline(void* img, void* line) const { void* __callArgs[] = { img, line }; CallStatic("ApplyOutline", __callArgs, 2); }
        void ApplyCapsule(void* img, void* fallback) const { void* __callArgs[] = { img, fallback }; CallStatic("ApplyCapsule", __callArgs, 2); }
        void ApplyRoundButton(void* img, void* stateColor) const { void* __callArgs[] = { img, stateColor }; CallStatic("ApplyRoundButton", __callArgs, 2); }
        void ApplyDisc(void* img, void* fill) const { void* __callArgs[] = { img, fill }; CallStatic("ApplyDisc", __callArgs, 2); }
        void ApplyRing(void* img, void* line) const { void* __callArgs[] = { img, line }; CallStatic("ApplyRing", __callArgs, 2); }
        void ApplyCrestMask(void* img) const { void* __callArgs[] = { img }; CallStatic("ApplyCrestMask", __callArgs, 1); }
        void ApplyCrestRing(void* img, void* line) const { void* __callArgs[] = { img, line }; CallStatic("ApplyCrestRing", __callArgs, 2); }
        void* AddSoftShadow(void* holder, float radius, float spread, float drop = 2.0f) const { void* __callArgs[] = { holder, &radius, &spread, &drop }; return CallStatic("AddSoftShadow", __callArgs, 4); }
        void* AddShadow(void* window, float spread = 12.0f) const { void* __callArgs[] = { window, &spread }; return CallStatic("AddShadow", __callArgs, 2); }
        void* ButtonTint(void* c) const { void* __callArgs[] = { c }; return CallStatic("ButtonTint", __callArgs, 1); }
        void* Icon(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Icon", __callArgs, 1); }
        void* MakeCheckBox(void* parent, void* boxColor, void* checkColor, void* check) const { void* __callArgs[] = { parent, boxColor, checkColor, &check }; return CallStatic("MakeCheckBox", __callArgs, 4); }
        void* MakeButtonWash(void* button) const { void* __callArgs[] = { button }; return CallStatic("MakeButtonWash", __callArgs, 1); }
        void* ButtonTintDim(void* c) const { void* __callArgs[] = { c }; return CallStatic("ButtonTintDim", __callArgs, 1); }
        void* MakeText(void* parent, float size, void* style, void* color) const { void* __callArgs[] = { parent, &size, style, color }; return CallStatic("MakeText", __callArgs, 4); }
        void* MakeButton(void* parent, const char* label, float width, void* color, void* onClick, void* textColor) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* __callArgs[] = { parent, managed_1, &width, color, onClick, textColor }; return CallStatic("MakeButton", __callArgs, 6); }
        void* AddSectionHeader(void* parent, const char* text, void* labelColor, float inset = 10.0f, float fontSize = 13.0f) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { parent, managed_1, labelColor, &inset, &fontSize }; return CallStatic("AddSectionHeader", __callArgs, 5); }
        void* MakeRow(void* parent) const { void* __callArgs[] = { parent }; return CallStatic("MakeRow", __callArgs, 1); }
        void* MakeIconValue(void* parent, void* glyph, void* iconColor, float iconSize, float fontSize, void* textColor, float valueWidth = 0.0f) const { void* __callArgs[] = { parent, glyph, iconColor, &iconSize, &fontSize, textColor, &valueWidth }; return CallStatic("MakeIconValue", __callArgs, 7); }
        void* MakeIconValueOverload31(void* parent, void* sprite, void* iconColor, float iconSize, float fontSize, void* textColor, float valueWidth = 0.0f) const { void* __callArgs[] = { parent, sprite, iconColor, &iconSize, &fontSize, textColor, &valueWidth }; return CallStatic("MakeIconValue", __callArgs, 7); }
        void* MakeOverlay(const char* name, void* mesh, float z) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0, mesh, &z }; return CallStatic("MakeOverlay", __callArgs, 3); }
        void* MakeOverlay(const char* name, void* mesh, float z, void* material) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0, mesh, &z, material }; return CallStatic("MakeOverlay", __callArgs, 4); }
        void* ShroudColor(float strength) const { void* __callArgs[] = { &strength }; return CallStatic("ShroudColor", __callArgs, 1); }
        void* ActiveSkin() const { return ReadStaticField<void*>("ActiveSkin"); }
        void* Skins() const { return ReadStaticField<void*>("Skins"); }
        float NeutralContrast() const { return ReadStaticField<float>("NeutralContrast"); }
    };
}
