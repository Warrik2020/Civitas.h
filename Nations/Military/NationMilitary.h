#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class NationMilitary : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationMilitary(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "NationMilitary") {}
    public:
        void MarkFloodDirty() const { Call("MarkFloodDirty", nullptr, 0); }
        bool SameRealmAs(int nationId) const { void* args[] = { &nationId }; return CallValue<bool>("SameRealmAs", args, 1); }
        bool OwnsLand(void* grid, int tileIndex) const { void* args[] = { grid, &tileIndex }; return CallValue<bool>("OwnsLand", args, 2); }
        void EnsureRealmMaskCapacity(int nationId) const { void* args[] = { &nationId }; Call("EnsureRealmMaskCapacity", args, 1); }
        bool AtWarWith(int nationId) const { void* args[] = { &nationId }; return CallValue<bool>("AtWarWith", args, 1); }
        void EnsureWarMaskCapacity(int nationId) const { void* args[] = { &nationId }; Call("EnsureWarMaskCapacity", args, 1); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        void* divisions() const { return ReadField<void*>("divisions"); }
        int nextOrdinal() const { return ReadField<int>("nextOrdinal"); }
        void SetNextOrdinal(int value) const { WriteField<int>("nextOrdinal", value); }
        float recruitProgress() const { return ReadField<float>("recruitProgress"); }
        void SetRecruitProgress(float value) const { WriteField<float>("recruitProgress", value); }
        int armyCap() const { return ReadField<int>("armyCap"); }
        void SetArmyCap(int value) const { WriteField<int>("armyCap", value); }
        bool armyCapReady() const { return ReadField<bool>("armyCapReady"); }
        void SetArmyCapReady(bool value) const { WriteField<bool>("armyCapReady", value); }
        int warPeakDivisions() const { return ReadField<int>("warPeakDivisions"); }
        void SetWarPeakDivisions(int value) const { WriteField<int>("warPeakDivisions", value); }
        int prepFoe() const { return ReadField<int>("prepFoe"); }
        void SetPrepFoe(int value) const { WriteField<int>("prepFoe", value); }
        float prepMassed() const { return ReadField<float>("prepMassed"); }
        void SetPrepMassed(float value) const { WriteField<float>("prepMassed", value); }
        float prepPlanning() const { return ReadField<float>("prepPlanning"); }
        void SetPrepPlanning(float value) const { WriteField<float>("prepPlanning", value); }
        int prepOps() const { return ReadField<int>("prepOps"); }
        void SetPrepOps(int value) const { WriteField<int>("prepOps", value); }
        bool atWar() const { return ReadField<bool>("atWar"); }
        void SetAtWar(bool value) const { WriteField<bool>("atWar", value); }
        int lastDisbandTick() const { return ReadField<int>("lastDisbandTick"); }
        void SetLastDisbandTick(int value) const { WriteField<int>("lastDisbandTick", value); }
        void* recruitSlots() const { return ReadField<void*>("recruitSlots"); }
        int nextRecruitOrdinal() const { return ReadField<int>("nextRecruitOrdinal"); }
        void SetNextRecruitOrdinal(int value) const { WriteField<int>("nextRecruitOrdinal", value); }
        void* recentSpawnTiles() const { return ReadField<void*>("recentSpawnTiles"); }
        bool isPlayerControlled() const { return ReadField<bool>("isPlayerControlled"); }
        void SetIsPlayerControlled(bool value) const { WriteField<bool>("isPlayerControlled", value); }
        float stretch() const { return ReadField<float>("stretch"); }
        void SetStretch(float value) const { WriteField<float>("stretch", value); }
        bool overstretched() const { return ReadField<bool>("overstretched"); }
        void SetOverstretched(bool value) const { WriteField<bool>("overstretched", value); }
        void* threatMarks() const { return ReadField<void*>("threatMarks"); }
        int connectivityVersion() const { return ReadField<int>("connectivityVersion"); }
        void SetConnectivityVersion(int value) const { WriteField<int>("connectivityVersion", value); }
        bool connDirty() const { return ReadField<bool>("connDirty"); }
        void SetConnDirty(bool value) const { WriteField<bool>("connDirty", value); }
        int connLastRefreshTick() const { return ReadField<int>("connLastRefreshTick"); }
        void SetConnLastRefreshTick(int value) const { WriteField<int>("connLastRefreshTick", value); }
        int connSeenCapital() const { return ReadField<int>("connSeenCapital"); }
        void SetConnSeenCapital(int value) const { WriteField<int>("connSeenCapital", value); }
        bool logDirty() const { return ReadField<bool>("logDirty"); }
        void SetLogDirty(bool value) const { WriteField<bool>("logDirty", value); }
        void* supplyComponentSizes() const { return ReadField<void*>("supplyComponentSizes"); }
        void* atWarEnemies() const { return ReadField<void*>("atWarEnemies"); }
        void* atWarMask() const { return ReadField<void*>("atWarMask"); }
        void SetAtWarMask(void* value) const { WriteField<void*>("atWarMask", value); }
        void* atWarIndex() const { return ReadField<void*>("atWarIndex"); }
        void SetAtWarIndex(void* value) const { WriteField<void*>("atWarIndex", value); }
        int warVersion() const { return ReadField<int>("warVersion"); }
        void SetWarVersion(int value) const { WriteField<int>("warVersion", value); }
        int realmVersion() const { return ReadField<int>("realmVersion"); }
        void SetRealmVersion(int value) const { WriteField<int>("realmVersion", value); }
        int startingKitPending() const { return ReadField<int>("startingKitPending"); }
        void SetStartingKitPending(int value) const { WriteField<int>("startingKitPending", value); }
        int incursionOwn() const { return ReadField<int>("incursionOwn"); }
        void SetIncursionOwn(int value) const { WriteField<int>("incursionOwn", value); }
        int incursionGuests() const { return ReadField<int>("incursionGuests"); }
        void SetIncursionGuests(int value) const { WriteField<int>("incursionGuests", value); }
        int skirmishOwn() const { return ReadField<int>("skirmishOwn"); }
        void SetSkirmishOwn(int value) const { WriteField<int>("skirmishOwn", value); }
        int skirmishGuests() const { return ReadField<int>("skirmishGuests"); }
        void SetSkirmishGuests(int value) const { WriteField<int>("skirmishGuests", value); }
        void* realmMask() const { return ReadField<void*>("realmMask"); }
        void SetRealmMask(void* value) const { WriteField<void*>("realmMask", value); }
        void* realmPartners() const { return ReadField<void*>("realmPartners"); }
        void* frontCells() const { return ReadField<void*>("frontCells"); }
        void* frontSet() const { return ReadField<void*>("frontSet"); }
        int64_t frontSumX() const { return ReadField<int64_t>("frontSumX"); }
        void SetFrontSumX(int64_t value) const { WriteField<int64_t>("frontSumX", value); }
        int64_t frontSumY() const { return ReadField<int64_t>("frontSumY"); }
        void SetFrontSumY(int64_t value) const { WriteField<int64_t>("frontSumY", value); }
        int frontVersion() const { return ReadField<int>("frontVersion"); }
        void SetFrontVersion(int value) const { WriteField<int>("frontVersion", value); }
        int frontListVersion() const { return ReadField<int>("frontListVersion"); }
        void SetFrontListVersion(int value) const { WriteField<int>("frontListVersion", value); }
        bool frontSeeded() const { return ReadField<bool>("frontSeeded"); }
        void SetFrontSeeded(bool value) const { WriteField<bool>("frontSeeded", value); }
        bool frontLogging() const { return ReadField<bool>("frontLogging"); }
        void SetFrontLogging(bool value) const { WriteField<bool>("frontLogging", value); }
        void* frontLog() const { return ReadField<void*>("frontLog"); }
        int marchSignature() const { return ReadField<int>("marchSignature"); }
        void SetMarchSignature(int value) const { WriteField<int>("marchSignature", value); }
        int lastEvalTick() const { return ReadField<int>("lastEvalTick"); }
        void SetLastEvalTick(int value) const { WriteField<int>("lastEvalTick", value); }
        int lastWarGainTick() const { return ReadField<int>("lastWarGainTick"); }
        void SetLastWarGainTick(int value) const { WriteField<int>("lastWarGainTick", value); }
        float ticks() const { return ReadField<float>("ticks"); }
        void SetTicks(float value) const { WriteField<float>("ticks", value); }
        float buildTicks() const { return ReadField<float>("buildTicks"); }
        void SetBuildTicks(float value) const { WriteField<float>("buildTicks", value); }
        int type() const { return ReadField<int>("type"); }
        void SetType(int value) const { WriteField<int>("type", value); }
        int templateId() const { return ReadField<int>("templateId"); }
        void SetTemplateId(int value) const { WriteField<int>("templateId", value); }
        void* issue() const { return ReadField<void*>("issue"); }
        void SetIssue(void* value) const { WriteField<void*>("issue", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        int tile() const { return ReadField<int>("tile"); }
        void SetTile(int value) const { WriteField<int>("tile", value); }
        float pressure() const { return ReadField<float>("pressure"); }
        void SetPressure(float value) const { WriteField<float>("pressure", value); }
        float opposing() const { return ReadField<float>("opposing"); }
        void SetOpposing(float value) const { WriteField<float>("opposing", value); }
        float weight() const { return ReadField<float>("weight"); }
        void SetWeight(float value) const { WriteField<float>("weight", value); }
        int tick() const { return ReadField<int>("tick"); }
        void SetTick(int value) const { WriteField<int>("tick", value); }
        bool critical() const { return ReadField<bool>("critical"); }
        void SetCritical(bool value) const { WriteField<bool>("critical", value); }
    };
}
