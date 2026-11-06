#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerLpScramble : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerLpScramble(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerLpScramble") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int arcId() const { return ReadField<int>("arcId"); }
        void arcId(int value) const { WriteField<int>("arcId", value); }
        int victim() const { return ReadField<int>("victim"); }
        void victim(int value) const { WriteField<int>("victim", value); }
        int cause() const { return ReadField<int>("cause"); }
        void cause(int value) const { WriteField<int>("cause", value); }
        int opened() const { return ReadField<int>("opened"); }
        void opened(int value) const { WriteField<int>("opened", value); }
        int lastPounce() const { return ReadField<int>("lastPounce"); }
        void lastPounce(int value) const { WriteField<int>("lastPounce", value); }
        int lowSince() const { return ReadField<int>("lowSince"); }
        void lowSince(int value) const { WriteField<int>("lowSince", value); }
        int victimTiles() const { return ReadField<int>("victimTiles"); }
        void victimTiles(int value) const { WriteField<int>("victimTiles", value); }
        int playerInvite() const { return ReadField<int>("playerInvite"); }
        void playerInvite(int value) const { WriteField<int>("playerInvite", value); }
        void* pouncers() const { return ReadField<void*>("pouncers"); }
        void pouncers(void* value) const { WriteField<void*>("pouncers", value); }
        void* pounceTicks() const { return ReadField<void*>("pounceTicks"); }
        void pounceTicks(void* value) const { WriteField<void*>("pounceTicks", value); }
        void* tilesAtPounce() const { return ReadField<void*>("tilesAtPounce"); }
        void tilesAtPounce(void* value) const { WriteField<void*>("tilesAtPounce", value); }
        void* interested() const { return ReadField<void*>("interested"); }
        void interested(void* value) const { WriteField<void*>("interested", value); }
        void* resentNoted() const { return ReadField<void*>("resentNoted"); }
        void resentNoted(void* value) const { WriteField<void*>("resentNoted", value); }
        void* motive() const { return ReadField<void*>("motive"); }
        void motive(void* value) const { WriteField<void*>("motive", value); }
        void* causeful() const { return ReadField<void*>("causeful"); }
        void causeful(void* value) const { WriteField<void*>("causeful", value); }
    };
}
