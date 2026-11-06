#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class TimeSkipBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TimeSkipBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "TimeSkipBalance") {}
    public:
        void* Months() const { return ReadStaticField<void*>("Months"); }
        int MilitarySubStepDays() const { return ReadStaticField<int>("MilitarySubStepDays"); }
        float StateAuditMonths() const { return ReadStaticField<float>("StateAuditMonths"); }
        float AffairsReviewMonths() const { return ReadStaticField<float>("AffairsReviewMonths"); }
        int RoadSearchesPerStep() const { return ReadStaticField<int>("RoadSearchesPerStep"); }
        float DriftPerMonthShare() const { return ReadStaticField<float>("DriftPerMonthShare"); }
        float DriftAlpha() const { return ReadStaticField<float>("DriftAlpha"); }
        float DriftNoise() const { return ReadStaticField<float>("DriftNoise"); }
        float OverseasDriftMul() const { return ReadStaticField<float>("OverseasDriftMul"); }
        float MonthlyLossShare() const { return ReadStaticField<float>("MonthlyLossShare"); }
        float BrokenScoreShare() const { return ReadStaticField<float>("BrokenScoreShare"); }
        float BrokenStrengthRatio() const { return ReadStaticField<float>("BrokenStrengthRatio"); }
        float LandWarDriftShare() const { return ReadStaticField<float>("LandWarDriftShare"); }
        float SectorTiles() const { return ReadStaticField<float>("SectorTiles"); }
        float EngageSectors() const { return ReadStaticField<float>("EngageSectors"); }
        float ReserveCommit() const { return ReadStaticField<float>("ReserveCommit"); }
        float NoBorderReserveWeight() const { return ReadStaticField<float>("NoBorderReserveWeight"); }
        float DefenderMul() const { return ReadStaticField<float>("DefenderMul"); }
        float MinAttackEdge() const { return ReadStaticField<float>("MinAttackEdge"); }
        float SectorNoise() const { return ReadStaticField<float>("SectorNoise"); }
        float AdvanceShareOfMarch() const { return ReadStaticField<float>("AdvanceShareOfMarch"); }
        float WedgeHalfWidthShare() const { return ReadStaticField<float>("WedgeHalfWidthShare"); }
        float WedgeTaper() const { return ReadStaticField<float>("WedgeTaper"); }
        int MaxTilesPerSector() const { return ReadStaticField<int>("MaxTilesPerSector"); }
        float AiPush() const { return ReadStaticField<float>("AiPush"); }
        float CityPopUnit() const { return ReadStaticField<float>("CityPopUnit"); }
        float CapitalTargetMul() const { return ReadStaticField<float>("CapitalTargetMul"); }
        float LiberateTargetMul() const { return ReadStaticField<float>("LiberateTargetMul"); }
        float TargetDistancePad() const { return ReadStaticField<float>("TargetDistancePad"); }
        float HeldStateWeight() const { return ReadStaticField<float>("HeldStateWeight"); }
        float PushStop() const { return ReadStaticField<float>("PushStop"); }
        float PushSlow() const { return ReadStaticField<float>("PushSlow"); }
        float PushMedium() const { return ReadStaticField<float>("PushMedium"); }
        float PushHard() const { return ReadStaticField<float>("PushHard"); }
        void* ThreatBands() const { return ReadStaticField<void*>("ThreatBands"); }
        int ThreatMonths() const { return ReadStaticField<int>("ThreatMonths"); }
        int LandLossMinTiles() const { return ReadStaticField<int>("LandLossMinTiles"); }
        float LandLossShare() const { return ReadStaticField<float>("LandLossShare"); }
        void* LandDownBands() const { return ReadStaticField<void*>("LandDownBands"); }
        int DivisionLossMin() const { return ReadStaticField<int>("DivisionLossMin"); }
        float DivisionLossShare() const { return ReadStaticField<float>("DivisionLossShare"); }
        int SnoozeMonths() const { return ReadStaticField<int>("SnoozeMonths"); }
        int ReArmMonths() const { return ReadStaticField<int>("ReArmMonths"); }
        int MaxSamples() const { return ReadStaticField<int>("MaxSamples"); }
        int MaxPlayerEvents() const { return ReadStaticField<int>("MaxPlayerEvents"); }
        int MaxWorldEvents() const { return ReadStaticField<int>("MaxWorldEvents"); }
    };
}
