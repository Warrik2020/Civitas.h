#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyTerm : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyTerm(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyTerm") {}
    public:
        void* label() const { return ReadField<void*>("label"); }
        void label(void* value) const { WriteField<void*>("label", value); }
        float value() const { return ReadField<float>("value"); }
        void value(float value) const { WriteField<float>("value", value); }
    };
}
