#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsBalance") {}
    public:
        float ReviewDays() const { return ReadStaticField<float>("ReviewDays"); }
        float OpenChance() const { return ReadStaticField<float>("OpenChance"); }
        float BadTimesMul() const { return ReadStaticField<float>("BadTimesMul"); }
        float RecentIncidentMul() const { return ReadStaticField<float>("RecentIncidentMul"); }
        float IdleMul() const { return ReadStaticField<float>("IdleMul"); }
        int BaseCap() const { return ReadStaticField<int>("BaseCap"); }
        int BadTimesCap() const { return ReadStaticField<int>("BadTimesCap"); }
        int SpawnSlack() const { return ReadStaticField<int>("SpawnSlack"); }
        float HardCooldownYears() const { return ReadStaticField<float>("HardCooldownYears"); }
        int MinNationAgeTicks() const { return ReadStaticField<int>("MinNationAgeTicks"); }
        float CauseRepeatPoints() const { return ReadStaticField<float>("CauseRepeatPoints"); }
        float RecentDays() const { return ReadStaticField<float>("RecentDays"); }
        float DefaultCooldownYears() const { return ReadStaticField<float>("DefaultCooldownYears"); }
        float DefaultWaitMinDays() const { return ReadStaticField<float>("DefaultWaitMinDays"); }
        float DefaultWaitMaxDays() const { return ReadStaticField<float>("DefaultWaitMaxDays"); }
        float ChoiceDeadlineDays() const { return ReadStaticField<float>("ChoiceDeadlineDays"); }
        float BigChoiceDeadlineDays() const { return ReadStaticField<float>("BigChoiceDeadlineDays"); }
        int LogKeep() const { return ReadStaticField<int>("LogKeep"); }
        int ClosedKeepPlayer() const { return ReadStaticField<int>("ClosedKeepPlayer"); }
        int ClosedKeepOther() const { return ReadStaticField<int>("ClosedKeepOther"); }
        int ClosedKeepMax() const { return ReadStaticField<int>("ClosedKeepMax"); }
        int FiguresPerNation() const { return ReadStaticField<int>("FiguresPerNation"); }
        float FigureMinAge() const { return ReadStaticField<float>("FigureMinAge"); }
        float FigureMaxAge() const { return ReadStaticField<float>("FigureMaxAge"); }
        float FigureOldAge() const { return ReadStaticField<float>("FigureOldAge"); }
        float FigureFemaleChance() const { return ReadStaticField<float>("FigureFemaleChance"); }
        float FigureForgetYears() const { return ReadStaticField<float>("FigureForgetYears"); }
        float MarkPresentStrength() const { return ReadStaticField<float>("MarkPresentStrength"); }
        bool LogYearly() const { return ReadStaticField<bool>("LogYearly"); }
        void SetLogYearly(bool value) const { WriteStaticField<bool>("LogYearly", value); }
    };
}
