#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyRealm : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyRealm(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyRealm") {}
    public:
        void* Branch(int target) const { void* args[] = { &target }; return Call("Branch", args, 1); }
        int nation() const { return ReadField<int>("nation"); }
        void SetNation(int value) const { WriteField<int>("nation", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int people() const { return ReadField<int>("people"); }
        void SetPeople(int value) const { WriteField<int>("people", value); }
        int group() const { return ReadField<int>("group"); }
        void SetGroup(int value) const { WriteField<int>("group", value); }
        int proclaimedTick() const { return ReadField<int>("proclaimedTick"); }
        void SetProclaimedTick(int value) const { WriteField<int>("proclaimedTick", value); }
        int epoch() const { return ReadField<int>("epoch"); }
        void SetEpoch(int value) const { WriteField<int>("epoch", value); }
        int lastWarTick() const { return ReadField<int>("lastWarTick"); }
        void SetLastWarTick(int value) const { WriteField<int>("lastWarTick", value); }
        int lastJoinTick() const { return ReadField<int>("lastJoinTick"); }
        void SetLastJoinTick(int value) const { WriteField<int>("lastJoinTick", value); }
        int lastDemandTick() const { return ReadField<int>("lastDemandTick"); }
        void SetLastDemandTick(int value) const { WriteField<int>("lastDemandTick", value); }
        void* trunk() const { return ReadField<void*>("trunk"); }
        void* branches() const { return ReadField<void*>("branches"); }
    };
}
