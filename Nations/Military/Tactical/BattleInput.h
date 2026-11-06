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
        bool Covers(int formation) const { void* __callArgs[] = { &formation }; return CallValue<bool>("Covers", __callArgs, 1); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        bool TryGetBox(void* min_, void* max_) const { void* __callArgs[] = { &min_, &max_ }; return CallValue<bool>("TryGetBox", __callArgs, 2); }
        bool TryGetDragLine(void* a, void* b, bool& rotate) const { void* __callArgs[] = { &a, &b, &rotate }; return CallValue<bool>("TryGetDragLine", __callArgs, 3); }
        bool TryGetPendingLine(void* a, void* b, void* face) const { void* __callArgs[] = { &a, &b, &face }; return CallValue<bool>("TryGetPendingLine", __callArgs, 3); }
        bool TryGetDefencePath(void* path) const { void* __callArgs[] = { &path }; return CallValue<bool>("TryGetDefencePath", __callArgs, 1); }
        void* FacingForLine(void* a, void* b) const { void* __callArgs[] = { a, b }; return Call("FacingForLine", __callArgs, 2); }
        void ClearSelection() const { Call("ClearSelection", nullptr, 0); }
        void SelectFormation(int formation, bool additive) const { void* __callArgs[] = { &formation, &additive }; Call("SelectFormation", __callArgs, 2); }
        void DrillInto(int formation) const { void* __callArgs[] = { &formation }; Call("DrillInto", __callArgs, 1); }
        void Select(int battalion, bool additive) const { void* __callArgs[] = { &battalion, &additive }; Call("Select", __callArgs, 2); }
        void SelectDivision(int simDivision, bool additive) const { void* __callArgs[] = { &simDivision, &additive }; Call("SelectDivision", __callArgs, 2); }
        void SelectAllOwn() const { Call("SelectAllOwn", nullptr, 0); }
        void* WhyCannotOrder() const { return Call("WhyCannotOrder", nullptr, 0); }
        bool SelectionCanForm(int f) const { void* __callArgs[] = { &f }; return CallValue<bool>("SelectionCanForm", __callArgs, 1); }
        int SelectionFormation() const { return CallValue<int>("SelectionFormation", nullptr, 0); }
        void CmdHalt() const { Call("CmdHalt", nullptr, 0); }
        void CmdFormation(int f) const { void* __callArgs[] = { &f }; Call("CmdFormation", __callArgs, 1); }
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
        void* FaceTowards(void* a, void* b, void* at) const { void* __callArgs[] = { a, b, at }; return CallStatic("FaceTowards", __callArgs, 3); }
        void* FaceAt(void* enemy, void* at, void* dir) const { void* __callArgs[] = { enemy, at, dir }; return CallStatic("FaceAt", __callArgs, 3); }
        void* Selected() const { return ReadField<void*>("Selected"); }
        void* SelectedFormations() const { return ReadField<void*>("SelectedFormations"); }
        void* SelectedOffField() const { return ReadField<void*>("SelectedOffField"); }
        bool GroupsEnabled() const { return ReadField<bool>("GroupsEnabled"); }
        void GroupsEnabled(bool value) const { WriteField<bool>("GroupsEnabled", value); }
    };
}
