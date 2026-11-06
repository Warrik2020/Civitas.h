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
        void* AddMedallion(void* header, void* glyph, float size = 42.0f) const { void* __callArgs[] = { header, glyph, &size }; return CallStatic("AddMedallion", __callArgs, 3); }
        void* MakeButton(void* parent, const char* label, void* onClick, float width = 0.0f, float height = 30.0f) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* __callArgs[] = { parent, managed_1, onClick, &width, &height }; return CallStatic("MakeButton", __callArgs, 5); }
        void* MakeGoldButton(void* parent, const char* label, void* onClick, float width = 0.0f, float height = 30.0f) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* __callArgs[] = { parent, managed_1, onClick, &width, &height }; return CallStatic("MakeGoldButton", __callArgs, 5); }
        void* MakeIconButton(void* parent, void* glyph, void* onClick, float size = 28.0f, const char* tipTitle = nullptr) const { void* managed_4 = Api() && Api()->NewString ? Api()->NewString(tipTitle ? tipTitle : "") : nullptr; void* __callArgs[] = { parent, glyph, onClick, &size, managed_4 }; return CallStatic("MakeIconButton", __callArgs, 5); }
        void* MakeFolderTabs(void* parent, void* names, void* onSelect, float height = 32.0f) const { void* __callArgs[] = { parent, names, onSelect, &height }; return CallStatic("MakeFolderTabs", __callArgs, 4); }
        void* MakeWells(void* parent, void* captions) const { void* __callArgs[] = { parent, captions }; return CallStatic("MakeWells", __callArgs, 2); }
        void* MakeTableHeader(void* parent, void* cols) const { void* __callArgs[] = { parent, cols }; return CallStatic("MakeTableHeader", __callArgs, 2); }
        void* MakeTableRow(void* parent, void* cols, float height = 34.0f) const { void* __callArgs[] = { parent, cols, &height }; return CallStatic("MakeTableRow", __callArgs, 3); }
        void* PutBar(void* row, int index) const { void* __callArgs[] = { row, &index }; return CallStatic("PutBar", __callArgs, 2); }
        void* MakeBar(void* parent, float width, float height = 6.0f) const { void* __callArgs[] = { parent, &width, &height }; return CallStatic("MakeBar", __callArgs, 3); }
        void* Grade(float v01, float red = 0.35f, float green = 0.6f) const { void* __callArgs[] = { &v01, &red, &green }; return CallStatic("Grade", __callArgs, 3); }
        void* MakeFooter(void* window) const { void* __callArgs[] = { window }; return CallStatic("MakeFooter", __callArgs, 1); }
        void* MakeSectionHead(void* parent, const char* caption) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* __callArgs[] = { parent, managed_1 }; return CallStatic("MakeSectionHead", __callArgs, 2); }
    };
}
