#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class LlmSettingsSection : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LlmSettingsSection(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "LlmSettingsSection") {}
    public:
        void Build(void* window) const { void* args[] = { window }; CallStatic("Build", args, 1); }
    };
}
