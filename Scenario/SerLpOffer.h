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
        void id(int value) const { WriteField<int>("id", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int arcId() const { return ReadField<int>("arcId"); }
        void arcId(int value) const { WriteField<int>("arcId", value); }
        int record() const { return ReadField<int>("record"); }
        void record(int value) const { WriteField<int>("record", value); }
        int from() const { return ReadField<int>("from"); }
        void from(int value) const { WriteField<int>("from", value); }
        int against() const { return ReadField<int>("against"); }
        void against(int value) const { WriteField<int>("against", value); }
        int created() const { return ReadField<int>("created"); }
        void created(int value) const { WriteField<int>("created", value); }
        int deadline() const { return ReadField<int>("deadline"); }
        void deadline(int value) const { WriteField<int>("deadline", value); }
        float gold() const { return ReadField<float>("gold"); }
        void gold(float value) const { WriteField<float>("gold", value); }
    };
}
