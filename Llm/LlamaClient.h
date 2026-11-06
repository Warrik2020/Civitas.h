#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class LlamaClient : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LlamaClient(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "LlamaClient") {}
    public:
        void* HealthyAsync(const char* baseUrl, const char* apiKey, void* ct) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(baseUrl ? baseUrl : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(apiKey ? apiKey : "") : nullptr; void* __callArgs[] = { managed_0, managed_1, ct }; return CallStatic("HealthyAsync", __callArgs, 3); }
        void* CompleteAsync(const char* baseUrl, const char* apiKey, void* prompt, int timeoutMs, void* ct) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(baseUrl ? baseUrl : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(apiKey ? apiKey : "") : nullptr; void* __callArgs[] = { managed_0, managed_1, prompt, &timeoutMs, ct }; return CallStatic("CompleteAsync", __callArgs, 5); }
    };
}
