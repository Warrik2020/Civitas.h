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
        void* MakeText(void* parent, float size, void* style, void* align, void* color) const { void* args[] = { parent, &size, style, align, color }; return CallStatic("MakeText", args, 5); }
        void* MakeColumn(void* parent, const char* name, void* st, void* anchorMin, void* anchorMax, void* offsetMin, void* offsetMax) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { parent, managed_1, st, anchorMin, anchorMax, offsetMin, offsetMax }; return CallStatic("MakeColumn", args, 7); }
        void ConfigureColumn(void* layout) const { void* args[] = { layout }; CallStatic("ConfigureColumn", args, 1); }
        void* MakeScrollContent(void* column) const { void* args[] = { column }; return CallStatic("MakeScrollContent", args, 1); }
        void* AddSection(void* parent, const char* label, void* st) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* args[] = { parent, managed_1, st }; return CallStatic("AddSection", args, 3); }
        void* MakeRow(void* parent, float height) const { void* args[] = { parent, &height }; return CallStatic("MakeRow", args, 2); }
        void* MakeCaption(void* row, const char* text, float width, void* st) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* args[] = { row, managed_1, &width, st }; return CallStatic("MakeCaption", args, 4); }
        void MakeSpacer(void* row) const { void* args[] = { row }; CallStatic("MakeSpacer", args, 1); }
        void* MakeButton(void* parent, const char* label, float width, float fontSize, void* st, void* onClick) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* args[] = { parent, managed_1, &width, &fontSize, st, onClick }; return CallStatic("MakeButton", args, 6); }
        void* MakeToolButton(void* parent, void* glyph, float size, void* st, void* onClick) const { void* args[] = { parent, glyph, &size, st, onClick }; return CallStatic("MakeToolButton", args, 5); }
        void* MakeListButton(void* parent, void* glyph, const char* label, void* st, void* onClick) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* args[] = { parent, glyph, managed_2, st, onClick }; return CallStatic("MakeListButton", args, 5); }
        void Skin(void* btn, void* img) const { void* args[] = { btn, img }; CallStatic("Skin", args, 2); }
        void Tint(void* img, bool on, void* st) const { void* args[] = { img, &on, st }; CallStatic("Tint", args, 3); }
        void TintDim(void* img, bool dim, void* st) const { void* args[] = { img, &dim, st }; CallStatic("TintDim", args, 3); }
        void* MakeStretched(void* parent, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { parent, managed_1 }; return CallStatic("MakeStretched", args, 2); }
        void* MakeAnchoredButton(void* parent, const char* label, void* anchor, void* pos, void* size, void* st, void* onClick) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* args[] = { parent, managed_1, anchor, pos, size, st, onClick }; return CallStatic("MakeAnchoredButton", args, 7); }
    };
}
