#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerScenario : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerScenario(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerScenario") {}
    public:
        int version() const { return ReadField<int>("version"); }
        void version(int value) const { WriteField<int>("version", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        void* author() const { return ReadField<void*>("author"); }
        void author(void* value) const { WriteField<void*>("author", value); }
        void* notes() const { return ReadField<void*>("notes"); }
        void notes(void* value) const { WriteField<void*>("notes", value); }
        void* savedAt() const { return ReadField<void*>("savedAt"); }
        void savedAt(void* value) const { WriteField<void*>("savedAt", value); }
        void* mapHash() const { return ReadField<void*>("mapHash"); }
        void mapHash(void* value) const { WriteField<void*>("mapHash", value); }
        void* mapFile() const { return ReadField<void*>("mapFile"); }
        void mapFile(void* value) const { WriteField<void*>("mapFile", value); }
        int gridWidth() const { return ReadField<int>("gridWidth"); }
        void gridWidth(int value) const { WriteField<int>("gridWidth", value); }
        int gridHeight() const { return ReadField<int>("gridHeight"); }
        void gridHeight(int value) const { WriteField<int>("gridHeight", value); }
        float worldScale() const { return ReadField<float>("worldScale"); }
        void worldScale(float value) const { WriteField<float>("worldScale", value); }
        bool worldGenerated() const { return ReadField<bool>("worldGenerated"); }
        void worldGenerated(bool value) const { WriteField<bool>("worldGenerated", value); }
        void* worldGen() const { return ReadField<void*>("worldGen"); }
        void worldGen(void* value) const { WriteField<void*>("worldGen", value); }
        int startYearBC() const { return ReadField<int>("startYearBC"); }
        void startYearBC(int value) const { WriteField<int>("startYearBC", value); }
        int startYearAd() const { return ReadField<int>("startYearAd"); }
        void startYearAd(int value) const { WriteField<int>("startYearAd", value); }
        int startMonth() const { return ReadField<int>("startMonth"); }
        void startMonth(int value) const { WriteField<int>("startMonth", value); }
        int startDay() const { return ReadField<int>("startDay"); }
        void startDay(int value) const { WriteField<int>("startDay", value); }
        float ticksPerDay() const { return ReadField<float>("ticksPerDay"); }
        void ticksPerDay(float value) const { WriteField<float>("ticksPerDay", value); }
        float ticksPerYear() const { return ReadField<float>("ticksPerYear"); }
        void ticksPerYear(float value) const { WriteField<float>("ticksPerYear", value); }
        int currentTick() const { return ReadField<int>("currentTick"); }
        void currentTick(int value) const { WriteField<int>("currentTick", value); }
        int playerNationId() const { return ReadField<int>("playerNationId"); }
        void playerNationId(int value) const { WriteField<int>("playerNationId", value); }
        float difficultyMaster() const { return ReadField<float>("difficultyMaster"); }
        void difficultyMaster(float value) const { WriteField<float>("difficultyMaster", value); }
        int difficultyLevel() const { return ReadField<int>("difficultyLevel"); }
        void difficultyLevel(int value) const { WriteField<int>("difficultyLevel", value); }
        int aiAggression() const { return ReadField<int>("aiAggression"); }
        void aiAggression(int value) const { WriteField<int>("aiAggression", value); }
        int logisticsMode() const { return ReadField<int>("logisticsMode"); }
        void logisticsMode(int value) const { WriteField<int>("logisticsMode", value); }
        int progressionMode() const { return ReadField<int>("progressionMode"); }
        void progressionMode(int value) const { WriteField<int>("progressionMode", value); }
        int terrainMode() const { return ReadField<int>("terrainMode"); }
        void terrainMode(int value) const { WriteField<int>("terrainMode", value); }
        int commandMode() const { return ReadField<int>("commandMode"); }
        void commandMode(int value) const { WriteField<int>("commandMode", value); }
        void* ownerRuns() const { return ReadField<void*>("ownerRuns"); }
        void ownerRuns(void* value) const { WriteField<void*>("ownerRuns", value); }
        void* originRuns() const { return ReadField<void*>("originRuns"); }
        void originRuns(void* value) const { WriteField<void*>("originRuns", value); }
        void* stateRuns() const { return ReadField<void*>("stateRuns"); }
        void stateRuns(void* value) const { WriteField<void*>("stateRuns", value); }
        void* controlRuns() const { return ReadField<void*>("controlRuns"); }
        void controlRuns(void* value) const { WriteField<void*>("controlRuns", value); }
        int stateMosaicSeed() const { return ReadField<int>("stateMosaicSeed"); }
        void stateMosaicSeed(int value) const { WriteField<int>("stateMosaicSeed", value); }
        int identityWorldSeed() const { return ReadField<int>("identityWorldSeed"); }
        void identityWorldSeed(int value) const { WriteField<int>("identityWorldSeed", value); }
        void* nations() const { return ReadField<void*>("nations"); }
        void nations(void* value) const { WriteField<void*>("nations", value); }
        void* relations() const { return ReadField<void*>("relations"); }
        void relations(void* value) const { WriteField<void*>("relations", value); }
        void* unions() const { return ReadField<void*>("unions"); }
        void unions(void* value) const { WriteField<void*>("unions", value); }
        void* unionOffers() const { return ReadField<void*>("unionOffers"); }
        void unionOffers(void* value) const { WriteField<void*>("unionOffers", value); }
        void* agreements() const { return ReadField<void*>("agreements"); }
        void agreements(void* value) const { WriteField<void*>("agreements", value); }
        void* cities() const { return ReadField<void*>("cities"); }
        void cities(void* value) const { WriteField<void*>("cities", value); }
        void* roads() const { return ReadField<void*>("roads"); }
        void roads(void* value) const { WriteField<void*>("roads", value); }
        void* buildings() const { return ReadField<void*>("buildings"); }
        void buildings(void* value) const { WriteField<void*>("buildings", value); }
        void* forts() const { return ReadField<void*>("forts"); }
        void forts(void* value) const { WriteField<void*>("forts", value); }
        void* divisions() const { return ReadField<void*>("divisions"); }
        void divisions(void* value) const { WriteField<void*>("divisions", value); }
        void* states() const { return ReadField<void*>("states"); }
        void states(void* value) const { WriteField<void*>("states", value); }
        void* identityGroups() const { return ReadField<void*>("identityGroups"); }
        void identityGroups(void* value) const { WriteField<void*>("identityGroups", value); }
        void* identityFamilies() const { return ReadField<void*>("identityFamilies"); }
        void identityFamilies(void* value) const { WriteField<void*>("identityFamilies", value); }
        void* identityLayers() const { return ReadField<void*>("identityLayers"); }
        void identityLayers(void* value) const { WriteField<void*>("identityLayers", value); }
        void* peopleBlob() const { return ReadField<void*>("peopleBlob"); }
        void peopleBlob(void* value) const { WriteField<void*>("peopleBlob", value); }
        void* migrations() const { return ReadField<void*>("migrations"); }
        void migrations(void* value) const { WriteField<void*>("migrations", value); }
        void* grievances() const { return ReadField<void*>("grievances"); }
        void grievances(void* value) const { WriteField<void*>("grievances", value); }
        void* stateFormations() const { return ReadField<void*>("stateFormations"); }
        void stateFormations(void* value) const { WriteField<void*>("stateFormations", value); }
        void* peoples() const { return ReadField<void*>("peoples"); }
        void peoples(void* value) const { WriteField<void*>("peoples", value); }
        void* unrest() const { return ReadField<void*>("unrest"); }
        void unrest(void* value) const { WriteField<void*>("unrest", value); }
        void* revoltQuiet() const { return ReadField<void*>("revoltQuiet"); }
        void revoltQuiet(void* value) const { WriteField<void*>("revoltQuiet", value); }
        void* lockdowns() const { return ReadField<void*>("lockdowns"); }
        void lockdowns(void* value) const { WriteField<void*>("lockdowns", value); }
        void* naval() const { return ReadField<void*>("naval"); }
        void naval(void* value) const { WriteField<void*>("naval", value); }
        void* command() const { return ReadField<void*>("command"); }
        void command(void* value) const { WriteField<void*>("command", value); }
        void* commandV2() const { return ReadField<void*>("commandV2"); }
        void commandV2(void* value) const { WriteField<void*>("commandV2", value); }
        void* victoryPoints() const { return ReadField<void*>("victoryPoints"); }
        void victoryPoints(void* value) const { WriteField<void*>("victoryPoints", value); }
        void* panNational() const { return ReadField<void*>("panNational"); }
        void panNational(void* value) const { WriteField<void*>("panNational", value); }
        void* ethnogenesis() const { return ReadField<void*>("ethnogenesis"); }
        void ethnogenesis(void* value) const { WriteField<void*>("ethnogenesis", value); }
        void* conversions() const { return ReadField<void*>("conversions"); }
        void conversions(void* value) const { WriteField<void*>("conversions", value); }
        void* localPolitics() const { return ReadField<void*>("localPolitics"); }
        void localPolitics(void* value) const { WriteField<void*>("localPolitics", value); }
        void* nobility() const { return ReadField<void*>("nobility"); }
        void nobility(void* value) const { WriteField<void*>("nobility", value); }
        void* affairs() const { return ReadField<void*>("affairs"); }
        void affairs(void* value) const { WriteField<void*>("affairs", value); }
        void* formerNations() const { return ReadField<void*>("formerNations"); }
        void formerNations(void* value) const { WriteField<void*>("formerNations", value); }
        void* fieldWorks() const { return ReadField<void*>("fieldWorks"); }
        void fieldWorks(void* value) const { WriteField<void*>("fieldWorks", value); }
        void* landClaims() const { return ReadField<void*>("landClaims"); }
        void landClaims(void* value) const { WriteField<void*>("landClaims", value); }
        void* resources() const { return ReadField<void*>("resources"); }
        void resources(void* value) const { WriteField<void*>("resources", value); }
        void* ambitions() const { return ReadField<void*>("ambitions"); }
        void ambitions(void* value) const { WriteField<void*>("ambitions", value); }
        void* goal() const { return ReadField<void*>("goal"); }
        void goal(void* value) const { WriteField<void*>("goal", value); }
        void* unification() const { return ReadField<void*>("unification"); }
        void unification(void* value) const { WriteField<void*>("unification", value); }
    };
}
