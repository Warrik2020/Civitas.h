#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class LlmEntitlement : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LlmEntitlement(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "LlmEntitlement") {}
    public:
        void RequestInstall() const { CallStatic("RequestInstall", nullptr, 0); }
        void* DescribeGap() const { return CallStatic("DescribeGap", nullptr, 0); }
        uint32_t DlcAppId() const { return ReadStaticField<uint32_t>("DlcAppId"); }
        void* OverrideKey() const { return ReadStaticField<void*>("OverrideKey"); }
        bool ModuleEnabled() const { return ReadStaticField<bool>("ModuleEnabled"); }
    };
}
