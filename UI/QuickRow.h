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
        void* Make(void* parent, float height, void* buttonColor, void* textColor, void* dimTextColor, void* onClick) const { void* __callArgs[] = { parent, &height, buttonColor, textColor, dimTextColor, onClick }; return CallStatic("Make", __callArgs, 6); }
        void Write(void* action, bool armed, void* textColor, void* dimTextColor, void* buttonColor, void* warColor) const { void* __callArgs[] = { &action, &armed, textColor, dimTextColor, buttonColor, warColor }; Call("Write", __callArgs, 6); }
        void SetActive(bool active) const { void* __callArgs[] = { &active }; Call("SetActive", __callArgs, 1); }
        void* go() const { return ReadField<void*>("go"); }
        void go(void* value) const { WriteField<void*>("go", value); }
        void* button() const { return ReadField<void*>("button"); }
        void button(void* value) const { WriteField<void*>("button", value); }
        void* bg() const { return ReadField<void*>("bg"); }
        void bg(void* value) const { WriteField<void*>("bg", value); }
        void* label() const { return ReadField<void*>("label"); }
        void label(void* value) const { WriteField<void*>("label", value); }
        void* note() const { return ReadField<void*>("note"); }
        void note(void* value) const { WriteField<void*>("note", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int arg() const { return ReadField<int>("arg"); }
        void arg(int value) const { WriteField<int>("arg", value); }
        bool confirm() const { return ReadField<bool>("confirm"); }
        void confirm(bool value) const { WriteField<bool>("confirm", value); }
        int menu() const { return ReadField<int>("menu"); }
        void menu(int value) const { WriteField<int>("menu", value); }
    };
}
