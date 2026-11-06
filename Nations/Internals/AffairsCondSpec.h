#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsCondSpec : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsCondSpec(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsCondSpec") {}
    public:
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* args() const { return ReadField<void*>("args"); }
        void SetArgs(void* value) const { WriteField<void*>("args", value); }
        int required() const { return ReadField<int>("required"); }
        void SetRequired(int value) const { WriteField<int>("required", value); }
        bool variadic() const { return ReadField<bool>("variadic"); }
        void SetVariadic(bool value) const { WriteField<bool>("variadic", value); }
        bool numeric() const { return ReadField<bool>("numeric"); }
        void SetNumeric(bool value) const { WriteField<bool>("numeric", value); }
        void* fn() const { return ReadField<void*>("fn"); }
        void SetFn(void* value) const { WriteField<void*>("fn", value); }
    };
}
