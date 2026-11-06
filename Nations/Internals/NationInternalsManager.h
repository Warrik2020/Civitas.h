#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class NationInternalsManager : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationInternalsManager(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "NationInternalsManager") {}
    public:
        void* AccessOf(int user, int host) const { void* __callArgs[] = { &user, &host }; return Call("AccessOf", __callArgs, 2); }
        void* AccessRefusal(int user, int host, const char*& why) const { void* __callArgs[] = { &user, &host, &why }; return Call("AccessRefusal", __callArgs, 3); }
        int PlayerAskMilitaryAccess(int playerId, int hostId) const { void* __callArgs[] = { &playerId, &hostId }; return CallValue<int>("PlayerAskMilitaryAccess", __callArgs, 2); }
        int PlayerEndMilitaryAccess(int playerId, int hostId) const { void* __callArgs[] = { &playerId, &hostId }; return CallValue<int>("PlayerEndMilitaryAccess", __callArgs, 2); }
        void PublishMilitaryReach(int playerId) const { void* __callArgs[] = { &playerId }; Call("PublishMilitaryReach", __callArgs, 1); }
        void RestoreMilitaryAccess(int user, int host) const { void* __callArgs[] = { &user, &host }; Call("RestoreMilitaryAccess", __callArgs, 2); }
        bool AnswerAccessRequest(void* req, bool accept) const { void* __callArgs[] = { req, &accept }; return CallValue<bool>("AnswerAccessRequest", __callArgs, 2); }
        int PlayerCloseMilitaryAccess(int playerId, int guestId) const { void* __callArgs[] = { &playerId, &guestId }; return CallValue<int>("PlayerCloseMilitaryAccess", __callArgs, 2); }
        int ReloadStories() const { return CallValue<int>("ReloadStories", nullptr, 0); }
        void AffairsAfterLoad() const { Call("AffairsAfterLoad", nullptr, 0); }
        bool HasSupplyContract(int supplierId, int receiverId, int pool) const { void* __callArgs[] = { &supplierId, &receiverId, &pool }; return CallValue<bool>("HasSupplyContract", __callArgs, 3); }
        int AgreementsBetween(int x, int y, void* into) const { void* __callArgs[] = { &x, &y, into }; return CallValue<int>("AgreementsBetween", __callArgs, 3); }
        int AgreementsOf(int nationId, void* into) const { void* __callArgs[] = { &nationId, into }; return CallValue<int>("AgreementsOf", __callArgs, 2); }
        void* FindAgreement(int id) const { void* __callArgs[] = { &id }; return Call("FindAgreement", __callArgs, 1); }
        bool CancelAgreement(int agreementId, int breakerId) const { void* __callArgs[] = { &agreementId, &breakerId }; return CallValue<bool>("CancelAgreement", __callArgs, 2); }
        bool PlayerCancelAgreement(int agreementId) const { void* __callArgs[] = { &agreementId }; return CallValue<bool>("PlayerCancelAgreement", __callArgs, 1); }
        void RestoreAgreement(int supplierId, int receiverId, int pool, float perTick, float pricePerUnit, int ticksLeft, float delivered, float paid, int shortTicks) const { void* __callArgs[] = { &supplierId, &receiverId, &pool, &perTick, &pricePerUnit, &ticksLeft, &delivered, &paid, &shortTicks }; Call("RestoreAgreement", __callArgs, 9); }
        void ClearAgreements() const { Call("ClearAgreements", nullptr, 0); }
        bool IsDealValid(void* deal) const { void* __callArgs[] = { deal }; return CallValue<bool>("IsDealValid", __callArgs, 1); }
        float DealItemValue(void* item, int performerId, int beneficiaryId, int evaluatorId) const { void* __callArgs[] = { item, &performerId, &beneficiaryId, &evaluatorId }; return CallValue<float>("DealItemValue", __callArgs, 4); }
        void DealLandTiles(void* item, int giverId, int& owned, int& heartland) const { void* __callArgs[] = { item, &giverId, &owned, &heartland }; Call("DealLandTiles", __callArgs, 4); }
        float LandSoldLately(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<float>("LandSoldLately", __callArgs, 1); }
        float EquipmentUnitValue(int holderId, int pool) const { void* __callArgs[] = { &holderId, &pool }; return CallValue<float>("EquipmentUnitValue", __callArgs, 2); }
        float MaxContractPerTick(int supplierId, int pool, int ticks) const { void* __callArgs[] = { &supplierId, &pool, &ticks }; return CallValue<float>("MaxContractPerTick", __callArgs, 3); }
        float MaxContractPrice(int receiverId, float perTick) const { void* __callArgs[] = { &receiverId, &perTick }; return CallValue<float>("MaxContractPrice", __callArgs, 2); }
        float SolveContractPrice(void* deal, void* item, bool itemInGive, float targetChance, float& achieved) const { void* __callArgs[] = { deal, item, &itemInGive, &targetChance, &achieved }; return CallValue<float>("SolveContractPrice", __callArgs, 5); }
        void* BranchOutlookOf(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return Call("BranchOutlookOf", __callArgs, 2); }
        bool TryFoundBranch(int nationId, int axis, void* branch, const char*& reason) const { void* __callArgs[] = { &nationId, &axis, &branch, &reason }; return CallValue<bool>("TryFoundBranch", __callArgs, 4); }
        void AiConsiderBranch(int nationId) const { void* __callArgs[] = { &nationId }; Call("AiConsiderBranch", __callArgs, 1); }
        bool TryGetCapitalHolder(int nationId, int& holderId, int& tile) const { void* __callArgs[] = { &nationId, &holderId, &tile }; return CallValue<bool>("TryGetCapitalHolder", __callArgs, 3); }
        int CapitulationTicksLeft(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("CapitulationTicksLeft", __callArgs, 1); }
        void* GiftBlockReason(int giverId, int targetId) const { void* __callArgs[] = { &giverId, &targetId }; return Call("GiftBlockReason", __callArgs, 2); }
        void* GiftReasonBlock(int giverId, int targetId, int reason) const { void* __callArgs[] = { &giverId, &targetId, &reason }; return Call("GiftReasonBlock", __callArgs, 3); }
        bool AtWar(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<bool>("AtWar", __callArgs, 1); }
        int GiftableDivisions(int giverId, bool anyType, int type) const { void* __callArgs[] = { &giverId, &anyType, &type }; return CallValue<int>("GiftableDivisions", __callArgs, 3); }
        void* PreviewGift(int giverId, int targetId, void* terms) const { void* __callArgs[] = { &giverId, &targetId, terms }; return Call("PreviewGift", __callArgs, 3); }
        int SendGift(int giverId, int targetId, void* terms, void* result) const { void* __callArgs[] = { &giverId, &targetId, terms, &result }; return CallValue<int>("SendGift", __callArgs, 4); }
        bool IsPlayerNation(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<bool>("IsPlayerNation", __callArgs, 1); }
        float LastPlunderLoot(int v, int h) const { void* __callArgs[] = { &v, &h }; return CallValue<float>("LastPlunderLoot", __callArgs, 2); }
        bool AnswerIncursionCard(void* card, int answer) const { void* __callArgs[] = { card, &answer }; return CallValue<bool>("AnswerIncursionCard", __callArgs, 2); }
        int PlayerProtestIncursion(int playerId, int violatorId) const { void* __callArgs[] = { &playerId, &violatorId }; return CallValue<int>("PlayerProtestIncursion", __callArgs, 2); }
        int PlayerGrantPassage(int playerId, int violatorId) const { void* __callArgs[] = { &playerId, &violatorId }; return CallValue<int>("PlayerGrantPassage", __callArgs, 2); }
        int PlayerRevokePassage(int playerId, int violatorId) const { void* __callArgs[] = { &playerId, &violatorId }; return CallValue<int>("PlayerRevokePassage", __callArgs, 2); }
        int PlayerExpelIncursion(int playerId, int violatorId) const { void* __callArgs[] = { &playerId, &violatorId }; return CallValue<int>("PlayerExpelIncursion", __callArgs, 2); }
        int PlayerWithdrawTroops(int playerId, int hostId) const { void* __callArgs[] = { &playerId, &hostId }; return CallValue<int>("PlayerWithdrawTroops", __callArgs, 2); }
        void PledgeWithdrawal(int performerId, int receiverId) const { void* __callArgs[] = { &performerId, &receiverId }; Call("PledgeWithdrawal", __callArgs, 2); }
        int JustificationTicks(int holder, int other) const { void* __callArgs[] = { &holder, &other }; return CallValue<int>("JustificationTicks", __callArgs, 2); }
        void* PreviewIncursion(int ctrlId, int hostId, int divisions, float depth) const { void* __callArgs[] = { &ctrlId, &hostId, &divisions, &depth }; return Call("PreviewIncursion", __callArgs, 4); }
        void SeedPendingPeaceTerms(void* terms) const { void* __callArgs[] = { terms }; Call("SeedPendingPeaceTerms", __callArgs, 1); }
        bool PendingPeaceAllyRefuses(void* terms, int allyId, int& wanted) const { void* __callArgs[] = { terms, &allyId, &wanted }; return CallValue<bool>("PendingPeaceAllyRefuses", __callArgs, 3); }
        void CollectPendingPeaceRefusals(void* terms, void* into) const { void* __callArgs[] = { terms, into }; Call("CollectPendingPeaceRefusals", __callArgs, 2); }
        bool AnswerLocalOffer(void* offer, bool accept, int& why) const { void* __callArgs[] = { offer, &accept, &why }; return CallValue<bool>("AnswerLocalOffer", __callArgs, 3); }
        void* DebugLocalOffer(int kind, int arcId, int recordId, int from, int against, float gold = 0.0f) const { void* __callArgs[] = { &kind, &arcId, &recordId, &from, &against, &gold }; return Call("DebugLocalOffer", __callArgs, 6); }
        bool TryGetLostGlory(int nationId, void* memory, float& fervor) const { void* __callArgs[] = { &nationId, &memory, &fervor }; return CallValue<bool>("TryGetLostGlory", __callArgs, 3); }
        int KinStatesOf(int nationId, void* dst) const { void* __callArgs[] = { &nationId, dst }; return CallValue<int>("KinStatesOf", __callArgs, 2); }
        int GloryYearsAgo(void* m) const { void* __callArgs[] = { m }; return CallValue<int>("GloryYearsAgo", __callArgs, 1); }
        void* PeopleNameOf(int peopleKey) const { void* __callArgs[] = { &peopleKey }; return Call("PeopleNameOf", __callArgs, 1); }
        void* RequestBlockReason(int senderId, int targetId) const { void* __callArgs[] = { &senderId, &targetId }; return Call("RequestBlockReason", __callArgs, 2); }
        void* PeoplesKindBlock(int senderId, int targetId, int kind) const { void* __callArgs[] = { &senderId, &targetId, &kind }; return Call("PeoplesKindBlock", __callArgs, 3); }
        void* PeoplesTermsBlock(int senderId, int targetId, void* terms) const { void* __callArgs[] = { &senderId, &targetId, terms }; return Call("PeoplesTermsBlock", __callArgs, 3); }
        void CollectEndableWars(int targetId, int senderId, void* dst) const { void* __callArgs[] = { &targetId, &senderId, dst }; Call("CollectEndableWars", __callArgs, 3); }
        void CollectPersecutedPeoples(int targetId, void* dst) const { void* __callArgs[] = { &targetId, dst }; Call("CollectPersecutedPeoples", __callArgs, 2); }
        void CollectAssimilatedPeoples(int targetId, void* dst, int perCount) const { void* __callArgs[] = { &targetId, dst, &perCount }; Call("CollectAssimilatedPeoples", __callArgs, 3); }
        void CollectForeignPeoples(int targetId, int axis, void* dst, int max_) const { void* __callArgs[] = { &targetId, &axis, dst, &max_ }; Call("CollectForeignPeoples", __callArgs, 4); }
        void CollectLandRecipients(int senderId, int targetId, int axis, int group, void* dst, int max_) const { void* __callArgs[] = { &senderId, &targetId, &axis, &group, dst, &max_ }; Call("CollectLandRecipients", __callArgs, 6); }
        void* PeoplesLandOf(int senderId, int targetId, void* terms, int& states, int& version) const { void* __callArgs[] = { &senderId, &targetId, terms, &states, &version }; return Call("PeoplesLandOf", __callArgs, 5); }
        float PeoplesSeverity(int senderId, int targetId, void* terms) const { void* __callArgs[] = { &senderId, &targetId, terms }; return CallValue<float>("PeoplesSeverity", __callArgs, 3); }
        float GetRequestChance(int senderId, int targetId, void* terms, int tone, bool bare = false) const { void* __callArgs[] = { &senderId, &targetId, terms, &tone, &bare }; return CallValue<float>("GetRequestChance", __callArgs, 5); }
        int PlayerSendRequest(int senderId, int targetId, void* terms, int tone) const { void* __callArgs[] = { &senderId, &targetId, terms, &tone }; return CallValue<int>("PlayerSendRequest", __callArgs, 4); }
        int SendRequest(int senderId, int targetId, void* terms, int tone) const { void* __callArgs[] = { &senderId, &targetId, terms, &tone }; return CallValue<int>("SendRequest", __callArgs, 4); }
        bool AnswerPendingRequest(void* card, bool accept) const { void* __callArgs[] = { card, &accept }; return CallValue<bool>("AnswerPendingRequest", __callArgs, 2); }
        int UltimatumAnswererOf(int senderId, int targetId) const { void* __callArgs[] = { &senderId, &targetId }; return CallValue<int>("UltimatumAnswererOf", __callArgs, 2); }
        void* SubmissionDemandBlock(int senderId, int targetId, int kind) const { void* __callArgs[] = { &senderId, &targetId, &kind }; return Call("SubmissionDemandBlock", __callArgs, 3); }
        float BlocWarPowerOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<float>("BlocWarPowerOf", __callArgs, 1); }
        void* GetSurrender(int nationId) const { void* __callArgs[] = { &nationId }; return Call("GetSurrender", __callArgs, 1); }
        void ReloadPolitics() const { Call("ReloadPolitics", nullptr, 0); }
        void UnificationAfterLoad() const { Call("UnificationAfterLoad", nullptr, 0); }
        float RealmWarPowerOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<float>("RealmWarPowerOf", __callArgs, 1); }
        void* GetUnion(int unionId) const { void* __callArgs[] = { &unionId }; return Call("GetUnion", __callArgs, 1); }
        bool IsUnionRuler(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<bool>("IsUnionRuler", __callArgs, 1); }
        void* UnionOf(int nationId) const { void* __callArgs[] = { &nationId }; return Call("UnionOf", __callArgs, 1); }
        void* RestoreUnion(int kind, int seniorId, void* memberIds, const char* name, void* color, int ageTicks = -2147483648) const { void* managed_3 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &kind, &seniorId, memberIds, managed_3, color, &ageTicks }; return Call("RestoreUnion", __callArgs, 6); }
        bool AllianceLockedByUnion(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallValue<bool>("AllianceLockedByUnion", __callArgs, 2); }
        int NaturalUnionSenior(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallValue<int>("NaturalUnionSenior", __callArgs, 2); }
        int CheckUnionDeal(void* deal) const { void* __callArgs[] = { deal }; return CallValue<int>("CheckUnionDeal", __callArgs, 1); }
        int CheckUnionProposal(void* deal) const { void* __callArgs[] = { deal }; return CallValue<int>("CheckUnionProposal", __callArgs, 1); }
        float GetUnionOdds(void* deal, void* terms = nullptr) const { void* __callArgs[] = { deal, terms }; return CallValue<float>("GetUnionOdds", __callArgs, 2); }
        float UnionPowerOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<float>("UnionPowerOf", __callArgs, 1); }
        int UnionCooldownLeft(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallValue<int>("UnionCooldownLeft", __callArgs, 2); }
        void* MakeUnionDeal(int playerId, int otherId, int kind, bool playerLeads) const { void* __callArgs[] = { &playerId, &otherId, &kind, &playerLeads }; return Call("MakeUnionDeal", __callArgs, 4); }
        int PlayerProposeUnion(void* deal) const { void* __callArgs[] = { deal }; return CallValue<int>("PlayerProposeUnion", __callArgs, 1); }
        float GetUnionChance(int playerId, int targetId, int kind) const { void* __callArgs[] = { &playerId, &targetId, &kind }; return CallValue<float>("GetUnionChance", __callArgs, 3); }
        bool CanProposeUnion(int playerId, int targetId, int kind) const { void* __callArgs[] = { &playerId, &targetId, &kind }; return CallValue<bool>("CanProposeUnion", __callArgs, 3); }
        int PlayerProposeUnion(int playerId, int targetId, int kind) const { void* __callArgs[] = { &playerId, &targetId, &kind }; return CallValue<int>("PlayerProposeUnion", __callArgs, 3); }
        int CheckLeaveUnion(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("CheckLeaveUnion", __callArgs, 1); }
        int PlayerLeaveUnion(int playerId) const { void* __callArgs[] = { &playerId }; return CallValue<int>("PlayerLeaveUnion", __callArgs, 1); }
        int CheckDissolveUnion(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("CheckDissolveUnion", __callArgs, 1); }
        bool PlayerDissolveUnion(int playerId) const { void* __callArgs[] = { &playerId }; return CallValue<bool>("PlayerDissolveUnion", __callArgs, 1); }
        int CheckExpelFromUnion(int rulerId, int memberId) const { void* __callArgs[] = { &rulerId, &memberId }; return CallValue<int>("CheckExpelFromUnion", __callArgs, 2); }
        int PlayerExpelFromUnion(int rulerId, int memberId) const { void* __callArgs[] = { &rulerId, &memberId }; return CallValue<int>("PlayerExpelFromUnion", __callArgs, 2); }
        int CheckSubsidiseMember(int rulerId, int memberId) const { void* __callArgs[] = { &rulerId, &memberId }; return CallValue<int>("CheckSubsidiseMember", __callArgs, 2); }
        int PlayerSubsidiseMember(int rulerId, int memberId) const { void* __callArgs[] = { &rulerId, &memberId }; return CallValue<int>("PlayerSubsidiseMember", __callArgs, 2); }
        float UnionSubsidyCost(int memberId) const { void* __callArgs[] = { &memberId }; return CallValue<float>("UnionSubsidyCost", __callArgs, 1); }
        int CheckGrantAutonomy(int rulerId, int memberId) const { void* __callArgs[] = { &rulerId, &memberId }; return CallValue<int>("CheckGrantAutonomy", __callArgs, 2); }
        int PlayerGrantAutonomy(int rulerId, int memberId, int& moved) const { void* __callArgs[] = { &rulerId, &memberId, &moved }; return CallValue<int>("PlayerGrantAutonomy", __callArgs, 3); }
        void* ReadUnionLoyalty(int memberId, void* extras = nullptr) const { void* __callArgs[] = { &memberId, extras }; return Call("ReadUnionLoyalty", __callArgs, 2); }
        int UnionOwedDivisions(int memberId) const { void* __callArgs[] = { &memberId }; return CallValue<int>("UnionOwedDivisions", __callArgs, 1); }
        int UnionFairShare(int memberId) const { void* __callArgs[] = { &memberId }; return CallValue<int>("UnionFairShare", __callArgs, 1); }
        int UnionStatesEstimate(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("UnionStatesEstimate", __callArgs, 1); }
        bool PlayerRenameUnion(int rulerId, const char* newName) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(newName ? newName : "") : nullptr; void* __callArgs[] = { &rulerId, managed_1 }; return CallValue<bool>("PlayerRenameUnion", __callArgs, 2); }
        bool PlayerRenameUnionMember(int playerId, int memberId, const char* newName) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(newName ? newName : "") : nullptr; void* __callArgs[] = { &playerId, &memberId, managed_2 }; return CallValue<bool>("PlayerRenameUnionMember", __callArgs, 3); }
        void SetNationColorInRealm(int nationId, void* color) const { void* __callArgs[] = { &nationId, color }; Call("SetNationColorInRealm", __callArgs, 2); }
        bool IsIdentityLocked(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<bool>("IsIdentityLocked", __callArgs, 1); }
        void SetIdentityLocked(int nationId, bool locked) const { void* __callArgs[] = { &nationId, &locked }; Call("SetIdentityLocked", __callArgs, 2); }
        int AcceptPendingUnionOffer(void* deal) const { void* __callArgs[] = { deal }; return CallValue<int>("AcceptPendingUnionOffer", __callArgs, 1); }
        void DeclinePendingUnionOffer(void* deal) const { void* __callArgs[] = { deal }; Call("DeclinePendingUnionOffer", __callArgs, 1); }
        int UnionOfferTicksLeft(void* deal) const { void* __callArgs[] = { deal }; return CallValue<int>("UnionOfferTicksLeft", __callArgs, 1); }
        void RestorePendingUnionOffer(void* deal, int ticksLeft) const { void* __callArgs[] = { deal, &ticksLeft }; Call("RestorePendingUnionOffer", __callArgs, 2); }
        int ForceUnion(int aId, int bId, int kind, int seniorId = -1) const { void* __callArgs[] = { &aId, &bId, &kind, &seniorId }; return CallValue<int>("ForceUnion", __callArgs, 4); }
        bool ForceJoinUnion(int unionId, int nationId) const { void* __callArgs[] = { &unionId, &nationId }; return CallValue<bool>("ForceJoinUnion", __callArgs, 2); }
        bool ForceLeaveUnion(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<bool>("ForceLeaveUnion", __callArgs, 1); }
        bool ForceDissolveUnion(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<bool>("ForceDissolveUnion", __callArgs, 1); }
        int PeopleTraitOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("PeopleTraitOf", __callArgs, 1); }
        void CreditOwnWar(void* rel, int declarerId) const { void* __callArgs[] = { rel, &declarerId }; Call("CreditOwnWar", __callArgs, 2); }
        bool OpenPendingPeaceTable() const { return CallValue<bool>("OpenPendingPeaceTable", nullptr, 0); }
        void* PendingPeaceDemand() const { return Call("PendingPeaceDemand", nullptr, 0); }
        float PendingPeaceSettlement(void* terms) const { void* __callArgs[] = { terms }; return CallValue<float>("PendingPeaceSettlement", __callArgs, 1); }
        bool PendingPeaceSignable(void* terms) const { void* __callArgs[] = { terms }; return CallValue<bool>("PendingPeaceSignable", __callArgs, 1); }
        void TrimPendingPeaceToSignable(void* terms) const { void* __callArgs[] = { terms }; Call("TrimPendingPeaceToSignable", __callArgs, 1); }
        float PeaceTermsValue(void* terms) const { void* __callArgs[] = { terms }; return CallValue<float>("PeaceTermsValue", __callArgs, 1); }
        bool ResolvePendingPeace(void* terms) const { void* __callArgs[] = { terms }; return CallValue<bool>("ResolvePendingPeace", __callArgs, 1); }
        void ResolvePendingPeaceAutomatically() const { Call("ResolvePendingPeaceAutomatically", nullptr, 0); }
        bool PlayerAskForPeaceTable(int playerId, int enemyId) const { void* __callArgs[] = { &playerId, &enemyId }; return CallValue<bool>("PlayerAskForPeaceTable", __callArgs, 2); }
        bool PlayerHoldsPeaceDictation(int playerId, int enemyId) const { void* __callArgs[] = { &playerId, &enemyId }; return CallValue<bool>("PlayerHoldsPeaceDictation", __callArgs, 2); }
        bool PlayerOpenSurrenderConference(int playerId, int enemyId = -1) const { void* __callArgs[] = { &playerId, &enemyId }; return CallValue<bool>("PlayerOpenSurrenderConference", __callArgs, 2); }
        int PlayerPeaceWait(int playerId, int enemyId) const { void* __callArgs[] = { &playerId, &enemyId }; return CallValue<int>("PlayerPeaceWait", __callArgs, 2); }
        void CollectPeaceSuitors(int playerId, void* into) const { void* __callArgs[] = { &playerId, into }; Call("CollectPeaceSuitors", __callArgs, 2); }
        void CollectUnsignedWins(int playerId, void* into) const { void* __callArgs[] = { &playerId, into }; Call("CollectUnsignedWins", __callArgs, 2); }
        bool CancelPendingPeace() const { return CallValue<bool>("CancelPendingPeace", nullptr, 0); }
        void* ImposeVassalPolityBlockReason(int overlordId, int vassalId, int ideology) const { void* __callArgs[] = { &overlordId, &vassalId, &ideology }; return Call("ImposeVassalPolityBlockReason", __callArgs, 3); }
        float ImposeVassalPolityCost(int vassalId) const { void* __callArgs[] = { &vassalId }; return CallValue<float>("ImposeVassalPolityCost", __callArgs, 1); }
        bool ImposeVassalPolity(int overlordId, int vassalId, int ideology, const char*& error) const { void* __callArgs[] = { &overlordId, &vassalId, &ideology, &error }; return CallValue<bool>("ImposeVassalPolity", __callArgs, 4); }
        void* EnsureRelation(int a, int b) const { void* __callArgs[] = { &a, &b }; return Call("EnsureRelation", __callArgs, 2); }
        int SharedIdentityMask(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallValue<int>("SharedIdentityMask", __callArgs, 2); }
        float WarPowerAgainst(int self, int target) const { void* __callArgs[] = { &self, &target }; return CallValue<float>("WarPowerAgainst", __callArgs, 2); }
        float WarPowerWithAlliesOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<float>("WarPowerWithAlliesOf", __callArgs, 1); }
        float WarPowerOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<float>("WarPowerOf", __callArgs, 1); }
        float ArmyPowerOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<float>("ArmyPowerOf", __callArgs, 1); }
        bool ChangePolity(int nationId, int ideology, const char*& error) const { void* __callArgs[] = { &nationId, &ideology, &error }; return CallValue<bool>("ChangePolity", __callArgs, 3); }
        float TaxPerDay(void* it) const { void* __callArgs[] = { it }; return CallValue<float>("TaxPerDay", __callArgs, 1); }
        float EdictGoldCost(int nationId, int edict) const { void* __callArgs[] = { &nationId, &edict }; return CallValue<float>("EdictGoldCost", __callArgs, 2); }
        void* EdictBlockReason(int nationId, int edict) const { void* __callArgs[] = { &nationId, &edict }; return Call("EdictBlockReason", __callArgs, 2); }
        bool TryEdict(int nationId, int edict, const char*& reason) const { void* __callArgs[] = { &nationId, &edict, &reason }; return CallValue<bool>("TryEdict", __callArgs, 3); }
        bool TryEdictAmnesty(int nationId, const char*& reason) const { void* __callArgs[] = { &nationId, &reason }; return CallValue<bool>("TryEdictAmnesty", __callArgs, 2); }
        bool TryEdictIntendants(int nationId, const char*& reason) const { void* __callArgs[] = { &nationId, &reason }; return CallValue<bool>("TryEdictIntendants", __callArgs, 2); }
        void OnClansCalled(int nationId) const { void* __callArgs[] = { &nationId }; Call("OnClansCalled", __callArgs, 1); }
        void* IdentityAdoptBlockReason(int nationId, int axis, int groupId) const { void* __callArgs[] = { &nationId, &axis, &groupId }; return Call("IdentityAdoptBlockReason", __callArgs, 3); }
        void* IdentityAdoptOutlookOf(int nationId, int axis, int groupId) const { void* __callArgs[] = { &nationId, &axis, &groupId }; return Call("IdentityAdoptOutlookOf", __callArgs, 3); }
        bool TryAdoptIdentity(int nationId, int axis, int groupId, const char*& reason) const { void* __callArgs[] = { &nationId, &axis, &groupId, &reason }; return CallValue<bool>("TryAdoptIdentity", __callArgs, 4); }
        bool PlayerSetBordersClosed(int nationId, bool closed) const { void* __callArgs[] = { &nationId, &closed }; return CallValue<bool>("PlayerSetBordersClosed", __callArgs, 2); }
        bool PlayerSetAssimilationPush(int nationId, bool active) const { void* __callArgs[] = { &nationId, &active }; return CallValue<bool>("PlayerSetAssimilationPush", __callArgs, 2); }
        bool PlayerSetBorderGuard(int nationId, bool active) const { void* __callArgs[] = { &nationId, &active }; return CallValue<bool>("PlayerSetBorderGuard", __callArgs, 2); }
        bool PlayerSetAssimilationPush(int nationId, int axis, bool on) const { void* __callArgs[] = { &nationId, &axis, &on }; return CallValue<bool>("PlayerSetAssimilationPush", __callArgs, 3); }
        bool PlayerSetAssimilation(int nationId, int axis, int scope, const char*& reason) const { void* __callArgs[] = { &nationId, &axis, &scope, &reason }; return CallValue<bool>("PlayerSetAssimilation", __callArgs, 4); }
        bool PlayerSetBorderGuard(int nationId, int axis, bool on) const { void* __callArgs[] = { &nationId, &axis, &on }; return CallValue<bool>("PlayerSetBorderGuard", __callArgs, 3); }
        bool IdentityCountRenounced(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return CallValue<bool>("IdentityCountRenounced", __callArgs, 2); }
        void* PolityBlockReason(int nationId, int ideology) const { void* __callArgs[] = { &nationId, &ideology }; return Call("PolityBlockReason", __callArgs, 2); }
        void* GetInternals(int nationId) const { void* __callArgs[] = { &nationId }; return Call("GetInternals", __callArgs, 1); }
        void* GetRelationsOf(int nationId) const { void* __callArgs[] = { &nationId }; return Call("GetRelationsOf", __callArgs, 1); }
        void CollectActiveWars(void* buffer) const { void* __callArgs[] = { buffer }; Call("CollectActiveWars", __callArgs, 1); }
        float GetOpinion(int ofNation, int aboutNation) const { void* __callArgs[] = { &ofNation, &aboutNation }; return CallValue<float>("GetOpinion", __callArgs, 2); }
        bool IsAtWar(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallValue<bool>("IsAtWar", __callArgs, 2); }
        bool HasIndependenceWar(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<bool>("HasIndependenceWar", __callArgs, 1); }
        bool HoldsLand(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<bool>("HoldsLand", __callArgs, 1); }
        float SettleRequiredPopulation(int playerId) const { void* __callArgs[] = { &playerId }; return CallValue<float>("SettleRequiredPopulation", __callArgs, 1); }
        void* GetRelation(int a, int b) const { void* __callArgs[] = { &a, &b }; return Call("GetRelation", __callArgs, 2); }
        bool PlayerDeclareWar(int attackerId, int defenderId) const { void* __callArgs[] = { &attackerId, &defenderId }; return CallValue<bool>("PlayerDeclareWar", __callArgs, 2); }
        int PlayerImproveRelations(int playerId, int otherId) const { void* __callArgs[] = { &playerId, &otherId }; return CallValue<int>("PlayerImproveRelations", __callArgs, 2); }
        int ImproveRelations(int actorId, int otherId) const { void* __callArgs[] = { &actorId, &otherId }; return CallValue<int>("ImproveRelations", __callArgs, 2); }
        bool EnvoysRepeating(int actorId, int otherId) const { void* __callArgs[] = { &actorId, &otherId }; return CallValue<bool>("EnvoysRepeating", __callArgs, 2); }
        bool EnvoyGoodwillFull(int actorId, int otherId) const { void* __callArgs[] = { &actorId, &otherId }; return CallValue<bool>("EnvoyGoodwillFull", __callArgs, 2); }
        int PlayerSetEnvoyRepeat(int playerId, int otherId, bool on, bool& sent) const { void* __callArgs[] = { &playerId, &otherId, &on, &sent }; return CallValue<int>("PlayerSetEnvoyRepeat", __callArgs, 4); }
        float GetUltimatumChance(int playerId, int targetId, void* terms) const { void* __callArgs[] = { &playerId, &targetId, terms }; return CallValue<float>("GetUltimatumChance", __callArgs, 3); }
        int OwnIdentityGroupId(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return CallValue<int>("OwnIdentityGroupId", __callArgs, 2); }
        void* IdentityDemandBlockReason(int targetId, int axis, int groupId) const { void* __callArgs[] = { &targetId, &axis, &groupId }; return Call("IdentityDemandBlockReason", __callArgs, 3); }
        int PlayerSendUltimatum(int playerId, int targetId, void* terms) const { void* __callArgs[] = { &playerId, &targetId, terms }; return CallValue<int>("PlayerSendUltimatum", __callArgs, 3); }
        int SendUltimatum(int playerId, int targetId, void* terms) const { void* __callArgs[] = { &playerId, &targetId, terms }; return CallValue<int>("SendUltimatum", __callArgs, 3); }
        int CompletedFactoriesOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("CompletedFactoriesOf", __callArgs, 1); }
        int AllFactoriesOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("AllFactoriesOf", __callArgs, 1); }
        int DivisionCountOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("DivisionCountOf", __callArgs, 1); }
        int DivisionCountOf(int nationId, int type) const { void* __callArgs[] = { &nationId, &type }; return CallValue<int>("DivisionCountOf", __callArgs, 2); }
        bool PlayerSurrender(int playerId) const { void* __callArgs[] = { &playerId }; return CallValue<bool>("PlayerSurrender", __callArgs, 1); }
        int PlayerProposeAlliance(int playerId, int otherId) const { void* __callArgs[] = { &playerId, &otherId }; return CallValue<int>("PlayerProposeAlliance", __callArgs, 2); }
        int ProposeAlliance(int playerId, int otherId) const { void* __callArgs[] = { &playerId, &otherId }; return CallValue<int>("ProposeAlliance", __callArgs, 2); }
        bool AnswerPendingAllianceOffer(void* offer, bool accept) const { void* __callArgs[] = { offer, &accept }; return CallValue<bool>("AnswerPendingAllianceOffer", __callArgs, 2); }
        bool AnswerPendingCallToArms(void* call, bool honour) const { void* __callArgs[] = { call, &honour }; return CallValue<bool>("AnswerPendingCallToArms", __callArgs, 2); }
        bool HasPeoplePetition(int ownerId, int originId) const { void* __callArgs[] = { &ownerId, &originId }; return CallValue<bool>("HasPeoplePetition", __callArgs, 2); }
        bool EnqueuePeoplePetition(int ownerId, int originId, int kind, bool demand = false) const { void* __callArgs[] = { &ownerId, &originId, &kind, &demand }; return CallValue<bool>("EnqueuePeoplePetition", __callArgs, 4); }
        bool AnswerPendingPeoplePetition(void* p, bool grant) const { void* __callArgs[] = { p, &grant }; return CallValue<bool>("AnswerPendingPeoplePetition", __callArgs, 2); }
        void ApplyVassalage(int vassalId, int overlordId, bool applyTint = true) const { void* __callArgs[] = { &vassalId, &overlordId, &applyTint }; Call("ApplyVassalage", __callArgs, 3); }
        bool PlayerReleaseVassal(int playerId, int vassalId) const { void* __callArgs[] = { &playerId, &vassalId }; return CallValue<bool>("PlayerReleaseVassal", __callArgs, 2); }
        bool CanDeclareIndependence(int vassalId) const { void* __callArgs[] = { &vassalId }; return CallValue<bool>("CanDeclareIndependence", __callArgs, 1); }
        float IndependenceLetGoChance(int vassalId) const { void* __callArgs[] = { &vassalId }; return CallValue<float>("IndependenceLetGoChance", __callArgs, 1); }
        int DeclareIndependence(int vassalId) const { void* __callArgs[] = { &vassalId }; return CallValue<int>("DeclareIndependence", __callArgs, 1); }
        bool PlayerAssumeVassal(int playerId, int vassalId) const { void* __callArgs[] = { &playerId, &vassalId }; return CallValue<bool>("PlayerAssumeVassal", __callArgs, 2); }
        void CollectProtectedTiles(int playerId, void* dst) const { void* __callArgs[] = { &playerId, dst }; Call("CollectProtectedTiles", __callArgs, 2); }
        int PlayerReleaseVassalNation(int playerId, void* tiles, const char* name, void* color) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &playerId, tiles, managed_2, color }; return CallValue<int>("PlayerReleaseVassalNation", __callArgs, 4); }
        bool PlayerBreakAlliance(int playerId, int otherId) const { void* __callArgs[] = { &playerId, &otherId }; return CallValue<bool>("PlayerBreakAlliance", __callArgs, 2); }
        void* EditorCtx() const { return Call("EditorCtx", nullptr, 0); }
        bool ForceDeclareWar(int attackerId, int defenderId) const { void* __callArgs[] = { &attackerId, &defenderId }; return CallValue<bool>("ForceDeclareWar", __callArgs, 2); }
        bool RestoreWar(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallValue<bool>("RestoreWar", __callArgs, 2); }
        bool ForceMakePeace(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallValue<bool>("ForceMakePeace", __callArgs, 2); }
        bool SetEndlessWar(int a, int b, bool endless) const { void* __callArgs[] = { &a, &b, &endless }; return CallValue<bool>("SetEndlessWar", __callArgs, 3); }
        bool IsEndlessWar(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallValue<bool>("IsEndlessWar", __callArgs, 2); }
        bool ForceSetAlliance(int a, int b, bool allied) const { void* __callArgs[] = { &a, &b, &allied }; return CallValue<bool>("ForceSetAlliance", __callArgs, 3); }
        bool ForceSetDefensivePact(int a, int b, bool pact) const { void* __callArgs[] = { &a, &b, &pact }; return CallValue<bool>("ForceSetDefensivePact", __callArgs, 3); }
        bool ForceSetOpinion(int a, int b, float opinionAtoB, float opinionBtoA) const { void* __callArgs[] = { &a, &b, &opinionAtoB, &opinionBtoA }; return CallValue<bool>("ForceSetOpinion", __callArgs, 4); }
        bool ForceSetPolity(int nationId, int ideology) const { void* __callArgs[] = { &nationId, &ideology }; return CallValue<bool>("ForceSetPolity", __callArgs, 2); }
        bool ForceAnnex(int annexerId, int targetId) const { void* __callArgs[] = { &annexerId, &targetId }; return CallValue<bool>("ForceAnnex", __callArgs, 2); }
        float GetDealAcceptance(void* deal) const { void* __callArgs[] = { deal }; return CallValue<float>("GetDealAcceptance", __callArgs, 1); }
        float SolveDealGold(void* deal, void* item, bool paying, float maxGold, float targetChance, float& achieved) const { void* __callArgs[] = { deal, item, &paying, &maxGold, &targetChance, &achieved }; return CallValue<float>("SolveDealGold", __callArgs, 6); }
        int PlayerProposeTradeDeal(void* deal) const { void* __callArgs[] = { deal }; return CallValue<int>("PlayerProposeTradeDeal", __callArgs, 1); }
        bool AcceptPendingTradeOffer(void* deal) const { void* __callArgs[] = { deal }; return CallValue<bool>("AcceptPendingTradeOffer", __callArgs, 1); }
        void DeclinePendingTradeOffer(void* deal) const { void* __callArgs[] = { deal }; Call("DeclinePendingTradeOffer", __callArgs, 1); }
        bool AnswerIrredentaDemand(void* demand, bool accept) const { void* __callArgs[] = { demand, &accept }; return CallValue<bool>("AnswerIrredentaDemand", __callArgs, 2); }
        bool AnswerPendingUltimatum(void* demand, bool accept) const { void* __callArgs[] = { demand, &accept }; return CallValue<bool>("AnswerPendingUltimatum", __callArgs, 2); }
        bool CanRequestAnnexation(int playerId, int targetId) const { void* __callArgs[] = { &playerId, &targetId }; return CallValue<bool>("CanRequestAnnexation", __callArgs, 2); }
        float GetAnnexationRequestChance(int playerId, int targetId) const { void* __callArgs[] = { &playerId, &targetId }; return CallValue<float>("GetAnnexationRequestChance", __callArgs, 2); }
        int PlayerRequestAnnexation(int playerId, int targetId) const { void* __callArgs[] = { &playerId, &targetId }; return CallValue<int>("PlayerRequestAnnexation", __callArgs, 2); }
        bool CanRequestVassalage(int playerId, int targetId) const { void* __callArgs[] = { &playerId, &targetId }; return CallValue<bool>("CanRequestVassalage", __callArgs, 2); }
        float GetVassalageRequestChance(int playerId, int targetId) const { void* __callArgs[] = { &playerId, &targetId }; return CallValue<float>("GetVassalageRequestChance", __callArgs, 2); }
        int PlayerRequestVassalage(int playerId, int targetId) const { void* __callArgs[] = { &playerId, &targetId }; return CallValue<int>("PlayerRequestVassalage", __callArgs, 2); }
        bool CanDemandVassalAnnexation(int playerId, int vassalId) const { void* __callArgs[] = { &playerId, &vassalId }; return CallValue<bool>("CanDemandVassalAnnexation", __callArgs, 2); }
        float GetVassalAnnexationChance(int playerId, int vassalId) const { void* __callArgs[] = { &playerId, &vassalId }; return CallValue<float>("GetVassalAnnexationChance", __callArgs, 2); }
        int PlayerDemandVassalAnnexation(int playerId, int vassalId) const { void* __callArgs[] = { &playerId, &vassalId }; return CallValue<int>("PlayerDemandVassalAnnexation", __callArgs, 2); }
        void* GetWarGoal(int nationId) const { void* __callArgs[] = { &nationId }; return Call("GetWarGoal", __callArgs, 1); }
    };
}
