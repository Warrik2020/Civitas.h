#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class LlamaCompletion : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LlamaCompletion(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "LlamaCompletion") {}
    public:
        bool ok() const { return ReadField<bool>("ok"); }
        void SetOk(bool value) const { WriteField<bool>("ok", value); }
        void* content() const { return ReadField<void*>("content"); }
        void SetContent(void* value) const { WriteField<void*>("content", value); }
        void* error() const { return ReadField<void*>("error"); }
        void SetError(void* value) const { WriteField<void*>("error", value); }
        double seconds() const { return ReadField<double>("seconds"); }
        void SetSeconds(double value) const { WriteField<double>("seconds", value); }
        int promptTokens() const { return ReadField<int>("promptTokens"); }
        void SetPromptTokens(int value) const { WriteField<int>("promptTokens", value); }
        int predictedTokens() const { return ReadField<int>("predictedTokens"); }
        void SetPredictedTokens(int value) const { WriteField<int>("predictedTokens", value); }
        double tokensPerSecond() const { return ReadField<double>("tokensPerSecond"); }
        void SetTokensPerSecond(double value) const { WriteField<double>("tokensPerSecond", value); }
    };
}
