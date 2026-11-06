#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AggressionBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AggressionBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AggressionBalance") {}
    public:
        float Max_() const { return ReadStaticField<float>("Max"); }
        int LogSize() const { return ReadStaticField<int>("LogSize"); }
        float HalfLifeYears() const { return ReadStaticField<float>("HalfLifeYears"); }
        float WarDeclared() const { return ReadStaticField<float>("WarDeclared"); }
        float PaidWar() const { return ReadStaticField<float>("PaidWar"); }
        float PaidForWar() const { return ReadStaticField<float>("PaidForWar"); }
        float PactBroken() const { return ReadStaticField<float>("PactBroken"); }
        float AllianceBroken() const { return ReadStaticField<float>("AllianceBroken"); }
        float Ultimatum() const { return ReadStaticField<float>("Ultimatum"); }
        float VassalDemand() const { return ReadStaticField<float>("VassalDemand"); }
        float AnnexDemand() const { return ReadStaticField<float>("AnnexDemand"); }
        float Annexation() const { return ReadStaticField<float>("Annexation"); }
        float AnnexationPerTile() const { return ReadStaticField<float>("AnnexationPerTile"); }
        float AnnexationCap() const { return ReadStaticField<float>("AnnexationCap"); }
        float LandTakenPerTile() const { return ReadStaticField<float>("LandTakenPerTile"); }
        float LandTakenCap() const { return ReadStaticField<float>("LandTakenCap"); }
        float Vassalised() const { return ReadStaticField<float>("Vassalised"); }
        float PolityImposed() const { return ReadStaticField<float>("PolityImposed"); }
        float ExpelPerTileWorth() const { return ReadStaticField<float>("ExpelPerTileWorth"); }
        float PurgeMul() const { return ReadStaticField<float>("PurgeMul"); }
        float ExpelYearCap() const { return ReadStaticField<float>("ExpelYearCap"); }
        float Incursion() const { return ReadStaticField<float>("Incursion"); }
        float IncursionDefied() const { return ReadStaticField<float>("IncursionDefied"); }
        float Lockdown() const { return ReadStaticField<float>("Lockdown"); }
        float TruceBroken() const { return ReadStaticField<float>("TruceBroken"); }
        float PledgeBroken() const { return ReadStaticField<float>("PledgeBroken"); }
        float JustifiedWarMul() const { return ReadStaticField<float>("JustifiedWarMul"); }
        int MassingIntervalTicks() const { return ReadStaticField<int>("MassingIntervalTicks"); }
        int MassingMinDivisions() const { return ReadStaticField<int>("MassingMinDivisions"); }
        float MassingMirrorRatio() const { return ReadStaticField<float>("MassingMirrorRatio"); }
        float MassingPerExcess() const { return ReadStaticField<float>("MassingPerExcess"); }
        float MassingCap() const { return ReadStaticField<float>("MassingCap"); }
        float MassingEase() const { return ReadStaticField<float>("MassingEase"); }
        float FreeBand() const { return ReadStaticField<float>("FreeBand"); }
        float OpinionWeight() const { return ReadStaticField<float>("OpinionWeight"); }
        float MetProximity() const { return ReadStaticField<float>("MetProximity"); }
        float WaryBar() const { return ReadStaticField<float>("WaryBar"); }
        float ArmyCapThreatShare() const { return ReadStaticField<float>("ArmyCapThreatShare"); }
        float DealTrustWeight() const { return ReadStaticField<float>("DealTrustWeight"); }
        float GoodwillTrustWeight() const { return ReadStaticField<float>("GoodwillTrustWeight"); }
    };
}
