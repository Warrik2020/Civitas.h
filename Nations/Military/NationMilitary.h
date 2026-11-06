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
        bool SameRealmAs(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<bool>("SameRealmAs", __callArgs, 1); }
        bool OwnsLand(void* grid, int tileIndex) const { void* __callArgs[] = { grid, &tileIndex }; return CallValue<bool>("OwnsLand", __callArgs, 2); }
        void EnsureRealmMaskCapacity(int nationId) const { void* __callArgs[] = { &nationId }; Call("EnsureRealmMaskCapacity", __callArgs, 1); }
        bool AtWarWith(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<bool>("AtWarWith", __callArgs, 1); }
        void EnsureWarMaskCapacity(int nationId) const { void* __callArgs[] = { &nationId }; Call("EnsureWarMaskCapacity", __callArgs, 1); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        void* divisions() const { return ReadField<void*>("divisions"); }
        int nextOrdinal() const { return ReadField<int>("nextOrdinal"); }
        void nextOrdinal(int value) const { WriteField<int>("nextOrdinal", value); }
        float recruitProgress() const { return ReadField<float>("recruitProgress"); }
        void recruitProgress(float value) const { WriteField<float>("recruitProgress", value); }
        int armyCap() const { return ReadField<int>("armyCap"); }
        void armyCap(int value) const { WriteField<int>("armyCap", value); }
        bool armyCapReady() const { return ReadField<bool>("armyCapReady"); }
        void armyCapReady(bool value) const { WriteField<bool>("armyCapReady", value); }
        int warPeakDivisions() const { return ReadField<int>("warPeakDivisions"); }
        void warPeakDivisions(int value) const { WriteField<int>("warPeakDivisions", value); }
        int prepFoe() const { return ReadField<int>("prepFoe"); }
        void prepFoe(int value) const { WriteField<int>("prepFoe", value); }
        float prepMassed() const { return ReadField<float>("prepMassed"); }
        void prepMassed(float value) const { WriteField<float>("prepMassed", value); }
        float prepPlanning() const { return ReadField<float>("prepPlanning"); }
        void prepPlanning(float value) const { WriteField<float>("prepPlanning", value); }
        int prepOps() const { return ReadField<int>("prepOps"); }
        void prepOps(int value) const { WriteField<int>("prepOps", value); }
        bool atWar() const { return ReadField<bool>("atWar"); }
        void atWar(bool value) const { WriteField<bool>("atWar", value); }
        int lastDisbandTick() const { return ReadField<int>("lastDisbandTick"); }
        void lastDisbandTick(int value) const { WriteField<int>("lastDisbandTick", value); }
        void* recruitSlots() const { return ReadField<void*>("recruitSlots"); }
        int nextRecruitOrdinal() const { return ReadField<int>("nextRecruitOrdinal"); }
        void nextRecruitOrdinal(int value) const { WriteField<int>("nextRecruitOrdinal", value); }
        void* recentSpawnTiles() const { return ReadField<void*>("recentSpawnTiles"); }
        bool isPlayerControlled() const { return ReadField<bool>("isPlayerControlled"); }
        void isPlayerControlled(bool value) const { WriteField<bool>("isPlayerControlled", value); }
        float stretch() const { return ReadField<float>("stretch"); }
        void stretch(float value) const { WriteField<float>("stretch", value); }
        bool overstretched() const { return ReadField<bool>("overstretched"); }
        void overstretched(bool value) const { WriteField<bool>("overstretched", value); }
        void* threatMarks() const { return ReadField<void*>("threatMarks"); }
        int connectivityVersion() const { return ReadField<int>("connectivityVersion"); }
        void connectivityVersion(int value) const { WriteField<int>("connectivityVersion", value); }
        bool connDirty() const { return ReadField<bool>("connDirty"); }
        void connDirty(bool value) const { WriteField<bool>("connDirty", value); }
        int connLastRefreshTick() const { return ReadField<int>("connLastRefreshTick"); }
        void connLastRefreshTick(int value) const { WriteField<int>("connLastRefreshTick", value); }
        int connSeenCapital() const { return ReadField<int>("connSeenCapital"); }
        void connSeenCapital(int value) const { WriteField<int>("connSeenCapital", value); }
        bool logDirty() const { return ReadField<bool>("logDirty"); }
        void logDirty(bool value) const { WriteField<bool>("logDirty", value); }
        void* supplyComponentSizes() const { return ReadField<void*>("supplyComponentSizes"); }
        void* atWarEnemies() const { return ReadField<void*>("atWarEnemies"); }
        void* atWarMask() const { return ReadField<void*>("atWarMask"); }
        void atWarMask(void* value) const { WriteField<void*>("atWarMask", value); }
        void* atWarIndex() const { return ReadField<void*>("atWarIndex"); }
        void atWarIndex(void* value) const { WriteField<void*>("atWarIndex", value); }
        int warVersion() const { return ReadField<int>("warVersion"); }
        void warVersion(int value) const { WriteField<int>("warVersion", value); }
        int realmVersion() const { return ReadField<int>("realmVersion"); }
        void realmVersion(int value) const { WriteField<int>("realmVersion", value); }
        int startingKitPending() const { return ReadField<int>("startingKitPending"); }
        void startingKitPending(int value) const { WriteField<int>("startingKitPending", value); }
        int incursionOwn() const { return ReadField<int>("incursionOwn"); }
        void incursionOwn(int value) const { WriteField<int>("incursionOwn", value); }
        int incursionGuests() const { return ReadField<int>("incursionGuests"); }
        void incursionGuests(int value) const { WriteField<int>("incursionGuests", value); }
        int skirmishOwn() const { return ReadField<int>("skirmishOwn"); }
        void skirmishOwn(int value) const { WriteField<int>("skirmishOwn", value); }
        int skirmishGuests() const { return ReadField<int>("skirmishGuests"); }
        void skirmishGuests(int value) const { WriteField<int>("skirmishGuests", value); }
        void* realmMask() const { return ReadField<void*>("realmMask"); }
        void realmMask(void* value) const { WriteField<void*>("realmMask", value); }
        void* realmPartners() const { return ReadField<void*>("realmPartners"); }
        void* frontCells() const { return ReadField<void*>("frontCells"); }
        void* frontSet() const { return ReadField<void*>("frontSet"); }
        int64_t frontSumX() const { return ReadField<int64_t>("frontSumX"); }
        void frontSumX(int64_t value) const { WriteField<int64_t>("frontSumX", value); }
        int64_t frontSumY() const { return ReadField<int64_t>("frontSumY"); }
        void frontSumY(int64_t value) const { WriteField<int64_t>("frontSumY", value); }
        int frontVersion() const { return ReadField<int>("frontVersion"); }
        void frontVersion(int value) const { WriteField<int>("frontVersion", value); }
        int frontListVersion() const { return ReadField<int>("frontListVersion"); }
        void frontListVersion(int value) const { WriteField<int>("frontListVersion", value); }
        bool frontSeeded() const { return ReadField<bool>("frontSeeded"); }
        void frontSeeded(bool value) const { WriteField<bool>("frontSeeded", value); }
        bool frontLogging() const { return ReadField<bool>("frontLogging"); }
        void frontLogging(bool value) const { WriteField<bool>("frontLogging", value); }
        void* frontLog() const { return ReadField<void*>("frontLog"); }
        int marchSignature() const { return ReadField<int>("marchSignature"); }
        void marchSignature(int value) const { WriteField<int>("marchSignature", value); }
        int lastEvalTick() const { return ReadField<int>("lastEvalTick"); }
        void lastEvalTick(int value) const { WriteField<int>("lastEvalTick", value); }
        int lastWarGainTick() const { return ReadField<int>("lastWarGainTick"); }
        void lastWarGainTick(int value) const { WriteField<int>("lastWarGainTick", value); }
    };
}
