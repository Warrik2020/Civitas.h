#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class FieldMember : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FieldMember(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "FieldMember") {}
    public:
        int divisionId() const { return ReadField<int>("divisionId"); }
        void SetDivisionId(int value) const { WriteField<int>("divisionId", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int side() const { return ReadField<int>("side"); }
        void SetSide(int value) const { WriteField<int>("side", value); }
        int fightIndex() const { return ReadField<int>("fightIndex"); }
        void SetFightIndex(int value) const { WriteField<int>("fightIndex", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* entryPos() const { return ReadField<void*>("entryPos"); }
        void SetEntryPos(void* value) const { WriteField<void*>("entryPos", value); }
        void* lastStampPos() const { return ReadField<void*>("lastStampPos"); }
        void SetLastStampPos(void* value) const { WriteField<void*>("lastStampPos", value); }
        bool controllable() const { return ReadField<bool>("controllable"); }
        void SetControllable(bool value) const { WriteField<bool>("controllable", value); }
        float quietBattleSeconds() const { return ReadField<float>("quietBattleSeconds"); }
        void SetQuietBattleSeconds(float value) const { WriteField<float>("quietBattleSeconds", value); }
        float routBattleSeconds() const { return ReadField<float>("routBattleSeconds"); }
        void SetRoutBattleSeconds(float value) const { WriteField<float>("routBattleSeconds", value); }
        float withdrawBattleSeconds() const { return ReadField<float>("withdrawBattleSeconds"); }
        void SetWithdrawBattleSeconds(float value) const { WriteField<float>("withdrawBattleSeconds", value); }
        int startMen() const { return ReadField<int>("startMen"); }
        void SetStartMen(int value) const { WriteField<int>("startMen", value); }
    };
}
