#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerLpOffer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerLpOffer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerLpOffer") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int arcId() const { return ReadField<int>("arcId"); }
        void SetArcId(int value) const { WriteField<int>("arcId", value); }
        int record() const { return ReadField<int>("record"); }
        void SetRecord(int value) const { WriteField<int>("record", value); }
        int from() const { return ReadField<int>("from"); }
        void SetFrom(int value) const { WriteField<int>("from", value); }
        int against() const { return ReadField<int>("against"); }
        void SetAgainst(int value) const { WriteField<int>("against", value); }
        int created() const { return ReadField<int>("created"); }
        void SetCreated(int value) const { WriteField<int>("created", value); }
        int deadline() const { return ReadField<int>("deadline"); }
        void SetDeadline(int value) const { WriteField<int>("deadline", value); }
        float gold() const { return ReadField<float>("gold"); }
        void SetGold(float value) const { WriteField<float>("gold", value); }
    };
}
