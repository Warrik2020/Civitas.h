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
        void* Build(void* parent, void* textColor, float padHeight = 168f) const { void* args[] = { parent, textColor, &padHeight }; return CallStatic("Build", args, 3); }
        void Seed(void* color) const { void* args[] = { color }; Call("Seed", args, 1); }
        void* onChanged() const { return ReadField<void*>("onChanged"); }
        void SetOnChanged(void* value) const { WriteField<void*>("onChanged", value); }
        void* onCommit() const { return ReadField<void*>("onCommit"); }
        void SetOnCommit(void* value) const { WriteField<void*>("onCommit", value); }
        bool commitWhileDragging() const { return ReadField<bool>("commitWhileDragging"); }
        void SetCommitWhileDragging(bool value) const { WriteField<bool>("commitWhileDragging", value); }
        float commitInterval() const { return ReadField<float>("commitInterval"); }
        void SetCommitInterval(float value) const { WriteField<float>("commitInterval", value); }
    };
}
