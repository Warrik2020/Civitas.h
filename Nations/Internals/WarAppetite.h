#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class WarAppetite : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarAppetite(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "WarAppetite") {}
    public:
        float Score(void* n, void* it, void* rel, int other, void* ctx, void* leader, float attacker, float defender, float armyRatio, float panMul, float lpMul, float resMul, float goalMul = 1f) const { void* args[] = { n, it, rel, &other, &ctx, leader, &attacker, &defender, &armyRatio, &panMul, &lpMul, &resMul, &goalMul }; return CallStaticValue<float>("Score", args, 13); }
        float DeclareChance(void* leader, float appetite, float mul, int intervalTicks, int thinkMul, float ticksPerYear) const { void* args[] = { leader, &appetite, &mul, &intervalTicks, &thinkMul, &ticksPerYear }; return CallStaticValue<float>("DeclareChance", args, 6); }
        float Draw() const { return CallStaticValue<float>("Draw", nullptr, 0); }
        void Tally(int gate) const { void* args[] = { &gate }; CallStatic("Tally", args, 1); }
        int Count(int gate) const { void* args[] = { &gate }; return CallStaticValue<int>("Count", args, 1); }
        int CountOnPlayer(int gate) const { void* args[] = { &gate }; return CallStaticValue<int>("CountOnPlayer", args, 1); }
        void TallyPeace(bool terms, int tiles) const { void* args[] = { &terms, &tiles }; CallStatic("TallyPeace", args, 2); }
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void SetEnabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        bool SettleWithTerms() const { return ReadStaticField<bool>("SettleWithTerms"); }
        void SetSettleWithTerms(bool value) const { WriteStaticField<bool>("SettleWithTerms", value); }
        bool LogYearly() const { return ReadStaticField<bool>("LogYearly"); }
        void SetLogYearly(bool value) const { WriteStaticField<bool>("LogYearly", value); }
        float Threshold() const { return ReadStaticField<float>("Threshold"); }
        float HostilityPerOpinion() const { return ReadStaticField<float>("HostilityPerOpinion"); }
        float HostilityMin() const { return ReadStaticField<float>("HostilityMin"); }
        float HostilityMax() const { return ReadStaticField<float>("HostilityMax"); }
        float HungerWeight() const { return ReadStaticField<float>("HungerWeight"); }
        float HungerOpenLandMul() const { return ReadStaticField<float>("HungerOpenLandMul"); }
        float ContentItch() const { return ReadStaticField<float>("ContentItch"); }
        float WeakWeight() const { return ReadStaticField<float>("WeakWeight"); }
        float WeakFrom() const { return ReadStaticField<float>("WeakFrom"); }
        float WeakSpan() const { return ReadStaticField<float>("WeakSpan"); }
        float ArmyWeight() const { return ReadStaticField<float>("ArmyWeight"); }
        float ArmyFrom() const { return ReadStaticField<float>("ArmyFrom"); }
        float ArmySpan() const { return ReadStaticField<float>("ArmySpan"); }
        float DistractedWeight() const { return ReadStaticField<float>("DistractedWeight"); }
        float GrudgeWeight() const { return ReadStaticField<float>("GrudgeWeight"); }
        float CauseWeight() const { return ReadStaticField<float>("CauseWeight"); }
        float GoodwillWeight() const { return ReadStaticField<float>("GoodwillWeight"); }
        float TemperMin() const { return ReadStaticField<float>("TemperMin"); }
        float TemperMax() const { return ReadStaticField<float>("TemperMax"); }
        float StrainWeight() const { return ReadStaticField<float>("StrainWeight"); }
        float DeclarePerYear() const { return ReadStaticField<float>("DeclarePerYear"); }
        float HazardAppetiteCap() const { return ReadStaticField<float>("HazardAppetiteCap"); }
        float SettleMinScore() const { return ReadStaticField<float>("SettleMinScore"); }
        void* LastReadiness() const { return ReadStaticField<void*>("LastReadiness"); }
        void SetLastReadiness(void* value) const { WriteStaticField<void*>("LastReadiness", value); }
        int PlayerTarget() const { return ReadStaticField<int>("PlayerTarget"); }
        void SetPlayerTarget(int value) const { WriteStaticField<int>("PlayerTarget", value); }
        int Target() const { return ReadStaticField<int>("Target"); }
        void SetTarget(int value) const { WriteStaticField<int>("Target", value); }
    };
}
