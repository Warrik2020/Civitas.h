#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiChrome : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiChrome(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiChrome") {}
    public:
        void* AddMedallion(void* header, void* glyph, float size = 42f) const { void* args[] = { header, glyph, &size }; return CallStatic("AddMedallion", args, 3); }
        void* MakeButton(void* parent, const char* label, void* onClick, float width = 0f, float height = 30f) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* args[] = { parent, managed_1, onClick, &width, &height }; return CallStatic("MakeButton", args, 5); }
        void* MakeGoldButton(void* parent, const char* label, void* onClick, float width = 0f, float height = 30f) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* args[] = { parent, managed_1, onClick, &width, &height }; return CallStatic("MakeGoldButton", args, 5); }
        void* MakeIconButton(void* parent, void* glyph, void* onClick, float size = 28f, const char* tipTitle = nullptr) const { void* managed_4 = Api() && Api()->NewString ? Api()->NewString(tipTitle ? tipTitle : "") : nullptr; void* args[] = { parent, glyph, onClick, &size, managed_4 }; return CallStatic("MakeIconButton", args, 5); }
        void* MakeFolderTabs(void* parent, void* names, void* onSelect, float height = 32f) const { void* args[] = { parent, names, onSelect, &height }; return CallStatic("MakeFolderTabs", args, 4); }
        void* MakeWells(void* parent, void* captions) const { void* args[] = { parent, captions }; return CallStatic("MakeWells", args, 2); }
        void* MakeTableHeader(void* parent, void* cols) const { void* args[] = { parent, cols }; return CallStatic("MakeTableHeader", args, 2); }
        void* MakeTableRow(void* parent, void* cols, float height = 34f) const { void* args[] = { parent, cols, &height }; return CallStatic("MakeTableRow", args, 3); }
        void* PutBar(void* row, int index) const { void* args[] = { row, &index }; return CallStatic("PutBar", args, 2); }
        void* MakeBar(void* parent, float width, float height = 6f) const { void* args[] = { parent, &width, &height }; return CallStatic("MakeBar", args, 3); }
        void* Grade(float v01, float red, float green) const { void* args[] = { &v01, &red, &green }; return CallStatic("Grade", args, 3); }
        void* MakeFooter(void* window) const { void* args[] = { window }; return CallStatic("MakeFooter", args, 1); }
        void* MakeSectionHead(void* parent, const char* caption) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* args[] = { parent, managed_1 }; return CallStatic("MakeSectionHead", args, 2); }
        void Select(int index) const { void* args[] = { &index }; Call("Select", args, 1); }
        void SetShown(int index, bool shown) const { void* args[] = { &index, &shown }; Call("SetShown", args, 2); }
        void Set(const char* figure, const char* change = nullptr, void* figureColor = nullptr, bool alarm = false) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(figure ? figure : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(change ? change : "") : nullptr; void* args[] = { managed_0, managed_1, figureColor, &alarm }; Call("Set", args, 4); }
        void Select(bool on) const { void* args[] = { &on }; Call("Select", args, 1); }
        void Set(float value01, void* color, const char* text = nullptr) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* args[] = { &value01, color, managed_2 }; Call("Set", args, 3); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* tabs() const { return ReadField<void*>("tabs"); }
        void* faces() const { return ReadField<void*>("faces"); }
        void* labels() const { return ReadField<void*>("labels"); }
        int selected() const { return ReadField<int>("selected"); }
        void SetSelected(int value) const { WriteField<int>("selected", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* face() const { return ReadField<void*>("face"); }
        void SetFace(void* value) const { WriteField<void*>("face", value); }
        void* caption() const { return ReadField<void*>("caption"); }
        void SetCaption(void* value) const { WriteField<void*>("caption", value); }
        void* value() const { return ReadField<void*>("value"); }
        void SetValue(void* value) const { WriteField<void*>("value", value); }
        void* delta() const { return ReadField<void*>("delta"); }
        void SetDelta(void* value) const { WriteField<void*>("delta", value); }
        void* tip() const { return ReadField<void*>("tip"); }
        void SetTip(void* value) const { WriteField<void*>("tip", value); }
        void* onClick() const { return ReadField<void*>("onClick"); }
        void SetOnClick(void* value) const { WriteField<void*>("onClick", value); }
        void* caption() const { return ReadField<void*>("caption"); }
        void SetCaption(void* value) const { WriteField<void*>("caption", value); }
        float width() const { return ReadField<float>("width"); }
        void SetWidth(float value) const { WriteField<float>("width", value); }
        void* align() const { return ReadField<void*>("align"); }
        void SetAlign(void* value) const { WriteField<void*>("align", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* wash() const { return ReadField<void*>("wash"); }
        void SetWash(void* value) const { WriteField<void*>("wash", value); }
        void* cells() const { return ReadField<void*>("cells"); }
        void* onClick() const { return ReadField<void*>("onClick"); }
        void SetOnClick(void* value) const { WriteField<void*>("onClick", value); }
        void* tip() const { return ReadField<void*>("tip"); }
        void SetTip(void* value) const { WriteField<void*>("tip", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* fill() const { return ReadField<void*>("fill"); }
        void SetFill(void* value) const { WriteField<void*>("fill", value); }
        void* figure() const { return ReadField<void*>("figure"); }
        void SetFigure(void* value) const { WriteField<void*>("figure", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* buttons() const { return ReadField<void*>("buttons"); }
        void SetButtons(void* value) const { WriteField<void*>("buttons", value); }
        void* note() const { return ReadField<void*>("note"); }
        void SetNote(void* value) const { WriteField<void*>("note", value); }
    };
}
