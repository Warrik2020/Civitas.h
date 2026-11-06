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
        void senderId(int value) const { WriteField<int>("senderId", value); }
        int memberId() const { return ReadField<int>("memberId"); }
        void memberId(int value) const { WriteField<int>("memberId", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int result() const { return ReadField<int>("result"); }
        void result(int value) const { WriteField<int>("result", value); }
        bool playerInUnion() const { return ReadField<bool>("playerInUnion"); }
        void playerInUnion(bool value) const { WriteField<bool>("playerInUnion", value); }
        bool playerAnswered() const { return ReadField<bool>("playerAnswered"); }
        void playerAnswered(bool value) const { WriteField<bool>("playerAnswered", value); }
        bool memberRuled() const { return ReadField<bool>("memberRuled"); }
        void memberRuled(bool value) const { WriteField<bool>("memberRuled", value); }
    };
}
