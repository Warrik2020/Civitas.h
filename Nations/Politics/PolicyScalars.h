#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class PolicyScalars : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PolicyScalars(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "PolicyScalars") {}
    public:
        float researchSpeedMul() const { return ReadField<float>("researchSpeedMul"); }
        void SetResearchSpeedMul(float value) const { WriteField<float>("researchSpeedMul", value); }
        float treasuryFloor() const { return ReadField<float>("treasuryFloor"); }
        void SetTreasuryFloor(float value) const { WriteField<float>("treasuryFloor", value); }
        bool lockIdentityPush() const { return ReadField<bool>("lockIdentityPush"); }
        void SetLockIdentityPush(bool value) const { WriteField<bool>("lockIdentityPush", value); }
        float cityGrowthMul() const { return ReadField<float>("cityGrowthMul"); }
        void SetCityGrowthMul(float value) const { WriteField<float>("cityGrowthMul", value); }
        float pacificationSpeedMul() const { return ReadField<float>("pacificationSpeedMul"); }
        void SetPacificationSpeedMul(float value) const { WriteField<float>("pacificationSpeedMul", value); }
        bool minorityBonuses() const { return ReadField<bool>("minorityBonuses"); }
        void SetMinorityBonuses(bool value) const { WriteField<bool>("minorityBonuses", value); }
        int standingFloor() const { return ReadField<int>("standingFloor"); }
        void SetStandingFloor(int value) const { WriteField<int>("standingFloor", value); }
        int standingCap() const { return ReadField<int>("standingCap"); }
        void SetStandingCap(int value) const { WriteField<int>("standingCap", value); }
        int standingDefault() const { return ReadField<int>("standingDefault"); }
        void SetStandingDefault(int value) const { WriteField<int>("standingDefault", value); }
        float standingCooldownMul() const { return ReadField<float>("standingCooldownMul"); }
        void SetStandingCooldownMul(float value) const { WriteField<float>("standingCooldownMul", value); }
        void* Identity() const { return ReadStaticField<void*>("Identity"); }
    };
}
