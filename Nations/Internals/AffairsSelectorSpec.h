#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsSelectorSpec : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsSelectorSpec(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsSelectorSpec") {}
    public:
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        void* args() const { return ReadField<void*>("args"); }
        void SetArgs(void* value) const { WriteField<void*>("args", value); }
        int required() const { return ReadField<int>("required"); }
        void SetRequired(int value) const { WriteField<int>("required", value); }
        bool variadic() const { return ReadField<bool>("variadic"); }
        void SetVariadic(bool value) const { WriteField<bool>("variadic", value); }
        void* fn() const { return ReadField<void*>("fn"); }
        void SetFn(void* value) const { WriteField<void*>("fn", value); }
    };
}
