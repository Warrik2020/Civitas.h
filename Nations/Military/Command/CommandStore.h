#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class CommandStore : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CommandStore(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "CommandStore") {}
    public:
        void Install(void* store) const { void* __callArgs[] = { store }; CallStatic("Install", __callArgs, 1); }
        void* PaletteColor(int slot) const { void* __callArgs[] = { &slot }; return CallStatic("PaletteColor", __callArgs, 1); }
        void* Of(int nationId, bool create = false) const { void* __callArgs[] = { &nationId, &create }; return Call("Of", __callArgs, 2); }
        void* Army(int id) const { void* __callArgs[] = { &id }; return Call("Army", __callArgs, 1); }
        void* Group(int id) const { void* __callArgs[] = { &id }; return Call("Group", __callArgs, 1); }
        void* General(int id) const { void* __callArgs[] = { &id }; return Call("General", __callArgs, 1); }
        void* Spearhead(int id) const { void* __callArgs[] = { &id }; return Call("Spearhead", __callArgs, 1); }
        int ArmyIdOf(int divisionId) const { void* __callArgs[] = { &divisionId }; return CallValue<int>("ArmyIdOf", __callArgs, 1); }
        void* ArmyOf(int divisionId) const { void* __callArgs[] = { &divisionId }; return Call("ArmyOf", __callArgs, 1); }
        void* DivisionOf(int divisionId) const { void* __callArgs[] = { &divisionId }; return Call("DivisionOf", __callArgs, 1); }
        void* ArmyOfSpearhead(int spearheadId) const { void* __callArgs[] = { &spearheadId }; return Call("ArmyOfSpearhead", __callArgs, 1); }
        bool TryGetArmyColor(int armyId, void* c) const { void* __callArgs[] = { &armyId, &c }; return CallStaticValue<bool>("TryGetArmyColor", __callArgs, 2); }
        void* CreateArmy(int nationId, void* divisionIds, const char* name = nullptr) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &nationId, divisionIds, managed_2 }; return Call("CreateArmy", __callArgs, 3); }
        int Enlist(int armyId, void* divisionIds) const { void* __callArgs[] = { &armyId, divisionIds }; return CallValue<int>("Enlist", __callArgs, 2); }
        void Discharge(void* divisionIds) const { void* __callArgs[] = { divisionIds }; Call("Discharge", __callArgs, 1); }
        void OnDivisionLeaving(int divisionId) const { void* __callArgs[] = { &divisionId }; Call("OnDivisionLeaving", __callArgs, 1); }
        void DeleteArmy(int armyId) const { void* __callArgs[] = { &armyId }; Call("DeleteArmy", __callArgs, 1); }
        bool MergeArmies(int fromId, int intoId) const { void* __callArgs[] = { &fromId, &intoId }; return CallValue<bool>("MergeArmies", __callArgs, 2); }
        void MoveArmy(int armyId, int anchorId, bool after) const { void* __callArgs[] = { &armyId, &anchorId, &after }; Call("MoveArmy", __callArgs, 3); }
        void Rename(int armyId, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &armyId, managed_1 }; Call("Rename", __callArgs, 2); }
        void SetColorSlot(int armyId, int slot) const { void* __callArgs[] = { &armyId, &slot }; Call("SetColorSlot", __callArgs, 2); }
        void* CreateGroup(int nationId, void* armyIds, const char* name = nullptr) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &nationId, armyIds, managed_2 }; return Call("CreateGroup", __callArgs, 3); }
        void SetGroup(int armyId, int groupId) const { void* __callArgs[] = { &armyId, &groupId }; Call("SetGroup", __callArgs, 2); }
        void DeleteGroup(int groupId) const { void* __callArgs[] = { &groupId }; Call("DeleteGroup", __callArgs, 1); }
        void RenameGroup(int groupId, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &groupId, managed_1 }; Call("RenameGroup", __callArgs, 2); }
        int SetGroupState(int groupId, int state) const { void* __callArgs[] = { &groupId, &state }; return CallValue<int>("SetGroupState", __callArgs, 2); }
        int SetGroupAggression(int groupId, int aggression) const { void* __callArgs[] = { &groupId, &aggression }; return CallValue<int>("SetGroupAggression", __callArgs, 2); }
        void GroupPlans(int groupId, int& planned, int& executing) const { void* __callArgs[] = { &groupId, &planned, &executing }; Call("GroupPlans", __callArgs, 3); }
        void* AddGeneral(void* g) const { void* __callArgs[] = { g }; return Call("AddGeneral", __callArgs, 1); }
        void RemoveGeneral(int generalId) const { void* __callArgs[] = { &generalId }; Call("RemoveGeneral", __callArgs, 1); }
        bool AssignGeneral(int armyId, int generalId) const { void* __callArgs[] = { &armyId, &generalId }; return CallValue<bool>("AssignGeneral", __callArgs, 2); }
        bool AssignMarshal(int groupId, int generalId) const { void* __callArgs[] = { &groupId, &generalId }; return CallValue<bool>("AssignMarshal", __callArgs, 2); }
        void Promote(int generalId) const { void* __callArgs[] = { &generalId }; Call("Promote", __callArgs, 1); }
        bool AddXp(int generalId, int xp, bool attacking) const { void* __callArgs[] = { &generalId, &xp, &attacking }; return CallValue<bool>("AddXp", __callArgs, 3); }
        void PoolOf(int nationId, void* into) const { void* __callArgs[] = { &nationId, into }; Call("PoolOf", __callArgs, 2); }
        void SetFront(int armyId, void* order) const { void* __callArgs[] = { &armyId, order }; Call("SetFront", __callArgs, 2); }
        void ClearFront(int armyId) const { void* __callArgs[] = { &armyId }; Call("ClearFront", __callArgs, 1); }
        void SetFallback(int armyId, void* line, int side) const { void* __callArgs[] = { &armyId, line, &side }; Call("SetFallback", __callArgs, 3); }
        void ClearFallback(int armyId) const { void* __callArgs[] = { &armyId }; Call("ClearFallback", __callArgs, 1); }
        void SetFallbackActive(int armyId, bool active) const { void* __callArgs[] = { &armyId, &active }; Call("SetFallbackActive", __callArgs, 2); }
        void SetFallbackSide(int armyId, int side) const { void* __callArgs[] = { &armyId, &side }; Call("SetFallbackSide", __callArgs, 2); }
        bool SetOffensive(int armyId, void* line) const { void* __callArgs[] = { &armyId, line }; return CallValue<bool>("SetOffensive", __callArgs, 2); }
        void ClearOffensive(int armyId) const { void* __callArgs[] = { &armyId }; Call("ClearOffensive", __callArgs, 1); }
        void* AddSpearhead(int armyId, void* controls, void* path = nullptr, int opId = -1) const { void* __callArgs[] = { &armyId, controls, path, &opId }; return Call("AddSpearhead", __callArgs, 4); }
        bool EditSpearhead(int spearheadId, void* controls, void* path = nullptr) const { void* __callArgs[] = { &spearheadId, controls, path }; return CallValue<bool>("EditSpearhead", __callArgs, 3); }
        void RemoveSpearhead(int spearheadId, bool halvePlanning = true) const { void* __callArgs[] = { &spearheadId, &halvePlanning }; Call("RemoveSpearhead", __callArgs, 2); }
        int AssignSpearhead(int spearheadId, void* divisionIds, bool auto_) const { void* __callArgs[] = { &spearheadId, divisionIds, &auto_ }; return CallValue<int>("AssignSpearhead", __callArgs, 3); }
        void SetSpearheadProgress(int spearheadId, float progress) const { void* __callArgs[] = { &spearheadId, &progress }; Call("SetSpearheadProgress", __callArgs, 2); }
        void ReplacePlan(int armyId, void* snapshot) const { void* __callArgs[] = { &armyId, snapshot }; Call("ReplacePlan", __callArgs, 2); }
        void SetState(int armyId, int state) const { void* __callArgs[] = { &armyId, &state }; Call("SetState", __callArgs, 2); }
        void SetAggression(int armyId, int aggression) const { void* __callArgs[] = { &armyId, &aggression }; Call("SetAggression", __callArgs, 2); }
        void SetPlanning(int armyId, float planning, float max_) const { void* __callArgs[] = { &armyId, &planning, &max_ }; Call("SetPlanning", __callArgs, 3); }
        void Prune() const { Call("Prune", nullptr, 0); }
        void DropNation(int nationId) const { void* __callArgs[] = { &nationId }; Call("DropNation", __callArgs, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Restamp(void* d) const { void* __callArgs[] = { d }; Call("Restamp", __callArgs, 1); }
        bool LegacyPushOf(int divisionId, void* push) const { void* __callArgs[] = { &divisionId, &push }; return CallValue<bool>("LegacyPushOf", __callArgs, 2); }
        void MarkManual(int armyId) const { void* __callArgs[] = { &armyId }; Call("MarkManual", __callArgs, 1); }
        void* RestoreArmy(void* saved, void* divisionIds) const { void* __callArgs[] = { saved, divisionIds }; return Call("RestoreArmy", __callArgs, 2); }
        void* RestoreGroup(int id, int nationId, int ordinal, const char* name, void* armyIds) const { void* managed_3 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &id, &nationId, &ordinal, managed_3, armyIds }; return Call("RestoreGroup", __callArgs, 5); }
        void EnsureOrdinals(int nationId, int nextArmyOrdinal, int nextGroupOrdinal) const { void* __callArgs[] = { &nationId, &nextArmyOrdinal, &nextGroupOrdinal }; Call("EnsureOrdinals", __callArgs, 3); }
        void EnsureCounters(int nextArmyId, int nextGroupId, int nextGeneralId, int nextSpearheadId) const { void* __callArgs[] = { &nextArmyId, &nextGroupId, &nextGeneralId, &nextSpearheadId }; Call("EnsureCounters", __callArgs, 4); }
    };
}
