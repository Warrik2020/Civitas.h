#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiToolButton : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiToolButton(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiToolButton") {}
    public:
        void* Make(void* parent, void* glyph, const char* iconName, const char* word, const char* title, const char* body, const char* hotkey, void* onClick, float size = 40f, bool showKeycap = false) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(iconName ? iconName : "") : nullptr; void* managed_3 = Api() && Api()->NewString ? Api()->NewString(word ? word : "") : nullptr; void* managed_4 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* managed_5 = Api() && Api()->NewString ? Api()->NewString(body ? body : "") : nullptr; void* managed_6 = Api() && Api()->NewString ? Api()->NewString(hotkey ? hotkey : "") : nullptr; void* args[] = { parent, glyph, managed_2, managed_3, managed_4, managed_5, managed_6, onClick, &size, &showKeycap }; return CallStatic("Make", args, 10); }
        void* TipNow() const { return Call("TipNow", nullptr, 0); }
        void SetLit(bool lit) const { void* args[] = { &lit }; Call("SetLit", args, 1); }
        void SetEnabled(bool on, const char* reason = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(reason ? reason : "") : nullptr; void* args[] = { &on, managed_1 }; Call("SetEnabled", args, 2); }
        void SetShown(bool shown) const { void* args[] = { &shown }; Call("SetShown", args, 1); }
        void SetWord(const char* word) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(word ? word : "") : nullptr; void* args[] = { managed_0 }; Call("SetWord", args, 1); }
        void AddClearBadge(void* onClear, const char* tipTitle, const char* tipBody) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(tipTitle ? tipTitle : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(tipBody ? tipBody : "") : nullptr; void* args[] = { onClear, managed_1, managed_2 }; Call("AddClearBadge", args, 3); }
        void SetBadge(bool shown) const { void* args[] = { &shown }; Call("SetBadge", args, 1); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* button() const { return ReadField<void*>("button"); }
        void SetButton(void* value) const { WriteField<void*>("button", value); }
        void* face() const { return ReadField<void*>("face"); }
        void SetFace(void* value) const { WriteField<void*>("face", value); }
        void* Title() const { return ReadField<void*>("Title"); }
        void SetTitle(void* value) const { WriteField<void*>("Title", value); }
        void* Body() const { return ReadField<void*>("Body"); }
        void SetBody(void* value) const { WriteField<void*>("Body", value); }
        void* Hotkey() const { return ReadField<void*>("Hotkey"); }
        void SetHotkey(void* value) const { WriteField<void*>("Hotkey", value); }
        void* LiveBody() const { return ReadField<void*>("LiveBody"); }
        void SetLiveBody(void* value) const { WriteField<void*>("LiveBody", value); }
        void* Cost() const { return ReadField<void*>("Cost"); }
        void SetCost(void* value) const { WriteField<void*>("Cost", value); }
    };
}
