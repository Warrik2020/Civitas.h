#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class QuickRow : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit QuickRow(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "QuickRow") {}
    public:
        void* Make(void* parent, float height, void* buttonColor, void* textColor, void* dimTextColor, void* onClick) const { void* args[] = { parent, &height, buttonColor, textColor, dimTextColor, onClick }; return CallStatic("Make", args, 6); }
        void Write(void* action, bool armed, void* textColor, void* dimTextColor, void* buttonColor, void* warColor) const { void* args[] = { &action, &armed, textColor, dimTextColor, buttonColor, warColor }; Call("Write", args, 6); }
        void SetActive(bool active) const { void* args[] = { &active }; Call("SetActive", args, 1); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* button() const { return ReadField<void*>("button"); }
        void SetButton(void* value) const { WriteField<void*>("button", value); }
        void* bg() const { return ReadField<void*>("bg"); }
        void SetBg(void* value) const { WriteField<void*>("bg", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        void* note() const { return ReadField<void*>("note"); }
        void SetNote(void* value) const { WriteField<void*>("note", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int arg() const { return ReadField<int>("arg"); }
        void SetArg(int value) const { WriteField<int>("arg", value); }
        bool confirm() const { return ReadField<bool>("confirm"); }
        void SetConfirm(bool value) const { WriteField<bool>("confirm", value); }
        int menu() const { return ReadField<int>("menu"); }
        void SetMenu(int value) const { WriteField<int>("menu", value); }
    };
}
