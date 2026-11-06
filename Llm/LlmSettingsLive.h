#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class LlmSettingsLive : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LlmSettingsLive(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "LlmSettingsLive") {}
    public:
        void Bind(void* label, void* img, void* status, void* download) const { void* __callArgs[] = { label, img, status, download }; Call("Bind", __callArgs, 4); }
        void Toggle() const { Call("Toggle", nullptr, 0); }
    };
}
