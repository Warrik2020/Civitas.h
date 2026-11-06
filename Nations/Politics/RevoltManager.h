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
        int AcceptanceSlotsOf(int ownerId, int axis) const { void* __callArgs[] = { &ownerId, &axis }; return CallValue<int>("AcceptanceSlotsOf", __callArgs, 2); }
        int AcceptedCountOf(int ownerId, int axis) const { void* __callArgs[] = { &ownerId, &axis }; return CallValue<int>("AcceptedCountOf", __callArgs, 2); }
        bool IsAccepted(int ownerId, int people, int axis) const { void* __callArgs[] = { &ownerId, &people, &axis }; return CallValue<bool>("IsAccepted", __callArgs, 3); }
        void AcceptedKeysOf(int ownerId, int axis, void* dst) const { void* __callArgs[] = { &ownerId, &axis, dst }; Call("AcceptedKeysOf", __callArgs, 3); }
        void* AcceptBlockReason(int ownerId, int people, int axis, bool playerMove = true) const { void* __callArgs[] = { &ownerId, &people, &axis, &playerMove }; return Call("AcceptBlockReason", __callArgs, 4); }
        bool Accept(int ownerId, int people, int axis, const char*& reason, bool playerMove = true) const { void* __callArgs[] = { &ownerId, &people, &axis, &reason, &playerMove }; return CallValue<bool>("Accept", __callArgs, 5); }
        bool Drop(int ownerId, int people, int axis, const char*& reason, bool playerMove = true) const { void* __callArgs[] = { &ownerId, &people, &axis, &reason, &playerMove }; return CallValue<bool>("Drop", __callArgs, 5); }
        int AiPersecutesMask(int ideology) const { void* __callArgs[] = { &ideology }; return CallStaticValue<int>("AiPersecutesMask", __callArgs, 1); }
        void NormalizeToAcceptance() const { Call("NormalizeToAcceptance", nullptr, 0); }
        bool CanStartStoryRising(int ownerId) const { void* __callArgs[] = { &ownerId }; return CallValue<bool>("CanStartStoryRising", __callArgs, 1); }
        bool StartStoryRising(int ownerId, int originId, int stateId, int threadId = -1) const { void* __callArgs[] = { &ownerId, &originId, &stateId, &threadId }; return CallValue<bool>("StartStoryRising", __callArgs, 4); }
        bool GodToggleAccept(int ownerId, int people, int axis, bool& accepted, const char*& reason) const { void* __callArgs[] = { &ownerId, &people, &axis, &accepted, &reason }; return CallValue<bool>("GodToggleAccept", __callArgs, 5); }
        bool GodTogglePersecution(int ownerId, int people, int axis, bool& persecuted, const char*& reason) const { void* __callArgs[] = { &ownerId, &people, &axis, &persecuted, &reason }; return CallValue<bool>("GodTogglePersecution", __callArgs, 5); }
        int GodCalmPeoples(int ownerId) const { void* __callArgs[] = { &ownerId }; return CallValue<int>("GodCalmPeoples", __callArgs, 1); }
        int GodReleasePeople(int ownerId, int originId, const char*& error) const { void* __callArgs[] = { &ownerId, &originId, &error }; return CallValue<int>("GodReleasePeople", __callArgs, 3); }
        int GodRiseState(int tile, const char*& error) const { void* __callArgs[] = { &tile, &error }; return CallValue<int>("GodRiseState", __callArgs, 2); }
        int GodFoundNation(int tile, int radius, const char*& error, int onlyFrom = -1) const { void* __callArgs[] = { &tile, &radius, &error, &onlyFrom }; return CallValue<int>("GodFoundNation", __callArgs, 4); }
        float KindredFactor(int r) const { void* __callArgs[] = { &r }; return CallStaticValue<float>("KindredFactor", __callArgs, 1); }
        int KinshipTo(int ownerId, int people, int axis) const { void* __callArgs[] = { &ownerId, &people, &axis }; return CallValue<int>("KinshipTo", __callArgs, 3); }
        float KindredCost(int ownerId, int people, int axis) const { void* __callArgs[] = { &ownerId, &people, &axis }; return CallValue<float>("KindredCost", __callArgs, 3); }
        int KindredCountOf(int ownerId, int axis) const { void* __callArgs[] = { &ownerId, &axis }; return CallValue<int>("KindredCountOf", __callArgs, 2); }
        bool IsKindredPeople(int ownerId, int people, int axis) const { void* __callArgs[] = { &ownerId, &people, &axis }; return CallValue<bool>("IsKindredPeople", __callArgs, 3); }
        void* KindredBlockReason(int ownerId, int people, int axis, bool playerMove = true) const { void* __callArgs[] = { &ownerId, &people, &axis, &playerMove }; return Call("KindredBlockReason", __callArgs, 4); }
        bool ClaimKindred(int ownerId, int people, int axis, const char*& reason, bool playerMove = true) const { void* __callArgs[] = { &ownerId, &people, &axis, &reason, &playerMove }; return CallValue<bool>("ClaimKindred", __callArgs, 5); }
        bool DropKindred(int ownerId, int people, int axis, const char*& reason, bool playerMove = true) const { void* __callArgs[] = { &ownerId, &people, &axis, &reason, &playerMove }; return CallValue<bool>("DropKindred", __callArgs, 5); }
        int ListLedgerPeoples(int ownerId, void* results) const { void* __callArgs[] = { &ownerId, results }; return CallValue<int>("ListLedgerPeoples", __callArgs, 2); }
        bool IsNeglectRising(int ownerId, int originId) const { void* __callArgs[] = { &ownerId, &originId }; return CallValue<bool>("IsNeglectRising", __callArgs, 2); }
        float NeglectGrievancePerPass(float neglect, void* cfg) const { void* __callArgs[] = { &neglect, cfg }; return CallStaticValue<float>("NeglectGrievancePerPass", __callArgs, 2); }
        int RisingHomelandOf(int rebelId) const { void* __callArgs[] = { &rebelId }; return CallValue<int>("RisingHomelandOf", __callArgs, 1); }
        void* CollectPersecuted(void** args = nullptr, int count = 0) const { return Call("CollectPersecuted", args, count); }
        bool EaseByRequest(int ownerId, int people, int axis, float pledgeYears) const { void* __callArgs[] = { &ownerId, &people, &axis, &pledgeYears }; return CallValue<bool>("EaseByRequest", __callArgs, 4); }
        int RealmTreatmentOf(int ownerId, int people, int axis) const { void* __callArgs[] = { &ownerId, &people, &axis }; return CallValue<int>("RealmTreatmentOf", __callArgs, 3); }
        int ZoneTreatmentOf(int ownerId, int people, int axis) const { void* __callArgs[] = { &ownerId, &people, &axis }; return CallValue<int>("ZoneTreatmentOf", __callArgs, 3); }
        bool IsOwnPeople(int ownerId, int people, int axis) const { void* __callArgs[] = { &ownerId, &people, &axis }; return CallValue<bool>("IsOwnPeople", __callArgs, 3); }
        void* QuoteTreatment(int ownerId, int people, int axis, int layer, int target) const { void* __callArgs[] = { &ownerId, &people, &axis, &layer, &target }; return Call("QuoteTreatment", __callArgs, 5); }
        void* TreatmentBlockReason(int ownerId, int people, int axis, int layer, int target) const { void* __callArgs[] = { &ownerId, &people, &axis, &layer, &target }; return Call("TreatmentBlockReason", __callArgs, 5); }
        float HarsherRestYears(int ownerId, int people, int axis) const { void* __callArgs[] = { &ownerId, &people, &axis }; return CallValue<float>("HarsherRestYears", __callArgs, 3); }
        bool SetTreatment(int ownerId, int people, int axis, int layer, int target, const char*& reason) const { void* __callArgs[] = { &ownerId, &people, &axis, &layer, &target, &reason }; return CallValue<bool>("SetTreatment", __callArgs, 6); }
        bool CallOffOrder(int ownerId, int people, int axis, const char*& reason) const { void* __callArgs[] = { &ownerId, &people, &axis, &reason }; return CallValue<bool>("CallOffOrder", __callArgs, 4); }
        int CallOffAllOrders(int ownerId) const { void* __callArgs[] = { &ownerId }; return CallValue<int>("CallOffAllOrders", __callArgs, 1); }
        void RebuildTreatmentOrders() const { Call("RebuildTreatmentOrders", nullptr, 0); }
        void RestoreLegacyOrder(int ownerId, int people, int axisMask, bool purge) const { void* __callArgs[] = { &ownerId, &people, &axisMask, &purge }; Call("RestoreLegacyOrder", __callArgs, 4); }
        int ListTreatmentOrders(int ownerId, void* dst) const { void* __callArgs[] = { &ownerId, dst }; return CallValue<int>("ListTreatmentOrders", __callArgs, 2); }
        bool TryGetTreatmentOrder(int ownerId, int people, int axis, void* s) const { void* __callArgs[] = { &ownerId, &people, &axis, &s }; return CallValue<bool>("TryGetTreatmentOrder", __callArgs, 4); }
        int AssimilationScopeOf(int ownerId, int axis) const { void* __callArgs[] = { &ownerId, &axis }; return CallValue<int>("AssimilationScopeOf", __callArgs, 2); }
        bool SetAssimilation(int ownerId, int axis, int scope, const char*& reason) const { void* __callArgs[] = { &ownerId, &axis, &scope, &reason }; return CallValue<bool>("SetAssimilation", __callArgs, 4); }
        bool SetBorderGuard(int ownerId, int axis, bool on, const char*& reason) const { void* __callArgs[] = { &ownerId, &axis, &on, &reason }; return CallValue<bool>("SetBorderGuard", __callArgs, 4); }
        int RebelArmyCap(int parentDivisions, float share) const { void* __callArgs[] = { &parentDivisions, &share }; return CallStaticValue<int>("RebelArmyCap", __callArgs, 2); }
        void FeedStateUnrest(int ownerId, int stateId, float loyalty, float threshold, float revoltChanceMul, int intervalTicks) const { void* __callArgs[] = { &ownerId, &stateId, &loyalty, &threshold, &revoltChanceMul, &intervalTicks }; Call("FeedStateUnrest", __callArgs, 6); }
        bool TriggerStateRevolt(int parentId, void* stateTiles, const char* name, int peopleOrigin) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &parentId, stateTiles, managed_2, &peopleOrigin }; return CallValue<bool>("TriggerStateRevolt", __callArgs, 4); }
        int TriggerCivilWar(int parentId, void* tiles, const char* name, void* color, int ideology, const char*& error) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &parentId, tiles, managed_2, color, &ideology, &error }; return CallValue<int>("TriggerCivilWar", __callArgs, 6); }
        float GrievanceOf(int ownerId, int originId) const { void* __callArgs[] = { &ownerId, &originId }; return CallValue<float>("GrievanceOf", __callArgs, 2); }
        float UnrestSuppression(int ownerId, int originId) const { void* __callArgs[] = { &ownerId, &originId }; return CallValue<float>("UnrestSuppression", __callArgs, 2); }
        int ListRebelGroups(int nationId, void* results) const { void* __callArgs[] = { &nationId, results }; return CallValue<int>("ListRebelGroups", __callArgs, 2); }
        int ListForeignPeoples(int nationId, void* results) const { void* __callArgs[] = { &nationId, results }; return CallValue<int>("ListForeignPeoples", __callArgs, 2); }
        int ListForeignPeoples(int nationId, int axis, void* results) const { void* __callArgs[] = { &nationId, &axis, results }; return CallValue<int>("ListForeignPeoples", __callArgs, 3); }
        float OwnPeopleShare(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return CallValue<float>("OwnPeopleShare", __callArgs, 2); }
        void AddGrievance(int ownerId, int originId, float amount) const { void* __callArgs[] = { &ownerId, &originId, &amount }; Call("AddGrievance", __callArgs, 3); }
        void ForgiveGrievance(int ownerId, int originId, float share) const { void* __callArgs[] = { &ownerId, &originId, &share }; Call("ForgiveGrievance", __callArgs, 3); }
        void NudgeAcceptance(int ownerId, int originId, float delta) const { void* __callArgs[] = { &ownerId, &originId, &delta }; Call("NudgeAcceptance", __callArgs, 3); }
        void* SupportRebellion(int actorId, int targetId, int originId, float money) const { void* __callArgs[] = { &actorId, &targetId, &originId, &money }; return Call("SupportRebellion", __callArgs, 4); }
        bool GodIgniteRevolt(int targetId, int originId) const { void* __callArgs[] = { &targetId, &originId }; return CallValue<bool>("GodIgniteRevolt", __callArgs, 2); }
        void ExportGrievances(void* write) const { void* __callArgs[] = { write }; Call("ExportGrievances", __callArgs, 1); }
        void RestoreGrievance(int ownerId, int originId, float value) const { void* __callArgs[] = { &ownerId, &originId, &value }; Call("RestoreGrievance", __callArgs, 3); }
        float HomelandOpinionTerm(int ownerId, int founderId) const { void* __callArgs[] = { &ownerId, &founderId }; return CallValue<float>("HomelandOpinionTerm", __callArgs, 2); }
        int ListHomeRuleCandidates(int ownerId, int originId, void* dst) const { void* __callArgs[] = { &ownerId, &originId, dst }; return CallValue<int>("ListHomeRuleCandidates", __callArgs, 3); }
        void ReverseConcession(int ownerId, int originId, int kind) const { void* __callArgs[] = { &ownerId, &originId, &kind }; Call("ReverseConcession", __callArgs, 3); }
        void CloseDemand(int ownerId, int originId, int kind, bool accepted) const { void* __callArgs[] = { &ownerId, &originId, &kind, &accepted }; Call("CloseDemand", __callArgs, 4); }
        bool ResolvePetition(int ownerId, int originId, int kind, bool grant) const { void* __callArgs[] = { &ownerId, &originId, &kind, &grant }; return CallValue<bool>("ResolvePetition", __callArgs, 4); }
        float PeoplePressureOf(int ownerId) const { void* __callArgs[] = { &ownerId }; return CallValue<float>("PeoplePressureOf", __callArgs, 1); }
        void ExportPeoples(void* write) const { void* __callArgs[] = { write }; Call("ExportPeoples", __callArgs, 1); }
        bool IsFightingUprising(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<bool>("IsFightingUprising", __callArgs, 1); }
        bool IsQuiet(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<bool>("IsQuiet", __callArgs, 1); }
        int QuietUntilTick(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("QuietUntilTick", __callArgs, 1); }
        bool HasCountdown(int ownerId) const { void* __callArgs[] = { &ownerId }; return CallValue<bool>("HasCountdown", __callArgs, 1); }
        bool AnswerCountdown(int ownerId, int originId, void* trigger, void* answer, const char*& reason) const { void* __callArgs[] = { &ownerId, &originId, trigger, answer, &reason }; return CallValue<bool>("AnswerCountdown", __callArgs, 5); }
        void* AnswerBlockReason(int ownerId, int originId, void* trigger, void* answer) const { void* __callArgs[] = { &ownerId, &originId, trigger, answer }; return Call("AnswerBlockReason", __callArgs, 4); }
        float PayoffPricePerMeter(int ownerId, int originId, void* trigger) const { void* __callArgs[] = { &ownerId, &originId, trigger }; return CallValue<float>("PayoffPricePerMeter", __callArgs, 3); }
        float PayoffToCallOff(int ownerId, int originId, void* trigger) const { void* __callArgs[] = { &ownerId, &originId, trigger }; return CallValue<float>("PayoffToCallOff", __callArgs, 3); }
        bool PayOff(int ownerId, int originId, void* trigger, float gold, const char*& reason) const { void* __callArgs[] = { &ownerId, &originId, trigger, &gold, &reason }; return CallValue<bool>("PayOff", __callArgs, 5); }
        int ScaleUnrest(int ownerId, float keep) const { void* __callArgs[] = { &ownerId, &keep }; return CallValue<int>("ScaleUnrest", __callArgs, 2); }
        float ScaledMeter(float meter, float keep, bool countdown, float cancelAt) const { void* __callArgs[] = { &meter, &keep, &countdown, &cancelAt }; return CallStaticValue<float>("ScaledMeter", __callArgs, 4); }
        int ListCountdowns(int ownerId, void* results) const { void* __callArgs[] = { &ownerId, results }; return CallValue<int>("ListCountdowns", __callArgs, 2); }
        bool TryGetCountdown(int ownerId, int originId, void* trigger, void* c) const { void* __callArgs[] = { &ownerId, &originId, trigger, &c }; return CallValue<bool>("TryGetCountdown", __callArgs, 4); }
        float UnrestMeterOf(int ownerId, int originId, void* trigger) const { void* __callArgs[] = { &ownerId, &originId, trigger }; return CallValue<float>("UnrestMeterOf", __callArgs, 3); }
        void ExportUnrest(void* write) const { void* __callArgs[] = { write }; Call("ExportUnrest", __callArgs, 1); }
        void RestoreUnrest(void* r) const { void* __callArgs[] = { r }; Call("RestoreUnrest", __callArgs, 1); }
        void ExportQuiet(void* write) const { void* __callArgs[] = { write }; Call("ExportQuiet", __callArgs, 1); }
        void RestoreQuiet(int nationId, int untilTick, int armyCap, int homeland = -1, int parent = -1, bool neglect = false) const { void* __callArgs[] = { &nationId, &untilTick, &armyCap, &homeland, &parent, &neglect }; Call("RestoreQuiet", __callArgs, 6); }
        void ClearUnrest() const { Call("ClearUnrest", nullptr, 0); }
        int ListWarnings(void* results) const { void* __callArgs[] = { results }; return CallValue<int>("ListWarnings", __callArgs, 1); }
        void* GetOwnClusterPullHeading(int nationId) const { void* __callArgs[] = { &nationId }; return Call("GetOwnClusterPullHeading", __callArgs, 1); }
        float AcceptanceRestYears() const { return ReadStaticField<float>("AcceptanceRestYears"); }
        float KindredBaseMonths() const { return ReadStaticField<float>("KindredBaseMonths"); }
        float KindredMinimumCost() const { return ReadStaticField<float>("KindredMinimumCost"); }
    };
}
