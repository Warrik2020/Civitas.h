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
        void* DisbandDivisionsV2(void* divisionIds) const { void* __callArgs[] = { divisionIds }; return CallStatic("DisbandDivisionsV2", __callArgs, 1); }
        void* SetGroupStateV2(int groupId, int state) const { void* __callArgs[] = { &groupId, &state }; return CallStatic("SetGroupStateV2", __callArgs, 2); }
        void* SetGroupAggressionV2(int groupId, int aggression) const { void* __callArgs[] = { &groupId, &aggression }; return CallStatic("SetGroupAggressionV2", __callArgs, 2); }
        void* MergeArmies(int fromId, int intoId) const { void* __callArgs[] = { &fromId, &intoId }; return CallStatic("MergeArmies", __callArgs, 2); }
        void* RefusalOf(int f) const { void* __callArgs[] = { &f }; return CallStatic("RefusalOf", __callArgs, 1); }
        void* SeaReason(void* r) const { void* __callArgs[] = { r }; return CallStatic("SeaReason", __callArgs, 1); }
        int ReturnToPort(void* units) const { void* __callArgs[] = { units }; return CallStaticValue<int>("ReturnToPort", __callArgs, 1); }
        bool AnyRecallable(void* units) const { void* __callArgs[] = { units }; return CallStaticValue<bool>("AnyRecallable", __callArgs, 1); }
        void* FormArmyV2(void* divisionIds, bool includeArmied, void* army) const { void* __callArgs[] = { divisionIds, &includeArmied, &army }; return CallStatic("FormArmyV2", __callArgs, 3); }
        void* AddToArmyV2(int armyId, void* divisionIds) const { void* __callArgs[] = { &armyId, divisionIds }; return CallStatic("AddToArmyV2", __callArgs, 2); }
        void* RemoveFromArmyV2(void* divisionIds) const { void* __callArgs[] = { divisionIds }; return CallStatic("RemoveFromArmyV2", __callArgs, 1); }
        void* MergeArmiesV2(int fromId, int intoId) const { void* __callArgs[] = { &fromId, &intoId }; return CallStatic("MergeArmiesV2", __callArgs, 2); }
        void* DeleteArmyV2(int armyId) const { void* __callArgs[] = { &armyId }; return CallStatic("DeleteArmyV2", __callArgs, 1); }
        void* RenameArmyV2(int armyId, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &armyId, managed_1 }; return CallStatic("RenameArmyV2", __callArgs, 2); }
        void* MoveArmyV2(int armyId, int anchorId, bool after) const { void* __callArgs[] = { &armyId, &anchorId, &after }; return CallStatic("MoveArmyV2", __callArgs, 3); }
        void* AssignGeneral(int armyId, int generalId) const { void* __callArgs[] = { &armyId, &generalId }; return CallStatic("AssignGeneral", __callArgs, 2); }
        void* PromoteGeneral(int generalId) const { void* __callArgs[] = { &generalId }; return CallStatic("PromoteGeneral", __callArgs, 1); }
        void* AssignMarshal(int groupId, int generalId) const { void* __callArgs[] = { &groupId, &generalId }; return CallStatic("AssignMarshal", __callArgs, 2); }
        void* CreateGroup(void* armyIds, void* group) const { void* __callArgs[] = { armyIds, &group }; return CallStatic("CreateGroup", __callArgs, 2); }
        void* GroupWith(int armyId, int otherId, void* group) const { void* __callArgs[] = { &armyId, &otherId, &group }; return CallStatic("GroupWith", __callArgs, 3); }
        void* JoinGroup(int armyId, int groupId) const { void* __callArgs[] = { &armyId, &groupId }; return CallStatic("JoinGroup", __callArgs, 2); }
        void* LeaveGroup(int armyId) const { void* __callArgs[] = { &armyId }; return CallStatic("LeaveGroup", __callArgs, 1); }
        void* DeleteGroup(int groupId) const { void* __callArgs[] = { &groupId }; return CallStatic("DeleteGroup", __callArgs, 1); }
        void* SetFrontV2(int armyId, void* foeIds, void* picks = nullptr) const { void* __callArgs[] = { &armyId, foeIds, picks }; return CallStatic("SetFrontV2", __callArgs, 3); }
        void* SetFrontAreaV2(int armyId, void* foeIds, void* area) const { void* __callArgs[] = { &armyId, foeIds, area }; return CallStatic("SetFrontAreaV2", __callArgs, 3); }
        void* ClearFrontV2(int armyId) const { void* __callArgs[] = { &armyId }; return CallStatic("ClearFrontV2", __callArgs, 1); }
        void* SetPlanStateV2(int armyId, int state) const { void* __callArgs[] = { &armyId, &state }; return CallStatic("SetPlanStateV2", __callArgs, 2); }
        void* SetAggressionV2(int armyId, int aggression) const { void* __callArgs[] = { &armyId, &aggression }; return CallStatic("SetAggressionV2", __callArgs, 2); }
        void* SetFallbackV2(int armyId, void* tiles) const { void* __callArgs[] = { &armyId, tiles }; return CallStatic("SetFallbackV2", __callArgs, 2); }
        void* ClearFallbackV2(int armyId) const { void* __callArgs[] = { &armyId }; return CallStatic("ClearFallbackV2", __callArgs, 1); }
        void* SetOffensiveV2(int armyId, void* tiles) const { void* __callArgs[] = { &armyId, tiles }; return CallStatic("SetOffensiveV2", __callArgs, 2); }
        void* ClearOffensiveV2(int armyId) const { void* __callArgs[] = { &armyId }; return CallStatic("ClearOffensiveV2", __callArgs, 1); }
        void* EditLineV2(int armyId, bool fallback, void* controls) const { void* __callArgs[] = { &armyId, &fallback, controls }; return CallStatic("EditLineV2", __callArgs, 3); }
        void* AddSpearheadV2(int armyId, void* tiles, float snapTiles) const { void* __callArgs[] = { &armyId, tiles, &snapTiles }; return CallStatic("AddSpearheadV2", __callArgs, 3); }
        void* EditSpearheadV2(int spearheadId, void* controls) const { void* __callArgs[] = { &spearheadId, controls }; return CallStatic("EditSpearheadV2", __callArgs, 2); }
        void* RemoveSpearheadV2(int spearheadId) const { void* __callArgs[] = { &spearheadId }; return CallStatic("RemoveSpearheadV2", __callArgs, 1); }
        void* AssignSpearheadV2(int spearheadId, void* divisionIds) const { void* __callArgs[] = { &spearheadId, divisionIds }; return CallStatic("AssignSpearheadV2", __callArgs, 2); }
        bool CanUndoPlan(int armyId) const { void* __callArgs[] = { &armyId }; return CallStaticValue<bool>("CanUndoPlan", __callArgs, 1); }
        void* UndoPlanV2(int armyId) const { void* __callArgs[] = { &armyId }; return CallStatic("UndoPlanV2", __callArgs, 1); }
        bool PreviewMove(void* units, void* tile, int ctrlId, void* route, void* p) const { void* __callArgs[] = { units, tile, &ctrlId, route, &p }; return CallStaticValue<bool>("PreviewMove", __callArgs, 5); }
        float RouteTicks(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("RouteTicks", __callArgs, 1); }
        bool RouteReachesTarget(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<bool>("RouteReachesTarget", __callArgs, 1); }
        float DaysOf(float ticks) const { void* __callArgs[] = { &ticks }; return CallStaticValue<float>("DaysOf", __callArgs, 1); }
        void* Halt(void* units, int ctrlId) const { void* __callArgs[] = { units, &ctrlId }; return CallStatic("Halt", __callArgs, 2); }
        void* Move(void* units, void* tile, int ctrlId) const { void* __callArgs[] = { units, tile, &ctrlId }; return CallStatic("Move", __callArgs, 3); }
        void OrderDivision(void* d, void* aim, bool enemyLand, void* mil, void* n, void* grid, void* cfg, int tick) const { void* __callArgs[] = { d, aim, &enemyLand, mil, n, grid, cfg, &tick }; CallStatic("OrderDivision", __callArgs, 8); }
        void* IncursionReason(void* why) const { void* __callArgs[] = { why }; return CallStatic("IncursionReason", __callArgs, 1); }
        int ArmyCost(void* divisionIds, bool includeArmied, int& divisions, int& looseDivisions) const { void* __callArgs[] = { divisionIds, &includeArmied, &divisions, &looseDivisions }; return CallStaticValue<int>("ArmyCost", __callArgs, 4); }
        float Treasury() const { return CallStaticValue<float>("Treasury", nullptr, 0); }
        void* CreateArmy(void* divisionIds, bool includeArmied, void* army) const { void* __callArgs[] = { divisionIds, &includeArmied, &army }; return CallStatic("CreateArmy", __callArgs, 3); }
        void* AddToArmy(int armyId, void* divisionIds) const { void* __callArgs[] = { &armyId, divisionIds }; return CallStatic("AddToArmy", __callArgs, 2); }
        void* DisbandArmy(int armyId) const { void* __callArgs[] = { &armyId }; return CallStatic("DisbandArmy", __callArgs, 1); }
        void* DeleteCommand(int armyId, int frontId) const { void* __callArgs[] = { &armyId, &frontId }; return CallStatic("DeleteCommand", __callArgs, 2); }
        void* SetPush(int frontId, void* push) const { void* __callArgs[] = { &frontId, push }; return CallStatic("SetPush", __callArgs, 2); }
        void* AssignToFront(int frontId, void* divisionIds) const { void* __callArgs[] = { &frontId, divisionIds }; return CallStatic("AssignToFront", __callArgs, 2); }
        void* RenameArmy(int armyId, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &armyId, managed_1 }; return CallStatic("RenameArmy", __callArgs, 2); }
        void* RenameFront(int frontId, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &frontId, managed_1 }; return CallStatic("RenameFront", __callArgs, 2); }
        void* RemoveFromArmy(void* divisionIds) const { void* __callArgs[] = { divisionIds }; return CallStatic("RemoveFromArmy", __callArgs, 1); }
        float LevyTicksLeft(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("LevyTicksLeft", __callArgs, 1); }
        float TicksPerYear() const { return CallStaticValue<float>("TicksPerYear", nullptr, 0); }
        void* WhyNotDismiss(void* d) const { void* __callArgs[] = { d }; return CallStatic("WhyNotDismiss", __callArgs, 1); }
        void* DismissLevy(int divisionId) const { void* __callArgs[] = { &divisionId }; return CallStatic("DismissLevy", __callArgs, 1); }
        void* SetStandingPin(void* divisionIds, bool pin) const { void* __callArgs[] = { divisionIds, &pin }; return CallStatic("SetStandingPin", __callArgs, 2); }
        void StandingCounts(int& slots, int& filled) const { void* __callArgs[] = { &slots, &filled }; CallStatic("StandingCounts", __callArgs, 2); }
        void* ToggleGroup(void* divisionIds) const { void* __callArgs[] = { divisionIds }; return CallStatic("ToggleGroup", __callArgs, 1); }
        float PickReachTiles() const { return ReadStaticField<float>("PickReachTiles"); }
    };
}
