#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerUnionOffer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerUnionOffer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerUnionOffer") {}
    public:
        int proposerId() const { return ReadField<int>("proposerId"); }
        void proposerId(int value) const { WriteField<int>("proposerId", value); }
        int targetId() const { return ReadField<int>("targetId"); }
        void targetId(int value) const { WriteField<int>("targetId", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int seniorId() const { return ReadField<int>("seniorId"); }
        void seniorId(int value) const { WriteField<int>("seniorId", value); }
        int joinRulerId() const { return ReadField<int>("joinRulerId"); }
        void joinRulerId(int value) const { WriteField<int>("joinRulerId", value); }
        int ticksLeft() const { return ReadField<int>("ticksLeft"); }
        void ticksLeft(int value) const { WriteField<int>("ticksLeft", value); }
    };
}
