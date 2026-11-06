#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Weapons
{
    class WeaponUi : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponUi(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Weapons", "WeaponUi") {}
    public:
        void* MakeText(void* parent, float size, void* style, void* align, void* color) const { void* __callArgs[] = { parent, &size, style, align, color }; return CallStatic("MakeText", __callArgs, 5); }
        void* MakeColumn(void* parent, const char* name, void* st, void* anchorMin, void* anchorMax, void* offsetMin, void* offsetMax) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { parent, managed_1, st, anchorMin, anchorMax, offsetMin, offsetMax }; return CallStatic("MakeColumn", __callArgs, 7); }
        void ConfigureColumn(void* layout) const { void* __callArgs[] = { layout }; CallStatic("ConfigureColumn", __callArgs, 1); }
        void* MakeScrollContent(void* column) const { void* __callArgs[] = { column }; return CallStatic("MakeScrollContent", __callArgs, 1); }
        void* AddSection(void* parent, const char* label, void* st) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* __callArgs[] = { parent, managed_1, st }; return CallStatic("AddSection", __callArgs, 3); }
        void* MakeRow(void* parent, float height) const { void* __callArgs[] = { parent, &height }; return CallStatic("MakeRow", __callArgs, 2); }
        void* MakeCaption(void* row, const char* text, float width, void* st) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { row, managed_1, &width, st }; return CallStatic("MakeCaption", __callArgs, 4); }
        void MakeSpacer(void* row) const { void* __callArgs[] = { row }; CallStatic("MakeSpacer", __callArgs, 1); }
        void* MakeButton(void* parent, const char* label, float width, float fontSize, void* st, void* onClick) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* __callArgs[] = { parent, managed_1, &width, &fontSize, st, onClick }; return CallStatic("MakeButton", __callArgs, 6); }
        void* MakeToolButton(void* parent, void* glyph, float size, void* st, void* onClick) const { void* __callArgs[] = { parent, glyph, &size, st, onClick }; return CallStatic("MakeToolButton", __callArgs, 5); }
        void* MakeListButton(void* parent, void* glyph, const char* label, void* st, void* onClick) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* __callArgs[] = { parent, glyph, managed_2, st, onClick }; return CallStatic("MakeListButton", __callArgs, 5); }
        void Skin(void* btn, void* img) const { void* __callArgs[] = { btn, img }; CallStatic("Skin", __callArgs, 2); }
        void Tint(void* img, bool on, void* st) const { void* __callArgs[] = { img, &on, st }; CallStatic("Tint", __callArgs, 3); }
        void TintDim(void* img, bool dim, void* st) const { void* __callArgs[] = { img, &dim, st }; CallStatic("TintDim", __callArgs, 3); }
        void* MakeStretched(void* parent, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { parent, managed_1 }; return CallStatic("MakeStretched", __callArgs, 2); }
        void* MakeAnchoredButton(void* parent, const char* label, void* anchor, void* pos, void* size, void* st, void* onClick) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* __callArgs[] = { parent, managed_1, anchor, pos, size, st, onClick }; return CallStatic("MakeAnchoredButton", __callArgs, 7); }
    };
}
