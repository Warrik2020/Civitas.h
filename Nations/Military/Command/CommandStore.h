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
        void Install(void* store) const { void* args[] = { store }; CallStatic("Install", args, 1); }
        void* PaletteColor(int slot) const { void* args[] = { &slot }; return CallStatic("PaletteColor", args, 1); }
        void* Of(int nationId, bool create = false) const { void* args[] = { &nationId, &create }; return Call("Of", args, 2); }
        void* Army(int id) const { void* args[] = { &id }; return Call("Army", args, 1); }
        void* Group(int id) const { void* args[] = { &id }; return Call("Group", args, 1); }
        void* General(int id) const { void* args[] = { &id }; return Call("General", args, 1); }
        void* Spearhead(int id) const { void* args[] = { &id }; return Call("Spearhead", args, 1); }
        int ArmyIdOf(int divisionId) const { void* args[] = { &divisionId }; return CallValue<int>("ArmyIdOf", args, 1); }
        void* ArmyOf(int divisionId) const { void* args[] = { &divisionId }; return Call("ArmyOf", args, 1); }
        void* DivisionOf(int divisionId) const { void* args[] = { &divisionId }; return Call("DivisionOf", args, 1); }
        void* ArmyOfSpearhead(int spearheadId) const { void* args[] = { &spearheadId }; return Call("ArmyOfSpearhead", args, 1); }
        bool TryGetArmyColor(int armyId, void* c) const { void* args[] = { &armyId, &c }; return CallStaticValue<bool>("TryGetArmyColor", args, 2); }
        void* CreateArmy(int nationId, void* divisionIds, const char* name = nullptr) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &nationId, divisionIds, managed_2 }; return Call("CreateArmy", args, 3); }
        int Enlist(int armyId, void* divisionIds) const { void* args[] = { &armyId, divisionIds }; return CallValue<int>("Enlist", args, 2); }
        void Discharge(void* divisionIds) const { void* args[] = { divisionIds }; Call("Discharge", args, 1); }
        void OnDivisionLeaving(int divisionId) const { void* args[] = { &divisionId }; Call("OnDivisionLeaving", args, 1); }
        void DeleteArmy(int armyId) const { void* args[] = { &armyId }; Call("DeleteArmy", args, 1); }
        bool MergeArmies(int fromId, int intoId) const { void* args[] = { &fromId, &intoId }; return CallValue<bool>("MergeArmies", args, 2); }
        void MoveArmy(int armyId, int anchorId, bool after) const { void* args[] = { &armyId, &anchorId, &after }; Call("MoveArmy", args, 3); }
        void Rename(int armyId, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &armyId, managed_1 }; Call("Rename", args, 2); }
        void SetColorSlot(int armyId, int slot) const { void* args[] = { &armyId, &slot }; Call("SetColorSlot", args, 2); }
        void* CreateGroup(int nationId, void* armyIds, const char* name = nullptr) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &nationId, armyIds, managed_2 }; return Call("CreateGroup", args, 3); }
        void SetGroup(int armyId, int groupId) const { void* args[] = { &armyId, &groupId }; Call("SetGroup", args, 2); }
        void DeleteGroup(int groupId) const { void* args[] = { &groupId }; Call("DeleteGroup", args, 1); }
        void RenameGroup(int groupId, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &groupId, managed_1 }; Call("RenameGroup", args, 2); }
        int SetGroupState(int groupId, int state) const { void* args[] = { &groupId, &state }; return CallValue<int>("SetGroupState", args, 2); }
        int SetGroupAggression(int groupId, int aggression) const { void* args[] = { &groupId, &aggression }; return CallValue<int>("SetGroupAggression", args, 2); }
        void GroupPlans(int groupId, int& planned, int& executing) const { void* args[] = { &groupId, &planned, &executing }; Call("GroupPlans", args, 3); }
        void* AddGeneral(void* g) const { void* args[] = { g }; return Call("AddGeneral", args, 1); }
        void RemoveGeneral(int generalId) const { void* args[] = { &generalId }; Call("RemoveGeneral", args, 1); }
        bool AssignGeneral(int armyId, int generalId) const { void* args[] = { &armyId, &generalId }; return CallValue<bool>("AssignGeneral", args, 2); }
        bool AssignMarshal(int groupId, int generalId) const { void* args[] = { &groupId, &generalId }; return CallValue<bool>("AssignMarshal", args, 2); }
        void Promote(int generalId) const { void* args[] = { &generalId }; Call("Promote", args, 1); }
        bool AddXp(int generalId, int xp, bool attacking) const { void* args[] = { &generalId, &xp, &attacking }; return CallValue<bool>("AddXp", args, 3); }
        void PoolOf(int nationId, void* into) const { void* args[] = { &nationId, into }; Call("PoolOf", args, 2); }
        void SetFront(int armyId, void* order) const { void* args[] = { &armyId, order }; Call("SetFront", args, 2); }
        void ClearFront(int armyId) const { void* args[] = { &armyId }; Call("ClearFront", args, 1); }
        void SetFallback(int armyId, void* line, int side) const { void* args[] = { &armyId, line, &side }; Call("SetFallback", args, 3); }
        void ClearFallback(int armyId) const { void* args[] = { &armyId }; Call("ClearFallback", args, 1); }
        void SetFallbackActive(int armyId, bool active) const { void* args[] = { &armyId, &active }; Call("SetFallbackActive", args, 2); }
        void SetFallbackSide(int armyId, int side) const { void* args[] = { &armyId, &side }; Call("SetFallbackSide", args, 2); }
        bool SetOffensive(int armyId, void* line) const { void* args[] = { &armyId, line }; return CallValue<bool>("SetOffensive", args, 2); }
        void ClearOffensive(int armyId) const { void* args[] = { &armyId }; Call("ClearOffensive", args, 1); }
        void* AddSpearhead(int armyId, void* controls, void* path = nullptr, int opId = -1) const { void* args[] = { &armyId, controls, path, &opId }; return Call("AddSpearhead", args, 4); }
        bool EditSpearhead(int spearheadId, void* controls, void* path = nullptr) const { void* args[] = { &spearheadId, controls, path }; return CallValue<bool>("EditSpearhead", args, 3); }
        void RemoveSpearhead(int spearheadId, bool halvePlanning = true) const { void* args[] = { &spearheadId, &halvePlanning }; Call("RemoveSpearhead", args, 2); }
        int AssignSpearhead(int spearheadId, void* divisionIds, bool auto_) const { void* args[] = { &spearheadId, divisionIds, &auto_ }; return CallValue<int>("AssignSpearhead", args, 3); }
        void SetSpearheadProgress(int spearheadId, float progress) const { void* args[] = { &spearheadId, &progress }; Call("SetSpearheadProgress", args, 2); }
        void ReplacePlan(int armyId, void* snapshot) const { void* args[] = { &armyId, snapshot }; Call("ReplacePlan", args, 2); }
        void SetState(int armyId, int state) const { void* args[] = { &armyId, &state }; Call("SetState", args, 2); }
        void SetAggression(int armyId, int aggression) const { void* args[] = { &armyId, &aggression }; Call("SetAggression", args, 2); }
        void SetPlanning(int armyId, float planning, float max) const { void* args[] = { &armyId, &planning, &max }; Call("SetPlanning", args, 3); }
        void Prune() const { Call("Prune", nullptr, 0); }
        void DropNation(int nationId) const { void* args[] = { &nationId }; Call("DropNation", args, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Restamp(void* d) const { void* args[] = { d }; Call("Restamp", args, 1); }
        bool LegacyPushOf(int divisionId, void* push) const { void* args[] = { &divisionId, &push }; return CallValue<bool>("LegacyPushOf", args, 2); }
        void MarkManual(int armyId) const { void* args[] = { &armyId }; Call("MarkManual", args, 1); }
        void* RestoreArmy(void* saved, void* divisionIds) const { void* args[] = { saved, divisionIds }; return Call("RestoreArmy", args, 2); }
        void* RestoreGroup(int id, int nationId, int ordinal, const char* name, void* armyIds) const { void* managed_3 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &id, &nationId, &ordinal, managed_3, armyIds }; return Call("RestoreGroup", args, 5); }
        void EnsureOrdinals(int nationId, int nextArmyOrdinal, int nextGroupOrdinal) const { void* args[] = { &nationId, &nextArmyOrdinal, &nextGroupOrdinal }; Call("EnsureOrdinals", args, 3); }
        void EnsureCounters(int nextArmyId, int nextGroupId, int nextGeneralId, int nextSpearheadId) const { void* args[] = { &nextArmyId, &nextGroupId, &nextGeneralId, &nextSpearheadId }; Call("EnsureCounters", args, 4); }
        bool Targets(int foe) const { void* args[] = { &foe }; return CallValue<bool>("Targets", args, 1); }
        void* army() const { return ReadField<void*>("army"); }
        void SetArmy(void* value) const { WriteField<void*>("army", value); }
        int level() const { return ReadField<int>("level"); }
        void SetLevel(int value) const { WriteField<int>("level", value); }
        bool onFallback() const { return ReadField<bool>("onFallback"); }
        void SetOnFallback(bool value) const { WriteField<bool>("onFallback", value); }
        void* objective() const { return ReadField<void*>("objective"); }
        void SetObjective(void* value) const { WriteField<void*>("objective", value); }
    };
}
