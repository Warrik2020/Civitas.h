#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerLpNation : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerLpNation(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerLpNation") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int bornTick() const { return ReadField<int>("bornTick"); }
        void bornTick(int value) const { WriteField<int>("bornTick", value); }
        int capitalLost() const { return ReadField<int>("capitalLost"); }
        void capitalLost(int value) const { WriteField<int>("capitalLost", value); }
        int capitulated() const { return ReadField<int>("capitulated"); }
        void capitulated(int value) const { WriteField<int>("capitulated", value); }
        int unionBroke() const { return ReadField<int>("unionBroke"); }
        void unionBroke(int value) const { WriteField<int>("unionBroke", value); }
        int coup() const { return ReadField<int>("coup"); }
        void coup(int value) const { WriteField<int>("coup", value); }
        int revolt0() const { return ReadField<int>("revolt0"); }
        void revolt0(int value) const { WriteField<int>("revolt0", value); }
        int revolt1() const { return ReadField<int>("revolt1"); }
        void revolt1(int value) const { WriteField<int>("revolt1", value); }
        int lastWar() const { return ReadField<int>("lastWar"); }
        void lastWar(int value) const { WriteField<int>("lastWar", value); }
        int cooldownUntil() const { return ReadField<int>("cooldownUntil"); }
        void cooldownUntil(int value) const { WriteField<int>("cooldownUntil", value); }
        int pleaTick() const { return ReadField<int>("pleaTick"); }
        void pleaTick(int value) const { WriteField<int>("pleaTick", value); }
        int collapseLowSince() const { return ReadField<int>("collapseLowSince"); }
        void collapseLowSince(int value) const { WriteField<int>("collapseLowSince", value); }
        bool crisis() const { return ReadField<bool>("crisis"); }
        void crisis(bool value) const { WriteField<bool>("crisis", value); }
        bool menaceOn() const { return ReadField<bool>("menaceOn"); }
        void menaceOn(bool value) const { WriteField<bool>("menaceOn", value); }
        bool collapseOn() const { return ReadField<bool>("collapseOn"); }
        void collapseOn(bool value) const { WriteField<bool>("collapseOn", value); }
        void* history() const { return ReadField<void*>("history"); }
        void history(void* value) const { WriteField<void*>("history", value); }
        void* conqTick() const { return ReadField<void*>("conqTick"); }
        void conqTick(void* value) const { WriteField<void*>("conqTick", value); }
        void* conqVictim() const { return ReadField<void*>("conqVictim"); }
        void conqVictim(void* value) const { WriteField<void*>("conqVictim", value); }
        void* rivals() const { return ReadField<void*>("rivals"); }
        void rivals(void* value) const { WriteField<void*>("rivals", value); }
    };
}
