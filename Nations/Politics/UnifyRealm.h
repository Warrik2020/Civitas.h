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
        void* Branch(int target) const { void* __callArgs[] = { &target }; return Call("Branch", __callArgs, 1); }
        int nation() const { return ReadField<int>("nation"); }
        void nation(int value) const { WriteField<int>("nation", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int people() const { return ReadField<int>("people"); }
        void people(int value) const { WriteField<int>("people", value); }
        int group() const { return ReadField<int>("group"); }
        void group(int value) const { WriteField<int>("group", value); }
        int proclaimedTick() const { return ReadField<int>("proclaimedTick"); }
        void proclaimedTick(int value) const { WriteField<int>("proclaimedTick", value); }
        int epoch() const { return ReadField<int>("epoch"); }
        void epoch(int value) const { WriteField<int>("epoch", value); }
        int lastWarTick() const { return ReadField<int>("lastWarTick"); }
        void lastWarTick(int value) const { WriteField<int>("lastWarTick", value); }
        int lastJoinTick() const { return ReadField<int>("lastJoinTick"); }
        void lastJoinTick(int value) const { WriteField<int>("lastJoinTick", value); }
        int lastDemandTick() const { return ReadField<int>("lastDemandTick"); }
        void lastDemandTick(int value) const { WriteField<int>("lastDemandTick", value); }
        void* trunk() const { return ReadField<void*>("trunk"); }
        void* branches() const { return ReadField<void*>("branches"); }
    };
}
