#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class TimeSkipOptions : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TimeSkipOptions(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "TimeSkipOptions") {}
    public:
        bool Has(int g) const { void* args[] = { &g }; return CallValue<bool>("Has", args, 1); }
        int ToFlag(int g) const { void* args[] = { &g }; return CallStaticValue<int>("ToFlag", args, 1); }
        int months() const { return ReadField<int>("months"); }
        void SetMonths(int value) const { WriteField<int>("months", value); }
        int groups() const { return ReadField<int>("groups"); }
        void SetGroups(int value) const { WriteField<int>("groups", value); }
        bool armiesArrive() const { return ReadField<bool>("armiesArrive"); }
        void SetArmiesArrive(bool value) const { WriteField<bool>("armiesArrive", value); }
        bool milestones() const { return ReadField<bool>("milestones"); }
        void SetMilestones(bool value) const { WriteField<bool>("milestones", value); }
        float treasuryTarget() const { return ReadField<float>("treasuryTarget"); }
        void SetTreasuryTarget(float value) const { WriteField<float>("treasuryTarget", value); }
        float incomeTarget() const { return ReadField<float>("incomeTarget"); }
        void SetIncomeTarget(float value) const { WriteField<float>("incomeTarget", value); }
    };
}
