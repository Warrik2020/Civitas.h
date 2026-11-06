#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiArmConfirm : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiArmConfirm(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiArmConfirm") {}
    public:
        bool IsArmed(int key = 0) const { void* __callArgs[] = { &key }; return CallValue<bool>("IsArmed", __callArgs, 1); }
        bool Press(int key = 0) const { void* __callArgs[] = { &key }; return CallValue<bool>("Press", __callArgs, 1); }
        void Disarm() const { Call("Disarm", nullptr, 0); }
        bool CancelOnEsc() const { return CallValue<bool>("CancelOnEsc", nullptr, 0); }
        float Seconds() const { return ReadField<float>("Seconds"); }
        void Seconds(float value) const { WriteField<float>("Seconds", value); }
    };
}
