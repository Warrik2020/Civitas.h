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
        void id(int value) const { WriteField<int>("id", value); }
        int arcId() const { return ReadField<int>("arcId"); }
        void arcId(int value) const { WriteField<int>("arcId", value); }
        int menace() const { return ReadField<int>("menace"); }
        void menace(int value) const { WriteField<int>("menace", value); }
        int founder() const { return ReadField<int>("founder"); }
        void founder(int value) const { WriteField<int>("founder", value); }
        int posture() const { return ReadField<int>("posture"); }
        void posture(int value) const { WriteField<int>("posture", value); }
        int formingSince() const { return ReadField<int>("formingSince"); }
        void formingSince(int value) const { WriteField<int>("formingSince", value); }
        int formed() const { return ReadField<int>("formed"); }
        void formed(int value) const { WriteField<int>("formed", value); }
        int menaceTilesAtForm() const { return ReadField<int>("menaceTilesAtForm"); }
        void menaceTilesAtForm(int value) const { WriteField<int>("menaceTilesAtForm", value); }
        int strikeTick() const { return ReadField<int>("strikeTick"); }
        void strikeTick(int value) const { WriteField<int>("strikeTick", value); }
        int strikeMenaceTiles() const { return ReadField<int>("strikeMenaceTiles"); }
        void strikeMenaceTiles(int value) const { WriteField<int>("strikeMenaceTiles", value); }
        int lowSince() const { return ReadField<int>("lowSince"); }
        void lowSince(int value) const { WriteField<int>("lowSince", value); }
        int satisfied() const { return ReadField<int>("satisfied"); }
        void satisfied(int value) const { WriteField<int>("satisfied", value); }
        int playerInvite() const { return ReadField<int>("playerInvite"); }
        void playerInvite(int value) const { WriteField<int>("playerInvite", value); }
        void* members() const { return ReadField<void*>("members"); }
        void members(void* value) const { WriteField<void*>("members", value); }
        void* joined() const { return ReadField<void*>("joined"); }
        void joined(void* value) const { WriteField<void*>("joined", value); }
        void* coolSince() const { return ReadField<void*>("coolSince"); }
        void coolSince(void* value) const { WriteField<void*>("coolSince", value); }
        void* strikers() const { return ReadField<void*>("strikers"); }
        void strikers(void* value) const { WriteField<void*>("strikers", value); }
        void* invited() const { return ReadField<void*>("invited"); }
        void invited(void* value) const { WriteField<void*>("invited", value); }
        void* declined() const { return ReadField<void*>("declined"); }
        void declined(void* value) const { WriteField<void*>("declined", value); }
        void* declinedTick() const { return ReadField<void*>("declinedTick"); }
        void declinedTick(void* value) const { WriteField<void*>("declinedTick", value); }
        void* struck() const { return ReadField<void*>("struck"); }
        void struck(void* value) const { WriteField<void*>("struck", value); }
    };
}
