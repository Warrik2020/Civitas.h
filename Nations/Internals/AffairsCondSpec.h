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
        void name(void* value) const { WriteField<void*>("name", value); }
        void* args() const { return ReadField<void*>("args"); }
        void args(void* value) const { WriteField<void*>("args", value); }
        int required() const { return ReadField<int>("required"); }
        void required(int value) const { WriteField<int>("required", value); }
        bool variadic() const { return ReadField<bool>("variadic"); }
        void variadic(bool value) const { WriteField<bool>("variadic", value); }
        bool numeric() const { return ReadField<bool>("numeric"); }
        void numeric(bool value) const { WriteField<bool>("numeric", value); }
        void* fn() const { return ReadField<void*>("fn"); }
        void fn(void* value) const { WriteField<void*>("fn", value); }
    };
}
