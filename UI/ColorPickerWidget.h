#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class ColorPickerWidget : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ColorPickerWidget(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "ColorPickerWidget") {}
    public:
        void* Build(void* parent, void* textColor, float padHeight = 168.0f) const { void* __callArgs[] = { parent, textColor, &padHeight }; return CallStatic("Build", __callArgs, 3); }
        void Seed(void* color) const { void* __callArgs[] = { color }; Call("Seed", __callArgs, 1); }
        void* onChanged() const { return ReadField<void*>("onChanged"); }
        void onChanged(void* value) const { WriteField<void*>("onChanged", value); }
        void* onCommit() const { return ReadField<void*>("onCommit"); }
        void onCommit(void* value) const { WriteField<void*>("onCommit", value); }
        bool commitWhileDragging() const { return ReadField<bool>("commitWhileDragging"); }
        void commitWhileDragging(bool value) const { WriteField<bool>("commitWhileDragging", value); }
        float commitInterval() const { return ReadField<float>("commitInterval"); }
        void commitInterval(float value) const { WriteField<float>("commitInterval", value); }
    };
}
