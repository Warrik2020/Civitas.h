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
        void SetVersion(int value) const { WriteField<int>("version", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* author() const { return ReadField<void*>("author"); }
        void SetAuthor(void* value) const { WriteField<void*>("author", value); }
        void* notes() const { return ReadField<void*>("notes"); }
        void SetNotes(void* value) const { WriteField<void*>("notes", value); }
        void* savedAt() const { return ReadField<void*>("savedAt"); }
        void SetSavedAt(void* value) const { WriteField<void*>("savedAt", value); }
        void* mapHash() const { return ReadField<void*>("mapHash"); }
        void SetMapHash(void* value) const { WriteField<void*>("mapHash", value); }
        void* mapFile() const { return ReadField<void*>("mapFile"); }
        void SetMapFile(void* value) const { WriteField<void*>("mapFile", value); }
        int gridWidth() const { return ReadField<int>("gridWidth"); }
        void SetGridWidth(int value) const { WriteField<int>("gridWidth", value); }
        int gridHeight() const { return ReadField<int>("gridHeight"); }
        void SetGridHeight(int value) const { WriteField<int>("gridHeight", value); }
        float worldScale() const { return ReadField<float>("worldScale"); }
        void SetWorldScale(float value) const { WriteField<float>("worldScale", value); }
        bool worldGenerated() const { return ReadField<bool>("worldGenerated"); }
        void SetWorldGenerated(bool value) const { WriteField<bool>("worldGenerated", value); }
        void* worldGen() const { return ReadField<void*>("worldGen"); }
        void SetWorldGen(void* value) const { WriteField<void*>("worldGen", value); }
        int startYearBC() const { return ReadField<int>("startYearBC"); }
        void SetStartYearBC(int value) const { WriteField<int>("startYearBC", value); }
        int startYearAd() const { return ReadField<int>("startYearAd"); }
        void SetStartYearAd(int value) const { WriteField<int>("startYearAd", value); }
        int startMonth() const { return ReadField<int>("startMonth"); }
        void SetStartMonth(int value) const { WriteField<int>("startMonth", value); }
        int startDay() const { return ReadField<int>("startDay"); }
        void SetStartDay(int value) const { WriteField<int>("startDay", value); }
        float ticksPerDay() const { return ReadField<float>("ticksPerDay"); }
        void SetTicksPerDay(float value) const { WriteField<float>("ticksPerDay", value); }
        float ticksPerYear() const { return ReadField<float>("ticksPerYear"); }
        void SetTicksPerYear(float value) const { WriteField<float>("ticksPerYear", value); }
        int currentTick() const { return ReadField<int>("currentTick"); }
        void SetCurrentTick(int value) const { WriteField<int>("currentTick", value); }
        int playerNationId() const { return ReadField<int>("playerNationId"); }
        void SetPlayerNationId(int value) const { WriteField<int>("playerNationId", value); }
        float difficultyMaster() const { return ReadField<float>("difficultyMaster"); }
        void SetDifficultyMaster(float value) const { WriteField<float>("difficultyMaster", value); }
        int difficultyLevel() const { return ReadField<int>("difficultyLevel"); }
        void SetDifficultyLevel(int value) const { WriteField<int>("difficultyLevel", value); }
        int aiAggression() const { return ReadField<int>("aiAggression"); }
        void SetAiAggression(int value) const { WriteField<int>("aiAggression", value); }
        int logisticsMode() const { return ReadField<int>("logisticsMode"); }
        void SetLogisticsMode(int value) const { WriteField<int>("logisticsMode", value); }
        int progressionMode() const { return ReadField<int>("progressionMode"); }
        void SetProgressionMode(int value) const { WriteField<int>("progressionMode", value); }
        int terrainMode() const { return ReadField<int>("terrainMode"); }
        void SetTerrainMode(int value) const { WriteField<int>("terrainMode", value); }
        int commandMode() const { return ReadField<int>("commandMode"); }
        void SetCommandMode(int value) const { WriteField<int>("commandMode", value); }
        void* ownerRuns() const { return ReadField<void*>("ownerRuns"); }
        void SetOwnerRuns(void* value) const { WriteField<void*>("ownerRuns", value); }
        void* originRuns() const { return ReadField<void*>("originRuns"); }
        void SetOriginRuns(void* value) const { WriteField<void*>("originRuns", value); }
        void* stateRuns() const { return ReadField<void*>("stateRuns"); }
        void SetStateRuns(void* value) const { WriteField<void*>("stateRuns", value); }
        void* controlRuns() const { return ReadField<void*>("controlRuns"); }
        void SetControlRuns(void* value) const { WriteField<void*>("controlRuns", value); }
        int stateMosaicSeed() const { return ReadField<int>("stateMosaicSeed"); }
        void SetStateMosaicSeed(int value) const { WriteField<int>("stateMosaicSeed", value); }
        int identityWorldSeed() const { return ReadField<int>("identityWorldSeed"); }
        void SetIdentityWorldSeed(int value) const { WriteField<int>("identityWorldSeed", value); }
        void* nations() const { return ReadField<void*>("nations"); }
        void SetNations(void* value) const { WriteField<void*>("nations", value); }
        void* relations() const { return ReadField<void*>("relations"); }
        void SetRelations(void* value) const { WriteField<void*>("relations", value); }
        void* unions() const { return ReadField<void*>("unions"); }
        void SetUnions(void* value) const { WriteField<void*>("unions", value); }
        void* unionOffers() const { return ReadField<void*>("unionOffers"); }
        void SetUnionOffers(void* value) const { WriteField<void*>("unionOffers", value); }
        void* agreements() const { return ReadField<void*>("agreements"); }
        void SetAgreements(void* value) const { WriteField<void*>("agreements", value); }
        void* cities() const { return ReadField<void*>("cities"); }
        void SetCities(void* value) const { WriteField<void*>("cities", value); }
        void* roads() const { return ReadField<void*>("roads"); }
        void SetRoads(void* value) const { WriteField<void*>("roads", value); }
        void* buildings() const { return ReadField<void*>("buildings"); }
        void SetBuildings(void* value) const { WriteField<void*>("buildings", value); }
        void* forts() const { return ReadField<void*>("forts"); }
        void SetForts(void* value) const { WriteField<void*>("forts", value); }
        void* divisions() const { return ReadField<void*>("divisions"); }
        void SetDivisions(void* value) const { WriteField<void*>("divisions", value); }
        void* states() const { return ReadField<void*>("states"); }
        void SetStates(void* value) const { WriteField<void*>("states", value); }
        void* identityGroups() const { return ReadField<void*>("identityGroups"); }
        void SetIdentityGroups(void* value) const { WriteField<void*>("identityGroups", value); }
        void* identityFamilies() const { return ReadField<void*>("identityFamilies"); }
        void SetIdentityFamilies(void* value) const { WriteField<void*>("identityFamilies", value); }
        void* identityLayers() const { return ReadField<void*>("identityLayers"); }
        void SetIdentityLayers(void* value) const { WriteField<void*>("identityLayers", value); }
        void* peopleBlob() const { return ReadField<void*>("peopleBlob"); }
        void SetPeopleBlob(void* value) const { WriteField<void*>("peopleBlob", value); }
        void* migrations() const { return ReadField<void*>("migrations"); }
        void SetMigrations(void* value) const { WriteField<void*>("migrations", value); }
        void* grievances() const { return ReadField<void*>("grievances"); }
        void SetGrievances(void* value) const { WriteField<void*>("grievances", value); }
        void* stateFormations() const { return ReadField<void*>("stateFormations"); }
        void SetStateFormations(void* value) const { WriteField<void*>("stateFormations", value); }
        void* peoples() const { return ReadField<void*>("peoples"); }
        void SetPeoples(void* value) const { WriteField<void*>("peoples", value); }
        void* unrest() const { return ReadField<void*>("unrest"); }
        void SetUnrest(void* value) const { WriteField<void*>("unrest", value); }
        void* revoltQuiet() const { return ReadField<void*>("revoltQuiet"); }
        void SetRevoltQuiet(void* value) const { WriteField<void*>("revoltQuiet", value); }
        void* lockdowns() const { return ReadField<void*>("lockdowns"); }
        void SetLockdowns(void* value) const { WriteField<void*>("lockdowns", value); }
        void* naval() const { return ReadField<void*>("naval"); }
        void SetNaval(void* value) const { WriteField<void*>("naval", value); }
        void* command() const { return ReadField<void*>("command"); }
        void SetCommand(void* value) const { WriteField<void*>("command", value); }
        void* commandV2() const { return ReadField<void*>("commandV2"); }
        void SetCommandV2(void* value) const { WriteField<void*>("commandV2", value); }
        void* victoryPoints() const { return ReadField<void*>("victoryPoints"); }
        void SetVictoryPoints(void* value) const { WriteField<void*>("victoryPoints", value); }
        void* panNational() const { return ReadField<void*>("panNational"); }
        void SetPanNational(void* value) const { WriteField<void*>("panNational", value); }
        void* ethnogenesis() const { return ReadField<void*>("ethnogenesis"); }
        void SetEthnogenesis(void* value) const { WriteField<void*>("ethnogenesis", value); }
        void* conversions() const { return ReadField<void*>("conversions"); }
        void SetConversions(void* value) const { WriteField<void*>("conversions", value); }
        void* localPolitics() const { return ReadField<void*>("localPolitics"); }
        void SetLocalPolitics(void* value) const { WriteField<void*>("localPolitics", value); }
        void* nobility() const { return ReadField<void*>("nobility"); }
        void SetNobility(void* value) const { WriteField<void*>("nobility", value); }
        void* affairs() const { return ReadField<void*>("affairs"); }
        void SetAffairs(void* value) const { WriteField<void*>("affairs", value); }
        void* formerNations() const { return ReadField<void*>("formerNations"); }
        void SetFormerNations(void* value) const { WriteField<void*>("formerNations", value); }
        void* fieldWorks() const { return ReadField<void*>("fieldWorks"); }
        void SetFieldWorks(void* value) const { WriteField<void*>("fieldWorks", value); }
        void* landClaims() const { return ReadField<void*>("landClaims"); }
        void SetLandClaims(void* value) const { WriteField<void*>("landClaims", value); }
        void* resources() const { return ReadField<void*>("resources"); }
        void SetResources(void* value) const { WriteField<void*>("resources", value); }
        void* ambitions() const { return ReadField<void*>("ambitions"); }
        void SetAmbitions(void* value) const { WriteField<void*>("ambitions", value); }
        void* goal() const { return ReadField<void*>("goal"); }
        void SetGoal(void* value) const { WriteField<void*>("goal", value); }
        void* unification() const { return ReadField<void*>("unification"); }
        void SetUnification(void* value) const { WriteField<void*>("unification", value); }
    };
}
