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
        void* GrantBlockReason(int nationId, int deed, int houseId) const { void* args[] = { &nationId, &deed, &houseId }; return Call("GrantBlockReason", args, 3); }
        bool Grant(int nationId, int deed, int houseId, const char*& reason) const { void* args[] = { &nationId, &deed, &houseId, &reason }; return CallValue<bool>("Grant", args, 4); }
        int MaxHouses(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("MaxHouses", args, 1); }
        void* RaiseBlockReason(int nationId, int deed) const { void* args[] = { &nationId, &deed }; return Call("RaiseBlockReason", args, 2); }
        bool RaiseHouse(int nationId, int deed, const char*& reason, void* house) const { void* args[] = { &nationId, &deed, &reason, &house }; return CallValue<bool>("RaiseHouse", args, 4); }
        void* RevokeBlockReason(int nationId, int deed) const { void* args[] = { &nationId, &deed }; return Call("RevokeBlockReason", args, 2); }
        bool Revoke(int nationId, int deed, const char*& reason) const { void* args[] = { &nationId, &deed, &reason }; return CallValue<bool>("Revoke", args, 3); }
        float GiftCost(void* h) const { void* args[] = { h }; return CallValue<float>("GiftCost", args, 1); }
        void* GiftBlockReason(int nationId, int houseId) const { void* args[] = { &nationId, &houseId }; return Call("GiftBlockReason", args, 2); }
        bool Gift(int nationId, int houseId, const char*& reason) const { void* args[] = { &nationId, &houseId, &reason }; return CallValue<bool>("Gift", args, 3); }
        void* HonourBlockReason(int nationId, int houseId) const { void* args[] = { &nationId, &houseId }; return Call("HonourBlockReason", args, 2); }
        bool Honour(int nationId, int houseId, const char*& reason) const { void* args[] = { &nationId, &houseId, &reason }; return CallValue<bool>("Honour", args, 3); }
        void OpenDemands(int nationId, void* dst) const { void* args[] = { &nationId, dst }; Call("OpenDemands", args, 2); }
        void* NearestCrownBarony(void* h, int nationId) const { void* args[] = { h, &nationId }; return Call("NearestCrownBarony", args, 2); }
        void* DemandBlockReason(void* h, void* it) const { void* args[] = { h, it }; return Call("DemandBlockReason", args, 2); }
        bool AnswerDemand(int houseId, bool accept, const char*& reason) const { void* args[] = { &houseId, &accept, &reason }; return CallValue<bool>("AnswerDemand", args, 3); }
        void* DemandWord(void* h) const { void* args[] = { h }; return Call("DemandWord", args, 1); }
        void* DemandText(void* h) const { void* args[] = { h }; return Call("DemandText", args, 1); }
        bool Rise(void* n, void* it, void* h, void* cfg) const { void* args[] = { n, it, h, cfg }; return CallValue<bool>("Rise", args, 4); }
        void CollectHouseTiles(void* h, int nationId, void* dst) const { void* args[] = { h, &nationId, dst }; Call("CollectHouseTiles", args, 3); }
        void* GetHouse(int id) const { void* args[] = { &id }; return Call("GetHouse", args, 1); }
        void ResetAll() const { Call("ResetAll", nullptr, 0); }
        bool Live(void* it) const { void* args[] = { it }; return CallValue<bool>("Live", args, 1); }
        bool Live(int nationId) const { void* args[] = { &nationId }; return CallValue<bool>("Live", args, 1); }
        void* Realm(int nationId) const { void* args[] = { &nationId }; return Call("Realm", args, 1); }
        void* RealmOrNull(int nationId) const { void* args[] = { &nationId }; return Call("RealmOrNull", args, 1); }
        void* HolderOf(int deed) const { void* args[] = { &deed }; return Call("HolderOf", args, 1); }
        void* ActiveHolderOf(void* b) const { void* args[] = { b }; return Call("ActiveHolderOf", args, 1); }
        void* LeadingHouse(int stateId, int ownerId) const { void* args[] = { &stateId, &ownerId }; return Call("LeadingHouse", args, 2); }
        void* StateSummary(int stateId, int ownerId) const { void* args[] = { &stateId, &ownerId }; return Call("StateSummary", args, 2); }
        void HousesOf(int nationId, void* dst) const { void* args[] = { &nationId, dst }; Call("HousesOf", args, 2); }
        void DeedsOf(int houseId, void* dst) const { void* args[] = { &houseId, dst }; Call("DeedsOf", args, 2); }
        bool Surveyed(int nationId) const { void* args[] = { &nationId }; return CallValue<bool>("Surveyed", args, 1); }
        void OnStateAudited(void* s, void* p, void* it) const { void* args[] = { s, p, it }; Call("OnStateAudited", args, 3); }
        void RefreshState(int stateId) const { void* args[] = { &stateId }; Call("RefreshState", args, 1); }
        void* BaronyName(void* b) const { void* args[] = { b }; return Call("BaronyName", args, 1); }
        int ExpectedTarget() const { return CallValue<int>("ExpectedTarget", nullptr, 0); }
        void Restore(void* houses, void* holdings, void* realms, int nextHouseId) const { void* args[] = { houses, holdings, realms, &nextHouseId }; Call("Restore", args, 4); }
    };
}
