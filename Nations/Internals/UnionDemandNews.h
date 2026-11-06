#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class UnionDemandNews : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnionDemandNews(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "UnionDemandNews") {}
    public:
        int senderId() const { return ReadField<int>("senderId"); }
        void SetSenderId(int value) const { WriteField<int>("senderId", value); }
        int memberId() const { return ReadField<int>("memberId"); }
        void SetMemberId(int value) const { WriteField<int>("memberId", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int result() const { return ReadField<int>("result"); }
        void SetResult(int value) const { WriteField<int>("result", value); }
        bool playerInUnion() const { return ReadField<bool>("playerInUnion"); }
        void SetPlayerInUnion(bool value) const { WriteField<bool>("playerInUnion", value); }
        bool playerAnswered() const { return ReadField<bool>("playerAnswered"); }
        void SetPlayerAnswered(bool value) const { WriteField<bool>("playerAnswered", value); }
        bool memberRuled() const { return ReadField<bool>("memberRuled"); }
        void SetMemberRuled(bool value) const { WriteField<bool>("memberRuled", value); }
    };
}
