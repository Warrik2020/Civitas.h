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
        void* AccessOf(int user, int host) const { void* args[] = { &user, &host }; return Call("AccessOf", args, 2); }
        void* AccessRefusal(int user, int host, const char*& why) const { void* args[] = { &user, &host, &why }; return Call("AccessRefusal", args, 3); }
        int PlayerAskMilitaryAccess(int playerId, int hostId) const { void* args[] = { &playerId, &hostId }; return CallValue<int>("PlayerAskMilitaryAccess", args, 2); }
        int PlayerEndMilitaryAccess(int playerId, int hostId) const { void* args[] = { &playerId, &hostId }; return CallValue<int>("PlayerEndMilitaryAccess", args, 2); }
        void PublishMilitaryReach(int playerId) const { void* args[] = { &playerId }; Call("PublishMilitaryReach", args, 1); }
        void RestoreMilitaryAccess(int user, int host) const { void* args[] = { &user, &host }; Call("RestoreMilitaryAccess", args, 2); }
        bool AnswerAccessRequest(void* req, bool accept) const { void* args[] = { req, &accept }; return CallValue<bool>("AnswerAccessRequest", args, 2); }
        int PlayerCloseMilitaryAccess(int playerId, int guestId) const { void* args[] = { &playerId, &guestId }; return CallValue<int>("PlayerCloseMilitaryAccess", args, 2); }
        int ReloadStories() const { return CallValue<int>("ReloadStories", nullptr, 0); }
        void AffairsAfterLoad() const { Call("AffairsAfterLoad", nullptr, 0); }
        bool HasSupplyContract(int supplierId, int receiverId, int pool) const { void* args[] = { &supplierId, &receiverId, &pool }; return CallValue<bool>("HasSupplyContract", args, 3); }
        int AgreementsBetween(int x, int y, void* into) const { void* args[] = { &x, &y, into }; return CallValue<int>("AgreementsBetween", args, 3); }
        int AgreementsOf(int nationId, void* into) const { void* args[] = { &nationId, into }; return CallValue<int>("AgreementsOf", args, 2); }
        void* FindAgreement(int id) const { void* args[] = { &id }; return Call("FindAgreement", args, 1); }
        bool CancelAgreement(int agreementId, int breakerId) const { void* args[] = { &agreementId, &breakerId }; return CallValue<bool>("CancelAgreement", args, 2); }
        bool PlayerCancelAgreement(int agreementId) const { void* args[] = { &agreementId }; return CallValue<bool>("PlayerCancelAgreement", args, 1); }
        void RestoreAgreement(int supplierId, int receiverId, int pool, float perTick, float pricePerUnit, int ticksLeft, float delivered, float paid, int shortTicks) const { void* args[] = { &supplierId, &receiverId, &pool, &perTick, &pricePerUnit, &ticksLeft, &delivered, &paid, &shortTicks }; Call("RestoreAgreement", args, 9); }
        void ClearAgreements() const { Call("ClearAgreements", nullptr, 0); }
        bool IsDealValid(void* deal) const { void* args[] = { deal }; return CallValue<bool>("IsDealValid", args, 1); }
        float DealItemValue(void* item, int performerId, int beneficiaryId, int evaluatorId) const { void* args[] = { item, &performerId, &beneficiaryId, &evaluatorId }; return CallValue<float>("DealItemValue", args, 4); }
        void DealLandTiles(void* item, int giverId, int& owned, int& heartland) const { void* args[] = { item, &giverId, &owned, &heartland }; Call("DealLandTiles", args, 4); }
        float LandSoldLately(int nationId) const { void* args[] = { &nationId }; return CallValue<float>("LandSoldLately", args, 1); }
        float EquipmentUnitValue(int holderId, int pool) const { void* args[] = { &holderId, &pool }; return CallValue<float>("EquipmentUnitValue", args, 2); }
        float MaxContractPerTick(int supplierId, int pool, int ticks) const { void* args[] = { &supplierId, &pool, &ticks }; return CallValue<float>("MaxContractPerTick", args, 3); }
        float MaxContractPrice(int receiverId, float perTick) const { void* args[] = { &receiverId, &perTick }; return CallValue<float>("MaxContractPrice", args, 2); }
        float SolveContractPrice(void* deal, void* item, bool itemInGive, float targetChance, float& achieved) const { void* args[] = { deal, item, &itemInGive, &targetChance, &achieved }; return CallValue<float>("SolveContractPrice", args, 5); }
        void* BranchOutlookOf(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return Call("BranchOutlookOf", args, 2); }
        bool TryFoundBranch(int nationId, int axis, void* branch, const char*& reason) const { void* args[] = { &nationId, &axis, &branch, &reason }; return CallValue<bool>("TryFoundBranch", args, 4); }
        void AiConsiderBranch(int nationId) const { void* args[] = { &nationId }; Call("AiConsiderBranch", args, 1); }
        bool TryGetCapitalHolder(int nationId, int& holderId, int& tile) const { void* args[] = { &nationId, &holderId, &tile }; return CallValue<bool>("TryGetCapitalHolder", args, 3); }
        int CapitulationTicksLeft(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("CapitulationTicksLeft", args, 1); }
        void* GiftBlockReason(int giverId, int targetId) const { void* args[] = { &giverId, &targetId }; return Call("GiftBlockReason", args, 2); }
        void* GiftReasonBlock(int giverId, int targetId, int reason) const { void* args[] = { &giverId, &targetId, &reason }; return Call("GiftReasonBlock", args, 3); }
        bool AtWar(int nationId) const { void* args[] = { &nationId }; return CallValue<bool>("AtWar", args, 1); }
        int GiftableDivisions(int giverId, bool anyType, int type) const { void* args[] = { &giverId, &anyType, &type }; return CallValue<int>("GiftableDivisions", args, 3); }
        void* PreviewGift(int giverId, int targetId, void* terms) const { void* args[] = { &giverId, &targetId, terms }; return Call("PreviewGift", args, 3); }
        int SendGift(int giverId, int targetId, void* terms, void* result) const { void* args[] = { &giverId, &targetId, terms, &result }; return CallValue<int>("SendGift", args, 4); }
        bool IsPlayerNation(int nationId) const { void* args[] = { &nationId }; return CallValue<bool>("IsPlayerNation", args, 1); }
        float LastPlunderLoot(int v, int h) const { void* args[] = { &v, &h }; return CallValue<float>("LastPlunderLoot", args, 2); }
        bool AnswerIncursionCard(void* card, int answer) const { void* args[] = { card, &answer }; return CallValue<bool>("AnswerIncursionCard", args, 2); }
        int PlayerProtestIncursion(int playerId, int violatorId) const { void* args[] = { &playerId, &violatorId }; return CallValue<int>("PlayerProtestIncursion", args, 2); }
        int PlayerGrantPassage(int playerId, int violatorId) const { void* args[] = { &playerId, &violatorId }; return CallValue<int>("PlayerGrantPassage", args, 2); }
        int PlayerRevokePassage(int playerId, int violatorId) const { void* args[] = { &playerId, &violatorId }; return CallValue<int>("PlayerRevokePassage", args, 2); }
        int PlayerExpelIncursion(int playerId, int violatorId) const { void* args[] = { &playerId, &violatorId }; return CallValue<int>("PlayerExpelIncursion", args, 2); }
        int PlayerWithdrawTroops(int playerId, int hostId) const { void* args[] = { &playerId, &hostId }; return CallValue<int>("PlayerWithdrawTroops", args, 2); }
        void PledgeWithdrawal(int performerId, int receiverId) const { void* args[] = { &performerId, &receiverId }; Call("PledgeWithdrawal", args, 2); }
        int JustificationTicks(int holder, int other) const { void* args[] = { &holder, &other }; return CallValue<int>("JustificationTicks", args, 2); }
        void* PreviewIncursion(int ctrlId, int hostId, int divisions, float depth) const { void* args[] = { &ctrlId, &hostId, &divisions, &depth }; return Call("PreviewIncursion", args, 4); }
        void SeedPendingPeaceTerms(void* terms) const { void* args[] = { terms }; Call("SeedPendingPeaceTerms", args, 1); }
        bool PendingPeaceAllyRefuses(void* terms, int allyId, int& wanted) const { void* args[] = { terms, &allyId, &wanted }; return CallValue<bool>("PendingPeaceAllyRefuses", args, 3); }
        void CollectPendingPeaceRefusals(void* terms, void* into) const { void* args[] = { terms, into }; Call("CollectPendingPeaceRefusals", args, 2); }
        bool AnswerLocalOffer(void* offer, bool accept, int& why) const { void* args[] = { offer, &accept, &why }; return CallValue<bool>("AnswerLocalOffer", args, 3); }
        void* DebugLocalOffer(int kind, int arcId, int recordId, int from, int against, float gold = 0f) const { void* args[] = { &kind, &arcId, &recordId, &from, &against, &gold }; return Call("DebugLocalOffer", args, 6); }
        bool TryGetLostGlory(int nationId, void* memory, float& fervor) const { void* args[] = { &nationId, &memory, &fervor }; return CallValue<bool>("TryGetLostGlory", args, 3); }
        int KinStatesOf(int nationId, void* dst) const { void* args[] = { &nationId, dst }; return CallValue<int>("KinStatesOf", args, 2); }
        int GloryYearsAgo(void* m) const { void* args[] = { m }; return CallValue<int>("GloryYearsAgo", args, 1); }
        void* PeopleNameOf(int peopleKey) const { void* args[] = { &peopleKey }; return Call("PeopleNameOf", args, 1); }
        void* RequestBlockReason(int senderId, int targetId) const { void* args[] = { &senderId, &targetId }; return Call("RequestBlockReason", args, 2); }
        void* PeoplesKindBlock(int senderId, int targetId, int kind) const { void* args[] = { &senderId, &targetId, &kind }; return Call("PeoplesKindBlock", args, 3); }
        void* PeoplesTermsBlock(int senderId, int targetId, void* terms) const { void* args[] = { &senderId, &targetId, terms }; return Call("PeoplesTermsBlock", args, 3); }
        void CollectEndableWars(int targetId, int senderId, void* dst) const { void* args[] = { &targetId, &senderId, dst }; Call("CollectEndableWars", args, 3); }
        void CollectPersecutedPeoples(int targetId, void* dst) const { void* args[] = { &targetId, dst }; Call("CollectPersecutedPeoples", args, 2); }
        void CollectAssimilatedPeoples(int targetId, void* dst, int perCount) const { void* args[] = { &targetId, dst, &perCount }; Call("CollectAssimilatedPeoples", args, 3); }
        void CollectForeignPeoples(int targetId, int axis, void* dst, int max) const { void* args[] = { &targetId, &axis, dst, &max }; Call("CollectForeignPeoples", args, 4); }
        void CollectLandRecipients(int senderId, int targetId, int axis, int group, void* dst, int max) const { void* args[] = { &senderId, &targetId, &axis, &group, dst, &max }; Call("CollectLandRecipients", args, 6); }
        void* PeoplesLandOf(int senderId, int targetId, void* terms, int& states, int& version) const { void* args[] = { &senderId, &targetId, terms, &states, &version }; return Call("PeoplesLandOf", args, 5); }
        float PeoplesSeverity(int senderId, int targetId, void* terms) const { void* args[] = { &senderId, &targetId, terms }; return CallValue<float>("PeoplesSeverity", args, 3); }
        float GetRequestChance(int senderId, int targetId, void* terms, int tone, bool bare = false) const { void* args[] = { &senderId, &targetId, terms, &tone, &bare }; return CallValue<float>("GetRequestChance", args, 5); }
        int PlayerSendRequest(int senderId, int targetId, void* terms, int tone) const { void* args[] = { &senderId, &targetId, terms, &tone }; return CallValue<int>("PlayerSendRequest", args, 4); }
        int SendRequest(int senderId, int targetId, void* terms, int tone) const { void* args[] = { &senderId, &targetId, terms, &tone }; return CallValue<int>("SendRequest", args, 4); }
        bool AnswerPendingRequest(void* card, bool accept) const { void* args[] = { card, &accept }; return CallValue<bool>("AnswerPendingRequest", args, 2); }
        int UltimatumAnswererOf(int senderId, int targetId) const { void* args[] = { &senderId, &targetId }; return CallValue<int>("UltimatumAnswererOf", args, 2); }
        void* SubmissionDemandBlock(int senderId, int targetId, int kind) const { void* args[] = { &senderId, &targetId, &kind }; return Call("SubmissionDemandBlock", args, 3); }
        float BlocWarPowerOf(int nationId) const { void* args[] = { &nationId }; return CallValue<float>("BlocWarPowerOf", args, 1); }
        void* GetSurrender(int nationId) const { void* args[] = { &nationId }; return Call("GetSurrender", args, 1); }
        void ReloadPolitics() const { Call("ReloadPolitics", nullptr, 0); }
        void UnificationAfterLoad() const { Call("UnificationAfterLoad", nullptr, 0); }
        float RealmWarPowerOf(int nationId) const { void* args[] = { &nationId }; return CallValue<float>("RealmWarPowerOf", args, 1); }
        void* GetUnion(int unionId) const { void* args[] = { &unionId }; return Call("GetUnion", args, 1); }
        bool IsUnionRuler(int nationId) const { void* args[] = { &nationId }; return CallValue<bool>("IsUnionRuler", args, 1); }
        void* UnionOf(int nationId) const { void* args[] = { &nationId }; return Call("UnionOf", args, 1); }
        void* RestoreUnion(int kind, int seniorId, void* memberIds, const char* name, void* color, int ageTicks = -2147483648) const { void* managed_3 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &kind, &seniorId, memberIds, managed_3, color, &ageTicks }; return Call("RestoreUnion", args, 6); }
        bool AllianceLockedByUnion(int a, int b) const { void* args[] = { &a, &b }; return CallValue<bool>("AllianceLockedByUnion", args, 2); }
        int NaturalUnionSenior(int a, int b) const { void* args[] = { &a, &b }; return CallValue<int>("NaturalUnionSenior", args, 2); }
        int CheckUnionDeal(void* deal) const { void* args[] = { deal }; return CallValue<int>("CheckUnionDeal", args, 1); }
        int CheckUnionProposal(void* deal) const { void* args[] = { deal }; return CallValue<int>("CheckUnionProposal", args, 1); }
        float GetUnionOdds(void* deal, void* terms = nullptr) const { void* args[] = { deal, terms }; return CallValue<float>("GetUnionOdds", args, 2); }
        float UnionPowerOf(int nationId) const { void* args[] = { &nationId }; return CallValue<float>("UnionPowerOf", args, 1); }
        int UnionCooldownLeft(int a, int b) const { void* args[] = { &a, &b }; return CallValue<int>("UnionCooldownLeft", args, 2); }
        void* MakeUnionDeal(int playerId, int otherId, int kind, bool playerLeads) const { void* args[] = { &playerId, &otherId, &kind, &playerLeads }; return Call("MakeUnionDeal", args, 4); }
        int PlayerProposeUnion(void* deal) const { void* args[] = { deal }; return CallValue<int>("PlayerProposeUnion", args, 1); }
        float GetUnionChance(int playerId, int targetId, int kind) const { void* args[] = { &playerId, &targetId, &kind }; return CallValue<float>("GetUnionChance", args, 3); }
        bool CanProposeUnion(int playerId, int targetId, int kind) const { void* args[] = { &playerId, &targetId, &kind }; return CallValue<bool>("CanProposeUnion", args, 3); }
        int PlayerProposeUnion(int playerId, int targetId, int kind) const { void* args[] = { &playerId, &targetId, &kind }; return CallValue<int>("PlayerProposeUnion", args, 3); }
        int CheckLeaveUnion(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("CheckLeaveUnion", args, 1); }
        int PlayerLeaveUnion(int playerId) const { void* args[] = { &playerId }; return CallValue<int>("PlayerLeaveUnion", args, 1); }
        int CheckDissolveUnion(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("CheckDissolveUnion", args, 1); }
        bool PlayerDissolveUnion(int playerId) const { void* args[] = { &playerId }; return CallValue<bool>("PlayerDissolveUnion", args, 1); }
        int CheckExpelFromUnion(int rulerId, int memberId) const { void* args[] = { &rulerId, &memberId }; return CallValue<int>("CheckExpelFromUnion", args, 2); }
        int PlayerExpelFromUnion(int rulerId, int memberId) const { void* args[] = { &rulerId, &memberId }; return CallValue<int>("PlayerExpelFromUnion", args, 2); }
        int CheckSubsidiseMember(int rulerId, int memberId) const { void* args[] = { &rulerId, &memberId }; return CallValue<int>("CheckSubsidiseMember", args, 2); }
        int PlayerSubsidiseMember(int rulerId, int memberId) const { void* args[] = { &rulerId, &memberId }; return CallValue<int>("PlayerSubsidiseMember", args, 2); }
        float UnionSubsidyCost(int memberId) const { void* args[] = { &memberId }; return CallValue<float>("UnionSubsidyCost", args, 1); }
        int CheckGrantAutonomy(int rulerId, int memberId) const { void* args[] = { &rulerId, &memberId }; return CallValue<int>("CheckGrantAutonomy", args, 2); }
        int PlayerGrantAutonomy(int rulerId, int memberId, int& moved) const { void* args[] = { &rulerId, &memberId, &moved }; return CallValue<int>("PlayerGrantAutonomy", args, 3); }
        void* ReadUnionLoyalty(int memberId, void* extras = nullptr) const { void* args[] = { &memberId, extras }; return Call("ReadUnionLoyalty", args, 2); }
        int UnionOwedDivisions(int memberId) const { void* args[] = { &memberId }; return CallValue<int>("UnionOwedDivisions", args, 1); }
        int UnionFairShare(int memberId) const { void* args[] = { &memberId }; return CallValue<int>("UnionFairShare", args, 1); }
        int UnionStatesEstimate(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("UnionStatesEstimate", args, 1); }
        bool PlayerRenameUnion(int rulerId, const char* newName) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(newName ? newName : "") : nullptr; void* args[] = { &rulerId, managed_1 }; return CallValue<bool>("PlayerRenameUnion", args, 2); }
        bool PlayerRenameUnionMember(int playerId, int memberId, const char* newName) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(newName ? newName : "") : nullptr; void* args[] = { &playerId, &memberId, managed_2 }; return CallValue<bool>("PlayerRenameUnionMember", args, 3); }
        void SetNationColorInRealm(int nationId, void* color) const { void* args[] = { &nationId, color }; Call("SetNationColorInRealm", args, 2); }
        bool IsIdentityLocked(int nationId) const { void* args[] = { &nationId }; return CallValue<bool>("IsIdentityLocked", args, 1); }
        void SetIdentityLocked(int nationId, bool locked) const { void* args[] = { &nationId, &locked }; Call("SetIdentityLocked", args, 2); }
        int AcceptPendingUnionOffer(void* deal) const { void* args[] = { deal }; return CallValue<int>("AcceptPendingUnionOffer", args, 1); }
        void DeclinePendingUnionOffer(void* deal) const { void* args[] = { deal }; Call("DeclinePendingUnionOffer", args, 1); }
        int UnionOfferTicksLeft(void* deal) const { void* args[] = { deal }; return CallValue<int>("UnionOfferTicksLeft", args, 1); }
        void RestorePendingUnionOffer(void* deal, int ticksLeft) const { void* args[] = { deal, &ticksLeft }; Call("RestorePendingUnionOffer", args, 2); }
        int ForceUnion(int aId, int bId, int kind, int seniorId = -1) const { void* args[] = { &aId, &bId, &kind, &seniorId }; return CallValue<int>("ForceUnion", args, 4); }
        bool ForceJoinUnion(int unionId, int nationId) const { void* args[] = { &unionId, &nationId }; return CallValue<bool>("ForceJoinUnion", args, 2); }
        bool ForceLeaveUnion(int nationId) const { void* args[] = { &nationId }; return CallValue<bool>("ForceLeaveUnion", args, 1); }
        bool ForceDissolveUnion(int nationId) const { void* args[] = { &nationId }; return CallValue<bool>("ForceDissolveUnion", args, 1); }
        int PeopleTraitOf(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("PeopleTraitOf", args, 1); }
        void CreditOwnWar(void* rel, int declarerId) const { void* args[] = { rel, &declarerId }; Call("CreditOwnWar", args, 2); }
        bool OpenPendingPeaceTable() const { return CallValue<bool>("OpenPendingPeaceTable", nullptr, 0); }
        void* PendingPeaceDemand() const { return Call("PendingPeaceDemand", nullptr, 0); }
        float PendingPeaceSettlement(void* terms) const { void* args[] = { terms }; return CallValue<float>("PendingPeaceSettlement", args, 1); }
        bool PendingPeaceSignable(void* terms) const { void* args[] = { terms }; return CallValue<bool>("PendingPeaceSignable", args, 1); }
        void TrimPendingPeaceToSignable(void* terms) const { void* args[] = { terms }; Call("TrimPendingPeaceToSignable", args, 1); }
        float PeaceTermsValue(void* terms) const { void* args[] = { terms }; return CallValue<float>("PeaceTermsValue", args, 1); }
        bool ResolvePendingPeace(void* terms) const { void* args[] = { terms }; return CallValue<bool>("ResolvePendingPeace", args, 1); }
        void ResolvePendingPeaceAutomatically() const { Call("ResolvePendingPeaceAutomatically", nullptr, 0); }
        bool PlayerAskForPeaceTable(int playerId, int enemyId) const { void* args[] = { &playerId, &enemyId }; return CallValue<bool>("PlayerAskForPeaceTable", args, 2); }
        bool PlayerHoldsPeaceDictation(int playerId, int enemyId) const { void* args[] = { &playerId, &enemyId }; return CallValue<bool>("PlayerHoldsPeaceDictation", args, 2); }
        bool PlayerOpenSurrenderConference(int playerId, int enemyId = -1) const { void* args[] = { &playerId, &enemyId }; return CallValue<bool>("PlayerOpenSurrenderConference", args, 2); }
        int PlayerPeaceWait(int playerId, int enemyId) const { void* args[] = { &playerId, &enemyId }; return CallValue<int>("PlayerPeaceWait", args, 2); }
        void CollectPeaceSuitors(int playerId, void* into) const { void* args[] = { &playerId, into }; Call("CollectPeaceSuitors", args, 2); }
        void CollectUnsignedWins(int playerId, void* into) const { void* args[] = { &playerId, into }; Call("CollectUnsignedWins", args, 2); }
        bool CancelPendingPeace() const { return CallValue<bool>("CancelPendingPeace", nullptr, 0); }
        void* ImposeVassalPolityBlockReason(int overlordId, int vassalId, int ideology) const { void* args[] = { &overlordId, &vassalId, &ideology }; return Call("ImposeVassalPolityBlockReason", args, 3); }
        float ImposeVassalPolityCost(int vassalId) const { void* args[] = { &vassalId }; return CallValue<float>("ImposeVassalPolityCost", args, 1); }
        bool ImposeVassalPolity(int overlordId, int vassalId, int ideology, const char*& error) const { void* args[] = { &overlordId, &vassalId, &ideology, &error }; return CallValue<bool>("ImposeVassalPolity", args, 4); }
        void* EnsureRelation(int a, int b) const { void* args[] = { &a, &b }; return Call("EnsureRelation", args, 2); }
        int SharedIdentityMask(int a, int b) const { void* args[] = { &a, &b }; return CallValue<int>("SharedIdentityMask", args, 2); }
        float WarPowerAgainst(int self, int target) const { void* args[] = { &self, &target }; return CallValue<float>("WarPowerAgainst", args, 2); }
        float WarPowerWithAlliesOf(int nationId) const { void* args[] = { &nationId }; return CallValue<float>("WarPowerWithAlliesOf", args, 1); }
        float WarPowerOf(int nationId) const { void* args[] = { &nationId }; return CallValue<float>("WarPowerOf", args, 1); }
        float ArmyPowerOf(int nationId) const { void* args[] = { &nationId }; return CallValue<float>("ArmyPowerOf", args, 1); }
        bool ChangePolity(int nationId, int ideology, const char*& error) const { void* args[] = { &nationId, &ideology, &error }; return CallValue<bool>("ChangePolity", args, 3); }
        float TaxPerDay(void* it) const { void* args[] = { it }; return CallValue<float>("TaxPerDay", args, 1); }
        float EdictGoldCost(int nationId, int edict) const { void* args[] = { &nationId, &edict }; return CallValue<float>("EdictGoldCost", args, 2); }
        void* EdictBlockReason(int nationId, int edict) const { void* args[] = { &nationId, &edict }; return Call("EdictBlockReason", args, 2); }
        bool TryEdict(int nationId, int edict, const char*& reason) const { void* args[] = { &nationId, &edict, &reason }; return CallValue<bool>("TryEdict", args, 3); }
        bool TryEdictAmnesty(int nationId, const char*& reason) const { void* args[] = { &nationId, &reason }; return CallValue<bool>("TryEdictAmnesty", args, 2); }
        bool TryEdictIntendants(int nationId, const char*& reason) const { void* args[] = { &nationId, &reason }; return CallValue<bool>("TryEdictIntendants", args, 2); }
        void OnClansCalled(int nationId) const { void* args[] = { &nationId }; Call("OnClansCalled", args, 1); }
        void* IdentityAdoptBlockReason(int nationId, int axis, int groupId) const { void* args[] = { &nationId, &axis, &groupId }; return Call("IdentityAdoptBlockReason", args, 3); }
        void* IdentityAdoptOutlookOf(int nationId, int axis, int groupId) const { void* args[] = { &nationId, &axis, &groupId }; return Call("IdentityAdoptOutlookOf", args, 3); }
        bool TryAdoptIdentity(int nationId, int axis, int groupId, const char*& reason) const { void* args[] = { &nationId, &axis, &groupId, &reason }; return CallValue<bool>("TryAdoptIdentity", args, 4); }
        bool PlayerSetBordersClosed(int nationId, bool closed) const { void* args[] = { &nationId, &closed }; return CallValue<bool>("PlayerSetBordersClosed", args, 2); }
        bool PlayerSetAssimilationPush(int nationId, bool active) const { void* args[] = { &nationId, &active }; return CallValue<bool>("PlayerSetAssimilationPush", args, 2); }
        bool PlayerSetBorderGuard(int nationId, bool active) const { void* args[] = { &nationId, &active }; return CallValue<bool>("PlayerSetBorderGuard", args, 2); }
        bool PlayerSetAssimilationPush(int nationId, int axis, bool on) const { void* args[] = { &nationId, &axis, &on }; return CallValue<bool>("PlayerSetAssimilationPush", args, 3); }
        bool PlayerSetAssimilation(int nationId, int axis, int scope, const char*& reason) const { void* args[] = { &nationId, &axis, &scope, &reason }; return CallValue<bool>("PlayerSetAssimilation", args, 4); }
        bool PlayerSetBorderGuard(int nationId, int axis, bool on) const { void* args[] = { &nationId, &axis, &on }; return CallValue<bool>("PlayerSetBorderGuard", args, 3); }
        bool IdentityCountRenounced(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return CallValue<bool>("IdentityCountRenounced", args, 2); }
        void* PolityBlockReason(int nationId, int ideology) const { void* args[] = { &nationId, &ideology }; return Call("PolityBlockReason", args, 2); }
        void* GetInternals(int nationId) const { void* args[] = { &nationId }; return Call("GetInternals", args, 1); }
        void* GetRelationsOf(int nationId) const { void* args[] = { &nationId }; return Call("GetRelationsOf", args, 1); }
        void CollectActiveWars(void* buffer) const { void* args[] = { buffer }; Call("CollectActiveWars", args, 1); }
        float GetOpinion(int ofNation, int aboutNation) const { void* args[] = { &ofNation, &aboutNation }; return CallValue<float>("GetOpinion", args, 2); }
        bool IsAtWar(int a, int b) const { void* args[] = { &a, &b }; return CallValue<bool>("IsAtWar", args, 2); }
        bool HasIndependenceWar(int nationId) const { void* args[] = { &nationId }; return CallValue<bool>("HasIndependenceWar", args, 1); }
        bool HoldsLand(int nationId) const { void* args[] = { &nationId }; return CallValue<bool>("HoldsLand", args, 1); }
        float SettleRequiredPopulation(int playerId) const { void* args[] = { &playerId }; return CallValue<float>("SettleRequiredPopulation", args, 1); }
        void* GetRelation(int a, int b) const { void* args[] = { &a, &b }; return Call("GetRelation", args, 2); }
        bool PlayerDeclareWar(int attackerId, int defenderId) const { void* args[] = { &attackerId, &defenderId }; return CallValue<bool>("PlayerDeclareWar", args, 2); }
        int PlayerImproveRelations(int playerId, int otherId) const { void* args[] = { &playerId, &otherId }; return CallValue<int>("PlayerImproveRelations", args, 2); }
        int ImproveRelations(int actorId, int otherId) const { void* args[] = { &actorId, &otherId }; return CallValue<int>("ImproveRelations", args, 2); }
        bool EnvoysRepeating(int actorId, int otherId) const { void* args[] = { &actorId, &otherId }; return CallValue<bool>("EnvoysRepeating", args, 2); }
        bool EnvoyGoodwillFull(int actorId, int otherId) const { void* args[] = { &actorId, &otherId }; return CallValue<bool>("EnvoyGoodwillFull", args, 2); }
        int PlayerSetEnvoyRepeat(int playerId, int otherId, bool on, bool& sent) const { void* args[] = { &playerId, &otherId, &on, &sent }; return CallValue<int>("PlayerSetEnvoyRepeat", args, 4); }
        float GetUltimatumChance(int playerId, int targetId, void* terms) const { void* args[] = { &playerId, &targetId, terms }; return CallValue<float>("GetUltimatumChance", args, 3); }
        int OwnIdentityGroupId(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return CallValue<int>("OwnIdentityGroupId", args, 2); }
        void* IdentityDemandBlockReason(int targetId, int axis, int groupId) const { void* args[] = { &targetId, &axis, &groupId }; return Call("IdentityDemandBlockReason", args, 3); }
        int PlayerSendUltimatum(int playerId, int targetId, void* terms) const { void* args[] = { &playerId, &targetId, terms }; return CallValue<int>("PlayerSendUltimatum", args, 3); }
        int SendUltimatum(int playerId, int targetId, void* terms) const { void* args[] = { &playerId, &targetId, terms }; return CallValue<int>("SendUltimatum", args, 3); }
        int CompletedFactoriesOf(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("CompletedFactoriesOf", args, 1); }
        int AllFactoriesOf(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("AllFactoriesOf", args, 1); }
        int DivisionCountOf(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("DivisionCountOf", args, 1); }
        int DivisionCountOf(int nationId, int type) const { void* args[] = { &nationId, &type }; return CallValue<int>("DivisionCountOf", args, 2); }
        bool PlayerSurrender(int playerId) const { void* args[] = { &playerId }; return CallValue<bool>("PlayerSurrender", args, 1); }
        int PlayerProposeAlliance(int playerId, int otherId) const { void* args[] = { &playerId, &otherId }; return CallValue<int>("PlayerProposeAlliance", args, 2); }
        int ProposeAlliance(int playerId, int otherId) const { void* args[] = { &playerId, &otherId }; return CallValue<int>("ProposeAlliance", args, 2); }
        bool AnswerPendingAllianceOffer(void* offer, bool accept) const { void* args[] = { offer, &accept }; return CallValue<bool>("AnswerPendingAllianceOffer", args, 2); }
        bool AnswerPendingCallToArms(void* call, bool honour) const { void* args[] = { call, &honour }; return CallValue<bool>("AnswerPendingCallToArms", args, 2); }
        bool HasPeoplePetition(int ownerId, int originId) const { void* args[] = { &ownerId, &originId }; return CallValue<bool>("HasPeoplePetition", args, 2); }
        bool EnqueuePeoplePetition(int ownerId, int originId, int kind, bool demand = false) const { void* args[] = { &ownerId, &originId, &kind, &demand }; return CallValue<bool>("EnqueuePeoplePetition", args, 4); }
        bool AnswerPendingPeoplePetition(void* p, bool grant) const { void* args[] = { p, &grant }; return CallValue<bool>("AnswerPendingPeoplePetition", args, 2); }
        void ApplyVassalage(int vassalId, int overlordId, bool applyTint = true) const { void* args[] = { &vassalId, &overlordId, &applyTint }; Call("ApplyVassalage", args, 3); }
        bool PlayerReleaseVassal(int playerId, int vassalId) const { void* args[] = { &playerId, &vassalId }; return CallValue<bool>("PlayerReleaseVassal", args, 2); }
        bool CanDeclareIndependence(int vassalId) const { void* args[] = { &vassalId }; return CallValue<bool>("CanDeclareIndependence", args, 1); }
        float IndependenceLetGoChance(int vassalId) const { void* args[] = { &vassalId }; return CallValue<float>("IndependenceLetGoChance", args, 1); }
        int DeclareIndependence(int vassalId) const { void* args[] = { &vassalId }; return CallValue<int>("DeclareIndependence", args, 1); }
        bool PlayerAssumeVassal(int playerId, int vassalId) const { void* args[] = { &playerId, &vassalId }; return CallValue<bool>("PlayerAssumeVassal", args, 2); }
        void CollectProtectedTiles(int playerId, void* dst) const { void* args[] = { &playerId, dst }; Call("CollectProtectedTiles", args, 2); }
        int PlayerReleaseVassalNation(int playerId, void* tiles, const char* name, void* color) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &playerId, tiles, managed_2, color }; return CallValue<int>("PlayerReleaseVassalNation", args, 4); }
        bool PlayerBreakAlliance(int playerId, int otherId) const { void* args[] = { &playerId, &otherId }; return CallValue<bool>("PlayerBreakAlliance", args, 2); }
        void* EditorCtx() const { return Call("EditorCtx", nullptr, 0); }
        bool ForceDeclareWar(int attackerId, int defenderId) const { void* args[] = { &attackerId, &defenderId }; return CallValue<bool>("ForceDeclareWar", args, 2); }
        bool RestoreWar(int a, int b) const { void* args[] = { &a, &b }; return CallValue<bool>("RestoreWar", args, 2); }
        bool ForceMakePeace(int a, int b) const { void* args[] = { &a, &b }; return CallValue<bool>("ForceMakePeace", args, 2); }
        bool SetEndlessWar(int a, int b, bool endless) const { void* args[] = { &a, &b, &endless }; return CallValue<bool>("SetEndlessWar", args, 3); }
        bool IsEndlessWar(int a, int b) const { void* args[] = { &a, &b }; return CallValue<bool>("IsEndlessWar", args, 2); }
        bool ForceSetAlliance(int a, int b, bool allied) const { void* args[] = { &a, &b, &allied }; return CallValue<bool>("ForceSetAlliance", args, 3); }
        bool ForceSetDefensivePact(int a, int b, bool pact) const { void* args[] = { &a, &b, &pact }; return CallValue<bool>("ForceSetDefensivePact", args, 3); }
        bool ForceSetOpinion(int a, int b, float opinionAtoB, float opinionBtoA) const { void* args[] = { &a, &b, &opinionAtoB, &opinionBtoA }; return CallValue<bool>("ForceSetOpinion", args, 4); }
        bool ForceSetPolity(int nationId, int ideology) const { void* args[] = { &nationId, &ideology }; return CallValue<bool>("ForceSetPolity", args, 2); }
        bool ForceAnnex(int annexerId, int targetId) const { void* args[] = { &annexerId, &targetId }; return CallValue<bool>("ForceAnnex", args, 2); }
        float GetDealAcceptance(void* deal) const { void* args[] = { deal }; return CallValue<float>("GetDealAcceptance", args, 1); }
        float SolveDealGold(void* deal, void* item, bool paying, float maxGold, float targetChance, float& achieved) const { void* args[] = { deal, item, &paying, &maxGold, &targetChance, &achieved }; return CallValue<float>("SolveDealGold", args, 6); }
        int PlayerProposeTradeDeal(void* deal) const { void* args[] = { deal }; return CallValue<int>("PlayerProposeTradeDeal", args, 1); }
        bool AcceptPendingTradeOffer(void* deal) const { void* args[] = { deal }; return CallValue<bool>("AcceptPendingTradeOffer", args, 1); }
        void DeclinePendingTradeOffer(void* deal) const { void* args[] = { deal }; Call("DeclinePendingTradeOffer", args, 1); }
        bool AnswerIrredentaDemand(void* demand, bool accept) const { void* args[] = { demand, &accept }; return CallValue<bool>("AnswerIrredentaDemand", args, 2); }
        bool AnswerPendingUltimatum(void* demand, bool accept) const { void* args[] = { demand, &accept }; return CallValue<bool>("AnswerPendingUltimatum", args, 2); }
        bool CanRequestAnnexation(int playerId, int targetId) const { void* args[] = { &playerId, &targetId }; return CallValue<bool>("CanRequestAnnexation", args, 2); }
        float GetAnnexationRequestChance(int playerId, int targetId) const { void* args[] = { &playerId, &targetId }; return CallValue<float>("GetAnnexationRequestChance", args, 2); }
        int PlayerRequestAnnexation(int playerId, int targetId) const { void* args[] = { &playerId, &targetId }; return CallValue<int>("PlayerRequestAnnexation", args, 2); }
        bool CanRequestVassalage(int playerId, int targetId) const { void* args[] = { &playerId, &targetId }; return CallValue<bool>("CanRequestVassalage", args, 2); }
        float GetVassalageRequestChance(int playerId, int targetId) const { void* args[] = { &playerId, &targetId }; return CallValue<float>("GetVassalageRequestChance", args, 2); }
        int PlayerRequestVassalage(int playerId, int targetId) const { void* args[] = { &playerId, &targetId }; return CallValue<int>("PlayerRequestVassalage", args, 2); }
        bool CanDemandVassalAnnexation(int playerId, int vassalId) const { void* args[] = { &playerId, &vassalId }; return CallValue<bool>("CanDemandVassalAnnexation", args, 2); }
        float GetVassalAnnexationChance(int playerId, int vassalId) const { void* args[] = { &playerId, &vassalId }; return CallValue<float>("GetVassalAnnexationChance", args, 2); }
        int PlayerDemandVassalAnnexation(int playerId, int vassalId) const { void* args[] = { &playerId, &vassalId }; return CallValue<int>("PlayerDemandVassalAnnexation", args, 2); }
        void* GetWarGoal(int nationId) const { void* args[] = { &nationId }; return Call("GetWarGoal", args, 1); }
        void BeginTick() const { Call("BeginTick", nullptr, 0); }
        int NationAt(int index) const { void* args[] = { &index }; return CallValue<int>("NationAt", args, 1); }
        bool Alive(int id) const { void* args[] = { &id }; return CallValue<bool>("Alive", args, 1); }
        int BornTick(int id) const { void* args[] = { &id }; return CallValue<int>("BornTick", args, 1); }
        void* NationName(int id) const { void* args[] = { &id }; return Call("NationName", args, 1); }
        void* NationColor(int id) const { void* args[] = { &id }; return Call("NationColor", args, 1); }
        void* CapitalName(int id) const { void* args[] = { &id }; return Call("CapitalName", args, 1); }
        float Fact(int nation, int fact) const { void* args[] = { &nation, &fact }; return CallValue<float>("Fact", args, 2); }
        bool RulerIs(int nation, const char* word) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(word ? word : "") : nullptr; void* args[] = { &nation, managed_1 }; return CallValue<bool>("RulerIs", args, 2); }
        void* RulerName(int nation) const { void* args[] = { &nation }; return Call("RulerName", args, 1); }
        void* RulerTitle(int nation) const { void* args[] = { &nation }; return Call("RulerTitle", args, 1); }
        bool RulerFemale(int nation) const { void* args[] = { &nation }; return CallValue<bool>("RulerFemale", args, 1); }
        void* IdeologyKey(int nation) const { void* args[] = { &nation }; return Call("IdeologyKey", args, 1); }
        void StatesOf(int nation, void* dst) const { void* args[] = { &nation, dst }; Call("StatesOf", args, 2); }
        void* StateName(int state) const { void* args[] = { &state }; return Call("StateName", args, 1); }
        void* StatePlace(int state) const { void* args[] = { &state }; return Call("StatePlace", args, 1); }
        void* StateBearing(int state) const { void* args[] = { &state }; return Call("StateBearing", args, 1); }
        int StateFacing(int state) const { void* args[] = { &state }; return CallValue<int>("StateFacing", args, 1); }
        bool StateLord(int state, const char*& given, const char*& house, bool& female) const { void* args[] = { &state, &given, &house, &female }; return CallValue<bool>("StateLord", args, 4); }
        int WarEnemy(int nation) const { void* args[] = { &nation }; return CallValue<int>("WarEnemy", args, 1); }
        int WarStartTick(int a, int b) const { void* args[] = { &a, &b }; return CallValue<int>("WarStartTick", args, 2); }
        int ClaimTick(int claimant, int state) const { void* args[] = { &claimant, &state }; return CallValue<int>("ClaimTick", args, 2); }
        float CorruptionPerYear(int nation) const { void* args[] = { &nation }; return CallValue<float>("CorruptionPerYear", args, 1); }
        int RisingTicksLeft(int nation) const { void* args[] = { &nation }; return CallValue<int>("RisingTicksLeft", args, 1); }
        int LastLandLoss(int nation, int& taker) const { void* args[] = { &nation, &taker }; return CallValue<int>("LastLandLoss", args, 2); }
        void* StateCity(int state) const { void* args[] = { &state }; return Call("StateCity", args, 1); }
        int StateOwner(int state) const { void* args[] = { &state }; return CallValue<int>("StateOwner", args, 1); }
        float StateFact(int state, int fact) const { void* args[] = { &state, &fact }; return CallValue<float>("StateFact", args, 2); }
        int StateForeignPeople(int state) const { void* args[] = { &state }; return CallValue<int>("StateForeignPeople", args, 1); }
        int StateClaimant(int state) const { void* args[] = { &state }; return CallValue<int>("StateClaimant", args, 1); }
        bool StateBorders(int state, int nation) const { void* args[] = { &state, &nation }; return CallValue<bool>("StateBorders", args, 2); }
        void PeoplesOf(int nation, void* dst) const { void* args[] = { &nation, dst }; Call("PeoplesOf", args, 2); }
        int MainPeople(int nation) const { void* args[] = { &nation }; return CallValue<int>("MainPeople", args, 1); }
        void* PeopleName(int origin) const { void* args[] = { &origin }; return Call("PeopleName", args, 1); }
        int HomelandOf(int origin) const { void* args[] = { &origin }; return CallValue<int>("HomelandOf", args, 1); }
        float PeopleFact(int nation, int origin, int fact) const { void* args[] = { &nation, &origin, &fact }; return CallValue<float>("PeopleFact", args, 3); }
        float PeopleShareIn(int origin, int state) const { void* args[] = { &origin, &state }; return CallValue<float>("PeopleShareIn", args, 2); }
        void Neighbours(int nation, void* dst) const { void* args[] = { &nation, dst }; Call("Neighbours", args, 2); }
        bool AtWarWith(int a, int b) const { void* args[] = { &a, &b }; return CallValue<bool>("AtWarWith", args, 2); }
        float Opinion(int judge, int target) const { void* args[] = { &judge, &target }; return CallValue<float>("Opinion", args, 2); }
        float Power(int nation) const { void* args[] = { &nation }; return CallValue<float>("Power", args, 1); }
        int RivalOf(int nation) const { void* args[] = { &nation }; return CallValue<int>("RivalOf", args, 1); }
        void NameFigure(int nation, int people, bool female, uint32_t hash, const char*& given, const char*& house) const { void* args[] = { &nation, &people, &female, &hash, &given, &house }; Call("NameFigure", args, 6); }
        bool HardBlocked(int nation) const { void* args[] = { &nation }; return CallValue<bool>("HardBlocked", args, 1); }
        void AddGold(int nation, float amount) const { void* args[] = { &nation, &amount }; Call("AddGold", args, 2); }
        void AddManpower(int nation, float fraction) const { void* args[] = { &nation, &fraction }; Call("AddManpower", args, 2); }
        void AddPopulation(int nation, float fraction) const { void* args[] = { &nation, &fraction }; Call("AddPopulation", args, 2); }
        void AddChaos(int nation, float amount) const { void* args[] = { &nation, &amount }; Call("AddChaos", args, 2); }
        void AddLoyalty(int state, float delta) const { void* args[] = { &state, &delta }; Call("AddLoyalty", args, 2); }
        void AddLoyaltyAll(int nation, float delta) const { void* args[] = { &nation, &delta }; Call("AddLoyaltyAll", args, 2); }
        void AddTrust(int nation, int origin, float delta) const { void* args[] = { &nation, &origin, &delta }; Call("AddTrust", args, 3); }
        bool FinishPeoplesStep(int nation, int origin, const char* step) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(step ? step : "") : nullptr; void* args[] = { &nation, &origin, managed_2 }; return CallValue<bool>("FinishPeoplesStep", args, 3); }
        void AddGrievance(int nation, int origin, float amount) const { void* args[] = { &nation, &origin, &amount }; Call("AddGrievance", args, 3); }
        void AddAcceptance(int nation, int origin, float delta) const { void* args[] = { &nation, &origin, &delta }; Call("AddAcceptance", args, 3); }
        void SetPersecuted(int nation, int origin, bool on) const { void* args[] = { &nation, &origin, &on }; Call("SetPersecuted", args, 3); }
        int Influx(int nation, int origin, int state, float share) const { void* args[] = { &nation, &origin, &state, &share }; return CallValue<int>("Influx", args, 4); }
        bool FileClaim(int claimant, int state) const { void* args[] = { &claimant, &state }; return CallValue<bool>("FileClaim", args, 2); }
        void AddOpinion(int judge, int target, float delta) const { void* args[] = { &judge, &target, &delta }; Call("AddOpinion", args, 3); }
        bool CanRise(int nation, int origin, int state) const { void* args[] = { &nation, &origin, &state }; return CallValue<bool>("CanRise", args, 3); }
        bool StartRising(int nation, int origin, int state, int threadId) const { void* args[] = { &nation, &origin, &state, &threadId }; return CallValue<bool>("StartRising", args, 4); }
        void RuleRising(int rebel, int threadId) const { void* args[] = { &rebel, &threadId }; Call("RuleRising", args, 2); }
        bool CanBreakaway(int state) const { void* args[] = { &state }; return CallValue<bool>("CanBreakaway", args, 1); }
        bool Breakaway(int state, void* leader) const { void* args[] = { &state, leader }; return CallValue<bool>("Breakaway", args, 2); }
        bool CanCivilWar(int nation) const { void* args[] = { &nation }; return CallValue<bool>("CanCivilWar", args, 1); }
        int CivilWar(int nation, void* leader) const { void* args[] = { &nation, leader }; return CallValue<int>("CivilWar", args, 2); }
        bool CanCoup(int nation) const { void* args[] = { &nation }; return CallValue<bool>("CanCoup", args, 1); }
        bool Coup(int nation, void* leader, const char* ideologyKey) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(ideologyKey ? ideologyKey : "") : nullptr; void* args[] = { &nation, leader, managed_2 }; return CallValue<bool>("Coup", args, 3); }
        bool CanWar(int attacker, int target) const { void* args[] = { &attacker, &target }; return CallValue<bool>("CanWar", args, 2); }
        bool War(int attacker, int target) const { void* args[] = { &attacker, &target }; return CallValue<bool>("War", args, 2); }
        void MarksChanged(int nation) const { void* args[] = { &nation }; Call("MarksChanged", args, 1); }
        void Announce(void* notice) const { void* args[] = { &notice }; Call("Announce", args, 1); }
        int NationAt(int index) const { void* args[] = { &index }; return CallValue<int>("NationAt", args, 1); }
        bool Alive(int id) const { void* args[] = { &id }; return CallValue<bool>("Alive", args, 1); }
        void TiesOf(int p, void* dst) const { void* args[] = { &p, dst }; Call("TiesOf", args, 2); }
        void NeighboursOf(int id, void* dst) const { void* args[] = { &id, dst }; Call("NeighboursOf", args, 2); }
        bool Box(int id, int& minX, int& minY, int& maxX, int& maxY) const { void* args[] = { &id, &minX, &minY, &maxX, &maxY }; return CallValue<bool>("Box", args, 5); }
        void Wars(void* dst) const { void* args[] = { dst }; Call("Wars", args, 1); }
        int NationAt(int index) const { void* args[] = { &index }; return CallValue<int>("NationAt", args, 1); }
        bool Alive(int id) const { void* args[] = { &id }; return CallValue<bool>("Alive", args, 1); }
        int Tiles(int id) const { void* args[] = { &id }; return CallValue<int>("Tiles", args, 1); }
        int BornTick(int id) const { void* args[] = { &id }; return CallValue<int>("BornTick", args, 1); }
        void* NameOf(int id) const { void* args[] = { &id }; return Call("NameOf", args, 1); }
        void* ColorOf(int id) const { void* args[] = { &id }; return Call("ColorOf", args, 1); }
        int CapitalTile(int id) const { void* args[] = { &id }; return CallValue<int>("CapitalTile", args, 1); }
        void* SeatName(int id) const { void* args[] = { &id }; return Call("SeatName", args, 1); }
        void* PlaceName(int tile) const { void* args[] = { &tile }; return Call("PlaceName", args, 1); }
        float Power(int id) const { void* args[] = { &id }; return CallValue<float>("Power", args, 1); }
        float WarPower(int id) const { void* args[] = { &id }; return CallValue<float>("WarPower", args, 1); }
        float CoalitionPower(int id) const { void* args[] = { &id }; return CallValue<float>("CoalitionPower", args, 1); }
        void* Internals(int id) const { void* args[] = { &id }; return Call("Internals", args, 1); }
        void* Rel(int a, int b) const { void* args[] = { &a, &b }; return Call("Rel", args, 2); }
        void* EnsureRel(int a, int b) const { void* args[] = { &a, &b }; return Call("EnsureRel", args, 2); }
        void* RelationsOf(int id) const { void* args[] = { &id }; return Call("RelationsOf", args, 1); }
        void LandNeighbours(int id, void* dst) const { void* args[] = { &id, dst }; Call("LandNeighbours", args, 2); }
        void SeaNeighbours(int id, void* dst) const { void* args[] = { &id, dst }; Call("SeaNeighbours", args, 2); }
        bool CanSail(int id) const { void* args[] = { &id }; return CallValue<bool>("CanSail", args, 1); }
        bool Bonded(int a, int b) const { void* args[] = { &a, &b }; return CallValue<bool>("Bonded", args, 2); }
        bool AreKin(int a, int b) const { void* args[] = { &a, &b }; return CallValue<bool>("AreKin", args, 2); }
        void KinOf(int id, void* dst) const { void* args[] = { &id, dst }; Call("KinOf", args, 2); }
        float KinWarMul(int self, int other) const { void* args[] = { &self, &other }; return CallValue<float>("KinWarMul", args, 2); }
        float GloryBlame(int judge, int other) const { void* args[] = { &judge, &other }; return CallValue<float>("GloryBlame", args, 2); }
        void RefreshClaims() const { Call("RefreshClaims", nullptr, 0); }
        bool Claims(int claimant, int owner) const { void* args[] = { &claimant, &owner }; return CallValue<bool>("Claims", args, 2); }
        int ClaimedSeat(int claimant, int owner) const { void* args[] = { &claimant, &owner }; return CallValue<int>("ClaimedSeat", args, 2); }
        bool FightsBreakaway(int id) const { void* args[] = { &id }; return CallValue<bool>("FightsBreakaway", args, 1); }
        int LastTaker(int id) const { void* args[] = { &id }; return CallValue<int>("LastTaker", args, 1); }
        int CheckWar(int attacker, int target, float coalitionPower, float coalitionArmy) const { void* args[] = { &attacker, &target, &coalitionPower, &coalitionArmy }; return CallValue<int>("CheckWar", args, 4); }
        bool DeclareWar(int attacker, int target, bool voluntary, int goalTile) const { void* args[] = { &attacker, &target, &voluntary, &goalTile }; return CallValue<bool>("DeclareWar", args, 4); }
        bool PlayerDeclareWar(int attacker, int target) const { void* args[] = { &attacker, &target }; return CallValue<bool>("PlayerDeclareWar", args, 2); }
        bool Gift(int from, int to) const { void* args[] = { &from, &to }; return CallValue<bool>("Gift", args, 2); }
        float Subsidy(int from, int to, float gold) const { void* args[] = { &from, &to, &gold }; return CallValue<float>("Subsidy", args, 3); }
        bool ProposeAlliance(int from, int to) const { void* args[] = { &from, &to }; return CallValue<bool>("ProposeAlliance", args, 2); }
        void Announce(void* notice) const { void* args[] = { &notice }; Call("Announce", args, 1); }
        void BeginTick() const { Call("BeginTick", nullptr, 0); }
        int NationAt(int index) const { void* args[] = { &index }; return CallValue<int>("NationAt", args, 1); }
        bool Alive(int id) const { void* args[] = { &id }; return CallValue<bool>("Alive", args, 1); }
        void* NationName(int id) const { void* args[] = { &id }; return Call("NationName", args, 1); }
        void* CapitalName(int id) const { void* args[] = { &id }; return Call("CapitalName", args, 1); }
        int PeopleOf(int id) const { void* args[] = { &id }; return CallValue<int>("PeopleOf", args, 1); }
        void* PeopleName(int people) const { void* args[] = { &people }; return Call("PeopleName", args, 1); }
        int FaithOf(int id) const { void* args[] = { &id }; return CallValue<int>("FaithOf", args, 1); }
        void* FaithName(int id) const { void* args[] = { &id }; return Call("FaithName", args, 1); }
        void Facts(int self, int target, void* f) const { void* args[] = { &self, &target, &f }; Call("Facts", args, 3); }
        float Power(int id) const { void* args[] = { &id }; return CallValue<float>("Power", args, 1); }
        float Opinion(int judge, int target) const { void* args[] = { &judge, &target }; return CallValue<float>("Opinion", args, 2); }
        bool AtWar(int a, int b) const { void* args[] = { &a, &b }; return CallValue<bool>("AtWar", args, 2); }
        bool InUnion(int id) const { void* args[] = { &id }; return CallValue<bool>("InUnion", args, 1); }
        bool IsNeighbour(int a, int b) const { void* args[] = { &a, &b }; return CallValue<bool>("IsNeighbour", args, 2); }
        int GovOf(int id) const { void* args[] = { &id }; return CallValue<int>("GovOf", args, 1); }
        float Aggression(int id) const { void* args[] = { &id }; return CallValue<float>("Aggression", args, 1); }
        float Expansionism(int id) const { void* args[] = { &id }; return CallValue<float>("Expansionism", args, 1); }
        float MonthlyIncome(int id) const { void* args[] = { &id }; return CallValue<float>("MonthlyIncome", args, 1); }
        float Treasury(int id) const { void* args[] = { &id }; return CallValue<float>("Treasury", args, 1); }
        bool Pay(int id, float gold) const { void* args[] = { &id, &gold }; return CallValue<bool>("Pay", args, 2); }
        void AddGold(int id, float gold) const { void* args[] = { &id, &gold }; Call("AddGold", args, 2); }
        void AddGoodwill(int judge, int target, float amount) const { void* args[] = { &judge, &target, &amount }; Call("AddGoodwill", args, 3); }
        void ModifiersChanged(int id) const { void* args[] = { &id }; Call("ModifiersChanged", args, 1); }
        bool Annex(int annexer, int target) const { void* args[] = { &annexer, &target }; return CallValue<bool>("Annex", args, 2); }
        bool JoinThem(int joiner, int leader) const { void* args[] = { &joiner, &leader }; return CallValue<bool>("JoinThem", args, 2); }
        int RisingState(int target, int backer) const { void* args[] = { &target, &backer }; return CallValue<int>("RisingState", args, 2); }
        bool StartRising(int target, int state) const { void* args[] = { &target, &state }; return CallValue<bool>("StartRising", args, 2); }
        bool CanWar(int attacker, int target) const { void* args[] = { &attacker, &target }; return CallValue<bool>("CanWar", args, 2); }
        bool DeclareWar(int attacker, int target) const { void* args[] = { &attacker, &target }; return CallValue<bool>("DeclareWar", args, 2); }
        bool SeekProtector(int target, int suitor) const { void* args[] = { &target, &suitor }; return CallValue<bool>("SeekProtector", args, 2); }
        void Announce(void* notice) const { void* args[] = { &notice }; Call("Announce", args, 1); }
        void SubjectsOf(int lord, void* dst) const { void* args[] = { &lord, dst }; Call("SubjectsOf", args, 2); }
        bool MayPress(int self, int lord) const { void* args[] = { &self, &lord }; return CallValue<bool>("MayPress", args, 2); }
        void* FreeBlock(int lord, int people) const { void* args[] = { &lord, &people }; return Call("FreeBlock", args, 2); }
        int Free(int lord, int people, int guarantor) const { void* args[] = { &lord, &people, &guarantor }; return CallValue<int>("Free", args, 3); }
        bool RaisePeople(int lord, int people) const { void* args[] = { &lord, &people }; return CallValue<bool>("RaisePeople", args, 2); }
        int FamilyOf(int people) const { void* args[] = { &people }; return CallValue<int>("FamilyOf", args, 1); }
        int FamilyParent(int node) const { void* args[] = { &node }; return CallValue<int>("FamilyParent", args, 1); }
        void* FamilyName(int node) const { void* args[] = { &node }; return Call("FamilyName", args, 1); }
        bool FamilyGrand(int node) const { void* args[] = { &node }; return CallValue<bool>("FamilyGrand", args, 1); }
        bool Under(int people, int node) const { void* args[] = { &people, &node }; return CallValue<bool>("Under", args, 2); }
        int Closeness(int a, int b) const { void* args[] = { &a, &b }; return CallValue<int>("Closeness", args, 2); }
        void Abroad(int self, int people, int node, float minShare, void* dst) const { void* args[] = { &self, &people, &node, &minShare, dst }; Call("Abroad", args, 5); }
        void* RightsBlock(int host, int people) const { void* args[] = { &host, &people }; return Call("RightsBlock", args, 2); }
        bool GiveRights(int host, int people) const { void* args[] = { &host, &people }; return CallValue<bool>("GiveRights", args, 2); }
        int KinState(int host, int people) const { void* args[] = { &host, &people }; return CallValue<int>("KinState", args, 2); }
        int ClaimKinStates(int claimant, int host, int people) const { void* args[] = { &claimant, &host, &people }; return CallValue<int>("ClaimKinStates", args, 3); }
        bool IsGreatPower(int id) const { void* args[] = { &id }; return CallValue<bool>("IsGreatPower", args, 1); }
        bool Allied(int a, int b) const { void* args[] = { &a, &b }; return CallValue<bool>("Allied", args, 2); }
        bool HasPact(int a, int b) const { void* args[] = { &a, &b }; return CallValue<bool>("HasPact", args, 2); }
        void* AllyBlock(int a, int b) const { void* args[] = { &a, &b }; return Call("AllyBlock", args, 2); }
        bool MakeAlliance(int a, int b) const { void* args[] = { &a, &b }; return CallValue<bool>("MakeAlliance", args, 2); }
        bool MakePact(int a, int b) const { void* args[] = { &a, &b }; return CallValue<bool>("MakePact", args, 2); }
        int OverlordOf(int id) const { void* args[] = { &id }; return CallValue<int>("OverlordOf", args, 1); }
        void* VassalBlock(int overlord, int vassal) const { void* args[] = { &overlord, &vassal }; return Call("VassalBlock", args, 2); }
        bool MakeVassal(int overlord, int vassal) const { void* args[] = { &overlord, &vassal }; return CallValue<bool>("MakeVassal", args, 2); }
        void LostStates(int self, void* dst) const { void* args[] = { &self, dst }; Call("LostStates", args, 2); }
        void* StateCity(int state) const { void* args[] = { &state }; return Call("StateCity", args, 1); }
        int StateOwner(int state) const { void* args[] = { &state }; return CallValue<int>("StateOwner", args, 1); }
        float StateLoyalty(int state) const { void* args[] = { &state }; return CallValue<float>("StateLoyalty", args, 1); }
        float StatePeopleShare(int people, int state) const { void* args[] = { &people, &state }; return CallValue<float>("StatePeopleShare", args, 2); }
        float StatePrice(int state, int buyer) const { void* args[] = { &state, &buyer }; return CallValue<float>("StatePrice", args, 2); }
        float SellOdds(int state, int buyer, float gold) const { void* args[] = { &state, &buyer, &gold }; return CallValue<float>("SellOdds", args, 3); }
        bool MoveState(int state, int to) const { void* args[] = { &state, &to }; return CallValue<bool>("MoveState", args, 2); }
        bool HasClaim(int claimant, int state) const { void* args[] = { &claimant, &state }; return CallValue<bool>("HasClaim", args, 2); }
        bool FileClaim(int claimant, int state) const { void* args[] = { &claimant, &state }; return CallValue<bool>("FileClaim", args, 2); }
        void Minorities(int nation, void* dst) const { void* args[] = { &nation, dst }; Call("Minorities", args, 2); }
        void AddGrievance(int nation, int people, float points) const { void* args[] = { &nation, &people, &points }; Call("AddGrievance", args, 3); }
        void AddLoyaltyAll(int nation, float delta) const { void* args[] = { &nation, &delta }; Call("AddLoyaltyAll", args, 2); }
        bool Tolerate(int nation, int people) const { void* args[] = { &nation, &people }; return CallValue<bool>("Tolerate", args, 2); }
        bool FightingRising(int nation) const { void* args[] = { &nation }; return CallValue<bool>("FightingRising", args, 1); }
        void* AcceptBlock(int nation, int people) const { void* args[] = { &nation, &people }; return Call("AcceptBlock", args, 2); }
        bool Accept(int nation, int people) const { void* args[] = { &nation, &people }; return CallValue<bool>("Accept", args, 2); }
        void* KindredBlock(int nation, int people) const { void* args[] = { &nation, &people }; return Call("KindredBlock", args, 2); }
        bool Kindred(int nation, int people) const { void* args[] = { &nation, &people }; return CallValue<bool>("Kindred", args, 2); }
        void* HomeRuleBlock(int nation, int people) const { void* args[] = { &nation, &people }; return Call("HomeRuleBlock", args, 2); }
        int HomeRule(int nation, int people) const { void* args[] = { &nation, &people }; return CallValue<int>("HomeRule", args, 2); }
        bool Assimilating(int nation) const { void* args[] = { &nation }; return CallValue<bool>("Assimilating", args, 1); }
        bool Assimilate(int nation) const { void* args[] = { &nation }; return CallValue<bool>("Assimilate", args, 1); }
        void* PersecuteBlock(int nation, int people) const { void* args[] = { &nation, &people }; return Call("PersecuteBlock", args, 2); }
        bool Persecute(int nation, int people) const { void* args[] = { &nation, &people }; return CallValue<bool>("Persecute", args, 2); }
        void NudgeAcceptance(int nation, int people, float delta) const { void* args[] = { &nation, &people, &delta }; Call("NudgeAcceptance", args, 3); }
        void Forgive(int nation, int people, float share) const { void* args[] = { &nation, &people, &share }; Call("Forgive", args, 3); }
        void LoyaltyOfStates(int nation, int people, float delta) const { void* args[] = { &nation, &people, &delta }; Call("LoyaltyOfStates", args, 3); }
        void* block() const { return ReadField<void*>("block"); }
        void SetBlock(void* value) const { WriteField<void*>("block", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* parentName() const { return ReadField<void*>("parentName"); }
        void SetParentName(void* value) const { WriteField<void*>("parentName", value); }
        float parentShare() const { return ReadField<float>("parentShare"); }
        void SetParentShare(float value) const { WriteField<float>("parentShare", value); }
        float turmoil() const { return ReadField<float>("turmoil"); }
        void SetTurmoil(float value) const { WriteField<float>("turmoil", value); }
        float heat() const { return ReadField<float>("heat"); }
        void SetHeat(float value) const { WriteField<float>("heat", value); }
        int count() const { return ReadField<int>("count"); }
        void SetCount(int value) const { WriteField<int>("count", value); }
        float maxDepth() const { return ReadField<float>("maxDepth"); }
        void SetMaxDepth(float value) const { WriteField<float>("maxDepth", value); }
        int firstStateId() const { return ReadField<int>("firstStateId"); }
        void SetFirstStateId(int value) const { WriteField<int>("firstStateId", value); }
        int attackers() const { return ReadField<int>("attackers"); }
        void SetAttackers(int value) const { WriteField<int>("attackers", value); }
        int plunderers() const { return ReadField<int>("plunderers"); }
        void SetPlunderers(int value) const { WriteField<int>("plunderers", value); }
        int plunderTiles() const { return ReadField<int>("plunderTiles"); }
        void SetPlunderTiles(int value) const { WriteField<int>("plunderTiles", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int axis() const { return ReadField<int>("axis"); }
        void SetAxis(int value) const { WriteField<int>("axis", value); }
        int untilWorldTick() const { return ReadField<int>("untilWorldTick"); }
        void SetUntilWorldTick(int value) const { WriteField<int>("untilWorldTick", value); }
        void* block() const { return ReadField<void*>("block"); }
        void SetBlock(void* value) const { WriteField<void*>("block", value); }
        float newShare() const { return ReadField<float>("newShare"); }
        void SetNewShare(float value) const { WriteField<float>("newShare", value); }
        float oldShare() const { return ReadField<float>("oldShare"); }
        void SetOldShare(float value) const { WriteField<float>("oldShare", value); }
        float thin() const { return ReadField<float>("thin"); }
        void SetThin(float value) const { WriteField<float>("thin", value); }
        float turmoil() const { return ReadField<float>("turmoil"); }
        void SetTurmoil(float value) const { WriteField<float>("turmoil", value); }
        float grievanceRelief() const { return ReadField<float>("grievanceRelief"); }
        void SetGrievanceRelief(float value) const { WriteField<float>("grievanceRelief", value); }
        float acceptanceGain() const { return ReadField<float>("acceptanceGain"); }
        void SetAcceptanceGain(float value) const { WriteField<float>("acceptanceGain", value); }
        float oldAcceptanceHit() const { return ReadField<float>("oldAcceptanceHit"); }
        void SetOldAcceptanceHit(float value) const { WriteField<float>("oldAcceptanceHit", value); }
        bool renounce() const { return ReadField<bool>("renounce"); }
        void SetRenounce(bool value) const { WriteField<bool>("renounce", value); }
    };
}
