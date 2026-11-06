#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Industry
{
    class StateBuilding : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateBuilding(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Industry", "StateBuilding") {}
    public:
        int stateId() const { return ReadField<int>("stateId"); }
        void stateId(int value) const { WriteField<int>("stateId", value); }
        int type() const { return ReadField<int>("type"); }
        void type(int value) const { WriteField<int>("type", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        float progress() const { return ReadField<float>("progress"); }
        void progress(float value) const { WriteField<float>("progress", value); }
        float integrity() const { return ReadField<float>("integrity"); }
        void integrity(float value) const { WriteField<float>("integrity", value); }
        int8_t tier() const { return ReadField<int8_t>("tier"); }
        void tier(int8_t value) const { WriteField<int8_t>("tier", value); }
        int upgradeType() const { return ReadField<int>("upgradeType"); }
        void upgradeType(int value) const { WriteField<int>("upgradeType", value); }
        int8_t upgradeTier() const { return ReadField<int8_t>("upgradeTier"); }
        void upgradeTier(int8_t value) const { WriteField<int8_t>("upgradeTier", value); }
        float upgradeProgress() const { return ReadField<float>("upgradeProgress"); }
        void upgradeProgress(float value) const { WriteField<float>("upgradeProgress", value); }
    };
}
