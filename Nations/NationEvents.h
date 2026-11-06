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
        void SubscribeTickSteps(void* steps, void* phase) const { void* __callArgs[] = { steps, phase }; CallStatic("SubscribeTickSteps", __callArgs, 2); }
        void UnsubscribeTickSteps(void* steps) const { void* __callArgs[] = { steps }; CallStatic("UnsubscribeTickSteps", __callArgs, 1); }
        int SnapshotTick(void* buffer) const { void* __callArgs[] = { &buffer }; return CallStaticValue<int>("SnapshotTick", __callArgs, 1); }
        void RaiseBattleEnded(void* report) const { void* __callArgs[] = { report }; CallStatic("RaiseBattleEnded", __callArgs, 1); }
        void RaiseTechResearched(int nationId, int techIndex) const { void* __callArgs[] = { &nationId, &techIndex }; CallStatic("RaiseTechResearched", __callArgs, 2); }
        void RaiseNaval(void* notice) const { void* __callArgs[] = { &notice }; CallStatic("RaiseNaval", __callArgs, 1); }
        void RaiseEthnogenesis(void* notice) const { void* __callArgs[] = { &notice }; CallStatic("RaiseEthnogenesis", __callArgs, 1); }
        void RaiseNationalism(void* notice) const { void* __callArgs[] = { &notice }; CallStatic("RaiseNationalism", __callArgs, 1); }
        void RaiseLocalPolitics(void* notice) const { void* __callArgs[] = { &notice }; CallStatic("RaiseLocalPolitics", __callArgs, 1); }
        void RaiseAffairs(void* notice) const { void* __callArgs[] = { &notice }; CallStatic("RaiseAffairs", __callArgs, 1); }
        void RaiseControlCrisis(int nationId, bool entered) const { void* __callArgs[] = { &nationId, &entered }; CallStatic("RaiseControlCrisis", __callArgs, 2); }
        void RaiseNationFounded(int nationId) const { void* __callArgs[] = { &nationId }; CallStatic("RaiseNationFounded", __callArgs, 1); }
        void RaiseCapitalPlaced(int nationId, int tileX, int tileY) const { void* __callArgs[] = { &nationId, &tileX, &tileY }; CallStatic("RaiseCapitalPlaced", __callArgs, 3); }
        void RaiseTileClaimed(int nationId, int tileIndex) const { void* __callArgs[] = { &nationId, &tileIndex }; CallStatic("RaiseTileClaimed", __callArgs, 2); }
        void RaiseBorderContact(int nationA, int nationB, int tileIndex) const { void* __callArgs[] = { &nationA, &nationB, &tileIndex }; CallStatic("RaiseBorderContact", __callArgs, 3); }
        void RaiseTick() const { CallStatic("RaiseTick", nullptr, 0); }
        void RaiseYearChanged(int astronomicalYear) const { void* __callArgs[] = { &astronomicalYear }; CallStatic("RaiseYearChanged", __callArgs, 1); }
        void RaiseDayChanged(void* date) const { void* __callArgs[] = { date }; CallStatic("RaiseDayChanged", __callArgs, 1); }
        void RaiseMonthChanged(void* date) const { void* __callArgs[] = { date }; CallStatic("RaiseMonthChanged", __callArgs, 1); }
        void RaiseWarDeclared(int attackerId, int defenderId) const { void* __callArgs[] = { &attackerId, &defenderId }; CallStatic("RaiseWarDeclared", __callArgs, 2); }
        void RaisePeaceMade(int nationA, int nationB) const { void* __callArgs[] = { &nationA, &nationB }; CallStatic("RaisePeaceMade", __callArgs, 2); }
        void RaiseIncursionStarted(int occupierId, int hostId, int stateId, int count) const { void* __callArgs[] = { &occupierId, &hostId, &stateId, &count }; CallStatic("RaiseIncursionStarted", __callArgs, 4); }
        void RaiseIncursionEnded(int occupierId, int hostId) const { void* __callArgs[] = { &occupierId, &hostId }; CallStatic("RaiseIncursionEnded", __callArgs, 2); }
        void RaiseLockdownChanged(int occupierId, int hostId, int stateId, bool locked) const { void* __callArgs[] = { &occupierId, &hostId, &stateId, &locked }; CallStatic("RaiseLockdownChanged", __callArgs, 4); }
        void RaiseIncursionNews(int violatorId, int hostId, int kind) const { void* __callArgs[] = { &violatorId, &hostId, &kind }; CallStatic("RaiseIncursionNews", __callArgs, 3); }
        void RaiseTileConquered(int winnerId, int loserId, int tileIndex) const { void* __callArgs[] = { &winnerId, &loserId, &tileIndex }; CallStatic("RaiseTileConquered", __callArgs, 3); }
        void RaiseDivisionDestroyed(int nationId, int divisionId, int tileIndex) const { void* __callArgs[] = { &nationId, &divisionId, &tileIndex }; CallStatic("RaiseDivisionDestroyed", __callArgs, 3); }
        void RaiseDivisionLost(void* division) const { void* __callArgs[] = { division }; CallStatic("RaiseDivisionLost", __callArgs, 1); }
        void RaiseCapitalLost(int nationId, int oldCapitalTileIndex) const { void* __callArgs[] = { &nationId, &oldCapitalTileIndex }; CallStatic("RaiseCapitalLost", __callArgs, 2); }
        void RaiseCapitalRelocated(int nationId, int newCapitalTileIndex) const { void* __callArgs[] = { &nationId, &newCapitalTileIndex }; CallStatic("RaiseCapitalRelocated", __callArgs, 2); }
        void RaiseNationEliminated(int nationId) const { void* __callArgs[] = { &nationId }; CallStatic("RaiseNationEliminated", __callArgs, 1); }
        void RaiseTileForfeited(int prevOwnerId, int tileIndex) const { void* __callArgs[] = { &prevOwnerId, &tileIndex }; CallStatic("RaiseTileForfeited", __callArgs, 2); }
        void RaiseNationCapitulated(int loserId, int victorId) const { void* __callArgs[] = { &loserId, &victorId }; CallStatic("RaiseNationCapitulated", __callArgs, 2); }
        void RaiseNationPuppeted(int loserId, int victorId) const { void* __callArgs[] = { &loserId, &victorId }; CallStatic("RaiseNationPuppeted", __callArgs, 2); }
        void RaiseUnionNews(void* args) const { void* __callArgs[] = { args }; CallStatic("RaiseUnionNews", __callArgs, 1); }
        void RaiseBondBroken(int breakerId, int abandonedId, bool wasAlliance) const { void* __callArgs[] = { &breakerId, &abandonedId, &wasAlliance }; CallStatic("RaiseBondBroken", __callArgs, 3); }
        void RaiseArmsRace(int chaserId, int leaderId) const { void* __callArgs[] = { &chaserId, &leaderId }; CallStatic("RaiseArmsRace", __callArgs, 2); }
        void RaiseDesignCopied(int copierId, int ownerId, const char* designName) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(designName ? designName : "") : nullptr; void* __callArgs[] = { &copierId, &ownerId, managed_2 }; CallStatic("RaiseDesignCopied", __callArgs, 3); }
        void RaiseDraftAgeChanged(int nationId, int oldAge, int newAge) const { void* __callArgs[] = { &nationId, &oldAge, &newAge }; CallStatic("RaiseDraftAgeChanged", __callArgs, 3); }
        void RaiseLeaderChanged(int nationId, bool byCoup) const { void* __callArgs[] = { &nationId, &byCoup }; CallStatic("RaiseLeaderChanged", __callArgs, 2); }
        void RaiseLeaderAged(int nationId, int band) const { void* __callArgs[] = { &nationId, &band }; CallStatic("RaiseLeaderAged", __callArgs, 2); }
        void RaiseNationRenamed(int nationId) const { void* __callArgs[] = { &nationId }; CallStatic("RaiseNationRenamed", __callArgs, 1); }
        void RaiseNationRecolored(int nationId) const { void* __callArgs[] = { &nationId }; CallStatic("RaiseNationRecolored", __callArgs, 1); }
        void RaiseStateClaimed(int claimantId, int ownerId, int stateId) const { void* __callArgs[] = { &claimantId, &ownerId, &stateId }; CallStatic("RaiseStateClaimed", __callArgs, 3); }
        void RaiseStateUltimatum(int claimantId, int ownerId, int stateId) const { void* __callArgs[] = { &claimantId, &ownerId, &stateId }; CallStatic("RaiseStateUltimatum", __callArgs, 3); }
        void RaiseUnrestWarning(int ownerId, int originId, int trigger) const { void* __callArgs[] = { &ownerId, &originId, &trigger }; CallStatic("RaiseUnrestWarning", __callArgs, 3); }
        void RaiseStoryRisingFounded(int ownerId, int rebelId, int threadId) const { void* __callArgs[] = { &ownerId, &rebelId, &threadId }; CallStatic("RaiseStoryRisingFounded", __callArgs, 3); }
        void RaiseRisingJoinedHomeland(int rebelId, int homelandId, int parentId) const { void* __callArgs[] = { &rebelId, &homelandId, &parentId }; CallStatic("RaiseRisingJoinedHomeland", __callArgs, 3); }
        void RaiseRevoltCountdown(int ownerId, int originId, int trigger, int stage) const { void* __callArgs[] = { &ownerId, &originId, &trigger, &stage }; CallStatic("RaiseRevoltCountdown", __callArgs, 4); }
        void RaisePeoplePetition(int ownerId, int originId, int kind) const { void* __callArgs[] = { &ownerId, &originId, &kind }; CallStatic("RaisePeoplePetition", __callArgs, 3); }
        void RaisePeoplePetitionAnswered(int ownerId, int originId, int kind, bool granted) const { void* __callArgs[] = { &ownerId, &originId, &kind, &granted }; CallStatic("RaisePeoplePetitionAnswered", __callArgs, 4); }
        void RaiseHomeRuleChanged(int stateId) const { void* __callArgs[] = { &stateId }; CallStatic("RaiseHomeRuleChanged", __callArgs, 1); }
        void RaiseLandClaimFiled(int claimantId, int holderId, int stateId, int reason, const char* text) const { void* managed_4 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { &claimantId, &holderId, &stateId, &reason, managed_4 }; CallStatic("RaiseLandClaimFiled", __callArgs, 5); }
        void ClearAll() const { CallStatic("ClearAll", nullptr, 0); }
    };
}
