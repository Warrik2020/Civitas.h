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
        void SetId(int value) const { WriteField<int>("id", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        float r() const { return ReadField<float>("r"); }
        void SetR(float value) const { WriteField<float>("r", value); }
        float g() const { return ReadField<float>("g"); }
        void SetG(float value) const { WriteField<float>("g", value); }
        float b() const { return ReadField<float>("b"); }
        void SetB(float value) const { WriteField<float>("b", value); }
        int capitalTile() const { return ReadField<int>("capitalTile"); }
        void SetCapitalTile(int value) const { WriteField<int>("capitalTile", value); }
        int ageTicks() const { return ReadField<int>("ageTicks"); }
        void SetAgeTicks(int value) const { WriteField<int>("ageTicks", value); }
        int foundingCulture() const { return ReadField<int>("foundingCulture"); }
        void SetFoundingCulture(int value) const { WriteField<int>("foundingCulture", value); }
        void* banner() const { return ReadField<void*>("banner"); }
        void SetBanner(void* value) const { WriteField<void*>("banner", value); }
        void* bannerPng() const { return ReadField<void*>("bannerPng"); }
        void SetBannerPng(void* value) const { WriteField<void*>("bannerPng", value); }
        float population() const { return ReadField<float>("population"); }
        void SetPopulation(float value) const { WriteField<float>("population", value); }
        float treasury() const { return ReadField<float>("treasury"); }
        void SetTreasury(float value) const { WriteField<float>("treasury", value); }
        float pendingTreasury() const { return ReadField<float>("pendingTreasury"); }
        void SetPendingTreasury(float value) const { WriteField<float>("pendingTreasury", value); }
        float taxRate() const { return ReadField<float>("taxRate"); }
        void SetTaxRate(float value) const { WriteField<float>("taxRate", value); }
        float tradeTax() const { return ReadField<float>("tradeTax"); }
        void SetTradeTax(float value) const { WriteField<float>("tradeTax", value); }
        float socialSpending() const { return ReadField<float>("socialSpending"); }
        void SetSocialSpending(float value) const { WriteField<float>("socialSpending", value); }
        float adminFunding() const { return ReadField<float>("adminFunding"); }
        void SetAdminFunding(float value) const { WriteField<float>("adminFunding", value); }
        float civIndustryBudget() const { return ReadField<float>("civIndustryBudget"); }
        void SetCivIndustryBudget(float value) const { WriteField<float>("civIndustryBudget", value); }
        float milIndustryBudget() const { return ReadField<float>("milIndustryBudget"); }
        void SetMilIndustryBudget(float value) const { WriteField<float>("milIndustryBudget", value); }
        float infrastructureBudget() const { return ReadField<float>("infrastructureBudget"); }
        void SetInfrastructureBudget(float value) const { WriteField<float>("infrastructureBudget", value); }
        float researchFunding() const { return ReadField<float>("researchFunding"); }
        void SetResearchFunding(float value) const { WriteField<float>("researchFunding", value); }
        float integrationFunding() const { return ReadField<float>("integrationFunding"); }
        void SetIntegrationFunding(float value) const { WriteField<float>("integrationFunding", value); }
        float econInvestment() const { return ReadField<float>("econInvestment"); }
        void SetEconInvestment(float value) const { WriteField<float>("econInvestment", value); }
        float econDevelopment() const { return ReadField<float>("econDevelopment"); }
        void SetEconDevelopment(float value) const { WriteField<float>("econDevelopment", value); }
        float manpowerFunding() const { return ReadField<float>("manpowerFunding"); }
        void SetManpowerFunding(float value) const { WriteField<float>("manpowerFunding", value); }
        int draftAge() const { return ReadField<int>("draftAge"); }
        void SetDraftAge(int value) const { WriteField<int>("draftAge", value); }
        float warWeariness() const { return ReadField<float>("warWeariness"); }
        void SetWarWeariness(float value) const { WriteField<float>("warWeariness", value); }
        float propaganda() const { return ReadField<float>("propaganda"); }
        void SetPropaganda(float value) const { WriteField<float>("propaganda", value); }
        bool propagandaLeverBit() const { return ReadField<bool>("propagandaLeverBit"); }
        void SetPropagandaLeverBit(bool value) const { WriteField<bool>("propagandaLeverBit", value); }
        float landSold() const { return ReadField<float>("landSold"); }
        void SetLandSold(float value) const { WriteField<float>("landSold", value); }
        int landSoldAgeTicks() const { return ReadField<int>("landSoldAgeTicks"); }
        void SetLandSoldAgeTicks(int value) const { WriteField<int>("landSoldAgeTicks", value); }
        float goldReceived() const { return ReadField<float>("goldReceived"); }
        void SetGoldReceived(float value) const { WriteField<float>("goldReceived", value); }
        int goldReceivedAgeTicks() const { return ReadField<int>("goldReceivedAgeTicks"); }
        void SetGoldReceivedAgeTicks(int value) const { WriteField<int>("goldReceivedAgeTicks", value); }
        float arms() const { return ReadField<float>("arms"); }
        void SetArms(float value) const { WriteField<float>("arms", value); }
        float armsFunding() const { return ReadField<float>("armsFunding"); }
        void SetArmsFunding(float value) const { WriteField<float>("armsFunding", value); }
        float melee() const { return ReadField<float>("melee"); }
        void SetMelee(float value) const { WriteField<float>("melee", value); }
        float armour() const { return ReadField<float>("armour"); }
        void SetArmour(float value) const { WriteField<float>("armour", value); }
        float vehicles() const { return ReadField<float>("vehicles"); }
        void SetVehicles(float value) const { WriteField<float>("vehicles", value); }
        float meleeFunding() const { return ReadField<float>("meleeFunding"); }
        void SetMeleeFunding(float value) const { WriteField<float>("meleeFunding", value); }
        float armourFunding() const { return ReadField<float>("armourFunding"); }
        void SetArmourFunding(float value) const { WriteField<float>("armourFunding", value); }
        float vehiclesFunding() const { return ReadField<float>("vehiclesFunding"); }
        void SetVehiclesFunding(float value) const { WriteField<float>("vehiclesFunding", value); }
        float artillery() const { return ReadField<float>("artillery"); }
        void SetArtillery(float value) const { WriteField<float>("artillery", value); }
        float artilleryFunding() const { return ReadField<float>("artilleryFunding"); }
        void SetArtilleryFunding(float value) const { WriteField<float>("artilleryFunding", value); }
        bool artilleryLeverBit() const { return ReadField<bool>("artilleryLeverBit"); }
        void SetArtilleryLeverBit(bool value) const { WriteField<bool>("artilleryLeverBit", value); }
        float manpower() const { return ReadField<float>("manpower"); }
        void SetManpower(float value) const { WriteField<float>("manpower", value); }
        void* poolWorks() const { return ReadField<void*>("poolWorks"); }
        void SetPoolWorks(void* value) const { WriteField<void*>("poolWorks", value); }
        bool worksAuto() const { return ReadField<bool>("worksAuto"); }
        void SetWorksAuto(bool value) const { WriteField<bool>("worksAuto", value); }
        void* weaponDesigns() const { return ReadField<void*>("weaponDesigns"); }
        void SetWeaponDesigns(void* value) const { WriteField<void*>("weaponDesigns", value); }
        void* unitTemplates() const { return ReadField<void*>("unitTemplates"); }
        void SetUnitTemplates(void* value) const { WriteField<void*>("unitTemplates", value); }
        int weaponNextId() const { return ReadField<int>("weaponNextId"); }
        void SetWeaponNextId(int value) const { WriteField<int>("weaponNextId", value); }
        int weaponNextTemplateId() const { return ReadField<int>("weaponNextTemplateId"); }
        void SetWeaponNextTemplateId(int value) const { WriteField<int>("weaponNextTemplateId", value); }
        void* currentTemplate() const { return ReadField<void*>("currentTemplate"); }
        void SetCurrentTemplate(void* value) const { WriteField<void*>("currentTemplate", value); }
        void* aiTemplateKeys() const { return ReadField<void*>("aiTemplateKeys"); }
        void SetAiTemplateKeys(void* value) const { WriteField<void*>("aiTemplateKeys", value); }
        void* productionLineIds() const { return ReadField<void*>("productionLineIds"); }
        void SetProductionLineIds(void* value) const { WriteField<void*>("productionLineIds", value); }
        void* productionLineShares() const { return ReadField<void*>("productionLineShares"); }
        void SetProductionLineShares(void* value) const { WriteField<void*>("productionLineShares", value); }
        void* productionLineFactories() const { return ReadField<void*>("productionLineFactories"); }
        void SetProductionLineFactories(void* value) const { WriteField<void*>("productionLineFactories", value); }
        void* productionLineRetoolUntil() const { return ReadField<void*>("productionLineRetoolUntil"); }
        void SetProductionLineRetoolUntil(void* value) const { WriteField<void*>("productionLineRetoolUntil", value); }
        void* productionLineRetoolLeft() const { return ReadField<void*>("productionLineRetoolLeft"); }
        void SetProductionLineRetoolLeft(void* value) const { WriteField<void*>("productionLineRetoolLeft", value); }
        void* stockDesignIds() const { return ReadField<void*>("stockDesignIds"); }
        void SetStockDesignIds(void* value) const { WriteField<void*>("stockDesignIds", value); }
        void* stockCounts() const { return ReadField<void*>("stockCounts"); }
        void SetStockCounts(void* value) const { WriteField<void*>("stockCounts", value); }
        void* capturedFrom() const { return ReadField<void*>("capturedFrom"); }
        void SetCapturedFrom(void* value) const { WriteField<void*>("capturedFrom", value); }
        void* capturedDesign() const { return ReadField<void*>("capturedDesign"); }
        void SetCapturedDesign(void* value) const { WriteField<void*>("capturedDesign", value); }
        void* capturedPool() const { return ReadField<void*>("capturedPool"); }
        void SetCapturedPool(void* value) const { WriteField<void*>("capturedPool", value); }
        void* capturedUnits() const { return ReadField<void*>("capturedUnits"); }
        void SetCapturedUnits(void* value) const { WriteField<void*>("capturedUnits", value); }
        void* capturedTick() const { return ReadField<void*>("capturedTick"); }
        void SetCapturedTick(void* value) const { WriteField<void*>("capturedTick", value); }
        void* capturedAgeTicks() const { return ReadField<void*>("capturedAgeTicks"); }
        void SetCapturedAgeTicks(void* value) const { WriteField<void*>("capturedAgeTicks", value); }
        void* capturedKind() const { return ReadField<void*>("capturedKind"); }
        void SetCapturedKind(void* value) const { WriteField<void*>("capturedKind", value); }
        bool productionV10() const { return ReadField<bool>("productionV10"); }
        void SetProductionV10(bool value) const { WriteField<bool>("productionV10", value); }
        int weaponRetoolUntilTick() const { return ReadField<int>("weaponRetoolUntilTick"); }
        void SetWeaponRetoolUntilTick(int value) const { WriteField<int>("weaponRetoolUntilTick", value); }
        int weaponRetoolLeft() const { return ReadField<int>("weaponRetoolLeft"); }
        void SetWeaponRetoolLeft(int value) const { WriteField<int>("weaponRetoolLeft", value); }
        bool openingKitIssued() const { return ReadField<bool>("openingKitIssued"); }
        void SetOpeningKitIssued(bool value) const { WriteField<bool>("openingKitIssued", value); }
        int fiscalAuto() const { return ReadField<int>("fiscalAuto"); }
        void SetFiscalAuto(int value) const { WriteField<int>("fiscalAuto", value); }
        bool fiscalAutoSeeded() const { return ReadField<bool>("fiscalAutoSeeded"); }
        void SetFiscalAutoSeeded(bool value) const { WriteField<bool>("fiscalAutoSeeded", value); }
        bool stateGovernors() const { return ReadField<bool>("stateGovernors"); }
        void SetStateGovernors(bool value) const { WriteField<bool>("stateGovernors", value); }
        bool poolLeverBits() const { return ReadField<bool>("poolLeverBits"); }
        void SetPoolLeverBits(bool value) const { WriteField<bool>("poolLeverBits", value); }
        bool assimilationPush() const { return ReadField<bool>("assimilationPush"); }
        void SetAssimilationPush(bool value) const { WriteField<bool>("assimilationPush", value); }
        bool borderGuard() const { return ReadField<bool>("borderGuard"); }
        void SetBorderGuard(bool value) const { WriteField<bool>("borderGuard", value); }
        int pushAxes() const { return ReadField<int>("pushAxes"); }
        void SetPushAxes(int value) const { WriteField<int>("pushAxes", value); }
        int guardAxes() const { return ReadField<int>("guardAxes"); }
        void SetGuardAxes(int value) const { WriteField<int>("guardAxes", value); }
        void* promoteTiles() const { return ReadField<void*>("promoteTiles"); }
        void SetPromoteTiles(void* value) const { WriteField<void*>("promoteTiles", value); }
        void* promoteAxes() const { return ReadField<void*>("promoteAxes"); }
        void SetPromoteAxes(void* value) const { WriteField<void*>("promoteAxes", value); }
        void* areaTiles() const { return ReadField<void*>("areaTiles"); }
        void SetAreaTiles(void* value) const { WriteField<void*>("areaTiles", value); }
        void* areaAxes() const { return ReadField<void*>("areaAxes"); }
        void SetAreaAxes(void* value) const { WriteField<void*>("areaAxes", value); }
        void* areaFileIds() const { return ReadField<void*>("areaFileIds"); }
        void SetAreaFileIds(void* value) const { WriteField<void*>("areaFileIds", value); }
        int zoneAxes() const { return ReadField<int>("zoneAxes"); }
        void SetZoneAxes(int value) const { WriteField<int>("zoneAxes", value); }
        void* purgeOrders() const { return ReadField<void*>("purgeOrders"); }
        void SetPurgeOrders(void* value) const { WriteField<void*>("purgeOrders", value); }
        int purgeCursorChunk() const { return ReadField<int>("purgeCursorChunk"); }
        void SetPurgeCursorChunk(int value) const { WriteField<int>("purgeCursorChunk", value); }
        int purgeCursorOffset() const { return ReadField<int>("purgeCursorOffset"); }
        void SetPurgeCursorOffset(int value) const { WriteField<int>("purgeCursorOffset", value); }
        int purgeCircuit() const { return ReadField<int>("purgeCircuit"); }
        void SetPurgeCircuit(int value) const { WriteField<int>("purgeCircuit", value); }
        void* treatyExpulsions() const { return ReadField<void*>("treatyExpulsions"); }
        void SetTreatyExpulsions(void* value) const { WriteField<void*>("treatyExpulsions", value); }
        int expelOrigin() const { return ReadField<int>("expelOrigin"); }
        void SetExpelOrigin(int value) const { WriteField<int>("expelOrigin", value); }
        int expelAxes() const { return ReadField<int>("expelAxes"); }
        void SetExpelAxes(int value) const { WriteField<int>("expelAxes", value); }
        int expelKind() const { return ReadField<int>("expelKind"); }
        void SetExpelKind(int value) const { WriteField<int>("expelKind", value); }
        int expelSinceTick() const { return ReadField<int>("expelSinceTick"); }
        void SetExpelSinceTick(int value) const { WriteField<int>("expelSinceTick", value); }
        int expelCursor() const { return ReadField<int>("expelCursor"); }
        void SetExpelCursor(int value) const { WriteField<int>("expelCursor", value); }
        float expelRemovedQuanta() const { return ReadField<float>("expelRemovedQuanta"); }
        void SetExpelRemovedQuanta(float value) const { WriteField<float>("expelRemovedQuanta", value); }
        float expelSweepQuanta() const { return ReadField<float>("expelSweepQuanta"); }
        void SetExpelSweepQuanta(float value) const { WriteField<float>("expelSweepQuanta", value); }
        float expelUnrest() const { return ReadField<float>("expelUnrest"); }
        void SetExpelUnrest(float value) const { WriteField<float>("expelUnrest", value); }
        float happiness() const { return ReadField<float>("happiness"); }
        void SetHappiness(float value) const { WriteField<float>("happiness", value); }
        float warDead() const { return ReadField<float>("warDead"); }
        void SetWarDead(float value) const { WriteField<float>("warDead", value); }
        float aggressionScore() const { return ReadField<float>("aggressionScore"); }
        void SetAggressionScore(float value) const { WriteField<float>("aggressionScore", value); }
        void* aggressionEvents() const { return ReadField<void*>("aggressionEvents"); }
        void SetAggressionEvents(void* value) const { WriteField<void*>("aggressionEvents", value); }
        float techScore() const { return ReadField<float>("techScore"); }
        void SetTechScore(float value) const { WriteField<float>("techScore", value); }
        int era() const { return ReadField<int>("era"); }
        void SetEra(int value) const { WriteField<int>("era", value); }
        int ideology() const { return ReadField<int>("ideology"); }
        void SetIdeology(int value) const { WriteField<int>("ideology", value); }
        int nextEdictTick() const { return ReadField<int>("nextEdictTick"); }
        void SetNextEdictTick(int value) const { WriteField<int>("nextEdictTick", value); }
        void* edictReadyTick() const { return ReadField<void*>("edictReadyTick"); }
        void SetEdictReadyTick(void* value) const { WriteField<void*>("edictReadyTick", value); }
        int reassertUntilTick() const { return ReadField<int>("reassertUntilTick"); }
        void SetReassertUntilTick(int value) const { WriteField<int>("reassertUntilTick", value); }
        void* lapseBlobs() const { return ReadField<void*>("lapseBlobs"); }
        void SetLapseBlobs(void* value) const { WriteField<void*>("lapseBlobs", value); }
        int humbleUntilTick() const { return ReadField<int>("humbleUntilTick"); }
        void SetHumbleUntilTick(int value) const { WriteField<int>("humbleUntilTick", value); }
        bool inControlCrisis() const { return ReadField<bool>("inControlCrisis"); }
        void SetInControlCrisis(bool value) const { WriteField<bool>("inControlCrisis", value); }
        int integrationEdictUntilTick() const { return ReadField<int>("integrationEdictUntilTick"); }
        void SetIntegrationEdictUntilTick(int value) const { WriteField<int>("integrationEdictUntilTick", value); }
        int nextClanCallTick() const { return ReadField<int>("nextClanCallTick"); }
        void SetNextClanCallTick(int value) const { WriteField<int>("nextClanCallTick", value); }
        int nextIdentityAdoptTick() const { return ReadField<int>("nextIdentityAdoptTick"); }
        void SetNextIdentityAdoptTick(int value) const { WriteField<int>("nextIdentityAdoptTick", value); }
        void* edictReadyLeft() const { return ReadField<void*>("edictReadyLeft"); }
        void SetEdictReadyLeft(void* value) const { WriteField<void*>("edictReadyLeft", value); }
        int reassertLeft() const { return ReadField<int>("reassertLeft"); }
        void SetReassertLeft(int value) const { WriteField<int>("reassertLeft", value); }
        int humbleLeft() const { return ReadField<int>("humbleLeft"); }
        void SetHumbleLeft(int value) const { WriteField<int>("humbleLeft", value); }
        int integrationEdictLeft() const { return ReadField<int>("integrationEdictLeft"); }
        void SetIntegrationEdictLeft(int value) const { WriteField<int>("integrationEdictLeft", value); }
        int nextClanCallLeft() const { return ReadField<int>("nextClanCallLeft"); }
        void SetNextClanCallLeft(int value) const { WriteField<int>("nextClanCallLeft", value); }
        int nextIdentityAdoptLeft() const { return ReadField<int>("nextIdentityAdoptLeft"); }
        void SetNextIdentityAdoptLeft(int value) const { WriteField<int>("nextIdentityAdoptLeft", value); }
        int nextWarDeclareLeft() const { return ReadField<int>("nextWarDeclareLeft"); }
        void SetNextWarDeclareLeft(int value) const { WriteField<int>("nextWarDeclareLeft", value); }
        void* stateIdentityFounder() const { return ReadField<void*>("stateIdentityFounder"); }
        void SetStateIdentityFounder(void* value) const { WriteField<void*>("stateIdentityFounder", value); }
        void* coOfficialFileId() const { return ReadField<void*>("coOfficialFileId"); }
        void SetCoOfficialFileId(void* value) const { WriteField<void*>("coOfficialFileId", value); }
        void* kindredFileId() const { return ReadField<void*>("kindredFileId"); }
        void SetKindredFileId(void* value) const { WriteField<void*>("kindredFileId", value); }
        void* stateIdentityFileId() const { return ReadField<void*>("stateIdentityFileId"); }
        void SetStateIdentityFileId(void* value) const { WriteField<void*>("stateIdentityFileId", value); }
        int economicIdeology() const { return ReadField<int>("economicIdeology"); }
        void SetEconomicIdeology(int value) const { WriteField<int>("economicIdeology", value); }
        int governmentForm() const { return ReadField<int>("governmentForm"); }
        void SetGovernmentForm(int value) const { WriteField<int>("governmentForm", value); }
        void* researched() const { return ReadField<void*>("researched"); }
        void SetResearched(void* value) const { WriteField<void*>("researched", value); }
        void* researchSlots() const { return ReadField<void*>("researchSlots"); }
        void SetResearchSlots(void* value) const { WriteField<void*>("researchSlots", value); }
        void* researchSlotProgress() const { return ReadField<void*>("researchSlotProgress"); }
        void SetResearchSlotProgress(void* value) const { WriteField<void*>("researchSlotProgress", value); }
        int researchAutoOff() const { return ReadField<int>("researchAutoOff"); }
        void SetResearchAutoOff(int value) const { WriteField<int>("researchAutoOff", value); }
        void* activeResearch() const { return ReadField<void*>("activeResearch"); }
        void SetActiveResearch(void* value) const { WriteField<void*>("activeResearch", value); }
        float researchProgress() const { return ReadField<float>("researchProgress"); }
        void SetResearchProgress(float value) const { WriteField<float>("researchProgress", value); }
        bool researchManual() const { return ReadField<bool>("researchManual"); }
        void SetResearchManual(bool value) const { WriteField<bool>("researchManual", value); }
        float coastalBias() const { return ReadField<float>("coastalBias"); }
        void SetCoastalBias(float value) const { WriteField<float>("coastalBias", value); }
        float expansionRate() const { return ReadField<float>("expansionRate"); }
        void SetExpansionRate(float value) const { WriteField<float>("expansionRate", value); }
        int maxLobes() const { return ReadField<int>("maxLobes"); }
        void SetMaxLobes(int value) const { WriteField<int>("maxLobes", value); }
        float lobeDriftRate() const { return ReadField<float>("lobeDriftRate"); }
        void SetLobeDriftRate(float value) const { WriteField<float>("lobeDriftRate", value); }
        void* leaderName() const { return ReadField<void*>("leaderName"); }
        void SetLeaderName(void* value) const { WriteField<void*>("leaderName", value); }
        float aggression() const { return ReadField<float>("aggression"); }
        void SetAggression(float value) const { WriteField<float>("aggression", value); }
        float expansionism() const { return ReadField<float>("expansionism"); }
        void SetExpansionism(float value) const { WriteField<float>("expansionism", value); }
        float sociability() const { return ReadField<float>("sociability"); }
        void SetSociability(float value) const { WriteField<float>("sociability", value); }
        float industriousness() const { return ReadField<float>("industriousness"); }
        void SetIndustriousness(float value) const { WriteField<float>("industriousness", value); }
        int leaderArchetype() const { return ReadField<int>("leaderArchetype"); }
        void SetLeaderArchetype(int value) const { WriteField<int>("leaderArchetype", value); }
        void* leaderGiven() const { return ReadField<void*>("leaderGiven"); }
        void SetLeaderGiven(void* value) const { WriteField<void*>("leaderGiven", value); }
        void* leaderHouse() const { return ReadField<void*>("leaderHouse"); }
        void SetLeaderHouse(void* value) const { WriteField<void*>("leaderHouse", value); }
        void* leaderEpithet() const { return ReadField<void*>("leaderEpithet"); }
        void SetLeaderEpithet(void* value) const { WriteField<void*>("leaderEpithet", value); }
        void* leaderBornEpithet() const { return ReadField<void*>("leaderBornEpithet"); }
        void SetLeaderBornEpithet(void* value) const { WriteField<void*>("leaderBornEpithet", value); }
        int leaderRegnal() const { return ReadField<int>("leaderRegnal"); }
        void SetLeaderRegnal(int value) const { WriteField<int>("leaderRegnal", value); }
        bool leaderFemale() const { return ReadField<bool>("leaderFemale"); }
        void SetLeaderFemale(bool value) const { WriteField<bool>("leaderFemale", value); }
        int leaderCulture() const { return ReadField<int>("leaderCulture"); }
        void SetLeaderCulture(int value) const { WriteField<int>("leaderCulture", value); }
        int leaderAccessionTick() const { return ReadField<int>("leaderAccessionTick"); }
        void SetLeaderAccessionTick(int value) const { WriteField<int>("leaderAccessionTick", value); }
        int leaderAccessionTiles() const { return ReadField<int>("leaderAccessionTiles"); }
        void SetLeaderAccessionTiles(int value) const { WriteField<int>("leaderAccessionTiles", value); }
        int leaderReignEndTick() const { return ReadField<int>("leaderReignEndTick"); }
        void SetLeaderReignEndTick(int value) const { WriteField<int>("leaderReignEndTick", value); }
        int leaderWarsDeclared() const { return ReadField<int>("leaderWarsDeclared"); }
        void SetLeaderWarsDeclared(int value) const { WriteField<int>("leaderWarsDeclared", value); }
        int64_t leaderTraits() const { return ReadField<int64_t>("leaderTraits"); }
        void SetLeaderTraits(int64_t value) const { WriteField<int64_t>("leaderTraits", value); }
        int leaderBornTick() const { return ReadField<int>("leaderBornTick"); }
        void SetLeaderBornTick(int value) const { WriteField<int>("leaderBornTick", value); }
        int leaderAccessionAgeTicks() const { return ReadField<int>("leaderAccessionAgeTicks"); }
        void SetLeaderAccessionAgeTicks(int value) const { WriteField<int>("leaderAccessionAgeTicks", value); }
        int leaderBornAgeTicks() const { return ReadField<int>("leaderBornAgeTicks"); }
        void SetLeaderBornAgeTicks(int value) const { WriteField<int>("leaderBornAgeTicks", value); }
        int leaderReignEndLeft() const { return ReadField<int>("leaderReignEndLeft"); }
        void SetLeaderReignEndLeft(int value) const { WriteField<int>("leaderReignEndLeft", value); }
        void* leaderTitleOverride() const { return ReadField<void*>("leaderTitleOverride"); }
        void SetLeaderTitleOverride(void* value) const { WriteField<void*>("leaderTitleOverride", value); }
        bool leaderPlayerDynasty() const { return ReadField<bool>("leaderPlayerDynasty"); }
        void SetLeaderPlayerDynasty(bool value) const { WriteField<bool>("leaderPlayerDynasty", value); }
        int overlordId() const { return ReadField<int>("overlordId"); }
        void SetOverlordId(int value) const { WriteField<int>("overlordId", value); }
        float tributeRate() const { return ReadField<float>("tributeRate"); }
        void SetTributeRate(float value) const { WriteField<float>("tributeRate", value); }
        bool vassalMayDeclareWar() const { return ReadField<bool>("vassalMayDeclareWar"); }
        void SetVassalMayDeclareWar(bool value) const { WriteField<bool>("vassalMayDeclareWar", value); }
        bool vassalMayMakeAlliances() const { return ReadField<bool>("vassalMayMakeAlliances"); }
        void SetVassalMayMakeAlliances(bool value) const { WriteField<bool>("vassalMayMakeAlliances", value); }
        bool vassalMayFoundCities() const { return ReadField<bool>("vassalMayFoundCities"); }
        void SetVassalMayFoundCities(bool value) const { WriteField<bool>("vassalMayFoundCities", value); }
        bool vassalGrantsMarchRights() const { return ReadField<bool>("vassalGrantsMarchRights"); }
        void SetVassalGrantsMarchRights(bool value) const { WriteField<bool>("vassalGrantsMarchRights", value); }
        bool preVassalColorSaved() const { return ReadField<bool>("preVassalColorSaved"); }
        void SetPreVassalColorSaved(bool value) const { WriteField<bool>("preVassalColorSaved", value); }
        bool preUnionColorSaved() const { return ReadField<bool>("preUnionColorSaved"); }
        void SetPreUnionColorSaved(bool value) const { WriteField<bool>("preUnionColorSaved", value); }
        float preVassalR() const { return ReadField<float>("preVassalR"); }
        void SetPreVassalR(float value) const { WriteField<float>("preVassalR", value); }
        float preVassalG() const { return ReadField<float>("preVassalG"); }
        void SetPreVassalG(float value) const { WriteField<float>("preVassalG", value); }
        float preVassalB() const { return ReadField<float>("preVassalB"); }
        void SetPreVassalB(float value) const { WriteField<float>("preVassalB", value); }
        float preUnionR() const { return ReadField<float>("preUnionR"); }
        void SetPreUnionR(float value) const { WriteField<float>("preUnionR", value); }
        float preUnionG() const { return ReadField<float>("preUnionG"); }
        void SetPreUnionG(float value) const { WriteField<float>("preUnionG", value); }
        float preUnionB() const { return ReadField<float>("preUnionB"); }
        void SetPreUnionB(float value) const { WriteField<float>("preUnionB", value); }
        void* preUnionName() const { return ReadField<void*>("preUnionName"); }
        void SetPreUnionName(void* value) const { WriteField<void*>("preUnionName", value); }
        bool identityLocked() const { return ReadField<bool>("identityLocked"); }
        void SetIdentityLocked(bool value) const { WriteField<bool>("identityLocked", value); }
        int unionJoinedAgeTicks() const { return ReadField<int>("unionJoinedAgeTicks"); }
        void SetUnionJoinedAgeTicks(int value) const { WriteField<int>("unionJoinedAgeTicks", value); }
        int unionSubsidyLeft() const { return ReadField<int>("unionSubsidyLeft"); }
        void SetUnionSubsidyLeft(int value) const { WriteField<int>("unionSubsidyLeft", value); }
        int unionAutonomyLeft() const { return ReadField<int>("unionAutonomyLeft"); }
        void SetUnionAutonomyLeft(int value) const { WriteField<int>("unionAutonomyLeft", value); }
        int unionShieldLeft() const { return ReadField<int>("unionShieldLeft"); }
        void SetUnionShieldLeft(int value) const { WriteField<int>("unionShieldLeft", value); }
    };
}
