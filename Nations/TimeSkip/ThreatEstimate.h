#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class ThreatEstimate : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ThreatEstimate(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "ThreatEstimate") {}
    public:
        float PWithin(int months) const { void* args[] = { &months }; return CallValue<float>("PWithin", args, 1); }
        int aggressorId() const { return ReadField<int>("aggressorId"); }
        void SetAggressorId(int value) const { WriteField<int>("aggressorId", value); }
        int targetId() const { return ReadField<int>("targetId"); }
        void SetTargetId(int value) const { WriteField<int>("targetId", value); }
        float appetite() const { return ReadField<float>("appetite"); }
        void SetAppetite(float value) const { WriteField<float>("appetite", value); }
        float pPerMonth() const { return ReadField<float>("pPerMonth"); }
        void SetPPerMonth(float value) const { WriteField<float>("pPerMonth", value); }
        int delayMonths() const { return ReadField<int>("delayMonths"); }
        void SetDelayMonths(int value) const { WriteField<int>("delayMonths", value); }
        bool staging() const { return ReadField<bool>("staging"); }
        void SetStaging(bool value) const { WriteField<bool>("staging", value); }
        float StagedPerMonth() const { return ReadStaticField<float>("StagedPerMonth"); }
    };
}
