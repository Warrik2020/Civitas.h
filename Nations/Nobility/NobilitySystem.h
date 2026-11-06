#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Nobility
{
    class NobilitySystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NobilitySystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Nobility", "NobilitySystem") {}
    public:
        void* GrantBlockReason(int nationId, int deed, int houseId) const { void* __callArgs[] = { &nationId, &deed, &houseId }; return Call("GrantBlockReason", __callArgs, 3); }
        bool Grant(int nationId, int deed, int houseId, const char*& reason) const { void* __callArgs[] = { &nationId, &deed, &houseId, &reason }; return CallValue<bool>("Grant", __callArgs, 4); }
        int MaxHouses(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("MaxHouses", __callArgs, 1); }
        void* RaiseBlockReason(int nationId, int deed) const { void* __callArgs[] = { &nationId, &deed }; return Call("RaiseBlockReason", __callArgs, 2); }
        bool RaiseHouse(int nationId, int deed, const char*& reason, void* house) const { void* __callArgs[] = { &nationId, &deed, &reason, &house }; return CallValue<bool>("RaiseHouse", __callArgs, 4); }
        void* RevokeBlockReason(int nationId, int deed) const { void* __callArgs[] = { &nationId, &deed }; return Call("RevokeBlockReason", __callArgs, 2); }
        bool Revoke(int nationId, int deed, const char*& reason) const { void* __callArgs[] = { &nationId, &deed, &reason }; return CallValue<bool>("Revoke", __callArgs, 3); }
        float GiftCost(void* h) const { void* __callArgs[] = { h }; return CallValue<float>("GiftCost", __callArgs, 1); }
        void* GiftBlockReason(int nationId, int houseId) const { void* __callArgs[] = { &nationId, &houseId }; return Call("GiftBlockReason", __callArgs, 2); }
        bool Gift(int nationId, int houseId, const char*& reason) const { void* __callArgs[] = { &nationId, &houseId, &reason }; return CallValue<bool>("Gift", __callArgs, 3); }
        void* HonourBlockReason(int nationId, int houseId) const { void* __callArgs[] = { &nationId, &houseId }; return Call("HonourBlockReason", __callArgs, 2); }
        bool Honour(int nationId, int houseId, const char*& reason) const { void* __callArgs[] = { &nationId, &houseId, &reason }; return CallValue<bool>("Honour", __callArgs, 3); }
        void OpenDemands(int nationId, void* dst) const { void* __callArgs[] = { &nationId, dst }; Call("OpenDemands", __callArgs, 2); }
        void* NearestCrownBarony(void* h, int nationId) const { void* __callArgs[] = { h, &nationId }; return Call("NearestCrownBarony", __callArgs, 2); }
        void* DemandBlockReason(void* h, void* it) const { void* __callArgs[] = { h, it }; return Call("DemandBlockReason", __callArgs, 2); }
        bool AnswerDemand(int houseId, bool accept, const char*& reason) const { void* __callArgs[] = { &houseId, &accept, &reason }; return CallValue<bool>("AnswerDemand", __callArgs, 3); }
        void* DemandWord(void* h) const { void* __callArgs[] = { h }; return Call("DemandWord", __callArgs, 1); }
        void* DemandText(void* h) const { void* __callArgs[] = { h }; return Call("DemandText", __callArgs, 1); }
        bool Rise(void* n, void* it, void* h, void* cfg) const { void* __callArgs[] = { n, it, h, cfg }; return CallValue<bool>("Rise", __callArgs, 4); }
        void CollectHouseTiles(void* h, int nationId, void* dst) const { void* __callArgs[] = { h, &nationId, dst }; Call("CollectHouseTiles", __callArgs, 3); }
        void* GetHouse(int id) const { void* __callArgs[] = { &id }; return Call("GetHouse", __callArgs, 1); }
        void ResetAll() const { Call("ResetAll", nullptr, 0); }
        bool Live(void* it) const { void* __callArgs[] = { it }; return CallValue<bool>("Live", __callArgs, 1); }
        bool Live(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<bool>("Live", __callArgs, 1); }
        void* Realm(int nationId) const { void* __callArgs[] = { &nationId }; return Call("Realm", __callArgs, 1); }
        void* RealmOrNull(int nationId) const { void* __callArgs[] = { &nationId }; return Call("RealmOrNull", __callArgs, 1); }
        void* HolderOf(int deed) const { void* __callArgs[] = { &deed }; return Call("HolderOf", __callArgs, 1); }
        void* ActiveHolderOf(void* b) const { void* __callArgs[] = { b }; return Call("ActiveHolderOf", __callArgs, 1); }
        void* LeadingHouse(int stateId, int ownerId) const { void* __callArgs[] = { &stateId, &ownerId }; return Call("LeadingHouse", __callArgs, 2); }
        void* StateSummary(int stateId, int ownerId) const { void* __callArgs[] = { &stateId, &ownerId }; return Call("StateSummary", __callArgs, 2); }
        void HousesOf(int nationId, void* dst) const { void* __callArgs[] = { &nationId, dst }; Call("HousesOf", __callArgs, 2); }
        void DeedsOf(int houseId, void* dst) const { void* __callArgs[] = { &houseId, dst }; Call("DeedsOf", __callArgs, 2); }
        bool Surveyed(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<bool>("Surveyed", __callArgs, 1); }
        void OnStateAudited(void* s, void* p, void* it) const { void* __callArgs[] = { s, p, it }; Call("OnStateAudited", __callArgs, 3); }
        void RefreshState(int stateId) const { void* __callArgs[] = { &stateId }; Call("RefreshState", __callArgs, 1); }
        void* BaronyName(void* b) const { void* __callArgs[] = { b }; return Call("BaronyName", __callArgs, 1); }
        int ExpectedTarget() const { return CallValue<int>("ExpectedTarget", nullptr, 0); }
        void Restore(void* houses, void* holdings, void* realms, int nextHouseId) const { void* __callArgs[] = { houses, holdings, realms, &nextHouseId }; Call("Restore", __callArgs, 4); }
    };
}
