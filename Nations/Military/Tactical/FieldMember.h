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
        void divisionId(int value) const { WriteField<int>("divisionId", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int side() const { return ReadField<int>("side"); }
        void side(int value) const { WriteField<int>("side", value); }
        int fightIndex() const { return ReadField<int>("fightIndex"); }
        void fightIndex(int value) const { WriteField<int>("fightIndex", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        void* entryPos() const { return ReadField<void*>("entryPos"); }
        void entryPos(void* value) const { WriteField<void*>("entryPos", value); }
        void* lastStampPos() const { return ReadField<void*>("lastStampPos"); }
        void lastStampPos(void* value) const { WriteField<void*>("lastStampPos", value); }
        bool controllable() const { return ReadField<bool>("controllable"); }
        void controllable(bool value) const { WriteField<bool>("controllable", value); }
        float quietBattleSeconds() const { return ReadField<float>("quietBattleSeconds"); }
        void quietBattleSeconds(float value) const { WriteField<float>("quietBattleSeconds", value); }
        float routBattleSeconds() const { return ReadField<float>("routBattleSeconds"); }
        void routBattleSeconds(float value) const { WriteField<float>("routBattleSeconds", value); }
        float withdrawBattleSeconds() const { return ReadField<float>("withdrawBattleSeconds"); }
        void withdrawBattleSeconds(float value) const { WriteField<float>("withdrawBattleSeconds", value); }
        int startMen() const { return ReadField<int>("startMen"); }
        void startMen(int value) const { WriteField<int>("startMen", value); }
    };
}
