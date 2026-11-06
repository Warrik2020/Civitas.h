#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class NationEvents : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationEvents(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "NationEvents") {}
    public:
        void SubscribeTickSteps(void* steps, void* phase) const { void* args[] = { steps, phase }; CallStatic("SubscribeTickSteps", args, 2); }
        void UnsubscribeTickSteps(void* steps) const { void* args[] = { steps }; CallStatic("UnsubscribeTickSteps", args, 1); }
        int SnapshotTick(void* buffer) const { void* args[] = { &buffer }; return CallStaticValue<int>("SnapshotTick", args, 1); }
        void RaiseBattleEnded(void* report) const { void* args[] = { report }; CallStatic("RaiseBattleEnded", args, 1); }
        void RaiseTechResearched(int nationId, int techIndex) const { void* args[] = { &nationId, &techIndex }; CallStatic("RaiseTechResearched", args, 2); }
        void RaiseNaval(void* notice) const { void* args[] = { &notice }; CallStatic("RaiseNaval", args, 1); }
        void RaiseEthnogenesis(void* notice) const { void* args[] = { &notice }; CallStatic("RaiseEthnogenesis", args, 1); }
        void RaiseNationalism(void* notice) const { void* args[] = { &notice }; CallStatic("RaiseNationalism", args, 1); }
        void RaiseLocalPolitics(void* notice) const { void* args[] = { &notice }; CallStatic("RaiseLocalPolitics", args, 1); }
        void RaiseAffairs(void* notice) const { void* args[] = { &notice }; CallStatic("RaiseAffairs", args, 1); }
        void RaiseControlCrisis(int nationId, bool entered) const { void* args[] = { &nationId, &entered }; CallStatic("RaiseControlCrisis", args, 2); }
        void RaiseNationFounded(int nationId) const { void* args[] = { &nationId }; CallStatic("RaiseNationFounded", args, 1); }
        void RaiseCapitalPlaced(int nationId, int tileX, int tileY) const { void* args[] = { &nationId, &tileX, &tileY }; CallStatic("RaiseCapitalPlaced", args, 3); }
        void RaiseTileClaimed(int nationId, int tileIndex) const { void* args[] = { &nationId, &tileIndex }; CallStatic("RaiseTileClaimed", args, 2); }
        void RaiseBorderContact(int nationA, int nationB, int tileIndex) const { void* args[] = { &nationA, &nationB, &tileIndex }; CallStatic("RaiseBorderContact", args, 3); }
        void RaiseTick() const { CallStatic("RaiseTick", nullptr, 0); }
        void RaiseYearChanged(int astronomicalYear) const { void* args[] = { &astronomicalYear }; CallStatic("RaiseYearChanged", args, 1); }
        void RaiseDayChanged(void* date) const { void* args[] = { date }; CallStatic("RaiseDayChanged", args, 1); }
        void RaiseMonthChanged(void* date) const { void* args[] = { date }; CallStatic("RaiseMonthChanged", args, 1); }
        void RaiseWarDeclared(int attackerId, int defenderId) const { void* args[] = { &attackerId, &defenderId }; CallStatic("RaiseWarDeclared", args, 2); }
        void RaisePeaceMade(int nationA, int nationB) const { void* args[] = { &nationA, &nationB }; CallStatic("RaisePeaceMade", args, 2); }
        void RaiseIncursionStarted(int occupierId, int hostId, int stateId, int count) const { void* args[] = { &occupierId, &hostId, &stateId, &count }; CallStatic("RaiseIncursionStarted", args, 4); }
        void RaiseIncursionEnded(int occupierId, int hostId) const { void* args[] = { &occupierId, &hostId }; CallStatic("RaiseIncursionEnded", args, 2); }
        void RaiseLockdownChanged(int occupierId, int hostId, int stateId, bool locked) const { void* args[] = { &occupierId, &hostId, &stateId, &locked }; CallStatic("RaiseLockdownChanged", args, 4); }
        void RaiseIncursionNews(int violatorId, int hostId, int kind) const { void* args[] = { &violatorId, &hostId, &kind }; CallStatic("RaiseIncursionNews", args, 3); }
        void RaiseTileConquered(int winnerId, int loserId, int tileIndex) const { void* args[] = { &winnerId, &loserId, &tileIndex }; CallStatic("RaiseTileConquered", args, 3); }
        void RaiseDivisionDestroyed(int nationId, int divisionId, int tileIndex) const { void* args[] = { &nationId, &divisionId, &tileIndex }; CallStatic("RaiseDivisionDestroyed", args, 3); }
        void RaiseDivisionLost(void* division) const { void* args[] = { division }; CallStatic("RaiseDivisionLost", args, 1); }
        void RaiseCapitalLost(int nationId, int oldCapitalTileIndex) const { void* args[] = { &nationId, &oldCapitalTileIndex }; CallStatic("RaiseCapitalLost", args, 2); }
        void RaiseCapitalRelocated(int nationId, int newCapitalTileIndex) const { void* args[] = { &nationId, &newCapitalTileIndex }; CallStatic("RaiseCapitalRelocated", args, 2); }
        void RaiseNationEliminated(int nationId) const { void* args[] = { &nationId }; CallStatic("RaiseNationEliminated", args, 1); }
        void RaiseTileForfeited(int prevOwnerId, int tileIndex) const { void* args[] = { &prevOwnerId, &tileIndex }; CallStatic("RaiseTileForfeited", args, 2); }
        void RaiseNationCapitulated(int loserId, int victorId) const { void* args[] = { &loserId, &victorId }; CallStatic("RaiseNationCapitulated", args, 2); }
        void RaiseNationPuppeted(int loserId, int victorId) const { void* args[] = { &loserId, &victorId }; CallStatic("RaiseNationPuppeted", args, 2); }
        void RaiseUnionNews(void* args) const { void* args[] = { args }; CallStatic("RaiseUnionNews", args, 1); }
        void RaiseBondBroken(int breakerId, int abandonedId, bool wasAlliance) const { void* args[] = { &breakerId, &abandonedId, &wasAlliance }; CallStatic("RaiseBondBroken", args, 3); }
        void RaiseArmsRace(int chaserId, int leaderId) const { void* args[] = { &chaserId, &leaderId }; CallStatic("RaiseArmsRace", args, 2); }
        void RaiseDesignCopied(int copierId, int ownerId, const char* designName) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(designName ? designName : "") : nullptr; void* args[] = { &copierId, &ownerId, managed_2 }; CallStatic("RaiseDesignCopied", args, 3); }
        void RaiseDraftAgeChanged(int nationId, int oldAge, int newAge) const { void* args[] = { &nationId, &oldAge, &newAge }; CallStatic("RaiseDraftAgeChanged", args, 3); }
        void RaiseLeaderChanged(int nationId, bool byCoup) const { void* args[] = { &nationId, &byCoup }; CallStatic("RaiseLeaderChanged", args, 2); }
        void RaiseLeaderAged(int nationId, int band) const { void* args[] = { &nationId, &band }; CallStatic("RaiseLeaderAged", args, 2); }
        void RaiseNationRenamed(int nationId) const { void* args[] = { &nationId }; CallStatic("RaiseNationRenamed", args, 1); }
        void RaiseNationRecolored(int nationId) const { void* args[] = { &nationId }; CallStatic("RaiseNationRecolored", args, 1); }
        void RaiseStateClaimed(int claimantId, int ownerId, int stateId) const { void* args[] = { &claimantId, &ownerId, &stateId }; CallStatic("RaiseStateClaimed", args, 3); }
        void RaiseStateUltimatum(int claimantId, int ownerId, int stateId) const { void* args[] = { &claimantId, &ownerId, &stateId }; CallStatic("RaiseStateUltimatum", args, 3); }
        void RaiseUnrestWarning(int ownerId, int originId, int trigger) const { void* args[] = { &ownerId, &originId, &trigger }; CallStatic("RaiseUnrestWarning", args, 3); }
        void RaiseStoryRisingFounded(int ownerId, int rebelId, int threadId) const { void* args[] = { &ownerId, &rebelId, &threadId }; CallStatic("RaiseStoryRisingFounded", args, 3); }
        void RaiseRisingJoinedHomeland(int rebelId, int homelandId, int parentId) const { void* args[] = { &rebelId, &homelandId, &parentId }; CallStatic("RaiseRisingJoinedHomeland", args, 3); }
        void RaiseRevoltCountdown(int ownerId, int originId, int trigger, int stage) const { void* args[] = { &ownerId, &originId, &trigger, &stage }; CallStatic("RaiseRevoltCountdown", args, 4); }
        void RaisePeoplePetition(int ownerId, int originId, int kind) const { void* args[] = { &ownerId, &originId, &kind }; CallStatic("RaisePeoplePetition", args, 3); }
        void RaisePeoplePetitionAnswered(int ownerId, int originId, int kind, bool granted) const { void* args[] = { &ownerId, &originId, &kind, &granted }; CallStatic("RaisePeoplePetitionAnswered", args, 4); }
        void RaiseHomeRuleChanged(int stateId) const { void* args[] = { &stateId }; CallStatic("RaiseHomeRuleChanged", args, 1); }
        void RaiseLandClaimFiled(int claimantId, int holderId, int stateId, int reason, const char* text) const { void* managed_4 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* args[] = { &claimantId, &holderId, &stateId, &reason, managed_4 }; CallStatic("RaiseLandClaimFiled", args, 5); }
        void ClearAll() const { CallStatic("ClearAll", nullptr, 0); }
    };
}
