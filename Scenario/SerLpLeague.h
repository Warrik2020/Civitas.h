#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerLpLeague : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerLpLeague(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerLpLeague") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int arcId() const { return ReadField<int>("arcId"); }
        void SetArcId(int value) const { WriteField<int>("arcId", value); }
        int menace() const { return ReadField<int>("menace"); }
        void SetMenace(int value) const { WriteField<int>("menace", value); }
        int founder() const { return ReadField<int>("founder"); }
        void SetFounder(int value) const { WriteField<int>("founder", value); }
        int posture() const { return ReadField<int>("posture"); }
        void SetPosture(int value) const { WriteField<int>("posture", value); }
        int formingSince() const { return ReadField<int>("formingSince"); }
        void SetFormingSince(int value) const { WriteField<int>("formingSince", value); }
        int formed() const { return ReadField<int>("formed"); }
        void SetFormed(int value) const { WriteField<int>("formed", value); }
        int menaceTilesAtForm() const { return ReadField<int>("menaceTilesAtForm"); }
        void SetMenaceTilesAtForm(int value) const { WriteField<int>("menaceTilesAtForm", value); }
        int strikeTick() const { return ReadField<int>("strikeTick"); }
        void SetStrikeTick(int value) const { WriteField<int>("strikeTick", value); }
        int strikeMenaceTiles() const { return ReadField<int>("strikeMenaceTiles"); }
        void SetStrikeMenaceTiles(int value) const { WriteField<int>("strikeMenaceTiles", value); }
        int lowSince() const { return ReadField<int>("lowSince"); }
        void SetLowSince(int value) const { WriteField<int>("lowSince", value); }
        int satisfied() const { return ReadField<int>("satisfied"); }
        void SetSatisfied(int value) const { WriteField<int>("satisfied", value); }
        int playerInvite() const { return ReadField<int>("playerInvite"); }
        void SetPlayerInvite(int value) const { WriteField<int>("playerInvite", value); }
        void* members() const { return ReadField<void*>("members"); }
        void SetMembers(void* value) const { WriteField<void*>("members", value); }
        void* joined() const { return ReadField<void*>("joined"); }
        void SetJoined(void* value) const { WriteField<void*>("joined", value); }
        void* coolSince() const { return ReadField<void*>("coolSince"); }
        void SetCoolSince(void* value) const { WriteField<void*>("coolSince", value); }
        void* strikers() const { return ReadField<void*>("strikers"); }
        void SetStrikers(void* value) const { WriteField<void*>("strikers", value); }
        void* invited() const { return ReadField<void*>("invited"); }
        void SetInvited(void* value) const { WriteField<void*>("invited", value); }
        void* declined() const { return ReadField<void*>("declined"); }
        void SetDeclined(void* value) const { WriteField<void*>("declined", value); }
        void* declinedTick() const { return ReadField<void*>("declinedTick"); }
        void SetDeclinedTick(void* value) const { WriteField<void*>("declinedTick", value); }
        void* struck() const { return ReadField<void*>("struck"); }
        void SetStruck(void* value) const { WriteField<void*>("struck", value); }
    };
}
