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
        void SetId(int value) const { WriteField<int>("id", value); }
        int arcId() const { return ReadField<int>("arcId"); }
        void SetArcId(int value) const { WriteField<int>("arcId", value); }
        int victim() const { return ReadField<int>("victim"); }
        void SetVictim(int value) const { WriteField<int>("victim", value); }
        int cause() const { return ReadField<int>("cause"); }
        void SetCause(int value) const { WriteField<int>("cause", value); }
        int opened() const { return ReadField<int>("opened"); }
        void SetOpened(int value) const { WriteField<int>("opened", value); }
        int lastPounce() const { return ReadField<int>("lastPounce"); }
        void SetLastPounce(int value) const { WriteField<int>("lastPounce", value); }
        int lowSince() const { return ReadField<int>("lowSince"); }
        void SetLowSince(int value) const { WriteField<int>("lowSince", value); }
        int victimTiles() const { return ReadField<int>("victimTiles"); }
        void SetVictimTiles(int value) const { WriteField<int>("victimTiles", value); }
        int playerInvite() const { return ReadField<int>("playerInvite"); }
        void SetPlayerInvite(int value) const { WriteField<int>("playerInvite", value); }
        void* pouncers() const { return ReadField<void*>("pouncers"); }
        void SetPouncers(void* value) const { WriteField<void*>("pouncers", value); }
        void* pounceTicks() const { return ReadField<void*>("pounceTicks"); }
        void SetPounceTicks(void* value) const { WriteField<void*>("pounceTicks", value); }
        void* tilesAtPounce() const { return ReadField<void*>("tilesAtPounce"); }
        void SetTilesAtPounce(void* value) const { WriteField<void*>("tilesAtPounce", value); }
        void* interested() const { return ReadField<void*>("interested"); }
        void SetInterested(void* value) const { WriteField<void*>("interested", value); }
        void* resentNoted() const { return ReadField<void*>("resentNoted"); }
        void SetResentNoted(void* value) const { WriteField<void*>("resentNoted", value); }
        void* motive() const { return ReadField<void*>("motive"); }
        void SetMotive(void* value) const { WriteField<void*>("motive", value); }
        void* causeful() const { return ReadField<void*>("causeful"); }
        void SetCauseful(void* value) const { WriteField<void*>("causeful", value); }
    };
}
