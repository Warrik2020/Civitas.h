#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerGeneral : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerGeneral(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerGeneral") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        void* given() const { return ReadField<void*>("given"); }
        void SetGiven(void* value) const { WriteField<void*>("given", value); }
        void* family() const { return ReadField<void*>("family"); }
        void SetFamily(void* value) const { WriteField<void*>("family", value); }
        bool female() const { return ReadField<bool>("female"); }
        void SetFemale(bool value) const { WriteField<bool>("female", value); }
        int skill() const { return ReadField<int>("skill"); }
        void SetSkill(int value) const { WriteField<int>("skill", value); }
        int attack() const { return ReadField<int>("attack"); }
        void SetAttack(int value) const { WriteField<int>("attack", value); }
        int defence() const { return ReadField<int>("defence"); }
        void SetDefence(int value) const { WriteField<int>("defence", value); }
        int planning() const { return ReadField<int>("planning"); }
        void SetPlanning(int value) const { WriteField<int>("planning", value); }
        int logistics() const { return ReadField<int>("logistics"); }
        void SetLogistics(int value) const { WriteField<int>("logistics", value); }
        int traits() const { return ReadField<int>("traits"); }
        void SetTraits(int value) const { WriteField<int>("traits", value); }
        int xp() const { return ReadField<int>("xp"); }
        void SetXp(int value) const { WriteField<int>("xp", value); }
        int rank() const { return ReadField<int>("rank"); }
        void SetRank(int value) const { WriteField<int>("rank", value); }
        int bornTick() const { return ReadField<int>("bornTick"); }
        void SetBornTick(int value) const { WriteField<int>("bornTick", value); }
    };
}
