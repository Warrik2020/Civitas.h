#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LocalLeague : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LocalLeague(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LocalLeague") {}
    public:
        bool IsMember(int id) const { void* __callArgs[] = { &id }; return CallValue<bool>("IsMember", __callArgs, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int arcId() const { return ReadField<int>("arcId"); }
        void arcId(int value) const { WriteField<int>("arcId", value); }
        int menaceId() const { return ReadField<int>("menaceId"); }
        void menaceId(int value) const { WriteField<int>("menaceId", value); }
        int founderId() const { return ReadField<int>("founderId"); }
        void founderId(int value) const { WriteField<int>("founderId", value); }
        int posture() const { return ReadField<int>("posture"); }
        void posture(int value) const { WriteField<int>("posture", value); }
        int formingSinceTick() const { return ReadField<int>("formingSinceTick"); }
        void formingSinceTick(int value) const { WriteField<int>("formingSinceTick", value); }
        int formedTick() const { return ReadField<int>("formedTick"); }
        void formedTick(int value) const { WriteField<int>("formedTick", value); }
        int menaceTilesAtForm() const { return ReadField<int>("menaceTilesAtForm"); }
        void menaceTilesAtForm(int value) const { WriteField<int>("menaceTilesAtForm", value); }
        int strikeTick() const { return ReadField<int>("strikeTick"); }
        void strikeTick(int value) const { WriteField<int>("strikeTick", value); }
        int strikeMenaceTiles() const { return ReadField<int>("strikeMenaceTiles"); }
        void strikeMenaceTiles(int value) const { WriteField<int>("strikeMenaceTiles", value); }
        int lowSinceTick() const { return ReadField<int>("lowSinceTick"); }
        void lowSinceTick(int value) const { WriteField<int>("lowSinceTick", value); }
        int satisfiedTick() const { return ReadField<int>("satisfiedTick"); }
        void satisfiedTick(int value) const { WriteField<int>("satisfiedTick", value); }
        int playerInviteTick() const { return ReadField<int>("playerInviteTick"); }
        void playerInviteTick(int value) const { WriteField<int>("playerInviteTick", value); }
        float threat() const { return ReadField<float>("threat"); }
        void threat(float value) const { WriteField<float>("threat", value); }
        void* members() const { return ReadField<void*>("members"); }
        void* joinedTick() const { return ReadField<void*>("joinedTick"); }
        void* coolSince() const { return ReadField<void*>("coolSince"); }
        void* strikers() const { return ReadField<void*>("strikers"); }
        void* invited() const { return ReadField<void*>("invited"); }
        void* declined() const { return ReadField<void*>("declined"); }
        void* declinedTick() const { return ReadField<void*>("declinedTick"); }
        void* struck() const { return ReadField<void*>("struck"); }
    };
}
