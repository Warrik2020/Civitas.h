#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyEffect : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyEffect(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyEffect") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int scope() const { return ReadField<int>("scope"); }
        void SetScope(int value) const { WriteField<int>("scope", value); }
        float value() const { return ReadField<float>("value"); }
        void SetValue(float value) const { WriteField<float>("value", value); }
    };
}
