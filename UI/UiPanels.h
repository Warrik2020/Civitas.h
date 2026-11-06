#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiPanels : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiPanels(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiPanels") {}
    public:
        void* MakeCrest(void* header, float height = 44f) const { void* args[] = { header, &height }; return CallStatic("MakeCrest", args, 2); }
        void SetCrest(void* flag, void* sprite) const { void* args[] = { flag, sprite }; CallStatic("SetCrest", args, 2); }
        void* MakeHeaderBadge(void* header) const { void* args[] = { header }; return CallStatic("MakeHeaderBadge", args, 1); }
        void SetBadge(void* badge, const char* text) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* args[] = { badge, managed_1 }; CallStatic("SetBadge", args, 2); }
        void* MakeHeadline(void* parent, void* glyph, const char* caption) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* args[] = { parent, glyph, managed_2 }; return CallStatic("MakeHeadline", args, 3); }
        void* MakeStatTiles(void** args = nullptr, int count = 0) const { return CallStatic("MakeStatTiles", args, count); }
        void* MakeBand(void* windowRoot) const { void* args[] = { windowRoot }; return CallStatic("MakeBand", args, 1); }
        void* SignedMonthly(float perTick) const { void* args[] = { &perTick }; return CallStatic("SignedMonthly", args, 1); }
        void Set(const char* figure, const char* line = nullptr, void* color = nullptr) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(figure ? figure : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(line ? line : "") : nullptr; void* args[] = { managed_0, managed_1, color }; Call("Set", args, 3); }
        float CrestHeight() const { return ReadStaticField<float>("CrestHeight"); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* icon() const { return ReadField<void*>("icon"); }
        void SetIcon(void* value) const { WriteField<void*>("icon", value); }
        void* caption() const { return ReadField<void*>("caption"); }
        void SetCaption(void* value) const { WriteField<void*>("caption", value); }
        void* value() const { return ReadField<void*>("value"); }
        void SetValue(void* value) const { WriteField<void*>("value", value); }
        void* delta() const { return ReadField<void*>("delta"); }
        void SetDelta(void* value) const { WriteField<void*>("delta", value); }
        void* tip() const { return ReadField<void*>("tip"); }
        void SetTip(void* value) const { WriteField<void*>("tip", value); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* icon() const { return ReadField<void*>("icon"); }
        void SetIcon(void* value) const { WriteField<void*>("icon", value); }
        void* caption() const { return ReadField<void*>("caption"); }
        void SetCaption(void* value) const { WriteField<void*>("caption", value); }
        void* value() const { return ReadField<void*>("value"); }
        void SetValue(void* value) const { WriteField<void*>("value", value); }
        void* sub() const { return ReadField<void*>("sub"); }
        void SetSub(void* value) const { WriteField<void*>("sub", value); }
        void* tip() const { return ReadField<void*>("tip"); }
        void SetTip(void* value) const { WriteField<void*>("tip", value); }
        void* onClick() const { return ReadField<void*>("onClick"); }
        void SetOnClick(void* value) const { WriteField<void*>("onClick", value); }
    };
}
