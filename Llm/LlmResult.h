#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Llm
{
    class LlmResult : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LlmResult(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Llm", "LlmResult") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int entryId() const { return ReadField<int>("entryId"); }
        void SetEntryId(int value) const { WriteField<int>("entryId", value); }
        int issuedTick() const { return ReadField<int>("issuedTick"); }
        void SetIssuedTick(int value) const { WriteField<int>("issuedTick", value); }
        int staleAfterTicks() const { return ReadField<int>("staleAfterTicks"); }
        void SetStaleAfterTicks(int value) const { WriteField<int>("staleAfterTicks", value); }
        bool ok() const { return ReadField<bool>("ok"); }
        void SetOk(bool value) const { WriteField<bool>("ok", value); }
        void* content() const { return ReadField<void*>("content"); }
        void SetContent(void* value) const { WriteField<void*>("content", value); }
        void* error() const { return ReadField<void*>("error"); }
        void SetError(void* value) const { WriteField<void*>("error", value); }
        double seconds() const { return ReadField<double>("seconds"); }
        void SetSeconds(double value) const { WriteField<double>("seconds", value); }
    };
}
