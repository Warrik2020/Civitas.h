#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class OutcomeTerm : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit OutcomeTerm(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "OutcomeTerm") {}
    public:
        int sign() const { return ReadField<int>("sign"); }
        void* text() const { return ReadField<void*>("text"); }
    };
}
