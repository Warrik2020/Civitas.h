#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class LlamaPrompt : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LlamaPrompt(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "LlamaPrompt") {}
    public:
        void* Of(const char* text, const char* grammar, int maxTokens, float temperature, int seed, void* stop = nullptr) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(grammar ? grammar : "") : nullptr; void* args[] = { managed_0, managed_1, &maxTokens, &temperature, &seed, stop }; return CallStatic("Of", args, 6); }
        void* text() const { return ReadField<void*>("text"); }
        void SetText(void* value) const { WriteField<void*>("text", value); }
        void* grammar() const { return ReadField<void*>("grammar"); }
        void SetGrammar(void* value) const { WriteField<void*>("grammar", value); }
        int maxTokens() const { return ReadField<int>("maxTokens"); }
        void SetMaxTokens(int value) const { WriteField<int>("maxTokens", value); }
        float temperature() const { return ReadField<float>("temperature"); }
        void SetTemperature(float value) const { WriteField<float>("temperature", value); }
        int seed() const { return ReadField<int>("seed"); }
        void SetSeed(int value) const { WriteField<int>("seed", value); }
        void* stop() const { return ReadField<void*>("stop"); }
        void SetStop(void* value) const { WriteField<void*>("stop", value); }
    };
}
