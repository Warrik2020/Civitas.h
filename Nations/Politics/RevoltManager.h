#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class RevoltManager : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RevoltManager(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "RevoltManager") {}
    public:
        void RequestAcceptanceNormalize() const { Call("RequestAcceptanceNormalize", nullptr, 0); }
        int AcceptanceSlotsOf(int ownerId, int axis) const { void* args[] = { &ownerId, &axis }; return CallValue<int>("AcceptanceSlotsOf", args, 2); }
        int AcceptedCountOf(int ownerId, int axis) const { void* args[] = { &ownerId, &axis }; return CallValue<int>("AcceptedCountOf", args, 2); }
        bool IsAccepted(int ownerId, int people, int axis) const { void* args[] = { &ownerId, &people, &axis }; return CallValue<bool>("IsAccepted", args, 3); }
        void AcceptedKeysOf(int ownerId, int axis, void* dst) const { void* args[] = { &ownerId, &axis, dst }; Call("AcceptedKeysOf", args, 3); }
        void* AcceptBlockReason(int ownerId, int people, int axis, bool playerMove = true) const { void* args[] = { &ownerId, &people, &axis, &playerMove }; return Call("AcceptBlockReason", args, 4); }
        bool Accept(int ownerId, int people, int axis, const char*& reason, bool playerMove = true) const { void* args[] = { &ownerId, &people, &axis, &reason, &playerMove }; return CallValue<bool>("Accept", args, 5); }
        bool Drop(int ownerId, int people, int axis, const char*& reason, bool playerMove = true) const { void* args[] = { &ownerId, &people, &axis, &reason, &playerMove }; return CallValue<bool>("Drop", args, 5); }
        int AiPersecutesMask(int ideology) const { void* args[] = { &ideology }; return CallStaticValue<int>("AiPersecutesMask", args, 1); }
        void NormalizeToAcceptance() const { Call("NormalizeToAcceptance", nullptr, 0); }
        bool CanStartStoryRising(int ownerId) const { void* args[] = { &ownerId }; return CallValue<bool>("CanStartStoryRising", args, 1); }
        bool StartStoryRising(int ownerId, int originId, int stateId, int threadId = -1) const { void* args[] = { &ownerId, &originId, &stateId, &threadId }; return CallValue<bool>("StartStoryRising", args, 4); }
        bool GodToggleAccept(int ownerId, int people, int axis, bool& accepted, const char*& reason) const { void* args[] = { &ownerId, &people, &axis, &accepted, &reason }; return CallValue<bool>("GodToggleAccept", args, 5); }
        bool GodTogglePersecution(int ownerId, int people, int axis, bool& persecuted, const char*& reason) const { void* args[] = { &ownerId, &people, &axis, &persecuted, &reason }; return CallValue<bool>("GodTogglePersecution", args, 5); }
        int GodCalmPeoples(int ownerId) const { void* args[] = { &ownerId }; return CallValue<int>("GodCalmPeoples", args, 1); }
        int GodReleasePeople(int ownerId, int originId, const char*& error) const { void* args[] = { &ownerId, &originId, &error }; return CallValue<int>("GodReleasePeople", args, 3); }
        int GodRiseState(int tile, const char*& error) const { void* args[] = { &tile, &error }; return CallValue<int>("GodRiseState", args, 2); }
        int GodFoundNation(int tile, int radius, const char*& error, int onlyFrom = -1) const { void* args[] = { &tile, &radius, &error, &onlyFrom }; return CallValue<int>("GodFoundNation", args, 4); }
        float KindredFactor(int r) const { void* args[] = { &r }; return CallStaticValue<float>("KindredFactor", args, 1); }
        int KinshipTo(int ownerId, int people, int axis) const { void* args[] = { &ownerId, &people, &axis }; return CallValue<int>("KinshipTo", args, 3); }
        float KindredCost(int ownerId, int people, int axis) const { void* args[] = { &ownerId, &people, &axis }; return CallValue<float>("KindredCost", args, 3); }
        int KindredCountOf(int ownerId, int axis) const { void* args[] = { &ownerId, &axis }; return CallValue<int>("KindredCountOf", args, 2); }
        bool IsKindredPeople(int ownerId, int people, int axis) const { void* args[] = { &ownerId, &people, &axis }; return CallValue<bool>("IsKindredPeople", args, 3); }
        void* KindredBlockReason(int ownerId, int people, int axis, bool playerMove = true) const { void* args[] = { &ownerId, &people, &axis, &playerMove }; return Call("KindredBlockReason", args, 4); }
        bool ClaimKindred(int ownerId, int people, int axis, const char*& reason, bool playerMove = true) const { void* args[] = { &ownerId, &people, &axis, &reason, &playerMove }; return CallValue<bool>("ClaimKindred", args, 5); }
        bool DropKindred(int ownerId, int people, int axis, const char*& reason, bool playerMove = true) const { void* args[] = { &ownerId, &people, &axis, &reason, &playerMove }; return CallValue<bool>("DropKindred", args, 5); }
        int ListLedgerPeoples(int ownerId, void* results) const { void* args[] = { &ownerId, results }; return CallValue<int>("ListLedgerPeoples", args, 2); }
        bool IsNeglectRising(int ownerId, int originId) const { void* args[] = { &ownerId, &originId }; return CallValue<bool>("IsNeglectRising", args, 2); }
        float NeglectGrievancePerPass(float neglect, void* cfg) const { void* args[] = { &neglect, cfg }; return CallStaticValue<float>("NeglectGrievancePerPass", args, 2); }
        int RisingHomelandOf(int rebelId) const { void* args[] = { &rebelId }; return CallValue<int>("RisingHomelandOf", args, 1); }
        void* CollectPersecuted(void** args = nullptr, int count = 0) const { return Call("CollectPersecuted", args, count); }
        bool EaseByRequest(int ownerId, int people, int axis, float pledgeYears) const { void* args[] = { &ownerId, &people, &axis, &pledgeYears }; return CallValue<bool>("EaseByRequest", args, 4); }
        int RealmTreatmentOf(int ownerId, int people, int axis) const { void* args[] = { &ownerId, &people, &axis }; return CallValue<int>("RealmTreatmentOf", args, 3); }
        int ZoneTreatmentOf(int ownerId, int people, int axis) const { void* args[] = { &ownerId, &people, &axis }; return CallValue<int>("ZoneTreatmentOf", args, 3); }
        bool IsOwnPeople(int ownerId, int people, int axis) const { void* args[] = { &ownerId, &people, &axis }; return CallValue<bool>("IsOwnPeople", args, 3); }
        void* QuoteTreatment(int ownerId, int people, int axis, int layer, int target) const { void* args[] = { &ownerId, &people, &axis, &layer, &target }; return Call("QuoteTreatment", args, 5); }
        void* TreatmentBlockReason(int ownerId, int people, int axis, int layer, int target) const { void* args[] = { &ownerId, &people, &axis, &layer, &target }; return Call("TreatmentBlockReason", args, 5); }
        float HarsherRestYears(int ownerId, int people, int axis) const { void* args[] = { &ownerId, &people, &axis }; return CallValue<float>("HarsherRestYears", args, 3); }
        bool SetTreatment(int ownerId, int people, int axis, int layer, int target, const char*& reason) const { void* args[] = { &ownerId, &people, &axis, &layer, &target, &reason }; return CallValue<bool>("SetTreatment", args, 6); }
        bool CallOffOrder(int ownerId, int people, int axis, const char*& reason) const { void* args[] = { &ownerId, &people, &axis, &reason }; return CallValue<bool>("CallOffOrder", args, 4); }
        int CallOffAllOrders(int ownerId) const { void* args[] = { &ownerId }; return CallValue<int>("CallOffAllOrders", args, 1); }
        void RebuildTreatmentOrders() const { Call("RebuildTreatmentOrders", nullptr, 0); }
        void RestoreLegacyOrder(int ownerId, int people, int axisMask, bool purge) const { void* args[] = { &ownerId, &people, &axisMask, &purge }; Call("RestoreLegacyOrder", args, 4); }
        int ListTreatmentOrders(int ownerId, void* dst) const { void* args[] = { &ownerId, dst }; return CallValue<int>("ListTreatmentOrders", args, 2); }
        bool TryGetTreatmentOrder(int ownerId, int people, int axis, void* s) const { void* args[] = { &ownerId, &people, &axis, &s }; return CallValue<bool>("TryGetTreatmentOrder", args, 4); }
        int AssimilationScopeOf(int ownerId, int axis) const { void* args[] = { &ownerId, &axis }; return CallValue<int>("AssimilationScopeOf", args, 2); }
        bool SetAssimilation(int ownerId, int axis, int scope, const char*& reason) const { void* args[] = { &ownerId, &axis, &scope, &reason }; return CallValue<bool>("SetAssimilation", args, 4); }
        bool SetBorderGuard(int ownerId, int axis, bool on, const char*& reason) const { void* args[] = { &ownerId, &axis, &on, &reason }; return CallValue<bool>("SetBorderGuard", args, 4); }
        int RebelArmyCap(int parentDivisions, float share) const { void* args[] = { &parentDivisions, &share }; return CallStaticValue<int>("RebelArmyCap", args, 2); }
        void FeedStateUnrest(int ownerId, int stateId, float loyalty, float threshold, float revoltChanceMul, int intervalTicks) const { void* args[] = { &ownerId, &stateId, &loyalty, &threshold, &revoltChanceMul, &intervalTicks }; Call("FeedStateUnrest", args, 6); }
        bool TriggerStateRevolt(int parentId, void* stateTiles, const char* name, int peopleOrigin) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &parentId, stateTiles, managed_2, &peopleOrigin }; return CallValue<bool>("TriggerStateRevolt", args, 4); }
        int TriggerCivilWar(int parentId, void* tiles, const char* name, void* color, int ideology, const char*& error) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &parentId, tiles, managed_2, color, &ideology, &error }; return CallValue<int>("TriggerCivilWar", args, 6); }
        float GrievanceOf(int ownerId, int originId) const { void* args[] = { &ownerId, &originId }; return CallValue<float>("GrievanceOf", args, 2); }
        float UnrestSuppression(int ownerId, int originId) const { void* args[] = { &ownerId, &originId }; return CallValue<float>("UnrestSuppression", args, 2); }
        int ListRebelGroups(int nationId, void* results) const { void* args[] = { &nationId, results }; return CallValue<int>("ListRebelGroups", args, 2); }
        int ListForeignPeoples(int nationId, void* results) const { void* args[] = { &nationId, results }; return CallValue<int>("ListForeignPeoples", args, 2); }
        int ListForeignPeoples(int nationId, int axis, void* results) const { void* args[] = { &nationId, &axis, results }; return CallValue<int>("ListForeignPeoples", args, 3); }
        float OwnPeopleShare(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return CallValue<float>("OwnPeopleShare", args, 2); }
        void AddGrievance(int ownerId, int originId, float amount) const { void* args[] = { &ownerId, &originId, &amount }; Call("AddGrievance", args, 3); }
        void ForgiveGrievance(int ownerId, int originId, float share) const { void* args[] = { &ownerId, &originId, &share }; Call("ForgiveGrievance", args, 3); }
        void NudgeAcceptance(int ownerId, int originId, float delta) const { void* args[] = { &ownerId, &originId, &delta }; Call("NudgeAcceptance", args, 3); }
        void* SupportRebellion(int actorId, int targetId, int originId, float money) const { void* args[] = { &actorId, &targetId, &originId, &money }; return Call("SupportRebellion", args, 4); }
        bool GodIgniteRevolt(int targetId, int originId) const { void* args[] = { &targetId, &originId }; return CallValue<bool>("GodIgniteRevolt", args, 2); }
        void ExportGrievances(void* write) const { void* args[] = { write }; Call("ExportGrievances", args, 1); }
        void RestoreGrievance(int ownerId, int originId, float value) const { void* args[] = { &ownerId, &originId, &value }; Call("RestoreGrievance", args, 3); }
        float HomelandOpinionTerm(int ownerId, int founderId) const { void* args[] = { &ownerId, &founderId }; return CallValue<float>("HomelandOpinionTerm", args, 2); }
        int ListHomeRuleCandidates(int ownerId, int originId, void* dst) const { void* args[] = { &ownerId, &originId, dst }; return CallValue<int>("ListHomeRuleCandidates", args, 3); }
        void ReverseConcession(int ownerId, int originId, int kind) const { void* args[] = { &ownerId, &originId, &kind }; Call("ReverseConcession", args, 3); }
        void CloseDemand(int ownerId, int originId, int kind, bool accepted) const { void* args[] = { &ownerId, &originId, &kind, &accepted }; Call("CloseDemand", args, 4); }
        bool ResolvePetition(int ownerId, int originId, int kind, bool grant) const { void* args[] = { &ownerId, &originId, &kind, &grant }; return CallValue<bool>("ResolvePetition", args, 4); }
        float PeoplePressureOf(int ownerId) const { void* args[] = { &ownerId }; return CallValue<float>("PeoplePressureOf", args, 1); }
        void ExportPeoples(void* write) const { void* args[] = { write }; Call("ExportPeoples", args, 1); }
        bool IsFightingUprising(int nationId) const { void* args[] = { &nationId }; return CallValue<bool>("IsFightingUprising", args, 1); }
        bool IsQuiet(int nationId) const { void* args[] = { &nationId }; return CallValue<bool>("IsQuiet", args, 1); }
        int QuietUntilTick(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("QuietUntilTick", args, 1); }
        bool HasCountdown(int ownerId) const { void* args[] = { &ownerId }; return CallValue<bool>("HasCountdown", args, 1); }
        bool AnswerCountdown(int ownerId, int originId, void* trigger, void* answer, const char*& reason) const { void* args[] = { &ownerId, &originId, trigger, answer, &reason }; return CallValue<bool>("AnswerCountdown", args, 5); }
        void* AnswerBlockReason(int ownerId, int originId, void* trigger, void* answer) const { void* args[] = { &ownerId, &originId, trigger, answer }; return Call("AnswerBlockReason", args, 4); }
        float PayoffPricePerMeter(int ownerId, int originId, void* trigger) const { void* args[] = { &ownerId, &originId, trigger }; return CallValue<float>("PayoffPricePerMeter", args, 3); }
        float PayoffToCallOff(int ownerId, int originId, void* trigger) const { void* args[] = { &ownerId, &originId, trigger }; return CallValue<float>("PayoffToCallOff", args, 3); }
        bool PayOff(int ownerId, int originId, void* trigger, float gold, const char*& reason) const { void* args[] = { &ownerId, &originId, trigger, &gold, &reason }; return CallValue<bool>("PayOff", args, 5); }
        int ScaleUnrest(int ownerId, float keep) const { void* args[] = { &ownerId, &keep }; return CallValue<int>("ScaleUnrest", args, 2); }
        float ScaledMeter(float meter, float keep, bool countdown, float cancelAt) const { void* args[] = { &meter, &keep, &countdown, &cancelAt }; return CallStaticValue<float>("ScaledMeter", args, 4); }
        int ListCountdowns(int ownerId, void* results) const { void* args[] = { &ownerId, results }; return CallValue<int>("ListCountdowns", args, 2); }
        bool TryGetCountdown(int ownerId, int originId, void* trigger, void* c) const { void* args[] = { &ownerId, &originId, trigger, &c }; return CallValue<bool>("TryGetCountdown", args, 4); }
        float UnrestMeterOf(int ownerId, int originId, void* trigger) const { void* args[] = { &ownerId, &originId, trigger }; return CallValue<float>("UnrestMeterOf", args, 3); }
        void ExportUnrest(void* write) const { void* args[] = { write }; Call("ExportUnrest", args, 1); }
        void RestoreUnrest(void* r) const { void* args[] = { r }; Call("RestoreUnrest", args, 1); }
        void ExportQuiet(void* write) const { void* args[] = { write }; Call("ExportQuiet", args, 1); }
        void RestoreQuiet(int nationId, int untilTick, int armyCap, int homeland = -1, int parent = -1, bool neglect = false) const { void* args[] = { &nationId, &untilTick, &armyCap, &homeland, &parent, &neglect }; Call("RestoreQuiet", args, 6); }
        void ClearUnrest() const { Call("ClearUnrest", nullptr, 0); }
        int ListWarnings(void* results) const { void* args[] = { results }; return CallValue<int>("ListWarnings", args, 1); }
        void* GetOwnClusterPullHeading(int nationId) const { void* args[] = { &nationId }; return Call("GetOwnClusterPullHeading", args, 1); }
        bool Equals(void* o) const { void* args[] = { o }; return CallValue<bool>("Equals", args, 1); }
        bool Equals(void* o) const { void* args[] = { o }; return CallValue<bool>("Equals", args, 1); }
        int GetHashCode() const { return CallValue<int>("GetHashCode", nullptr, 0); }
        float AcceptanceRestYears() const { return ReadStaticField<float>("AcceptanceRestYears"); }
        float KindredBaseMonths() const { return ReadStaticField<float>("KindredBaseMonths"); }
        float KindredMinimumCost() const { return ReadStaticField<float>("KindredMinimumCost"); }
        int ownerId() const { return ReadField<int>("ownerId"); }
        void SetOwnerId(int value) const { WriteField<int>("ownerId", value); }
        int originId() const { return ReadField<int>("originId"); }
        void SetOriginId(int value) const { WriteField<int>("originId", value); }
        void* trigger() const { return ReadField<void*>("trigger"); }
        void SetTrigger(void* value) const { WriteField<void*>("trigger", value); }
        float meter() const { return ReadField<float>("meter"); }
        void SetMeter(float value) const { WriteField<float>("meter", value); }
        float cancelAt() const { return ReadField<float>("cancelAt"); }
        void SetCancelAt(float value) const { WriteField<float>("cancelAt", value); }
        int startTick() const { return ReadField<int>("startTick"); }
        void SetStartTick(int value) const { WriteField<int>("startTick", value); }
        int riseTick() const { return ReadField<int>("riseTick"); }
        void SetRiseTick(int value) const { WriteField<int>("riseTick", value); }
        int tiles() const { return ReadField<int>("tiles"); }
        void SetTiles(int value) const { WriteField<int>("tiles", value); }
        bool cardPending() const { return ReadField<bool>("cardPending"); }
        void SetCardPending(bool value) const { WriteField<bool>("cardPending", value); }
        bool neglect() const { return ReadField<bool>("neglect"); }
        void SetNeglect(bool value) const { WriteField<bool>("neglect", value); }
        int homeland() const { return ReadField<int>("homeland"); }
        void SetHomeland(int value) const { WriteField<int>("homeland", value); }
        int ownerId() const { return ReadField<int>("ownerId"); }
        void SetOwnerId(int value) const { WriteField<int>("ownerId", value); }
        int originId() const { return ReadField<int>("originId"); }
        void SetOriginId(int value) const { WriteField<int>("originId", value); }
        void* trigger() const { return ReadField<void*>("trigger"); }
        void SetTrigger(void* value) const { WriteField<void*>("trigger", value); }
        float pressure() const { return ReadField<float>("pressure"); }
        void SetPressure(float value) const { WriteField<float>("pressure", value); }
        void* tiles() const { return ReadField<void*>("tiles"); }
        void SetTiles(void* value) const { WriteField<void*>("tiles", value); }
        int riseTick() const { return ReadField<int>("riseTick"); }
        void SetRiseTick(int value) const { WriteField<int>("riseTick", value); }
        bool waiting() const { return ReadField<bool>("waiting"); }
        void SetWaiting(bool value) const { WriteField<bool>("waiting", value); }
        int rebelId() const { return ReadField<int>("rebelId"); }
        void SetRebelId(int value) const { WriteField<int>("rebelId", value); }
        int parentId() const { return ReadField<int>("parentId"); }
        void SetParentId(int value) const { WriteField<int>("parentId", value); }
        int startTick() const { return ReadField<int>("startTick"); }
        void SetStartTick(int value) const { WriteField<int>("startTick", value); }
        float peak() const { return ReadField<float>("peak"); }
        void SetPeak(float value) const { WriteField<float>("peak", value); }
        float fervour() const { return ReadField<float>("fervour"); }
        void SetFervour(float value) const { WriteField<float>("fervour", value); }
        int foundingTiles() const { return ReadField<int>("foundingTiles"); }
        void SetFoundingTiles(int value) const { WriteField<int>("foundingTiles", value); }
        int foundingDivisions() const { return ReadField<int>("foundingDivisions"); }
        void SetFoundingDivisions(int value) const { WriteField<int>("foundingDivisions", value); }
        int wavesLeft() const { return ReadField<int>("wavesLeft"); }
        void SetWavesLeft(int value) const { WriteField<int>("wavesLeft", value); }
        int nextLevyTick() const { return ReadField<int>("nextLevyTick"); }
        void SetNextLevyTick(int value) const { WriteField<int>("nextLevyTick", value); }
        int armyCap() const { return ReadField<int>("armyCap"); }
        void SetArmyCap(int value) const { WriteField<int>("armyCap", value); }
        int levyEvery() const { return ReadField<int>("levyEvery"); }
        void SetLevyEvery(int value) const { WriteField<int>("levyEvery", value); }
        int ownerId() const { return ReadField<int>("ownerId"); }
        void SetOwnerId(int value) const { WriteField<int>("ownerId", value); }
        int originId() const { return ReadField<int>("originId"); }
        void SetOriginId(int value) const { WriteField<int>("originId", value); }
        void* trigger() const { return ReadField<void*>("trigger"); }
        void SetTrigger(void* value) const { WriteField<void*>("trigger", value); }
        float meter() const { return ReadField<float>("meter"); }
        void SetMeter(float value) const { WriteField<float>("meter", value); }
        int lastFedTick() const { return ReadField<int>("lastFedTick"); }
        void SetLastFedTick(int value) const { WriteField<int>("lastFedTick", value); }
        int countdownStartTick() const { return ReadField<int>("countdownStartTick"); }
        void SetCountdownStartTick(int value) const { WriteField<int>("countdownStartTick", value); }
        int riseTick() const { return ReadField<int>("riseTick"); }
        void SetRiseTick(int value) const { WriteField<int>("riseTick", value); }
        int crackdownUntilTick() const { return ReadField<int>("crackdownUntilTick"); }
        void SetCrackdownUntilTick(int value) const { WriteField<int>("crackdownUntilTick", value); }
        int storyThread() const { return ReadField<int>("storyThread"); }
        void SetStoryThread(int value) const { WriteField<int>("storyThread", value); }
        int payoffCount() const { return ReadField<int>("payoffCount"); }
        void SetPayoffCount(int value) const { WriteField<int>("payoffCount", value); }
        int lastPayoffTick() const { return ReadField<int>("lastPayoffTick"); }
        void SetLastPayoffTick(int value) const { WriteField<int>("lastPayoffTick", value); }
        int nextStartTick() const { return ReadField<int>("nextStartTick"); }
        void SetNextStartTick(int value) const { WriteField<int>("nextStartTick", value); }
        bool cardPending() const { return ReadField<bool>("cardPending"); }
        void SetCardPending(bool value) const { WriteField<bool>("cardPending", value); }
        bool waiting() const { return ReadField<bool>("waiting"); }
        void SetWaiting(bool value) const { WriteField<bool>("waiting", value); }
        int ownerId() const { return ReadField<int>("ownerId"); }
        void SetOwnerId(int value) const { WriteField<int>("ownerId", value); }
        int originId() const { return ReadField<int>("originId"); }
        void SetOriginId(int value) const { WriteField<int>("originId", value); }
        void* trigger() const { return ReadField<void*>("trigger"); }
        void SetTrigger(void* value) const { WriteField<void*>("trigger", value); }
        float pressure() const { return ReadField<float>("pressure"); }
        void SetPressure(float value) const { WriteField<float>("pressure", value); }
        void* tiles() const { return ReadField<void*>("tiles"); }
        int builtTick() const { return ReadField<int>("builtTick"); }
        void SetBuiltTick(int value) const { WriteField<int>("builtTick", value); }
        int confirmedTick() const { return ReadField<int>("confirmedTick"); }
        void SetConfirmedTick(int value) const { WriteField<int>("confirmedTick", value); }
        bool locked() const { return ReadField<bool>("locked"); }
        void SetLocked(bool value) const { WriteField<bool>("locked", value); }
        int homeland() const { return ReadField<int>("homeland"); }
        void SetHomeland(int value) const { WriteField<int>("homeland", value); }
        int homelandAt() const { return ReadField<int>("homelandAt"); }
        void SetHomelandAt(int value) const { WriteField<int>("homelandAt", value); }
        int owner() const { return ReadField<int>("owner"); }
        int origin() const { return ReadField<int>("origin"); }
        void* trigger() const { return ReadField<void*>("trigger"); }
        int originId() const { return ReadField<int>("originId"); }
        void SetOriginId(int value) const { WriteField<int>("originId", value); }
        int groupId() const { return ReadField<int>("groupId"); }
        void SetGroupId(int value) const { WriteField<int>("groupId", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* fill() const { return ReadField<void*>("fill"); }
        void SetFill(void* value) const { WriteField<void*>("fill", value); }
        int tileCount() const { return ReadField<int>("tileCount"); }
        void SetTileCount(int value) const { WriteField<int>("tileCount", value); }
        float share() const { return ReadField<float>("share"); }
        void SetShare(float value) const { WriteField<float>("share", value); }
        float grievance() const { return ReadField<float>("grievance"); }
        void SetGrievance(float value) const { WriteField<float>("grievance", value); }
        float suppression() const { return ReadField<float>("suppression"); }
        void SetSuppression(float value) const { WriteField<float>("suppression", value); }
        int standing() const { return ReadField<int>("standing"); }
        void SetStanding(int value) const { WriteField<int>("standing", value); }
        float acceptance() const { return ReadField<float>("acceptance"); }
        void SetAcceptance(float value) const { WriteField<float>("acceptance", value); }
        uint8_t petitionStage() const { return ReadField<uint8_t>("petitionStage"); }
        void SetPetitionStage(uint8_t value) const { WriteField<uint8_t>("petitionStage", value); }
        float score() const { return ReadField<float>("score"); }
        int tile() const { return ReadField<int>("tile"); }
        int ownCount() const { return ReadField<int>("ownCount"); }
        void SetOwnCount(int value) const { WriteField<int>("ownCount", value); }
        float weightedTileSum() const { return ReadField<float>("weightedTileSum"); }
        void SetWeightedTileSum(float value) const { WriteField<float>("weightedTileSum", value); }
        int ownerId() const { return ReadField<int>("ownerId"); }
        void SetOwnerId(int value) const { WriteField<int>("ownerId", value); }
        int originId() const { return ReadField<int>("originId"); }
        void SetOriginId(int value) const { WriteField<int>("originId", value); }
        int trigger() const { return ReadField<int>("trigger"); }
        void SetTrigger(int value) const { WriteField<int>("trigger", value); }
        float meter() const { return ReadField<float>("meter"); }
        void SetMeter(float value) const { WriteField<float>("meter", value); }
        int countdownStartTick() const { return ReadField<int>("countdownStartTick"); }
        void SetCountdownStartTick(int value) const { WriteField<int>("countdownStartTick", value); }
        int riseTick() const { return ReadField<int>("riseTick"); }
        void SetRiseTick(int value) const { WriteField<int>("riseTick", value); }
        int crackdownUntilTick() const { return ReadField<int>("crackdownUntilTick"); }
        void SetCrackdownUntilTick(int value) const { WriteField<int>("crackdownUntilTick", value); }
        int payoffCount() const { return ReadField<int>("payoffCount"); }
        void SetPayoffCount(int value) const { WriteField<int>("payoffCount", value); }
        int lastPayoffTick() const { return ReadField<int>("lastPayoffTick"); }
        void SetLastPayoffTick(int value) const { WriteField<int>("lastPayoffTick", value); }
        bool cardPending() const { return ReadField<bool>("cardPending"); }
        void SetCardPending(bool value) const { WriteField<bool>("cardPending", value); }
        int storyThread() const { return ReadField<int>("storyThread"); }
        void SetStoryThread(int value) const { WriteField<int>("storyThread", value); }
        int fedTick() const { return ReadField<int>("fedTick"); }
        void SetFedTick(int value) const { WriteField<int>("fedTick", value); }
    };
}
