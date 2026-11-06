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
        void* HealthyAsync(const char* baseUrl, const char* apiKey, void* ct) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(baseUrl ? baseUrl : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(apiKey ? apiKey : "") : nullptr; void* args[] = { managed_0, managed_1, ct }; return CallStatic("HealthyAsync", args, 3); }
        void* CompleteAsync(const char* baseUrl, const char* apiKey, void* prompt, int timeoutMs, void* ct) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(baseUrl ? baseUrl : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(apiKey ? apiKey : "") : nullptr; void* args[] = { managed_0, managed_1, prompt, &timeoutMs, ct }; return CallStatic("CompleteAsync", args, 5); }
        void* prompt() const { return ReadField<void*>("prompt"); }
        void SetPrompt(void* value) const { WriteField<void*>("prompt", value); }
        void* grammar() const { return ReadField<void*>("grammar"); }
        void SetGrammar(void* value) const { WriteField<void*>("grammar", value); }
        int n_predict() const { return ReadField<int>("n_predict"); }
        void SetN_predict(int value) const { WriteField<int>("n_predict", value); }
        float temperature() const { return ReadField<float>("temperature"); }
        void SetTemperature(float value) const { WriteField<float>("temperature", value); }
        int seed() const { return ReadField<int>("seed"); }
        void SetSeed(int value) const { WriteField<int>("seed", value); }
        bool cache_prompt() const { return ReadField<bool>("cache_prompt"); }
        void SetCache_prompt(bool value) const { WriteField<bool>("cache_prompt", value); }
        void* stop() const { return ReadField<void*>("stop"); }
        void SetStop(void* value) const { WriteField<void*>("stop", value); }
        void* content() const { return ReadField<void*>("content"); }
        void SetContent(void* value) const { WriteField<void*>("content", value); }
        void* timings() const { return ReadField<void*>("timings"); }
        void SetTimings(void* value) const { WriteField<void*>("timings", value); }
        int prompt_n() const { return ReadField<int>("prompt_n"); }
        void SetPrompt_n(int value) const { WriteField<int>("prompt_n", value); }
        float prompt_ms() const { return ReadField<float>("prompt_ms"); }
        void SetPrompt_ms(float value) const { WriteField<float>("prompt_ms", value); }
        int predicted_n() const { return ReadField<int>("predicted_n"); }
        void SetPredicted_n(int value) const { WriteField<int>("predicted_n", value); }
        float predicted_ms() const { return ReadField<float>("predicted_ms"); }
        void SetPredicted_ms(float value) const { WriteField<float>("predicted_ms", value); }
        float predicted_per_second() const { return ReadField<float>("predicted_per_second"); }
        void SetPredicted_per_second(float value) const { WriteField<float>("predicted_per_second", value); }
    };
}
