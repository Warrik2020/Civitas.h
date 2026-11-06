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
        void id(int value) const { WriteField<int>("id", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        void* given() const { return ReadField<void*>("given"); }
        void given(void* value) const { WriteField<void*>("given", value); }
        void* family() const { return ReadField<void*>("family"); }
        void family(void* value) const { WriteField<void*>("family", value); }
        bool female() const { return ReadField<bool>("female"); }
        void female(bool value) const { WriteField<bool>("female", value); }
        int skill() const { return ReadField<int>("skill"); }
        void skill(int value) const { WriteField<int>("skill", value); }
        int attack() const { return ReadField<int>("attack"); }
        void attack(int value) const { WriteField<int>("attack", value); }
        int defence() const { return ReadField<int>("defence"); }
        void defence(int value) const { WriteField<int>("defence", value); }
        int planning() const { return ReadField<int>("planning"); }
        void planning(int value) const { WriteField<int>("planning", value); }
        int logistics() const { return ReadField<int>("logistics"); }
        void logistics(int value) const { WriteField<int>("logistics", value); }
        int traits() const { return ReadField<int>("traits"); }
        void traits(int value) const { WriteField<int>("traits", value); }
        int xp() const { return ReadField<int>("xp"); }
        void xp(int value) const { WriteField<int>("xp", value); }
        int rank() const { return ReadField<int>("rank"); }
        void rank(int value) const { WriteField<int>("rank", value); }
        int bornTick() const { return ReadField<int>("bornTick"); }
        void bornTick(int value) const { WriteField<int>("bornTick", value); }
    };
}
