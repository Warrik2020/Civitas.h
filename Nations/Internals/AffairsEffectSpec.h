#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsEffectSpec : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsEffectSpec(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsEffectSpec") {}
    public:
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* args() const { return ReadField<void*>("args"); }
        void SetArgs(void* value) const { WriteField<void*>("args", value); }
        int required() const { return ReadField<int>("required"); }
        void SetRequired(int value) const { WriteField<int>("required", value); }
        bool hard() const { return ReadField<bool>("hard"); }
        void SetHard(bool value) const { WriteField<bool>("hard", value); }
        void* fn() const { return ReadField<void*>("fn"); }
        void SetFn(void* value) const { WriteField<void*>("fn", value); }
        void* check() const { return ReadField<void*>("check"); }
        void SetCheck(void* value) const { WriteField<void*>("check", value); }
    };
}
