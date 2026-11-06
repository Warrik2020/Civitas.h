#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class FieldHud : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FieldHud(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "FieldHud") {}
    public:
        void* Controls() const { return ReadStaticField<void*>("Controls"); }
        float t() const { return ReadField<float>("t"); }
        void SetT(float value) const { WriteField<float>("t", value); }
        float lost0() const { return ReadField<float>("lost0"); }
        void SetLost0(float value) const { WriteField<float>("lost0", value); }
        float lost1() const { return ReadField<float>("lost1"); }
        void SetLost1(float value) const { WriteField<float>("lost1", value); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
        float until() const { return ReadField<float>("until"); }
        void SetUntil(float value) const { WriteField<float>("until", value); }
        void* color() const { return ReadField<void*>("color"); }
        void SetColor(void* value) const { WriteField<void*>("color", value); }
        void* button() const { return ReadField<void*>("button"); }
        void SetButton(void* value) const { WriteField<void*>("button", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
    };
}
