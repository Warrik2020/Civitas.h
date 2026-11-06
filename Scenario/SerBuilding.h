#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerBuilding : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerBuilding(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerBuilding") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int tile() const { return ReadField<int>("tile"); }
        void SetTile(int value) const { WriteField<int>("tile", value); }
        int state() const { return ReadField<int>("state"); }
        void SetState(int value) const { WriteField<int>("state", value); }
        int type() const { return ReadField<int>("type"); }
        void SetType(int value) const { WriteField<int>("type", value); }
        float progress() const { return ReadField<float>("progress"); }
        void SetProgress(float value) const { WriteField<float>("progress", value); }
        float integrity() const { return ReadField<float>("integrity"); }
        void SetIntegrity(float value) const { WriteField<float>("integrity", value); }
        int tier() const { return ReadField<int>("tier"); }
        void SetTier(int value) const { WriteField<int>("tier", value); }
        int upgradeType() const { return ReadField<int>("upgradeType"); }
        void SetUpgradeType(int value) const { WriteField<int>("upgradeType", value); }
        int upgradeTier() const { return ReadField<int>("upgradeTier"); }
        void SetUpgradeTier(int value) const { WriteField<int>("upgradeTier", value); }
        float upgradeProgress() const { return ReadField<float>("upgradeProgress"); }
        void SetUpgradeProgress(float value) const { WriteField<float>("upgradeProgress", value); }
    };
}
