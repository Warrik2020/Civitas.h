#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Lod
{
    class DetSoak : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DetSoak(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Lod", "DetSoak") {}
    public:
        void* scenario() const { return ReadField<void*>("scenario"); }
        void SetScenario(void* value) const { WriteField<void*>("scenario", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int seed() const { return ReadField<int>("seed"); }
        void SetSeed(int value) const { WriteField<int>("seed", value); }
        int ticks() const { return ReadField<int>("ticks"); }
        void SetTicks(int value) const { WriteField<int>("ticks", value); }
        int hashEvery() const { return ReadField<int>("hashEvery"); }
        void SetHashEvery(int value) const { WriteField<int>("hashEvery", value); }
        bool staged() const { return ReadField<bool>("staged"); }
        void SetStaged(bool value) const { WriteField<bool>("staged", value); }
        bool pace() const { return ReadField<bool>("pace"); }
        void SetPace(bool value) const { WriteField<bool>("pace", value); }
        int kthreads() const { return ReadField<int>("kthreads"); }
        void SetKthreads(int value) const { WriteField<int>("kthreads", value); }
        bool simpler() const { return ReadField<bool>("simpler"); }
        void SetSimpler(bool value) const { WriteField<bool>("simpler", value); }
        bool shadow() const { return ReadField<bool>("shadow"); }
        void SetShadow(bool value) const { WriteField<bool>("shadow", value); }
        int cut() const { return ReadField<int>("cut"); }
        void SetCut(int value) const { WriteField<int>("cut", value); }
        int settleEvery() const { return ReadField<int>("settleEvery"); }
        void SetSettleEvery(int value) const { WriteField<int>("settleEvery", value); }
        bool hostile() const { return ReadField<bool>("hostile"); }
        void SetHostile(bool value) const { WriteField<bool>("hostile", value); }
        bool dump() const { return ReadField<bool>("dump"); }
        void SetDump(bool value) const { WriteField<bool>("dump", value); }
        void* player() const { return ReadField<void*>("player"); }
        void SetPlayer(void* value) const { WriteField<void*>("player", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        bool quit() const { return ReadField<bool>("quit"); }
        void SetQuit(bool value) const { WriteField<bool>("quit", value); }
    };
}
