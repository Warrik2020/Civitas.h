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
        int64_t Key(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallStaticValue<int64_t>("Key", __callArgs, 2); }
        int cityA() const { return ReadField<int>("cityA"); }
        void cityA(int value) const { WriteField<int>("cityA", value); }
        int cityB() const { return ReadField<int>("cityB"); }
        void cityB(int value) const { WriteField<int>("cityB", value); }
        int builderNationId() const { return ReadField<int>("builderNationId"); }
        void builderNationId(int value) const { WriteField<int>("builderNationId", value); }
        void* path() const { return ReadField<void*>("path"); }
        void path(void* value) const { WriteField<void*>("path", value); }
        float totalLength() const { return ReadField<float>("totalLength"); }
        void totalLength(float value) const { WriteField<float>("totalLength", value); }
        float revealed() const { return ReadField<float>("revealed"); }
        void revealed(float value) const { WriteField<float>("revealed", value); }
        bool complete() const { return ReadField<bool>("complete"); }
        void complete(bool value) const { WriteField<bool>("complete", value); }
        bool dirty() const { return ReadField<bool>("dirty"); }
        void dirty(bool value) const { WriteField<bool>("dirty", value); }
        int level() const { return ReadField<int>("level"); }
        void level(int value) const { WriteField<int>("level", value); }
        int upgradeTo() const { return ReadField<int>("upgradeTo"); }
        void upgradeTo(int value) const { WriteField<int>("upgradeTo", value); }
        float upgradeRevealed() const { return ReadField<float>("upgradeRevealed"); }
        void upgradeRevealed(float value) const { WriteField<float>("upgradeRevealed", value); }
    };
}
