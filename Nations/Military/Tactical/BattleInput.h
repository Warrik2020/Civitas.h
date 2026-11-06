#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleInput : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleInput(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleInput") {}
    public:
        void* TakeRefusal() const { return Call("TakeRefusal", nullptr, 0); }
        bool Covers(int formation) const { void* args[] = { &formation }; return CallValue<bool>("Covers", args, 1); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        bool TryGetBox(void* min, void* max) const { void* args[] = { &min, &max }; return CallValue<bool>("TryGetBox", args, 2); }
        bool TryGetDragLine(void* a, void* b, bool& rotate) const { void* args[] = { &a, &b, &rotate }; return CallValue<bool>("TryGetDragLine", args, 3); }
        bool TryGetPendingLine(void* a, void* b, void* face) const { void* args[] = { &a, &b, &face }; return CallValue<bool>("TryGetPendingLine", args, 3); }
        bool TryGetDefencePath(void* path) const { void* args[] = { &path }; return CallValue<bool>("TryGetDefencePath", args, 1); }
        void* FacingForLine(void* a, void* b) const { void* args[] = { a, b }; return Call("FacingForLine", args, 2); }
        void ClearSelection() const { Call("ClearSelection", nullptr, 0); }
        void SelectFormation(int formation, bool additive) const { void* args[] = { &formation, &additive }; Call("SelectFormation", args, 2); }
        void DrillInto(int formation) const { void* args[] = { &formation }; Call("DrillInto", args, 1); }
        void Select(int battalion, bool additive) const { void* args[] = { &battalion, &additive }; Call("Select", args, 2); }
        void SelectDivision(int simDivision, bool additive) const { void* args[] = { &simDivision, &additive }; Call("SelectDivision", args, 2); }
        void SelectAllOwn() const { Call("SelectAllOwn", nullptr, 0); }
        void* WhyCannotOrder() const { return Call("WhyCannotOrder", nullptr, 0); }
        bool SelectionCanForm(int f) const { void* args[] = { &f }; return CallValue<bool>("SelectionCanForm", args, 1); }
        int SelectionFormation() const { return CallValue<int>("SelectionFormation", nullptr, 0); }
        void CmdHalt() const { Call("CmdHalt", nullptr, 0); }
        void CmdFormation(int f) const { void* args[] = { &f }; Call("CmdFormation", args, 1); }
        void CmdCycleFormation() const { Call("CmdCycleFormation", nullptr, 0); }
        void CmdRunToggle() const { Call("CmdRunToggle", nullptr, 0); }
        void CmdHoldFireToggle() const { Call("CmdHoldFireToggle", nullptr, 0); }
        void CmdFireControlCycle() const { Call("CmdFireControlCycle", nullptr, 0); }
        void CmdAggressionCycle() const { Call("CmdAggressionCycle", nullptr, 0); }
        uint8_t SelectionFireMode() const { return CallValue<uint8_t>("SelectionFireMode", nullptr, 0); }
        uint8_t SelectionAggression() const { return CallValue<uint8_t>("SelectionAggression", nullptr, 0); }
        void CmdCharge() const { Call("CmdCharge", nullptr, 0); }
        void CmdDefendTool() const { Call("CmdDefendTool", nullptr, 0); }
        void CmdWithdraw() const { Call("CmdWithdraw", nullptr, 0); }
        void CmdDigIn() const { Call("CmdDigIn", nullptr, 0); }
        bool SelectionRuns() const { return CallValue<bool>("SelectionRuns", nullptr, 0); }
        bool SelectionHoldsFire() const { return CallValue<bool>("SelectionHoldsFire", nullptr, 0); }
        void Update() const { Call("Update", nullptr, 0); }
        void* FaceTowards(void* a, void* b, void* at) const { void* args[] = { a, b, at }; return CallStatic("FaceTowards", args, 3); }
        void* FaceAt(void* enemy, void* at, void* dir) const { void* args[] = { enemy, at, dir }; return CallStatic("FaceAt", args, 3); }
        void* Selected() const { return ReadField<void*>("Selected"); }
        void* SelectedFormations() const { return ReadField<void*>("SelectedFormations"); }
        void* SelectedOffField() const { return ReadField<void*>("SelectedOffField"); }
        bool GroupsEnabled() const { return ReadField<bool>("GroupsEnabled"); }
        void SetGroupsEnabled(bool value) const { WriteField<bool>("GroupsEnabled", value); }
        void* blocks() const { return ReadField<void*>("blocks"); }
        void SetBlocks(void* value) const { WriteField<void*>("blocks", value); }
        void* forms() const { return ReadField<void*>("forms"); }
        void SetForms(void* value) const { WriteField<void*>("forms", value); }
        void* level() const { return ReadField<void*>("level"); }
        void SetLevel(void* value) const { WriteField<void*>("level", value); }
        int drilled() const { return ReadField<int>("drilled"); }
        void SetDrilled(int value) const { WriteField<int>("drilled", value); }
        int formation() const { return ReadField<int>("formation"); }
        void SetFormation(int value) const { WriteField<int>("formation", value); }
        int first() const { return ReadField<int>("first"); }
        void SetFirst(int value) const { WriteField<int>("first", value); }
        int count() const { return ReadField<int>("count"); }
        void SetCount(int value) const { WriteField<int>("count", value); }
    };
}
