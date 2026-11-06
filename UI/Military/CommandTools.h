#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class CommandTools : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CommandTools(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "CommandTools") {}
    public:
        void Deselect() const { Call("Deselect", nullptr, 0); }
        void SelectSlot(int slot) const { void* args[] = { &slot }; Call("SelectSlot", args, 1); }
        void TakeInHand(void* e, bool flyIfCurrent, bool additive = false) const { void* args[] = { e, &flyIfCurrent, &additive }; Call("TakeInHand", args, 3); }
        void Cycle(int step) const { void* args[] = { &step }; Call("Cycle", args, 1); }
        void AddSelectionToSlot(int slot) const { void* args[] = { &slot }; Call("AddSelectionToSlot", args, 1); }
        void* CommandName(void* e) const { void* args[] = { e }; return Call("CommandName", args, 1); }
        void FlyTo(void* e) const { void* args[] = { e }; Call("FlyTo", args, 1); }
        void FlyToTile(void* tile) const { void* args[] = { tile }; Call("FlyToTile", args, 1); }
        void FormArmy() const { Call("FormArmy", nullptr, 0); }
        void Fight(bool fromKey = false) const { void* args[] = { &fromKey }; Call("Fight", args, 1); }
        void HaltSelection() const { Call("HaltSelection", nullptr, 0); }
        void AddSelectionToArmy() const { Call("AddSelectionToArmy", nullptr, 0); }
        int NewcomersForArmyInHand() const { return CallValue<int>("NewcomersForArmyInHand", nullptr, 0); }
        void SetPush(void* level) const { void* args[] = { level }; Call("SetPush", args, 1); }
        void DefendAllBorders() const { Call("DefendAllBorders", nullptr, 0); }
        void DeleteFront() const { Call("DeleteFront", nullptr, 0); }
        void ClearLimit() const { Call("ClearLimit", nullptr, 0); }
        void ClearFallback() const { Call("ClearFallback", nullptr, 0); }
        void ToggleFront() const { Call("ToggleFront", nullptr, 0); }
        void ToggleLimit() const { Call("ToggleLimit", nullptr, 0); }
        void ToggleFallback() const { Call("ToggleFallback", nullptr, 0); }
        void Cancel() const { Call("Cancel", nullptr, 0); }
        void* ToolHint() const { return Call("ToolHint", nullptr, 0); }
        void* DeleteConfirm() const { return ReadField<void*>("DeleteConfirm"); }
    };
}
