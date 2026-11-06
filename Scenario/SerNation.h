#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerNation : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerNation(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerNation") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        float r() const { return ReadField<float>("r"); }
        void r(float value) const { WriteField<float>("r", value); }
        float g() const { return ReadField<float>("g"); }
        void g(float value) const { WriteField<float>("g", value); }
        float b() const { return ReadField<float>("b"); }
        void b(float value) const { WriteField<float>("b", value); }
        int capitalTile() const { return ReadField<int>("capitalTile"); }
        void capitalTile(int value) const { WriteField<int>("capitalTile", value); }
        int ageTicks() const { return ReadField<int>("ageTicks"); }
        void ageTicks(int value) const { WriteField<int>("ageTicks", value); }
        int foundingCulture() const { return ReadField<int>("foundingCulture"); }
        void foundingCulture(int value) const { WriteField<int>("foundingCulture", value); }
        void* banner() const { return ReadField<void*>("banner"); }
        void banner(void* value) const { WriteField<void*>("banner", value); }
        void* bannerPng() const { return ReadField<void*>("bannerPng"); }
        void bannerPng(void* value) const { WriteField<void*>("bannerPng", value); }
        float population() const { return ReadField<float>("population"); }
        void population(float value) const { WriteField<float>("population", value); }
        float treasury() const { return ReadField<float>("treasury"); }
        void treasury(float value) const { WriteField<float>("treasury", value); }
        float pendingTreasury() const { return ReadField<float>("pendingTreasury"); }
        void pendingTreasury(float value) const { WriteField<float>("pendingTreasury", value); }
        float taxRate() const { return ReadField<float>("taxRate"); }
        void taxRate(float value) const { WriteField<float>("taxRate", value); }
        float tradeTax() const { return ReadField<float>("tradeTax"); }
        void tradeTax(float value) const { WriteField<float>("tradeTax", value); }
        float socialSpending() const { return ReadField<float>("socialSpending"); }
        void socialSpending(float value) const { WriteField<float>("socialSpending", value); }
        float adminFunding() const { return ReadField<float>("adminFunding"); }
        void adminFunding(float value) const { WriteField<float>("adminFunding", value); }
        float civIndustryBudget() const { return ReadField<float>("civIndustryBudget"); }
        void civIndustryBudget(float value) const { WriteField<float>("civIndustryBudget", value); }
        float milIndustryBudget() const { return ReadField<float>("milIndustryBudget"); }
        void milIndustryBudget(float value) const { WriteField<float>("milIndustryBudget", value); }
        float infrastructureBudget() const { return ReadField<float>("infrastructureBudget"); }
        void infrastructureBudget(float value) const { WriteField<float>("infrastructureBudget", value); }
        float researchFunding() const { return ReadField<float>("researchFunding"); }
        void researchFunding(float value) const { WriteField<float>("researchFunding", value); }
        float integrationFunding() const { return ReadField<float>("integrationFunding"); }
        void integrationFunding(float value) const { WriteField<float>("integrationFunding", value); }
        float econInvestment() const { return ReadField<float>("econInvestment"); }
        void econInvestment(float value) const { WriteField<float>("econInvestment", value); }
        float econDevelopment() const { return ReadField<float>("econDevelopment"); }
        void econDevelopment(float value) const { WriteField<float>("econDevelopment", value); }
        float manpowerFunding() const { return ReadField<float>("manpowerFunding"); }
        void manpowerFunding(float value) const { WriteField<float>("manpowerFunding", value); }
        int draftAge() const { return ReadField<int>("draftAge"); }
        void draftAge(int value) const { WriteField<int>("draftAge", value); }
        float warWeariness() const { return ReadField<float>("warWeariness"); }
        void warWeariness(float value) const { WriteField<float>("warWeariness", value); }
        float propaganda() const { return ReadField<float>("propaganda"); }
        void propaganda(float value) const { WriteField<float>("propaganda", value); }
        bool propagandaLeverBit() const { return ReadField<bool>("propagandaLeverBit"); }
        void propagandaLeverBit(bool value) const { WriteField<bool>("propagandaLeverBit", value); }
        float landSold() const { return ReadField<float>("landSold"); }
        void landSold(float value) const { WriteField<float>("landSold", value); }
        int landSoldAgeTicks() const { return ReadField<int>("landSoldAgeTicks"); }
        void landSoldAgeTicks(int value) const { WriteField<int>("landSoldAgeTicks", value); }
        float goldReceived() const { return ReadField<float>("goldReceived"); }
        void goldReceived(float value) const { WriteField<float>("goldReceived", value); }
        int goldReceivedAgeTicks() const { return ReadField<int>("goldReceivedAgeTicks"); }
        void goldReceivedAgeTicks(int value) const { WriteField<int>("goldReceivedAgeTicks", value); }
        float arms() const { return ReadField<float>("arms"); }
        void arms(float value) const { WriteField<float>("arms", value); }
        float armsFunding() const { return ReadField<float>("armsFunding"); }
        void armsFunding(float value) const { WriteField<float>("armsFunding", value); }
        float melee() const { return ReadField<float>("melee"); }
        void melee(float value) const { WriteField<float>("melee", value); }
        float armour() const { return ReadField<float>("armour"); }
        void armour(float value) const { WriteField<float>("armour", value); }
        float vehicles() const { return ReadField<float>("vehicles"); }
        void vehicles(float value) const { WriteField<float>("vehicles", value); }
        float meleeFunding() const { return ReadField<float>("meleeFunding"); }
        void meleeFunding(float value) const { WriteField<float>("meleeFunding", value); }
        float armourFunding() const { return ReadField<float>("armourFunding"); }
        void armourFunding(float value) const { WriteField<float>("armourFunding", value); }
        float vehiclesFunding() const { return ReadField<float>("vehiclesFunding"); }
        void vehiclesFunding(float value) const { WriteField<float>("vehiclesFunding", value); }
        float artillery() const { return ReadField<float>("artillery"); }
        void artillery(float value) const { WriteField<float>("artillery", value); }
        float artilleryFunding() const { return ReadField<float>("artilleryFunding"); }
        void artilleryFunding(float value) const { WriteField<float>("artilleryFunding", value); }
        bool artilleryLeverBit() const { return ReadField<bool>("artilleryLeverBit"); }
        void artilleryLeverBit(bool value) const { WriteField<bool>("artilleryLeverBit", value); }
        float manpower() const { return ReadField<float>("manpower"); }
        void manpower(float value) const { WriteField<float>("manpower", value); }
        void* poolWorks() const { return ReadField<void*>("poolWorks"); }
        void poolWorks(void* value) const { WriteField<void*>("poolWorks", value); }
        bool worksAuto() const { return ReadField<bool>("worksAuto"); }
        void worksAuto(bool value) const { WriteField<bool>("worksAuto", value); }
        void* weaponDesigns() const { return ReadField<void*>("weaponDesigns"); }
        void weaponDesigns(void* value) const { WriteField<void*>("weaponDesigns", value); }
        void* unitTemplates() const { return ReadField<void*>("unitTemplates"); }
        void unitTemplates(void* value) const { WriteField<void*>("unitTemplates", value); }
        int weaponNextId() const { return ReadField<int>("weaponNextId"); }
        void weaponNextId(int value) const { WriteField<int>("weaponNextId", value); }
        int weaponNextTemplateId() const { return ReadField<int>("weaponNextTemplateId"); }
        void weaponNextTemplateId(int value) const { WriteField<int>("weaponNextTemplateId", value); }
        void* currentTemplate() const { return ReadField<void*>("currentTemplate"); }
        void currentTemplate(void* value) const { WriteField<void*>("currentTemplate", value); }
        void* aiTemplateKeys() const { return ReadField<void*>("aiTemplateKeys"); }
        void aiTemplateKeys(void* value) const { WriteField<void*>("aiTemplateKeys", value); }
        void* productionLineIds() const { return ReadField<void*>("productionLineIds"); }
        void productionLineIds(void* value) const { WriteField<void*>("productionLineIds", value); }
        void* productionLineShares() const { return ReadField<void*>("productionLineShares"); }
        void productionLineShares(void* value) const { WriteField<void*>("productionLineShares", value); }
        void* productionLineFactories() const { return ReadField<void*>("productionLineFactories"); }
        void productionLineFactories(void* value) const { WriteField<void*>("productionLineFactories", value); }
        void* productionLineRetoolUntil() const { return ReadField<void*>("productionLineRetoolUntil"); }
        void productionLineRetoolUntil(void* value) const { WriteField<void*>("productionLineRetoolUntil", value); }
        void* productionLineRetoolLeft() const { return ReadField<void*>("productionLineRetoolLeft"); }
        void productionLineRetoolLeft(void* value) const { WriteField<void*>("productionLineRetoolLeft", value); }
        void* stockDesignIds() const { return ReadField<void*>("stockDesignIds"); }
        void stockDesignIds(void* value) const { WriteField<void*>("stockDesignIds", value); }
        void* stockCounts() const { return ReadField<void*>("stockCounts"); }
        void stockCounts(void* value) const { WriteField<void*>("stockCounts", value); }
        void* capturedFrom() const { return ReadField<void*>("capturedFrom"); }
        void capturedFrom(void* value) const { WriteField<void*>("capturedFrom", value); }
        void* capturedDesign() const { return ReadField<void*>("capturedDesign"); }
        void capturedDesign(void* value) const { WriteField<void*>("capturedDesign", value); }
        void* capturedPool() const { return ReadField<void*>("capturedPool"); }
        void capturedPool(void* value) const { WriteField<void*>("capturedPool", value); }
        void* capturedUnits() const { return ReadField<void*>("capturedUnits"); }
        void capturedUnits(void* value) const { WriteField<void*>("capturedUnits", value); }
        void* capturedTick() const { return ReadField<void*>("capturedTick"); }
        void capturedTick(void* value) const { WriteField<void*>("capturedTick", value); }
        void* capturedAgeTicks() const { return ReadField<void*>("capturedAgeTicks"); }
        void capturedAgeTicks(void* value) const { WriteField<void*>("capturedAgeTicks", value); }
        void* capturedKind() const { return ReadField<void*>("capturedKind"); }
        void capturedKind(void* value) const { WriteField<void*>("capturedKind", value); }
        bool productionV10() const { return ReadField<bool>("productionV10"); }
        void productionV10(bool value) const { WriteField<bool>("productionV10", value); }
        int weaponRetoolUntilTick() const { return ReadField<int>("weaponRetoolUntilTick"); }
        void weaponRetoolUntilTick(int value) const { WriteField<int>("weaponRetoolUntilTick", value); }
        int weaponRetoolLeft() const { return ReadField<int>("weaponRetoolLeft"); }
        void weaponRetoolLeft(int value) const { WriteField<int>("weaponRetoolLeft", value); }
        bool openingKitIssued() const { return ReadField<bool>("openingKitIssued"); }
        void openingKitIssued(bool value) const { WriteField<bool>("openingKitIssued", value); }
        int fiscalAuto() const { return ReadField<int>("fiscalAuto"); }
        void fiscalAuto(int value) const { WriteField<int>("fiscalAuto", value); }
        bool fiscalAutoSeeded() const { return ReadField<bool>("fiscalAutoSeeded"); }
        void fiscalAutoSeeded(bool value) const { WriteField<bool>("fiscalAutoSeeded", value); }
        bool stateGovernors() const { return ReadField<bool>("stateGovernors"); }
        void stateGovernors(bool value) const { WriteField<bool>("stateGovernors", value); }
        bool poolLeverBits() const { return ReadField<bool>("poolLeverBits"); }
        void poolLeverBits(bool value) const { WriteField<bool>("poolLeverBits", value); }
        bool assimilationPush() const { return ReadField<bool>("assimilationPush"); }
        void assimilationPush(bool value) const { WriteField<bool>("assimilationPush", value); }
        bool borderGuard() const { return ReadField<bool>("borderGuard"); }
        void borderGuard(bool value) const { WriteField<bool>("borderGuard", value); }
        int pushAxes() const { return ReadField<int>("pushAxes"); }
        void pushAxes(int value) const { WriteField<int>("pushAxes", value); }
        int guardAxes() const { return ReadField<int>("guardAxes"); }
        void guardAxes(int value) const { WriteField<int>("guardAxes", value); }
        void* promoteTiles() const { return ReadField<void*>("promoteTiles"); }
        void promoteTiles(void* value) const { WriteField<void*>("promoteTiles", value); }
        void* promoteAxes() const { return ReadField<void*>("promoteAxes"); }
        void promoteAxes(void* value) const { WriteField<void*>("promoteAxes", value); }
        void* areaTiles() const { return ReadField<void*>("areaTiles"); }
        void areaTiles(void* value) const { WriteField<void*>("areaTiles", value); }
        void* areaAxes() const { return ReadField<void*>("areaAxes"); }
        void areaAxes(void* value) const { WriteField<void*>("areaAxes", value); }
        void* areaFileIds() const { return ReadField<void*>("areaFileIds"); }
        void areaFileIds(void* value) const { WriteField<void*>("areaFileIds", value); }
        int zoneAxes() const { return ReadField<int>("zoneAxes"); }
        void zoneAxes(int value) const { WriteField<int>("zoneAxes", value); }
        void* purgeOrders() const { return ReadField<void*>("purgeOrders"); }
        void purgeOrders(void* value) const { WriteField<void*>("purgeOrders", value); }
        int purgeCursorChunk() const { return ReadField<int>("purgeCursorChunk"); }
        void purgeCursorChunk(int value) const { WriteField<int>("purgeCursorChunk", value); }
        int purgeCursorOffset() const { return ReadField<int>("purgeCursorOffset"); }
        void purgeCursorOffset(int value) const { WriteField<int>("purgeCursorOffset", value); }
        int purgeCircuit() const { return ReadField<int>("purgeCircuit"); }
        void purgeCircuit(int value) const { WriteField<int>("purgeCircuit", value); }
        void* treatyExpulsions() const { return ReadField<void*>("treatyExpulsions"); }
        void treatyExpulsions(void* value) const { WriteField<void*>("treatyExpulsions", value); }
        int expelOrigin() const { return ReadField<int>("expelOrigin"); }
        void expelOrigin(int value) const { WriteField<int>("expelOrigin", value); }
        int expelAxes() const { return ReadField<int>("expelAxes"); }
        void expelAxes(int value) const { WriteField<int>("expelAxes", value); }
        int expelKind() const { return ReadField<int>("expelKind"); }
        void expelKind(int value) const { WriteField<int>("expelKind", value); }
        int expelSinceTick() const { return ReadField<int>("expelSinceTick"); }
        void expelSinceTick(int value) const { WriteField<int>("expelSinceTick", value); }
        int expelCursor() const { return ReadField<int>("expelCursor"); }
        void expelCursor(int value) const { WriteField<int>("expelCursor", value); }
        float expelRemovedQuanta() const { return ReadField<float>("expelRemovedQuanta"); }
        void expelRemovedQuanta(float value) const { WriteField<float>("expelRemovedQuanta", value); }
        float expelSweepQuanta() const { return ReadField<float>("expelSweepQuanta"); }
        void expelSweepQuanta(float value) const { WriteField<float>("expelSweepQuanta", value); }
        float expelUnrest() const { return ReadField<float>("expelUnrest"); }
        void expelUnrest(float value) const { WriteField<float>("expelUnrest", value); }
        float happiness() const { return ReadField<float>("happiness"); }
        void happiness(float value) const { WriteField<float>("happiness", value); }
        float warDead() const { return ReadField<float>("warDead"); }
        void warDead(float value) const { WriteField<float>("warDead", value); }
        float aggressionScore() const { return ReadField<float>("aggressionScore"); }
        void aggressionScore(float value) const { WriteField<float>("aggressionScore", value); }
        void* aggressionEvents() const { return ReadField<void*>("aggressionEvents"); }
        void aggressionEvents(void* value) const { WriteField<void*>("aggressionEvents", value); }
        float techScore() const { return ReadField<float>("techScore"); }
        void techScore(float value) const { WriteField<float>("techScore", value); }
        int era() const { return ReadField<int>("era"); }
        void era(int value) const { WriteField<int>("era", value); }
        int ideology() const { return ReadField<int>("ideology"); }
        void ideology(int value) const { WriteField<int>("ideology", value); }
        int nextEdictTick() const { return ReadField<int>("nextEdictTick"); }
        void nextEdictTick(int value) const { WriteField<int>("nextEdictTick", value); }
        void* edictReadyTick() const { return ReadField<void*>("edictReadyTick"); }
        void edictReadyTick(void* value) const { WriteField<void*>("edictReadyTick", value); }
        int reassertUntilTick() const { return ReadField<int>("reassertUntilTick"); }
        void reassertUntilTick(int value) const { WriteField<int>("reassertUntilTick", value); }
        void* lapseBlobs() const { return ReadField<void*>("lapseBlobs"); }
        void lapseBlobs(void* value) const { WriteField<void*>("lapseBlobs", value); }
        int humbleUntilTick() const { return ReadField<int>("humbleUntilTick"); }
        void humbleUntilTick(int value) const { WriteField<int>("humbleUntilTick", value); }
        bool inControlCrisis() const { return ReadField<bool>("inControlCrisis"); }
        void inControlCrisis(bool value) const { WriteField<bool>("inControlCrisis", value); }
        int integrationEdictUntilTick() const { return ReadField<int>("integrationEdictUntilTick"); }
        void integrationEdictUntilTick(int value) const { WriteField<int>("integrationEdictUntilTick", value); }
        int nextClanCallTick() const { return ReadField<int>("nextClanCallTick"); }
        void nextClanCallTick(int value) const { WriteField<int>("nextClanCallTick", value); }
        int nextIdentityAdoptTick() const { return ReadField<int>("nextIdentityAdoptTick"); }
        void nextIdentityAdoptTick(int value) const { WriteField<int>("nextIdentityAdoptTick", value); }
        void* edictReadyLeft() const { return ReadField<void*>("edictReadyLeft"); }
        void edictReadyLeft(void* value) const { WriteField<void*>("edictReadyLeft", value); }
        int reassertLeft() const { return ReadField<int>("reassertLeft"); }
        void reassertLeft(int value) const { WriteField<int>("reassertLeft", value); }
        int humbleLeft() const { return ReadField<int>("humbleLeft"); }
        void humbleLeft(int value) const { WriteField<int>("humbleLeft", value); }
        int integrationEdictLeft() const { return ReadField<int>("integrationEdictLeft"); }
        void integrationEdictLeft(int value) const { WriteField<int>("integrationEdictLeft", value); }
        int nextClanCallLeft() const { return ReadField<int>("nextClanCallLeft"); }
        void nextClanCallLeft(int value) const { WriteField<int>("nextClanCallLeft", value); }
        int nextIdentityAdoptLeft() const { return ReadField<int>("nextIdentityAdoptLeft"); }
        void nextIdentityAdoptLeft(int value) const { WriteField<int>("nextIdentityAdoptLeft", value); }
        int nextWarDeclareLeft() const { return ReadField<int>("nextWarDeclareLeft"); }
        void nextWarDeclareLeft(int value) const { WriteField<int>("nextWarDeclareLeft", value); }
        void* stateIdentityFounder() const { return ReadField<void*>("stateIdentityFounder"); }
        void stateIdentityFounder(void* value) const { WriteField<void*>("stateIdentityFounder", value); }
        void* coOfficialFileId() const { return ReadField<void*>("coOfficialFileId"); }
        void coOfficialFileId(void* value) const { WriteField<void*>("coOfficialFileId", value); }
        void* kindredFileId() const { return ReadField<void*>("kindredFileId"); }
        void kindredFileId(void* value) const { WriteField<void*>("kindredFileId", value); }
        void* stateIdentityFileId() const { return ReadField<void*>("stateIdentityFileId"); }
        void stateIdentityFileId(void* value) const { WriteField<void*>("stateIdentityFileId", value); }
        int economicIdeology() const { return ReadField<int>("economicIdeology"); }
        void economicIdeology(int value) const { WriteField<int>("economicIdeology", value); }
        int governmentForm() const { return ReadField<int>("governmentForm"); }
        void governmentForm(int value) const { WriteField<int>("governmentForm", value); }
        void* researched() const { return ReadField<void*>("researched"); }
        void researched(void* value) const { WriteField<void*>("researched", value); }
        void* researchSlots() const { return ReadField<void*>("researchSlots"); }
        void researchSlots(void* value) const { WriteField<void*>("researchSlots", value); }
        void* researchSlotProgress() const { return ReadField<void*>("researchSlotProgress"); }
        void researchSlotProgress(void* value) const { WriteField<void*>("researchSlotProgress", value); }
        int researchAutoOff() const { return ReadField<int>("researchAutoOff"); }
        void researchAutoOff(int value) const { WriteField<int>("researchAutoOff", value); }
        void* activeResearch() const { return ReadField<void*>("activeResearch"); }
        void activeResearch(void* value) const { WriteField<void*>("activeResearch", value); }
        float researchProgress() const { return ReadField<float>("researchProgress"); }
        void researchProgress(float value) const { WriteField<float>("researchProgress", value); }
        bool researchManual() const { return ReadField<bool>("researchManual"); }
        void researchManual(bool value) const { WriteField<bool>("researchManual", value); }
        float coastalBias() const { return ReadField<float>("coastalBias"); }
        void coastalBias(float value) const { WriteField<float>("coastalBias", value); }
        float expansionRate() const { return ReadField<float>("expansionRate"); }
        void expansionRate(float value) const { WriteField<float>("expansionRate", value); }
        int maxLobes() const { return ReadField<int>("maxLobes"); }
        void maxLobes(int value) const { WriteField<int>("maxLobes", value); }
        float lobeDriftRate() const { return ReadField<float>("lobeDriftRate"); }
        void lobeDriftRate(float value) const { WriteField<float>("lobeDriftRate", value); }
        void* leaderName() const { return ReadField<void*>("leaderName"); }
        void leaderName(void* value) const { WriteField<void*>("leaderName", value); }
        float aggression() const { return ReadField<float>("aggression"); }
        void aggression(float value) const { WriteField<float>("aggression", value); }
        float expansionism() const { return ReadField<float>("expansionism"); }
        void expansionism(float value) const { WriteField<float>("expansionism", value); }
        float sociability() const { return ReadField<float>("sociability"); }
        void sociability(float value) const { WriteField<float>("sociability", value); }
        float industriousness() const { return ReadField<float>("industriousness"); }
        void industriousness(float value) const { WriteField<float>("industriousness", value); }
        int leaderArchetype() const { return ReadField<int>("leaderArchetype"); }
        void leaderArchetype(int value) const { WriteField<int>("leaderArchetype", value); }
        void* leaderGiven() const { return ReadField<void*>("leaderGiven"); }
        void leaderGiven(void* value) const { WriteField<void*>("leaderGiven", value); }
        void* leaderHouse() const { return ReadField<void*>("leaderHouse"); }
        void leaderHouse(void* value) const { WriteField<void*>("leaderHouse", value); }
        void* leaderEpithet() const { return ReadField<void*>("leaderEpithet"); }
        void leaderEpithet(void* value) const { WriteField<void*>("leaderEpithet", value); }
        void* leaderBornEpithet() const { return ReadField<void*>("leaderBornEpithet"); }
        void leaderBornEpithet(void* value) const { WriteField<void*>("leaderBornEpithet", value); }
        int leaderRegnal() const { return ReadField<int>("leaderRegnal"); }
        void leaderRegnal(int value) const { WriteField<int>("leaderRegnal", value); }
        bool leaderFemale() const { return ReadField<bool>("leaderFemale"); }
        void leaderFemale(bool value) const { WriteField<bool>("leaderFemale", value); }
        int leaderCulture() const { return ReadField<int>("leaderCulture"); }
        void leaderCulture(int value) const { WriteField<int>("leaderCulture", value); }
        int leaderAccessionTick() const { return ReadField<int>("leaderAccessionTick"); }
        void leaderAccessionTick(int value) const { WriteField<int>("leaderAccessionTick", value); }
        int leaderAccessionTiles() const { return ReadField<int>("leaderAccessionTiles"); }
        void leaderAccessionTiles(int value) const { WriteField<int>("leaderAccessionTiles", value); }
        int leaderReignEndTick() const { return ReadField<int>("leaderReignEndTick"); }
        void leaderReignEndTick(int value) const { WriteField<int>("leaderReignEndTick", value); }
        int leaderWarsDeclared() const { return ReadField<int>("leaderWarsDeclared"); }
        void leaderWarsDeclared(int value) const { WriteField<int>("leaderWarsDeclared", value); }
        int64_t leaderTraits() const { return ReadField<int64_t>("leaderTraits"); }
        void leaderTraits(int64_t value) const { WriteField<int64_t>("leaderTraits", value); }
        int leaderBornTick() const { return ReadField<int>("leaderBornTick"); }
        void leaderBornTick(int value) const { WriteField<int>("leaderBornTick", value); }
        int leaderAccessionAgeTicks() const { return ReadField<int>("leaderAccessionAgeTicks"); }
        void leaderAccessionAgeTicks(int value) const { WriteField<int>("leaderAccessionAgeTicks", value); }
        int leaderBornAgeTicks() const { return ReadField<int>("leaderBornAgeTicks"); }
        void leaderBornAgeTicks(int value) const { WriteField<int>("leaderBornAgeTicks", value); }
        int leaderReignEndLeft() const { return ReadField<int>("leaderReignEndLeft"); }
        void leaderReignEndLeft(int value) const { WriteField<int>("leaderReignEndLeft", value); }
        void* leaderTitleOverride() const { return ReadField<void*>("leaderTitleOverride"); }
        void leaderTitleOverride(void* value) const { WriteField<void*>("leaderTitleOverride", value); }
        bool leaderPlayerDynasty() const { return ReadField<bool>("leaderPlayerDynasty"); }
        void leaderPlayerDynasty(bool value) const { WriteField<bool>("leaderPlayerDynasty", value); }
        int overlordId() const { return ReadField<int>("overlordId"); }
        void overlordId(int value) const { WriteField<int>("overlordId", value); }
        float tributeRate() const { return ReadField<float>("tributeRate"); }
        void tributeRate(float value) const { WriteField<float>("tributeRate", value); }
        bool vassalMayDeclareWar() const { return ReadField<bool>("vassalMayDeclareWar"); }
        void vassalMayDeclareWar(bool value) const { WriteField<bool>("vassalMayDeclareWar", value); }
        bool vassalMayMakeAlliances() const { return ReadField<bool>("vassalMayMakeAlliances"); }
        void vassalMayMakeAlliances(bool value) const { WriteField<bool>("vassalMayMakeAlliances", value); }
        bool vassalMayFoundCities() const { return ReadField<bool>("vassalMayFoundCities"); }
        void vassalMayFoundCities(bool value) const { WriteField<bool>("vassalMayFoundCities", value); }
        bool vassalGrantsMarchRights() const { return ReadField<bool>("vassalGrantsMarchRights"); }
        void vassalGrantsMarchRights(bool value) const { WriteField<bool>("vassalGrantsMarchRights", value); }
        bool preVassalColorSaved() const { return ReadField<bool>("preVassalColorSaved"); }
        void preVassalColorSaved(bool value) const { WriteField<bool>("preVassalColorSaved", value); }
        bool preUnionColorSaved() const { return ReadField<bool>("preUnionColorSaved"); }
        void preUnionColorSaved(bool value) const { WriteField<bool>("preUnionColorSaved", value); }
        float preVassalR() const { return ReadField<float>("preVassalR"); }
        void preVassalR(float value) const { WriteField<float>("preVassalR", value); }
        float preVassalG() const { return ReadField<float>("preVassalG"); }
        void preVassalG(float value) const { WriteField<float>("preVassalG", value); }
        float preVassalB() const { return ReadField<float>("preVassalB"); }
        void preVassalB(float value) const { WriteField<float>("preVassalB", value); }
        float preUnionR() const { return ReadField<float>("preUnionR"); }
        void preUnionR(float value) const { WriteField<float>("preUnionR", value); }
        float preUnionG() const { return ReadField<float>("preUnionG"); }
        void preUnionG(float value) const { WriteField<float>("preUnionG", value); }
        float preUnionB() const { return ReadField<float>("preUnionB"); }
        void preUnionB(float value) const { WriteField<float>("preUnionB", value); }
        void* preUnionName() const { return ReadField<void*>("preUnionName"); }
        void preUnionName(void* value) const { WriteField<void*>("preUnionName", value); }
        bool identityLocked() const { return ReadField<bool>("identityLocked"); }
        void identityLocked(bool value) const { WriteField<bool>("identityLocked", value); }
        int unionJoinedAgeTicks() const { return ReadField<int>("unionJoinedAgeTicks"); }
        void unionJoinedAgeTicks(int value) const { WriteField<int>("unionJoinedAgeTicks", value); }
        int unionSubsidyLeft() const { return ReadField<int>("unionSubsidyLeft"); }
        void unionSubsidyLeft(int value) const { WriteField<int>("unionSubsidyLeft", value); }
        int unionAutonomyLeft() const { return ReadField<int>("unionAutonomyLeft"); }
        void unionAutonomyLeft(int value) const { WriteField<int>("unionAutonomyLeft", value); }
        int unionShieldLeft() const { return ReadField<int>("unionShieldLeft"); }
        void unionShieldLeft(int value) const { WriteField<int>("unionShieldLeft", value); }
    };
}
