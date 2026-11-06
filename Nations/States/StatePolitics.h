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
        bool GovernorsRun(void* n, void* it) const { void* args[] = { n, it }; return CallValue<bool>("GovernorsRun", args, 2); }
        void* Get(int stateId) const { void* args[] = { &stateId }; return Call("Get", args, 1); }
        void NameSweepNow() const { Call("NameSweepNow", nullptr, 0); }
        int FormationsOf(int nationId, void* dst) const { void* args[] = { &nationId, dst }; return CallValue<int>("FormationsOf", args, 2); }
        void* UnorganizedOf(int nationId) const { void* args[] = { &nationId }; return Call("UnorganizedOf", args, 1); }
        int FormationLimit(void* n, void* cfg) const { void* args[] = { n, cfg }; return CallValue<int>("FormationLimit", args, 2); }
        float FormYears(int tiles) const { void* args[] = { &tiles }; return CallValue<float>("FormYears", args, 1); }
        float FormUpfront(int tiles) const { void* args[] = { &tiles }; return CallValue<float>("FormUpfront", args, 1); }
        float FormPerTick(int tiles) const { void* args[] = { &tiles }; return CallValue<float>("FormPerTick", args, 1); }
        bool BeginFormation(int nationId, int seedTile, const char* name, const char*& reason) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &nationId, &seedTile, managed_2, &reason }; return CallValue<bool>("BeginFormation", args, 4); }
        bool BeginDrawnFormation(int nationId, void* strokeTiles, const char* name, const char*& reason) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &nationId, strokeTiles, managed_2, &reason }; return CallValue<bool>("BeginDrawnFormation", args, 4); }
        bool CancelFormation(int nationId, int seedTile) const { void* args[] = { &nationId, &seedTile }; return CallValue<bool>("CancelFormation", args, 2); }
        void LoadFormation(int nationId, int seedTile, int tiles, float progress, int startedTick, const char* name, bool drawn, void* stroke) const { void* managed_5 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &nationId, &seedTile, &tiles, &progress, &startedTick, managed_5, &drawn, stroke }; Call("LoadFormation", args, 8); }
        int UnorganizedRunTiles(int nationId, int tileIndex) const { void* args[] = { &nationId, &tileIndex }; return CallValue<int>("UnorganizedRunTiles", args, 2); }
        void* FormationOn(int nationId, int tileIndex) const { void* args[] = { &nationId, &tileIndex }; return Call("FormationOn", args, 2); }
        bool DescribeRising(int stateId, const char*& name, int& people) const { void* args[] = { &stateId, &name, &people }; return CallValue<bool>("DescribeRising", args, 3); }
        void OnStateRose(int stateId) const { void* args[] = { &stateId }; Call("OnStateRose", args, 1); }
        bool ConcedeToState(int stateId) const { void* args[] = { &stateId }; return CallValue<bool>("ConcedeToState", args, 1); }
        bool CanLoosen(void* p, const char*& reason) const { void* args[] = { p, &reason }; return CallValue<bool>("CanLoosen", args, 2); }
        void* TightenBlockReason(void* p, void* it) const { void* args[] = { p, it }; return Call("TightenBlockReason", args, 2); }
        float IntegrationFundingOf(void* n, void* it) const { void* args[] = { n, it }; return CallValue<float>("IntegrationFundingOf", args, 2); }
        int UnsettledTilesOf(int nationId, int& integratingTiles) const { void* args[] = { &nationId, &integratingTiles }; return CallValue<int>("UnsettledTilesOf", args, 2); }
        int UnsettledStatesOf(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("UnsettledStatesOf", args, 1); }
        float IntegrationFullCostPerTick(int nationId) const { void* args[] = { &nationId }; return CallValue<float>("IntegrationFullCostPerTick", args, 1); }
        void SetIntegrationFunding(int nationId, float funding) const { void* args[] = { &nationId, &funding }; Call("SetIntegrationFunding", args, 2); }
        void* TitleOf(void* p, void* s) const { void* args[] = { p, s }; return Call("TitleOf", args, 2); }
        void* TierWord(int tier) const { void* args[] = { &tier }; return CallStatic("TierWord", args, 1); }
        void* WantWord(int w) const { void* args[] = { &w }; return CallStatic("WantWord", args, 1); }
        bool PlayerLoosen(int stateId, const char*& reason) const { void* args[] = { &stateId, &reason }; return CallValue<bool>("PlayerLoosen", args, 2); }
        bool PlayerSetTightening(int stateId, bool on, const char*& reason) const { void* args[] = { &stateId, &on, &reason }; return CallValue<bool>("PlayerSetTightening", args, 3); }
        float TightenCostPerTick(void* p) const { void* args[] = { p }; return CallValue<float>("TightenCostPerTick", args, 1); }
        float IntegrateCostPerTick(void* p) const { void* args[] = { p }; return CallValue<float>("IntegrateCostPerTick", args, 1); }
        bool PlayerSetIntegrating(int stateId, bool on, const char*& reason) const { void* args[] = { &stateId, &on, &reason }; return CallValue<bool>("PlayerSetIntegrating", args, 3); }
        int SetIntegratingAll(int nationId, bool on) const { void* args[] = { &nationId, &on }; return CallValue<int>("SetIntegratingAll", args, 2); }
        int UnsettledOf(int nationId, void* dst) const { void* args[] = { &nationId, dst }; return CallValue<int>("UnsettledOf", args, 2); }
        int HomeRulePeopleAt(int stateId) const { void* args[] = { &stateId }; return CallStaticValue<int>("HomeRulePeopleAt", args, 1); }
        int DrainHomeRuleDirty(void* dst) const { void* args[] = { dst }; return CallStaticValue<int>("DrainHomeRuleDirty", args, 1); }
        void RemapHomeRulePeople(void* map) const { void* args[] = { map }; Call("RemapHomeRulePeople", args, 1); }
        bool PlayerGrantHomeRule(int stateId, const char*& reason) const { void* args[] = { &stateId, &reason }; return CallValue<bool>("PlayerGrantHomeRule", args, 2); }
        bool RevokeHomeRule(int stateId, const char*& reason) const { void* args[] = { &stateId, &reason }; return CallValue<bool>("RevokeHomeRule", args, 2); }
        bool PlayerRevokeHomeRule(int stateId, const char*& reason) const { void* args[] = { &stateId, &reason }; return CallValue<bool>("PlayerRevokeHomeRule", args, 2); }
        bool GrantHomeRule(int stateId, int people) const { void* args[] = { &stateId, &people }; return CallValue<bool>("GrantHomeRule", args, 2); }
        float EffectiveAmbition(void* p) const { void* args[] = { p }; return CallValue<float>("EffectiveAmbition", args, 1); }
        float EffectiveAmbitionOf(float ambition, bool indulged, void* cfg) const { void* args[] = { &ambition, &indulged, cfg }; return CallStaticValue<float>("EffectiveAmbitionOf", args, 3); }
        float ReplaceLordCost(void* p) const { void* args[] = { p }; return CallValue<float>("ReplaceLordCost", args, 1); }
        float IndulgeLordCost(void* p) const { void* args[] = { p }; return CallValue<float>("IndulgeLordCost", args, 1); }
        bool PlayerReplaceLord(int stateId, const char*& reason) const { void* args[] = { &stateId, &reason }; return CallValue<bool>("PlayerReplaceLord", args, 2); }
        bool PlayerIndulgeLord(int stateId, const char*& reason) const { void* args[] = { &stateId, &reason }; return CallValue<bool>("PlayerIndulgeLord", args, 2); }
        void NoteLevyStrain(int stateId, float amount) const { void* args[] = { &stateId, &amount }; Call("NoteLevyStrain", args, 2); }
        void AdjustLoyaltyOnce(int stateId, float delta) const { void* args[] = { &stateId, &delta }; Call("AdjustLoyaltyOnce", args, 2); }
        int ApplyAmnesty(int nationId, float bonus) const { void* args[] = { &nationId, &bonus }; return CallValue<int>("ApplyAmnesty", args, 2); }
        float DirectRuleCost(int nationId) const { void* args[] = { &nationId }; return CallValue<float>("DirectRuleCost", args, 1); }
        bool PlayerImposeDirectRule(int stateId, const char*& reason) const { void* args[] = { &stateId, &reason }; return CallValue<bool>("PlayerImposeDirectRule", args, 2); }
        bool PlayerSellCharter(int stateId, const char*& reason) const { void* args[] = { &stateId, &reason }; return CallValue<bool>("PlayerSellCharter", args, 2); }
        float LapsedTilesOf(void* p) const { void* args[] = { p }; return CallStaticValue<float>("LapsedTilesOf", args, 1); }
        float RestoreOrderCost(void* p) const { void* args[] = { p }; return CallValue<float>("RestoreOrderCost", args, 1); }
        void* RestoreOrderBlockReason(void* p) const { void* args[] = { p }; return Call("RestoreOrderBlockReason", args, 1); }
        bool TryRestoreOrder(int stateId, const char*& reason) const { void* args[] = { &stateId, &reason }; return CallValue<bool>("TryRestoreOrder", args, 2); }
        bool PlayerRestoreOrder(int stateId, const char*& reason) const { void* args[] = { &stateId, &reason }; return CallValue<bool>("PlayerRestoreOrder", args, 2); }
        int WorstLapsedState(int nationId, float minShare) const { void* args[] = { &nationId, &minShare }; return CallValue<int>("WorstLapsedState", args, 2); }
        int CountFiefs(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("CountFiefs", args, 1); }
        int ApplyClanLevy(int nationId, float dip) const { void* args[] = { &nationId, &dip }; return CallValue<int>("ApplyClanLevy", args, 2); }
        bool PlayerRenameState(int stateId, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &stateId, managed_1 }; return CallValue<bool>("PlayerRenameState", args, 2); }
        void* AtTile(int tileIndex, void* region) const { void* args[] = { &tileIndex, &region }; return Call("AtTile", args, 2); }
        void Touch(int stateId) const { void* args[] = { &stateId }; Call("Touch", args, 1); }
        float RecruitCostMulAt(int tileIndex) const { void* args[] = { &tileIndex }; return CallValue<float>("RecruitCostMulAt", args, 1); }
        float RecruitTimeMulAt(int tileIndex) const { void* args[] = { &tileIndex }; return CallValue<float>("RecruitTimeMulAt", args, 1); }
        float RecruitMulOf(void* p) const { void* args[] = { p }; return CallValue<float>("RecruitMulOf", args, 1); }
        void Restore(int stateId, const char* name, bool pinned, int ownerId, int tier, bool unified, float loyalty, bool tightening, float tightenProgress, int heldSinceTick, const char* lordGiven, const char* lordHouse, bool lordFemale, float lordAmbition, int lordSeated, int claimantId = -1, int claimStage = 0, int claimStageTick = 0, int claimOffers = 0, bool charter = false, int lordIndulgedUntilTick = 0, int sealUntilTick = 0, int nextDirectRuleTick = 0, bool homeRule = false, int homeRulePeople = -1, int homeRuleSinceTick = 0, float levyStrain = 0f, int orderUntilTick = 0, int orderNationId = -1, int standing = -1, float settled = -1f, bool integrating = false) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* managed_10 = Api() && Api()->NewString ? Api()->NewString(lordGiven ? lordGiven : "") : nullptr; void* managed_11 = Api() && Api()->NewString ? Api()->NewString(lordHouse ? lordHouse : "") : nullptr; void* args[] = { &stateId, managed_1, &pinned, &ownerId, &tier, &unified, &loyalty, &tightening, &tightenProgress, &heldSinceTick, managed_10, managed_11, &lordFemale, &lordAmbition, &lordSeated, &claimantId, &claimStage, &claimStageTick, &claimOffers, &charter, &lordIndulgedUntilTick, &sealUntilTick, &nextDirectRuleTick, &homeRule, &homeRulePeople, &homeRuleSinceTick, &levyStrain, &orderUntilTick, &orderNationId, &standing, &settled, &integrating }; Call("Restore", args, 32); }
        void RecountHoldings() const { Call("RecountHoldings", nullptr, 0); }
        void Clear() const { Call("Clear", nullptr, 0); }
    };
}
