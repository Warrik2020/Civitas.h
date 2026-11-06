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
        bool ok() const { return ReadField<bool>("ok"); }
        void ok(bool value) const { WriteField<bool>("ok", value); }
        void* content() const { return ReadField<void*>("content"); }
        void content(void* value) const { WriteField<void*>("content", value); }
        void* error() const { return ReadField<void*>("error"); }
        void error(void* value) const { WriteField<void*>("error", value); }
        double seconds() const { return ReadField<double>("seconds"); }
        void seconds(double value) const { WriteField<double>("seconds", value); }
    };
}
