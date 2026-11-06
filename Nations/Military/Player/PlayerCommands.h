#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Player
{
    class PlayerCommands : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PlayerCommands(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Player", "PlayerCommands") {}
    public:
        void* DisbandDivisionsV2(void* divisionIds) const { void* args[] = { divisionIds }; return CallStatic("DisbandDivisionsV2", args, 1); }
        void* SetGroupStateV2(int groupId, int state) const { void* args[] = { &groupId, &state }; return CallStatic("SetGroupStateV2", args, 2); }
        void* SetGroupAggressionV2(int groupId, int aggression) const { void* args[] = { &groupId, &aggression }; return CallStatic("SetGroupAggressionV2", args, 2); }
        void* MergeArmies(int fromId, int intoId) const { void* args[] = { &fromId, &intoId }; return CallStatic("MergeArmies", args, 2); }
        void* RefusalOf(int f) const { void* args[] = { &f }; return CallStatic("RefusalOf", args, 1); }
        void* SeaReason(void* r) const { void* args[] = { r }; return CallStatic("SeaReason", args, 1); }
        int ReturnToPort(void* units) const { void* args[] = { units }; return CallStaticValue<int>("ReturnToPort", args, 1); }
        bool AnyRecallable(void* units) const { void* args[] = { units }; return CallStaticValue<bool>("AnyRecallable", args, 1); }
        void* FormArmyV2(void* divisionIds, bool includeArmied, void* army) const { void* args[] = { divisionIds, &includeArmied, &army }; return CallStatic("FormArmyV2", args, 3); }
        void* AddToArmyV2(int armyId, void* divisionIds) const { void* args[] = { &armyId, divisionIds }; return CallStatic("AddToArmyV2", args, 2); }
        void* RemoveFromArmyV2(void* divisionIds) const { void* args[] = { divisionIds }; return CallStatic("RemoveFromArmyV2", args, 1); }
        void* MergeArmiesV2(int fromId, int intoId) const { void* args[] = { &fromId, &intoId }; return CallStatic("MergeArmiesV2", args, 2); }
        void* DeleteArmyV2(int armyId) const { void* args[] = { &armyId }; return CallStatic("DeleteArmyV2", args, 1); }
        void* RenameArmyV2(int armyId, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &armyId, managed_1 }; return CallStatic("RenameArmyV2", args, 2); }
        void* MoveArmyV2(int armyId, int anchorId, bool after) const { void* args[] = { &armyId, &anchorId, &after }; return CallStatic("MoveArmyV2", args, 3); }
        void* AssignGeneral(int armyId, int generalId) const { void* args[] = { &armyId, &generalId }; return CallStatic("AssignGeneral", args, 2); }
        void* PromoteGeneral(int generalId) const { void* args[] = { &generalId }; return CallStatic("PromoteGeneral", args, 1); }
        void* AssignMarshal(int groupId, int generalId) const { void* args[] = { &groupId, &generalId }; return CallStatic("AssignMarshal", args, 2); }
        void* CreateGroup(void* armyIds, void* group) const { void* args[] = { armyIds, &group }; return CallStatic("CreateGroup", args, 2); }
        void* GroupWith(int armyId, int otherId, void* group) const { void* args[] = { &armyId, &otherId, &group }; return CallStatic("GroupWith", args, 3); }
        void* JoinGroup(int armyId, int groupId) const { void* args[] = { &armyId, &groupId }; return CallStatic("JoinGroup", args, 2); }
        void* LeaveGroup(int armyId) const { void* args[] = { &armyId }; return CallStatic("LeaveGroup", args, 1); }
        void* DeleteGroup(int groupId) const { void* args[] = { &groupId }; return CallStatic("DeleteGroup", args, 1); }
        void* SetFrontV2(int armyId, void* foeIds, void* picks = nullptr) const { void* args[] = { &armyId, foeIds, picks }; return CallStatic("SetFrontV2", args, 3); }
        void* SetFrontAreaV2(int armyId, void* foeIds, void* area) const { void* args[] = { &armyId, foeIds, area }; return CallStatic("SetFrontAreaV2", args, 3); }
        void* ClearFrontV2(int armyId) const { void* args[] = { &armyId }; return CallStatic("ClearFrontV2", args, 1); }
        void* SetPlanStateV2(int armyId, int state) const { void* args[] = { &armyId, &state }; return CallStatic("SetPlanStateV2", args, 2); }
        void* SetAggressionV2(int armyId, int aggression) const { void* args[] = { &armyId, &aggression }; return CallStatic("SetAggressionV2", args, 2); }
        void* SetFallbackV2(int armyId, void* tiles) const { void* args[] = { &armyId, tiles }; return CallStatic("SetFallbackV2", args, 2); }
        void* ClearFallbackV2(int armyId) const { void* args[] = { &armyId }; return CallStatic("ClearFallbackV2", args, 1); }
        void* SetOffensiveV2(int armyId, void* tiles) const { void* args[] = { &armyId, tiles }; return CallStatic("SetOffensiveV2", args, 2); }
        void* ClearOffensiveV2(int armyId) const { void* args[] = { &armyId }; return CallStatic("ClearOffensiveV2", args, 1); }
        void* EditLineV2(int armyId, bool fallback, void* controls) const { void* args[] = { &armyId, &fallback, controls }; return CallStatic("EditLineV2", args, 3); }
        void* AddSpearheadV2(int armyId, void* tiles, float snapTiles) const { void* args[] = { &armyId, tiles, &snapTiles }; return CallStatic("AddSpearheadV2", args, 3); }
        void* EditSpearheadV2(int spearheadId, void* controls) const { void* args[] = { &spearheadId, controls }; return CallStatic("EditSpearheadV2", args, 2); }
        void* RemoveSpearheadV2(int spearheadId) const { void* args[] = { &spearheadId }; return CallStatic("RemoveSpearheadV2", args, 1); }
        void* AssignSpearheadV2(int spearheadId, void* divisionIds) const { void* args[] = { &spearheadId, divisionIds }; return CallStatic("AssignSpearheadV2", args, 2); }
        bool CanUndoPlan(int armyId) const { void* args[] = { &armyId }; return CallStaticValue<bool>("CanUndoPlan", args, 1); }
        void* UndoPlanV2(int armyId) const { void* args[] = { &armyId }; return CallStatic("UndoPlanV2", args, 1); }
        bool PreviewMove(void* units, void* tile, int ctrlId, void* route, void* p) const { void* args[] = { units, tile, &ctrlId, route, &p }; return CallStaticValue<bool>("PreviewMove", args, 5); }
        float RouteTicks(void* d) const { void* args[] = { d }; return CallStaticValue<float>("RouteTicks", args, 1); }
        bool RouteReachesTarget(void* d) const { void* args[] = { d }; return CallStaticValue<bool>("RouteReachesTarget", args, 1); }
        float DaysOf(float ticks) const { void* args[] = { &ticks }; return CallStaticValue<float>("DaysOf", args, 1); }
        void* Halt(void* units, int ctrlId) const { void* args[] = { units, &ctrlId }; return CallStatic("Halt", args, 2); }
        void* Move(void* units, void* tile, int ctrlId) const { void* args[] = { units, tile, &ctrlId }; return CallStatic("Move", args, 3); }
        void OrderDivision(void* d, void* aim, bool enemyLand, void* mil, void* n, void* grid, void* cfg, int tick) const { void* args[] = { d, aim, &enemyLand, mil, n, grid, cfg, &tick }; CallStatic("OrderDivision", args, 8); }
        void* IncursionReason(void* why) const { void* args[] = { why }; return CallStatic("IncursionReason", args, 1); }
        int ArmyCost(void* divisionIds, bool includeArmied, int& divisions, int& looseDivisions) const { void* args[] = { divisionIds, &includeArmied, &divisions, &looseDivisions }; return CallStaticValue<int>("ArmyCost", args, 4); }
        float Treasury() const { return CallStaticValue<float>("Treasury", nullptr, 0); }
        void* CreateArmy(void* divisionIds, bool includeArmied, void* army) const { void* args[] = { divisionIds, &includeArmied, &army }; return CallStatic("CreateArmy", args, 3); }
        void* AddToArmy(int armyId, void* divisionIds) const { void* args[] = { &armyId, divisionIds }; return CallStatic("AddToArmy", args, 2); }
        void* DisbandArmy(int armyId) const { void* args[] = { &armyId }; return CallStatic("DisbandArmy", args, 1); }
        void* DeleteCommand(int armyId, int frontId) const { void* args[] = { &armyId, &frontId }; return CallStatic("DeleteCommand", args, 2); }
        void* SetPush(int frontId, void* push) const { void* args[] = { &frontId, push }; return CallStatic("SetPush", args, 2); }
        void* AssignToFront(int frontId, void* divisionIds) const { void* args[] = { &frontId, divisionIds }; return CallStatic("AssignToFront", args, 2); }
        void* RenameArmy(int armyId, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &armyId, managed_1 }; return CallStatic("RenameArmy", args, 2); }
        void* RenameFront(int frontId, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &frontId, managed_1 }; return CallStatic("RenameFront", args, 2); }
        void* RemoveFromArmy(void* divisionIds) const { void* args[] = { divisionIds }; return CallStatic("RemoveFromArmy", args, 1); }
        float LevyTicksLeft(void* d) const { void* args[] = { d }; return CallStaticValue<float>("LevyTicksLeft", args, 1); }
        float TicksPerYear() const { return CallStaticValue<float>("TicksPerYear", nullptr, 0); }
        void* WhyNotDismiss(void* d) const { void* args[] = { d }; return CallStatic("WhyNotDismiss", args, 1); }
        void* DismissLevy(int divisionId) const { void* args[] = { &divisionId }; return CallStatic("DismissLevy", args, 1); }
        void* SetStandingPin(void* divisionIds, bool pin) const { void* args[] = { divisionIds, &pin }; return CallStatic("SetStandingPin", args, 2); }
        void StandingCounts(int& slots, int& filled) const { void* args[] = { &slots, &filled }; CallStatic("StandingCounts", args, 2); }
        void* ToggleGroup(void* divisionIds) const { void* args[] = { divisionIds }; return CallStatic("ToggleGroup", args, 1); }
        void* Reason() const { return Call("Reason", nullptr, 0); }
        void* Refuse(void* r) const { void* args[] = { r }; return CallStatic("Refuse", args, 1); }
        float PickReachTiles() const { return ReadStaticField<float>("PickReachTiles"); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        bool bySea() const { return ReadField<bool>("bySea"); }
        void SetBySea(bool value) const { WriteField<bool>("bySea", value); }
        bool mustSail() const { return ReadField<bool>("mustSail"); }
        void SetMustSail(bool value) const { WriteField<bool>("mustSail", value); }
        void* refusal() const { return ReadField<void*>("refusal"); }
        void SetRefusal(void* value) const { WriteField<void*>("refusal", value); }
        void* reason() const { return ReadField<void*>("reason"); }
        void SetReason(void* value) const { WriteField<void*>("reason", value); }
        int going() const { return ReadField<int>("going"); }
        void SetGoing(int value) const { WriteField<int>("going", value); }
        int blocked() const { return ReadField<int>("blocked"); }
        void SetBlocked(int value) const { WriteField<int>("blocked", value); }
        int bySea() const { return ReadField<int>("bySea"); }
        void SetBySea(int value) const { WriteField<int>("bySea", value); }
        void* lead() const { return ReadField<void*>("lead"); }
        void SetLead(void* value) const { WriteField<void*>("lead", value); }
        bool straight() const { return ReadField<bool>("straight"); }
        void SetStraight(bool value) const { WriteField<bool>("straight", value); }
        bool routed() const { return ReadField<bool>("routed"); }
        void SetRouted(bool value) const { WriteField<bool>("routed", value); }
        float etaTicks() const { return ReadField<float>("etaTicks"); }
        void SetEtaTicks(float value) const { WriteField<float>("etaTicks", value); }
        float terrainTicks() const { return ReadField<float>("terrainTicks"); }
        void SetTerrainTicks(float value) const { WriteField<float>("terrainTicks", value); }
        float targetDefence() const { return ReadField<float>("targetDefence"); }
        void SetTargetDefence(float value) const { WriteField<float>("targetDefence", value); }
        uint8_t targetTerrain() const { return ReadField<uint8_t>("targetTerrain"); }
        void SetTargetTerrain(uint8_t value) const { WriteField<uint8_t>("targetTerrain", value); }
        int foeNationId() const { return ReadField<int>("foeNationId"); }
        void SetFoeNationId(int value) const { WriteField<int>("foeNationId", value); }
        float ours() const { return ReadField<float>("ours"); }
        void SetOurs(float value) const { WriteField<float>("ours", value); }
        float theirs() const { return ReadField<float>("theirs"); }
        void SetTheirs(float value) const { WriteField<float>("theirs", value); }
        bool battle() const { return ReadField<bool>("battle"); }
        void SetBattle(bool value) const { WriteField<bool>("battle", value); }
        float battleOdds() const { return ReadField<float>("battleOdds"); }
        void SetBattleOdds(float value) const { WriteField<float>("battleOdds", value); }
        float ticksToBreak() const { return ReadField<float>("ticksToBreak"); }
        void SetTicksToBreak(float value) const { WriteField<float>("ticksToBreak", value); }
        float ticksToStall() const { return ReadField<float>("ticksToStall"); }
        void SetTicksToStall(float value) const { WriteField<float>("ticksToStall", value); }
        void* refusal() const { return ReadField<void*>("refusal"); }
        void SetRefusal(void* value) const { WriteField<void*>("refusal", value); }
        int accepted() const { return ReadField<int>("accepted"); }
        void SetAccepted(int value) const { WriteField<int>("accepted", value); }
        int refused() const { return ReadField<int>("refused"); }
        void SetRefused(int value) const { WriteField<int>("refused", value); }
        int gold() const { return ReadField<int>("gold"); }
        void SetGold(int value) const { WriteField<int>("gold", value); }
        bool showRefusedMarker() const { return ReadField<bool>("showRefusedMarker"); }
        void SetShowRefusedMarker(bool value) const { WriteField<bool>("showRefusedMarker", value); }
        void* detail() const { return ReadField<void*>("detail"); }
        void SetDetail(void* value) const { WriteField<void*>("detail", value); }
        int crossing() const { return ReadField<int>("crossing"); }
        void SetCrossing(int value) const { WriteField<int>("crossing", value); }
    };
}
