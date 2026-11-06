#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyBalance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyBalance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyBalance") {}
    public:
        int ReviewDays() const { return ReadStaticField<int>("ReviewDays"); }
        int BaseSlots() const { return ReadStaticField<int>("BaseSlots"); }
        int MaxSlots() const { return ReadStaticField<int>("MaxSlots"); }
        float MinFee() const { return ReadStaticField<float>("MinFee"); }
        int MaxObstacles() const { return ReadStaticField<int>("MaxObstacles"); }
        int TrunkRow1Picks() const { return ReadStaticField<int>("TrunkRow1Picks"); }
        int TrunkRow2Picks() const { return ReadStaticField<int>("TrunkRow2Picks"); }
        float TiesMax() const { return ReadStaticField<float>("TiesMax"); }
        float TiesFloorDiv() const { return ReadStaticField<float>("TiesFloorDiv"); }
        float TiesFloorMax() const { return ReadStaticField<float>("TiesFloorMax"); }
        float TiesRisePerMonth() const { return ReadStaticField<float>("TiesRisePerMonth"); }
        float TiesFadePerMonth() const { return ReadStaticField<float>("TiesFadePerMonth"); }
        int IdleMonths() const { return ReadStaticField<int>("IdleMonths"); }
        float WarTiesKeep() const { return ReadStaticField<float>("WarTiesKeep"); }
        float RisingTies() const { return ReadStaticField<float>("RisingTies"); }
        float OddsBase() const { return ReadStaticField<float>("OddsBase"); }
        float OddsTies() const { return ReadStaticField<float>("OddsTies"); }
        float OddsOpinion() const { return ReadStaticField<float>("OddsOpinion"); }
        float OddsClose() const { return ReadStaticField<float>("OddsClose"); }
        float OddsCloseFrom() const { return ReadStaticField<float>("OddsCloseFrom"); }
        float CloseAskOpinion() const { return ReadStaticField<float>("CloseAskOpinion"); }
        float OddsStronger() const { return ReadStaticField<float>("OddsStronger"); }
        float OddsMuchWeaker() const { return ReadStaticField<float>("OddsMuchWeaker"); }
        float OddsHereditary() const { return ReadStaticField<float>("OddsHereditary"); }
        float OddsTheocracy() const { return ReadStaticField<float>("OddsTheocracy"); }
        float OddsPopular() const { return ReadStaticField<float>("OddsPopular"); }
        float OddsProtector() const { return ReadStaticField<float>("OddsProtector"); }
        float OddsSubject() const { return ReadStaticField<float>("OddsSubject"); }
        float OddsRival() const { return ReadStaticField<float>("OddsRival"); }
        float OddsOtherFaith() const { return ReadStaticField<float>("OddsOtherFaith"); }
        float OddsMinorities() const { return ReadStaticField<float>("OddsMinorities"); }
        float OddsNoBorder() const { return ReadStaticField<float>("OddsNoBorder"); }
        float OddsAtWar() const { return ReadStaticField<float>("OddsAtWar"); }
        float OddsMax() const { return ReadStaticField<float>("OddsMax"); }
        float JoinThemBase() const { return ReadStaticField<float>("JoinThemBase"); }
        float JoinThemTies() const { return ReadStaticField<float>("JoinThemTies"); }
        float RefusalTiesLoss() const { return ReadStaticField<float>("RefusalTiesLoss"); }
        float RefusalOpinion() const { return ReadStaticField<float>("RefusalOpinion"); }
        float AskCooldownYears() const { return ReadStaticField<float>("AskCooldownYears"); }
        int OfferDays() const { return ReadStaticField<int>("OfferDays"); }
        float RisingFeeMonths() const { return ReadStaticField<float>("RisingFeeMonths"); }
        int RisingMonthsMin() const { return ReadStaticField<int>("RisingMonthsMin"); }
        int RisingMonthsMax() const { return ReadStaticField<int>("RisingMonthsMax"); }
        float RisingWindowYears() const { return ReadStaticField<float>("RisingWindowYears"); }
        float RisingFailOpinion() const { return ReadStaticField<float>("RisingFailOpinion"); }
        float PeaceAnnexMul() const { return ReadStaticField<float>("PeaceAnnexMul"); }
        float AiAnnexReach() const { return ReadStaticField<float>("AiAnnexReach"); }
        float WarTiesAfterPeace() const { return ReadStaticField<float>("WarTiesAfterPeace"); }
        float FaithRuleLoyalty() const { return ReadStaticField<float>("FaithRuleLoyalty"); }
        float FaithOddsBase() const { return ReadStaticField<float>("FaithOddsBase"); }
        float FaithGreatPower() const { return ReadStaticField<float>("FaithGreatPower"); }
        float FaithGuardEase() const { return ReadStaticField<float>("FaithGuardEase"); }
        float AiFaithPerYear() const { return ReadStaticField<float>("AiFaithPerYear"); }
        int AiLeadersPerFaith() const { return ReadStaticField<int>("AiLeadersPerFaith"); }
        float ProtectorateRatio() const { return ReadStaticField<float>("ProtectorateRatio"); }
        float ProtectorateHard() const { return ReadStaticField<float>("ProtectorateHard"); }
        float SphereOddsBase() const { return ReadStaticField<float>("SphereOddsBase"); }
        float SphereTargetRatio() const { return ReadStaticField<float>("SphereTargetRatio"); }
        float SphereKeepRatio() const { return ReadStaticField<float>("SphereKeepRatio"); }
        float TradePactEase() const { return ReadStaticField<float>("TradePactEase"); }
        float SpherePactOdds() const { return ReadStaticField<float>("SpherePactOdds"); }
        float DemandRatio() const { return ReadStaticField<float>("DemandRatio"); }
        float DemandBase() const { return ReadStaticField<float>("DemandBase"); }
        float DemandFear() const { return ReadStaticField<float>("DemandFear"); }
        float DemandInfluence() const { return ReadStaticField<float>("DemandInfluence"); }
        float DemandCauseYears() const { return ReadStaticField<float>("DemandCauseYears"); }
        float DemandGrudge() const { return ReadStaticField<float>("DemandGrudge"); }
        float AiSpherePerYear() const { return ReadStaticField<float>("AiSpherePerYear"); }
        float AiDemandPerYear() const { return ReadStaticField<float>("AiDemandPerYear"); }
        float BuyClaim() const { return ReadStaticField<float>("BuyClaim"); }
        float VoteBase() const { return ReadStaticField<float>("VoteBase"); }
        float VoteShare() const { return ReadStaticField<float>("VoteShare"); }
        float VoteLoyalty() const { return ReadStaticField<float>("VoteLoyalty"); }
        float VoteClaim() const { return ReadStaticField<float>("VoteClaim"); }
        float VoteGrudge() const { return ReadStaticField<float>("VoteGrudge"); }
        float AiReclaimPerYear() const { return ReadStaticField<float>("AiReclaimPerYear"); }
        float PeopleMinShare() const { return ReadStaticField<float>("PeopleMinShare"); }
        float PeopleKeepShare() const { return ReadStaticField<float>("PeopleKeepShare"); }
        float PeoplesTrustFloor() const { return ReadStaticField<float>("PeoplesTrustFloor"); }
        float AcceptTrust() const { return ReadStaticField<float>("AcceptTrust"); }
        float HomeRuleTrust() const { return ReadStaticField<float>("HomeRuleTrust"); }
        float AssimilateAcceptance() const { return ReadStaticField<float>("AssimilateAcceptance"); }
        float AiAcceptTrust() const { return ReadStaticField<float>("AiAcceptTrust"); }
        float AiAcceptAcceptance() const { return ReadStaticField<float>("AiAcceptAcceptance"); }
        float AiHomeRuleTrust() const { return ReadStaticField<float>("AiHomeRuleTrust"); }
        float AiHomeRuleGrievance() const { return ReadStaticField<float>("AiHomeRuleGrievance"); }
        float TrustGraceYears() const { return ReadStaticField<float>("TrustGraceYears"); }
        int TrustHoldMonths() const { return ReadStaticField<int>("TrustHoldMonths"); }
        float TrustDecayPerMonth() const { return ReadStaticField<float>("TrustDecayPerMonth"); }
        float TrustRecoverPerMonth() const { return ReadStaticField<float>("TrustRecoverPerMonth"); }
        float PersecutedTrustCap() const { return ReadStaticField<float>("PersecutedTrustCap"); }
        float TrustBandMargin() const { return ReadStaticField<float>("TrustBandMargin"); }
        float DemandYears() const { return ReadStaticField<float>("DemandYears"); }
        int MaxOpenDemands() const { return ReadStaticField<int>("MaxOpenDemands"); }
        int DemandSpacingMonths() const { return ReadStaticField<int>("DemandSpacingMonths"); }
        float DemandMetTrust() const { return ReadStaticField<float>("DemandMetTrust"); }
        float DemandRefusedTrust() const { return ReadStaticField<float>("DemandRefusedTrust"); }
        float DemandRefusedGrievance() const { return ReadStaticField<float>("DemandRefusedGrievance"); }
        int DefiantRefusals() const { return ReadStaticField<int>("DefiantRefusals"); }
        float DefiantYears() const { return ReadStaticField<float>("DefiantYears"); }
        float DefiantGrievance() const { return ReadStaticField<float>("DefiantGrievance"); }
        float TradePactTrade() const { return ReadStaticField<float>("TradePactTrade"); }
        float TradePactOpinion() const { return ReadStaticField<float>("TradePactOpinion"); }
        int AiUnifiersPerPeople() const { return ReadStaticField<int>("AiUnifiersPerPeople"); }
        float AiProclaimPerYear() const { return ReadStaticField<float>("AiProclaimPerYear"); }
        float AiAskOdds() const { return ReadStaticField<float>("AiAskOdds"); }
        float AiPatientYears() const { return ReadStaticField<float>("AiPatientYears"); }
        float AiFairOdds() const { return ReadStaticField<float>("AiFairOdds"); }
        float AiRisingHappiness() const { return ReadStaticField<float>("AiRisingHappiness"); }
        float AiRisingPerYear() const { return ReadStaticField<float>("AiRisingPerYear"); }
        float AiReactPerYear() const { return ReadStaticField<float>("AiReactPerYear"); }
        float AiDigestYears() const { return ReadStaticField<float>("AiDigestYears"); }
        int AiBranchesAtOnce() const { return ReadStaticField<int>("AiBranchesAtOnce"); }
        float AiOfferTies() const { return ReadStaticField<float>("AiOfferTies"); }
        float AiOfferOdds() const { return ReadStaticField<float>("AiOfferOdds"); }
        float AiJoinThemRatio() const { return ReadStaticField<float>("AiJoinThemRatio"); }
        float AiJoinThemTies() const { return ReadStaticField<float>("AiJoinThemTies"); }
        int AiWarsPerYear() const { return ReadStaticField<int>("AiWarsPerYear"); }
        float AiWarCooldownYears() const { return ReadStaticField<float>("AiWarCooldownYears"); }
        float AiWarMinRatio() const { return ReadStaticField<float>("AiWarMinRatio"); }
        float AiWarStuckYears() const { return ReadStaticField<float>("AiWarStuckYears"); }
        float AiWarMinBranchYears() const { return ReadStaticField<float>("AiWarMinBranchYears"); }
        float AiWarPerYear() const { return ReadStaticField<float>("AiWarPerYear"); }
    };
}
