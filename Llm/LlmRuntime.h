#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class LlmRuntime : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LlmRuntime(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "LlmRuntime") {}
    public:
        int Submit(void* req) const { void* args[] = { req }; return CallValue<int>("Submit", args, 1); }
        void ApplyEnabled() const { Call("ApplyEnabled", nullptr, 0); }
        void ResetForNewWorld() const { Call("ResetForNewWorld", nullptr, 0); }
    };
}
