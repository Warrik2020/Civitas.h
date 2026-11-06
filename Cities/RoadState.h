#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Cities
{
    class RoadState : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RoadState(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities", "RoadState") {}
    public:
        int64_t Key(int a, int b) const { void* args[] = { &a, &b }; return CallStaticValue<int64_t>("Key", args, 2); }
        int cityA() const { return ReadField<int>("cityA"); }
        void SetCityA(int value) const { WriteField<int>("cityA", value); }
        int cityB() const { return ReadField<int>("cityB"); }
        void SetCityB(int value) const { WriteField<int>("cityB", value); }
        int builderNationId() const { return ReadField<int>("builderNationId"); }
        void SetBuilderNationId(int value) const { WriteField<int>("builderNationId", value); }
        void* path() const { return ReadField<void*>("path"); }
        void SetPath(void* value) const { WriteField<void*>("path", value); }
        float totalLength() const { return ReadField<float>("totalLength"); }
        void SetTotalLength(float value) const { WriteField<float>("totalLength", value); }
        float revealed() const { return ReadField<float>("revealed"); }
        void SetRevealed(float value) const { WriteField<float>("revealed", value); }
        bool complete() const { return ReadField<bool>("complete"); }
        void SetComplete(bool value) const { WriteField<bool>("complete", value); }
        bool dirty() const { return ReadField<bool>("dirty"); }
        void SetDirty(bool value) const { WriteField<bool>("dirty", value); }
        int level() const { return ReadField<int>("level"); }
        void SetLevel(int value) const { WriteField<int>("level", value); }
        int upgradeTo() const { return ReadField<int>("upgradeTo"); }
        void SetUpgradeTo(int value) const { WriteField<int>("upgradeTo", value); }
        float upgradeRevealed() const { return ReadField<float>("upgradeRevealed"); }
        void SetUpgradeRevealed(float value) const { WriteField<float>("upgradeRevealed", value); }
    };
}
