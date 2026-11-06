#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PanNationalBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PanNationalBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PanNationalBalance") {}
    public:
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void Enabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        int KinMeetMax() const { return ReadStaticField<int>("KinMeetMax"); }
        int KinMeetTop() const { return ReadStaticField<int>("KinMeetTop"); }
        float KinOpinion() const { return ReadStaticField<float>("KinOpinion"); }
        float FightsKinMalus() const { return ReadStaticField<float>("FightsKinMalus"); }
        float AllianceBonus() const { return ReadStaticField<float>("AllianceBonus"); }
        float AllianceBonusCarriers() const { return ReadStaticField<float>("AllianceBonusCarriers"); }
        float AllianceGateRelief() const { return ReadStaticField<float>("AllianceGateRelief"); }
        float FratricideMul() const { return ReadStaticField<float>("FratricideMul"); }
        float KinUnionScore() const { return ReadStaticField<float>("KinUnionScore"); }
        float KinBorderMul() const { return ReadStaticField<float>("KinBorderMul"); }
        float KinProposalMul() const { return ReadStaticField<float>("KinProposalMul"); }
        float OddsKin() const { return ReadStaticField<float>("OddsKin"); }
        float OddsGlory() const { return ReadStaticField<float>("OddsGlory"); }
        float KinCompleteRatio() const { return ReadStaticField<float>("KinCompleteRatio"); }
        float UnionLoyaltyKin() const { return ReadStaticField<float>("UnionLoyaltyKin"); }
        float UnionLoyaltyForeign() const { return ReadStaticField<float>("UnionLoyaltyForeign"); }
        float TreatyLossMin() const { return ReadStaticField<float>("TreatyLossMin"); }
        float TreatyWoundMul() const { return ReadStaticField<float>("TreatyWoundMul"); }
        float FoldWoundMul() const { return ReadStaticField<float>("FoldWoundMul"); }
        float ShardWound() const { return ReadStaticField<float>("ShardWound"); }
        int ShardMax() const { return ReadStaticField<int>("ShardMax"); }
        float CollapseLossMin() const { return ReadStaticField<float>("CollapseLossMin"); }
        float CollapseWoundMul() const { return ReadStaticField<float>("CollapseWoundMul"); }
        float ConqueredWound() const { return ReadStaticField<float>("ConqueredWound"); }
        float SameFallDays() const { return ReadStaticField<float>("SameFallDays"); }
        int MinRealmTiles() const { return ReadStaticField<int>("MinRealmTiles"); }
        float CensusDays() const { return ReadStaticField<float>("CensusDays"); }
        float PeakWindowYears() const { return ReadStaticField<float>("PeakWindowYears"); }
        float HalfLifeYears() const { return ReadStaticField<float>("HalfLifeYears"); }
        float MinFervor() const { return ReadStaticField<float>("MinFervor"); }
        float GloryKinOpinion() const { return ReadStaticField<float>("GloryKinOpinion"); }
        float VictorOpinion() const { return ReadStaticField<float>("VictorOpinion"); }
        float HolderOpinion() const { return ReadStaticField<float>("HolderOpinion"); }
        float HolderMinShare() const { return ReadStaticField<float>("HolderMinShare"); }
        float RevanchWarRoll() const { return ReadStaticField<float>("RevanchWarRoll"); }
        float HistoricClaimShare() const { return ReadStaticField<float>("HistoricClaimShare"); }
        float HistoricClaimStop() const { return ReadStaticField<float>("HistoricClaimStop"); }
        float HistoricClaimFervor() const { return ReadStaticField<float>("HistoricClaimFervor"); }
        float WaiverSlack() const { return ReadStaticField<float>("WaiverSlack"); }
        float RestoreShare() const { return ReadStaticField<float>("RestoreShare"); }
        float GloryUnionScore() const { return ReadStaticField<float>("GloryUnionScore"); }
        float RevanchistFervor() const { return ReadStaticField<float>("RevanchistFervor"); }
    };
}
