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
        void ApplyPanel(void* img) const { void* args[] = { img }; CallStatic("ApplyPanel", args, 1); }
        void ApplyPanel(void* img, void* fallback) const { void* args[] = { img, fallback }; CallStatic("ApplyPanel", args, 2); }
        void ApplyTitlePlate(void* img) const { void* args[] = { img }; CallStatic("ApplyTitlePlate", args, 1); }
        void ApplyGoldButton(void* img) const { void* args[] = { img }; CallStatic("ApplyGoldButton", args, 1); }
        void MarkTab(void* tab, bool on) const { void* args[] = { tab, &on }; CallStatic("MarkTab", args, 2); }
        void ApplyHeader(void* img) const { void* args[] = { img }; CallStatic("ApplyHeader", args, 1); }
        void ApplyHeader(void* img, void* fallback) const { void* args[] = { img, fallback }; CallStatic("ApplyHeader", args, 2); }
        void ApplyButton(void* img) const { void* args[] = { img }; CallStatic("ApplyButton", args, 1); }
        void ApplyButton(void* img, void* stateColor) const { void* args[] = { img, stateColor }; CallStatic("ApplyButton", args, 2); }
        void ApplyCard(void* img) const { void* args[] = { img }; CallStatic("ApplyCard", args, 1); }
        void ApplyRaised(void* img) const { void* args[] = { img }; CallStatic("ApplyRaised", args, 1); }
        void ApplyPill(void* img, void* fill) const { void* args[] = { img, fill }; CallStatic("ApplyPill", args, 2); }
        void ApplyOutline(void* img, void* line) const { void* args[] = { img, line }; CallStatic("ApplyOutline", args, 2); }
        void ApplyCapsule(void* img, void* fallback) const { void* args[] = { img, fallback }; CallStatic("ApplyCapsule", args, 2); }
        void ApplyRoundButton(void* img, void* stateColor) const { void* args[] = { img, stateColor }; CallStatic("ApplyRoundButton", args, 2); }
        void ApplyDisc(void* img, void* fill) const { void* args[] = { img, fill }; CallStatic("ApplyDisc", args, 2); }
        void ApplyRing(void* img, void* line) const { void* args[] = { img, line }; CallStatic("ApplyRing", args, 2); }
        void ApplyCrestMask(void* img) const { void* args[] = { img }; CallStatic("ApplyCrestMask", args, 1); }
        void ApplyCrestRing(void* img, void* line) const { void* args[] = { img, line }; CallStatic("ApplyCrestRing", args, 2); }
        void* AddSoftShadow(void* holder, float radius, float spread, float drop = 2f) const { void* args[] = { holder, &radius, &spread, &drop }; return CallStatic("AddSoftShadow", args, 4); }
        void* AddShadow(void* window, float spread = 12f) const { void* args[] = { window, &spread }; return CallStatic("AddShadow", args, 2); }
        void* ButtonTint(void* c) const { void* args[] = { c }; return CallStatic("ButtonTint", args, 1); }
        void* Icon(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Icon", args, 1); }
        void* MakeCheckBox(void* parent, void* boxColor, void* checkColor, void* check) const { void* args[] = { parent, boxColor, checkColor, &check }; return CallStatic("MakeCheckBox", args, 4); }
        void* MakeButtonWash(void* button) const { void* args[] = { button }; return CallStatic("MakeButtonWash", args, 1); }
        void* ButtonTintDim(void* c) const { void* args[] = { c }; return CallStatic("ButtonTintDim", args, 1); }
        void* MakeText(void* parent, float size, void* style, void* color) const { void* args[] = { parent, &size, style, color }; return CallStatic("MakeText", args, 4); }
        void* MakeButton(void* parent, const char* label, float width, void* color, void* onClick, void* textColor) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* args[] = { parent, managed_1, &width, color, onClick, textColor }; return CallStatic("MakeButton", args, 6); }
        void* AddSectionHeader(void* parent, const char* text, void* labelColor, float inset = 10f, float fontSize = 13f) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* args[] = { parent, managed_1, labelColor, &inset, &fontSize }; return CallStatic("AddSectionHeader", args, 5); }
        void* MakeRow(void* parent) const { void* args[] = { parent }; return CallStatic("MakeRow", args, 1); }
        void* MakeIconValue(void* parent, void* glyph, void* iconColor, float iconSize, float fontSize, void* textColor, float valueWidth = 0f) const { void* args[] = { parent, glyph, iconColor, &iconSize, &fontSize, textColor, &valueWidth }; return CallStatic("MakeIconValue", args, 7); }
        void* MakeIconValue(void* parent, void* sprite, void* iconColor, float iconSize, float fontSize, void* textColor, float valueWidth = 0f) const { void* args[] = { parent, sprite, iconColor, &iconSize, &fontSize, textColor, &valueWidth }; return CallStatic("MakeIconValue", args, 7); }
        void* MakeOverlay(const char* name, void* mesh, float z) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0, mesh, &z }; return CallStatic("MakeOverlay", args, 3); }
        void* MakeOverlay(const char* name, void* mesh, float z, void* material) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0, mesh, &z, material }; return CallStatic("MakeOverlay", args, 4); }
        void* ShroudColor(float strength) const { void* args[] = { &strength }; return CallStatic("ShroudColor", args, 1); }
        void SetShown(bool shown) const { void* args[] = { &shown }; Call("SetShown", args, 1); }
        void* ActiveSkin() const { return ReadStaticField<void*>("ActiveSkin"); }
        void* Skins() const { return ReadStaticField<void*>("Skins"); }
        float NeutralContrast() const { return ReadStaticField<float>("NeutralContrast"); }
        void* Name() const { return ReadField<void*>("Name"); }
        float FrameWeight() const { return ReadField<float>("FrameWeight"); }
        float ButtonWeight() const { return ReadField<float>("ButtonWeight"); }
        void* Line() const { return ReadField<void*>("Line"); }
        void* Face() const { return ReadField<void*>("Face"); }
        void* Deep() const { return ReadField<void*>("Deep"); }
        void* Raised() const { return ReadField<void*>("Raised"); }
        void* Inset() const { return ReadField<void*>("Inset"); }
        void* Name() const { return ReadField<void*>("Name"); }
        void* Fill() const { return ReadField<void*>("Fill"); }
        float Radius() const { return ReadField<float>("Radius"); }
        float Border() const { return ReadField<float>("Border"); }
        float Inset() const { return ReadField<float>("Inset"); }
        bool LineOnSides() const { return ReadField<bool>("LineOnSides"); }
        bool AccentBottom() const { return ReadField<bool>("AccentBottom"); }
        void* spec() const { return ReadField<void*>("spec"); }
        void SetSpec(void* value) const { WriteField<void*>("spec", value); }
        void* sprite() const { return ReadField<void*>("sprite"); }
        void SetSprite(void* value) const { WriteField<void*>("sprite", value); }
        void* shape() const { return ReadField<void*>("shape"); }
        void SetShape(void* value) const { WriteField<void*>("shape", value); }
        void* inner() const { return ReadField<void*>("inner"); }
        void SetInner(void* value) const { WriteField<void*>("inner", value); }
        void* lowRule() const { return ReadField<void*>("lowRule"); }
        void SetLowRule(void* value) const { WriteField<void*>("lowRule", value); }
        void* buffer() const { return ReadField<void*>("buffer"); }
        void SetBuffer(void* value) const { WriteField<void*>("buffer", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* icon() const { return ReadField<void*>("icon"); }
        void SetIcon(void* value) const { WriteField<void*>("icon", value); }
        void* value() const { return ReadField<void*>("value"); }
        void SetValue(void* value) const { WriteField<void*>("value", value); }
    };
}
