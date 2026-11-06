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
        void SetProposerId(int value) const { WriteField<int>("proposerId", value); }
        int targetId() const { return ReadField<int>("targetId"); }
        void SetTargetId(int value) const { WriteField<int>("targetId", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int seniorId() const { return ReadField<int>("seniorId"); }
        void SetSeniorId(int value) const { WriteField<int>("seniorId", value); }
        int joinRulerId() const { return ReadField<int>("joinRulerId"); }
        void SetJoinRulerId(int value) const { WriteField<int>("joinRulerId", value); }
        int ticksLeft() const { return ReadField<int>("ticksLeft"); }
        void SetTicksLeft(int value) const { WriteField<int>("ticksLeft", value); }
    };
}
