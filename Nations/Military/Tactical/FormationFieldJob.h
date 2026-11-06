#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class FormationFieldJob : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FormationFieldJob(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "FormationFieldJob") {}
    public:
        void Execute(int f) const { void* args[] = { &f }; Call("Execute", args, 1); }
        void* forms() const { return ReadField<void*>("forms"); }
        void SetForms(void* value) const { WriteField<void*>("forms", value); }
        void* surround() const { return ReadField<void*>("surround"); }
        void SetSurround(void* value) const { WriteField<void*>("surround", value); }
        void* flee() const { return ReadField<void*>("flee"); }
        void SetFlee(void* value) const { WriteField<void*>("flee", value); }
    };
}
