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
        bool IsMember(int id) const { void* args[] = { &id }; return CallValue<bool>("IsMember", args, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int arcId() const { return ReadField<int>("arcId"); }
        void SetArcId(int value) const { WriteField<int>("arcId", value); }
        int menaceId() const { return ReadField<int>("menaceId"); }
        void SetMenaceId(int value) const { WriteField<int>("menaceId", value); }
        int founderId() const { return ReadField<int>("founderId"); }
        void SetFounderId(int value) const { WriteField<int>("founderId", value); }
        int posture() const { return ReadField<int>("posture"); }
        void SetPosture(int value) const { WriteField<int>("posture", value); }
        int formingSinceTick() const { return ReadField<int>("formingSinceTick"); }
        void SetFormingSinceTick(int value) const { WriteField<int>("formingSinceTick", value); }
        int formedTick() const { return ReadField<int>("formedTick"); }
        void SetFormedTick(int value) const { WriteField<int>("formedTick", value); }
        int menaceTilesAtForm() const { return ReadField<int>("menaceTilesAtForm"); }
        void SetMenaceTilesAtForm(int value) const { WriteField<int>("menaceTilesAtForm", value); }
        int strikeTick() const { return ReadField<int>("strikeTick"); }
        void SetStrikeTick(int value) const { WriteField<int>("strikeTick", value); }
        int strikeMenaceTiles() const { return ReadField<int>("strikeMenaceTiles"); }
        void SetStrikeMenaceTiles(int value) const { WriteField<int>("strikeMenaceTiles", value); }
        int lowSinceTick() const { return ReadField<int>("lowSinceTick"); }
        void SetLowSinceTick(int value) const { WriteField<int>("lowSinceTick", value); }
        int satisfiedTick() const { return ReadField<int>("satisfiedTick"); }
        void SetSatisfiedTick(int value) const { WriteField<int>("satisfiedTick", value); }
        int playerInviteTick() const { return ReadField<int>("playerInviteTick"); }
        void SetPlayerInviteTick(int value) const { WriteField<int>("playerInviteTick", value); }
        float threat() const { return ReadField<float>("threat"); }
        void SetThreat(float value) const { WriteField<float>("threat", value); }
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
