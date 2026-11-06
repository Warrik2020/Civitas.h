#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyHeld : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyHeld(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyHeld") {}
    public:
        int scope() const { return ReadField<int>("scope"); }
        void SetScope(int value) const { WriteField<int>("scope", value); }
        float value() const { return ReadField<float>("value"); }
        void SetValue(float value) const { WriteField<float>("value", value); }
        int target() const { return ReadField<int>("target"); }
        void SetTarget(int value) const { WriteField<int>("target", value); }
    };
}
