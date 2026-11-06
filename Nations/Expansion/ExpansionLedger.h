#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Expansion
{
    class ExpansionLedger : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ExpansionLedger(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Expansion", "ExpansionLedger") {}
    public:
        float settlers() const { return ReadField<float>("settlers"); }
        void SetSettlers(float value) const { WriteField<float>("settlers", value); }
        float settlersPerTile() const { return ReadField<float>("settlersPerTile"); }
        void SetSettlersPerTile(float value) const { WriteField<float>("settlersPerTile", value); }
        float fund() const { return ReadField<float>("fund"); }
        void SetFund(float value) const { WriteField<float>("fund", value); }
        float goldPerTile() const { return ReadField<float>("goldPerTile"); }
        void SetGoldPerTile(float value) const { WriteField<float>("goldPerTile", value); }
        float goldSpent() const { return ReadField<float>("goldSpent"); }
        void SetGoldSpent(float value) const { WriteField<float>("goldSpent", value); }
        bool open() const { return ReadField<bool>("open"); }
        void SetOpen(bool value) const { WriteField<bool>("open", value); }
        int ceiling() const { return ReadField<int>("ceiling"); }
        void SetCeiling(int value) const { WriteField<int>("ceiling", value); }
        int burst() const { return ReadField<int>("burst"); }
        void SetBurst(int value) const { WriteField<int>("burst", value); }
        int claimed() const { return ReadField<int>("claimed"); }
        void SetClaimed(int value) const { WriteField<int>("claimed", value); }
        float throttle() const { return ReadField<float>("throttle"); }
        void SetThrottle(float value) const { WriteField<float>("throttle", value); }
        int wanted() const { return ReadField<int>("wanted"); }
        void SetWanted(int value) const { WriteField<int>("wanted", value); }
        int capX() const { return ReadField<int>("capX"); }
        void SetCapX(int value) const { WriteField<int>("capX", value); }
        int capY() const { return ReadField<int>("capY"); }
        void SetCapY(int value) const { WriteField<int>("capY", value); }
        float realmRadius() const { return ReadField<float>("realmRadius"); }
        void SetRealmRadius(float value) const { WriteField<float>("realmRadius", value); }
        bool seeded() const { return ReadField<bool>("seeded"); }
        void SetSeeded(bool value) const { WriteField<bool>("seeded", value); }
    };
}
