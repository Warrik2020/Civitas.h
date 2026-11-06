#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class RecruitUi : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RecruitUi(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "RecruitUi") {}
    public:
        void* MakeCard(void* parent, const char* name, bool horizontal = false) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { parent, managed_1, &horizontal }; return CallStatic("MakeCard", __callArgs, 3); }
        void* MakeLine(void* parent, float height) const { void* __callArgs[] = { parent, &height }; return CallStatic("MakeLine", __callArgs, 2); }
        void ConfigureLine(void* h, int sidePad, int vertPad) const { void* __callArgs[] = { h, &sidePad, &vertPad }; CallStatic("ConfigureLine", __callArgs, 3); }
        void* MakeColumn(void* parent) const { void* __callArgs[] = { parent }; return CallStatic("MakeColumn", __callArgs, 1); }
        void* Label(void** args = nullptr, int count = 0) const { return CallStatic("Label", args, count); }
        void* Hint(void* parent, const char* text) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { parent, managed_1 }; return CallStatic("Hint", __callArgs, 2); }
        void* Spacer(void* parent) const { void* __callArgs[] = { parent }; return CallStatic("Spacer", __callArgs, 1); }
        void* SmallButton(void* parent, const char* label, float width, void* onClick) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* __callArgs[] = { parent, managed_1, &width, onClick }; return CallStatic("SmallButton", __callArgs, 4); }
        void* TinyButton(void* parent, const char* label, void* onClick) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* __callArgs[] = { parent, managed_1, onClick }; return CallStatic("TinyButton", __callArgs, 3); }
        void* PrimaryButton(void* parent, const char* label, void* onClick) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* __callArgs[] = { parent, managed_1, onClick }; return CallStatic("PrimaryButton", __callArgs, 3); }
        void MakeBadge(void* row, int type, float width, float height) const { void* __callArgs[] = { row, &type, &width, &height }; CallStatic("MakeBadge", __callArgs, 4); }
        void SetHeight(void* rt, float height) const { void* __callArgs[] = { rt, &height }; CallStatic("SetHeight", __callArgs, 2); }
    };
}
