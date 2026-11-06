#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::States
{
    class StatePolitics : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StatePolitics(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.States", "StatePolitics") {}
    public:
        bool GovernorsRun(void* n, void* it) const { void* __callArgs[] = { n, it }; return CallValue<bool>("GovernorsRun", __callArgs, 2); }
        void* Get(int stateId) const { void* __callArgs[] = { &stateId }; return Call("Get", __callArgs, 1); }
        void NameSweepNow() const { Call("NameSweepNow", nullptr, 0); }
        int FormationsOf(int nationId, void* dst) const { void* __callArgs[] = { &nationId, dst }; return CallValue<int>("FormationsOf", __callArgs, 2); }
        void* UnorganizedOf(int nationId) const { void* __callArgs[] = { &nationId }; return Call("UnorganizedOf", __callArgs, 1); }
        int FormationLimit(void* n, void* cfg) const { void* __callArgs[] = { n, cfg }; return CallValue<int>("FormationLimit", __callArgs, 2); }
        float FormYears(int tiles) const { void* __callArgs[] = { &tiles }; return CallValue<float>("FormYears", __callArgs, 1); }
        float FormUpfront(int tiles) const { void* __callArgs[] = { &tiles }; return CallValue<float>("FormUpfront", __callArgs, 1); }
        float FormPerTick(int tiles) const { void* __callArgs[] = { &tiles }; return CallValue<float>("FormPerTick", __callArgs, 1); }
        bool BeginFormation(int nationId, int seedTile, const char* name, const char*& reason) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &nationId, &seedTile, managed_2, &reason }; return CallValue<bool>("BeginFormation", __callArgs, 4); }
        bool BeginDrawnFormation(int nationId, void* strokeTiles, const char* name, const char*& reason) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &nationId, strokeTiles, managed_2, &reason }; return CallValue<bool>("BeginDrawnFormation", __callArgs, 4); }
        bool CancelFormation(int nationId, int seedTile) const { void* __callArgs[] = { &nationId, &seedTile }; return CallValue<bool>("CancelFormation", __callArgs, 2); }
        void LoadFormation(int nationId, int seedTile, int tiles, float progress, int startedTick, const char* name, bool drawn, void* stroke) const { void* managed_5 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &nationId, &seedTile, &tiles, &progress, &startedTick, managed_5, &drawn, stroke }; Call("LoadFormation", __callArgs, 8); }
        int UnorganizedRunTiles(int nationId, int tileIndex) const { void* __callArgs[] = { &nationId, &tileIndex }; return CallValue<int>("UnorganizedRunTiles", __callArgs, 2); }
        void* FormationOn(int nationId, int tileIndex) const { void* __callArgs[] = { &nationId, &tileIndex }; return Call("FormationOn", __callArgs, 2); }
        bool DescribeRising(int stateId, const char*& name, int& people) const { void* __callArgs[] = { &stateId, &name, &people }; return CallValue<bool>("DescribeRising", __callArgs, 3); }
        void OnStateRose(int stateId) const { void* __callArgs[] = { &stateId }; Call("OnStateRose", __callArgs, 1); }
        bool ConcedeToState(int stateId) const { void* __callArgs[] = { &stateId }; return CallValue<bool>("ConcedeToState", __callArgs, 1); }
        bool CanLoosen(void* p, const char*& reason) const { void* __callArgs[] = { p, &reason }; return CallValue<bool>("CanLoosen", __callArgs, 2); }
        void* TightenBlockReason(void* p, void* it) const { void* __callArgs[] = { p, it }; return Call("TightenBlockReason", __callArgs, 2); }
        float IntegrationFundingOf(void* n, void* it) const { void* __callArgs[] = { n, it }; return CallValue<float>("IntegrationFundingOf", __callArgs, 2); }
        int UnsettledTilesOf(int nationId, int& integratingTiles) const { void* __callArgs[] = { &nationId, &integratingTiles }; return CallValue<int>("UnsettledTilesOf", __callArgs, 2); }
        int UnsettledStatesOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("UnsettledStatesOf", __callArgs, 1); }
        float IntegrationFullCostPerTick(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<float>("IntegrationFullCostPerTick", __callArgs, 1); }
        void SetIntegrationFunding(int nationId, float funding) const { void* __callArgs[] = { &nationId, &funding }; Call("SetIntegrationFunding", __callArgs, 2); }
        void* TitleOf(void* p, void* s) const { void* __callArgs[] = { p, s }; return Call("TitleOf", __callArgs, 2); }
        void* TierWord(int tier) const { void* __callArgs[] = { &tier }; return CallStatic("TierWord", __callArgs, 1); }
        void* WantWord(int w) const { void* __callArgs[] = { &w }; return CallStatic("WantWord", __callArgs, 1); }
        bool PlayerLoosen(int stateId, const char*& reason) const { void* __callArgs[] = { &stateId, &reason }; return CallValue<bool>("PlayerLoosen", __callArgs, 2); }
        bool PlayerSetTightening(int stateId, bool on, const char*& reason) const { void* __callArgs[] = { &stateId, &on, &reason }; return CallValue<bool>("PlayerSetTightening", __callArgs, 3); }
        float TightenCostPerTick(void* p) const { void* __callArgs[] = { p }; return CallValue<float>("TightenCostPerTick", __callArgs, 1); }
        float IntegrateCostPerTick(void* p) const { void* __callArgs[] = { p }; return CallValue<float>("IntegrateCostPerTick", __callArgs, 1); }
        bool PlayerSetIntegrating(int stateId, bool on, const char*& reason) const { void* __callArgs[] = { &stateId, &on, &reason }; return CallValue<bool>("PlayerSetIntegrating", __callArgs, 3); }
        int SetIntegratingAll(int nationId, bool on) const { void* __callArgs[] = { &nationId, &on }; return CallValue<int>("SetIntegratingAll", __callArgs, 2); }
        int UnsettledOf(int nationId, void* dst) const { void* __callArgs[] = { &nationId, dst }; return CallValue<int>("UnsettledOf", __callArgs, 2); }
        int HomeRulePeopleAt(int stateId) const { void* __callArgs[] = { &stateId }; return CallStaticValue<int>("HomeRulePeopleAt", __callArgs, 1); }
        int DrainHomeRuleDirty(void* dst) const { void* __callArgs[] = { dst }; return CallStaticValue<int>("DrainHomeRuleDirty", __callArgs, 1); }
        void RemapHomeRulePeople(void* map) const { void* __callArgs[] = { map }; Call("RemapHomeRulePeople", __callArgs, 1); }
        bool PlayerGrantHomeRule(int stateId, const char*& reason) const { void* __callArgs[] = { &stateId, &reason }; return CallValue<bool>("PlayerGrantHomeRule", __callArgs, 2); }
        bool RevokeHomeRule(int stateId, const char*& reason) const { void* __callArgs[] = { &stateId, &reason }; return CallValue<bool>("RevokeHomeRule", __callArgs, 2); }
        bool PlayerRevokeHomeRule(int stateId, const char*& reason) const { void* __callArgs[] = { &stateId, &reason }; return CallValue<bool>("PlayerRevokeHomeRule", __callArgs, 2); }
        bool GrantHomeRule(int stateId, int people) const { void* __callArgs[] = { &stateId, &people }; return CallValue<bool>("GrantHomeRule", __callArgs, 2); }
        float EffectiveAmbition(void* p) const { void* __callArgs[] = { p }; return CallValue<float>("EffectiveAmbition", __callArgs, 1); }
        float EffectiveAmbitionOf(float ambition, bool indulged, void* cfg) const { void* __callArgs[] = { &ambition, &indulged, cfg }; return CallStaticValue<float>("EffectiveAmbitionOf", __callArgs, 3); }
        float ReplaceLordCost(void* p) const { void* __callArgs[] = { p }; return CallValue<float>("ReplaceLordCost", __callArgs, 1); }
        float IndulgeLordCost(void* p) const { void* __callArgs[] = { p }; return CallValue<float>("IndulgeLordCost", __callArgs, 1); }
        bool PlayerReplaceLord(int stateId, const char*& reason) const { void* __callArgs[] = { &stateId, &reason }; return CallValue<bool>("PlayerReplaceLord", __callArgs, 2); }
        bool PlayerIndulgeLord(int stateId, const char*& reason) const { void* __callArgs[] = { &stateId, &reason }; return CallValue<bool>("PlayerIndulgeLord", __callArgs, 2); }
        void NoteLevyStrain(int stateId, float amount) const { void* __callArgs[] = { &stateId, &amount }; Call("NoteLevyStrain", __callArgs, 2); }
        void AdjustLoyaltyOnce(int stateId, float delta) const { void* __callArgs[] = { &stateId, &delta }; Call("AdjustLoyaltyOnce", __callArgs, 2); }
        int ApplyAmnesty(int nationId, float bonus) const { void* __callArgs[] = { &nationId, &bonus }; return CallValue<int>("ApplyAmnesty", __callArgs, 2); }
        float DirectRuleCost(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<float>("DirectRuleCost", __callArgs, 1); }
        bool PlayerImposeDirectRule(int stateId, const char*& reason) const { void* __callArgs[] = { &stateId, &reason }; return CallValue<bool>("PlayerImposeDirectRule", __callArgs, 2); }
        bool PlayerSellCharter(int stateId, const char*& reason) const { void* __callArgs[] = { &stateId, &reason }; return CallValue<bool>("PlayerSellCharter", __callArgs, 2); }
        float LapsedTilesOf(void* p) const { void* __callArgs[] = { p }; return CallStaticValue<float>("LapsedTilesOf", __callArgs, 1); }
        float RestoreOrderCost(void* p) const { void* __callArgs[] = { p }; return CallValue<float>("RestoreOrderCost", __callArgs, 1); }
        void* RestoreOrderBlockReason(void* p) const { void* __callArgs[] = { p }; return Call("RestoreOrderBlockReason", __callArgs, 1); }
        bool TryRestoreOrder(int stateId, const char*& reason) const { void* __callArgs[] = { &stateId, &reason }; return CallValue<bool>("TryRestoreOrder", __callArgs, 2); }
        bool PlayerRestoreOrder(int stateId, const char*& reason) const { void* __callArgs[] = { &stateId, &reason }; return CallValue<bool>("PlayerRestoreOrder", __callArgs, 2); }
        int WorstLapsedState(int nationId, float minShare) const { void* __callArgs[] = { &nationId, &minShare }; return CallValue<int>("WorstLapsedState", __callArgs, 2); }
        int CountFiefs(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("CountFiefs", __callArgs, 1); }
        int ApplyClanLevy(int nationId, float dip) const { void* __callArgs[] = { &nationId, &dip }; return CallValue<int>("ApplyClanLevy", __callArgs, 2); }
        bool PlayerRenameState(int stateId, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &stateId, managed_1 }; return CallValue<bool>("PlayerRenameState", __callArgs, 2); }
        void* AtTile(int tileIndex, void* region) const { void* __callArgs[] = { &tileIndex, &region }; return Call("AtTile", __callArgs, 2); }
        void Touch(int stateId) const { void* __callArgs[] = { &stateId }; Call("Touch", __callArgs, 1); }
        float RecruitCostMulAt(int tileIndex) const { void* __callArgs[] = { &tileIndex }; return CallValue<float>("RecruitCostMulAt", __callArgs, 1); }
        float RecruitTimeMulAt(int tileIndex) const { void* __callArgs[] = { &tileIndex }; return CallValue<float>("RecruitTimeMulAt", __callArgs, 1); }
        float RecruitMulOf(void* p) const { void* __callArgs[] = { p }; return CallValue<float>("RecruitMulOf", __callArgs, 1); }
        void Restore(int stateId, const char* name, bool pinned, int ownerId, int tier, bool unified, float loyalty, bool tightening, float tightenProgress, int heldSinceTick, const char* lordGiven, const char* lordHouse, bool lordFemale, float lordAmbition, int lordSeated, int claimantId = -1, int claimStage = 0, int claimStageTick = 0, int claimOffers = 0, bool charter = false, int lordIndulgedUntilTick = 0, int sealUntilTick = 0, int nextDirectRuleTick = 0, bool homeRule = false, int homeRulePeople = -1, int homeRuleSinceTick = 0, float levyStrain = 0.0f, int orderUntilTick = 0, int orderNationId = -1, int standing = -1, float settled = -1.0f, bool integrating = false) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* managed_10 = Api() && Api()->NewString ? Api()->NewString(lordGiven ? lordGiven : "") : nullptr; void* managed_11 = Api() && Api()->NewString ? Api()->NewString(lordHouse ? lordHouse : "") : nullptr; void* __callArgs[] = { &stateId, managed_1, &pinned, &ownerId, &tier, &unified, &loyalty, &tightening, &tightenProgress, &heldSinceTick, managed_10, managed_11, &lordFemale, &lordAmbition, &lordSeated, &claimantId, &claimStage, &claimStageTick, &claimOffers, &charter, &lordIndulgedUntilTick, &sealUntilTick, &nextDirectRuleTick, &homeRule, &homeRulePeople, &homeRuleSinceTick, &levyStrain, &orderUntilTick, &orderNationId, &standing, &settled, &integrating }; Call("Restore", __callArgs, 32); }
        void RecountHoldings() const { Call("RecountHoldings", nullptr, 0); }
        void Clear() const { Call("Clear", nullptr, 0); }
    };
}
