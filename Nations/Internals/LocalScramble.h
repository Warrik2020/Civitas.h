#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LocalScramble : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LocalScramble(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LocalScramble") {}
    public:
        bool IsPouncer(int id) const { void* __callArgs[] = { &id }; return CallValue<bool>("IsPouncer", __callArgs, 1); }
        int InterestIndex(int id) const { void* __callArgs[] = { &id }; return CallValue<int>("InterestIndex", __callArgs, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int arcId() const { return ReadField<int>("arcId"); }
        void arcId(int value) const { WriteField<int>("arcId", value); }
        int victimId() const { return ReadField<int>("victimId"); }
        void victimId(int value) const { WriteField<int>("victimId", value); }
        int cause() const { return ReadField<int>("cause"); }
        void cause(int value) const { WriteField<int>("cause", value); }
        int openedTick() const { return ReadField<int>("openedTick"); }
        void openedTick(int value) const { WriteField<int>("openedTick", value); }
        int lastPounceTick() const { return ReadField<int>("lastPounceTick"); }
        void lastPounceTick(int value) const { WriteField<int>("lastPounceTick", value); }
        int lowSinceTick() const { return ReadField<int>("lowSinceTick"); }
        void lowSinceTick(int value) const { WriteField<int>("lowSinceTick", value); }
        int victimTilesAtOpen() const { return ReadField<int>("victimTilesAtOpen"); }
        void victimTilesAtOpen(int value) const { WriteField<int>("victimTilesAtOpen", value); }
        void* pouncers() const { return ReadField<void*>("pouncers"); }
        void* pounceTick() const { return ReadField<void*>("pounceTick"); }
        void* tilesAtPounce() const { return ReadField<void*>("tilesAtPounce"); }
        void* interested() const { return ReadField<void*>("interested"); }
        void* motive() const { return ReadField<void*>("motive"); }
        void* causeful() const { return ReadField<void*>("causeful"); }
        void* resentNoted() const { return ReadField<void*>("resentNoted"); }
        int playerInviteTick() const { return ReadField<int>("playerInviteTick"); }
        void playerInviteTick(int value) const { WriteField<int>("playerInviteTick", value); }
    };
}
