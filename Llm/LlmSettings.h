#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class LlmSettings : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LlmSettings(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "LlmSettings") {}
    public:
        void ForgetNgl() const { CallStatic("ForgetNgl", nullptr, 0); }
        void* EnabledKey() const { return ReadStaticField<void*>("EnabledKey"); }
        void* NglKey() const { return ReadStaticField<void*>("NglKey"); }
    };
}
