#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class LlmRequest : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LlmRequest(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "LlmRequest") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int entryId() const { return ReadField<int>("entryId"); }
        void entryId(int value) const { WriteField<int>("entryId", value); }
        int issuedTick() const { return ReadField<int>("issuedTick"); }
        void issuedTick(int value) const { WriteField<int>("issuedTick", value); }
        int staleAfterTicks() const { return ReadField<int>("staleAfterTicks"); }
        void staleAfterTicks(int value) const { WriteField<int>("staleAfterTicks", value); }
        int timeoutMs() const { return ReadField<int>("timeoutMs"); }
        void timeoutMs(int value) const { WriteField<int>("timeoutMs", value); }
        void* prompt() const { return ReadField<void*>("prompt"); }
        void prompt(void* value) const { WriteField<void*>("prompt", value); }
    };
}
