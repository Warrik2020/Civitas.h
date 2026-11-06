#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class KitReadout : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit KitReadout(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "KitReadout") {}
    public:
        void* MakeTag(void* parent, int pool, float iconSize, float fontSize, void* iconColor, void* textColor) const { void* args[] = { parent, &pool, &iconSize, &fontSize, iconColor, textColor }; return CallStatic("MakeTag", args, 6); }
        void* BarColor(void* p) const { void* args[] = { &p }; return CallStatic("BarColor", args, 1); }
        void* Status(void* f, void* cal, void* color) const { void* args[] = { f, cal, &color }; return CallStatic("Status", args, 3); }
        void* WaitPhrase(void* f, void* cal) const { void* args[] = { f, cal }; return CallStatic("WaitPhrase", args, 2); }
        void* PileTip(void* f, int pool, void* cal) const { void* args[] = { f, &pool, cal }; return CallStatic("PileTip", args, 3); }
        void* StatusTip(void* f, void* mcfg, void* cal) const { void* args[] = { f, mcfg, cal }; return CallStatic("StatusTip", args, 3); }
        void OpenProduction(int pool) const { void* args[] = { &pool }; CallStatic("OpenProduction", args, 1); }
        int FocusPile(void* f) const { void* args[] = { f }; return CallStaticValue<int>("FocusPile", args, 1); }
        void SetShown(bool shown) const { void* args[] = { &shown }; Call("SetShown", args, 1); }
        void Set(void* p, void* textColor, void* iconColor) const { void* args[] = { &p, textColor, iconColor }; Call("Set", args, 3); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* icon() const { return ReadField<void*>("icon"); }
        void SetIcon(void* value) const { WriteField<void*>("icon", value); }
        void* value() const { return ReadField<void*>("value"); }
        void SetValue(void* value) const { WriteField<void*>("value", value); }
        void* fill() const { return ReadField<void*>("fill"); }
        void SetFill(void* value) const { WriteField<void*>("fill", value); }
        void* fillImg() const { return ReadField<void*>("fillImg"); }
        void SetFillImg(void* value) const { WriteField<void*>("fillImg", value); }
    };
}
