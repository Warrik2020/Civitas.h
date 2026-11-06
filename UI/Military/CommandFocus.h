#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Military
{
    class CommandFocus : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CommandFocus(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Military", "CommandFocus") {}
    public:
        void FocusArmy(int armyId) const { void* __callArgs[] = { &armyId }; CallStatic("FocusArmy", __callArgs, 1); }
        void FocusGroup(int groupId) const { void* __callArgs[] = { &groupId }; CallStatic("FocusGroup", __callArgs, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void ResetForScene() const { CallStatic("ResetForScene", nullptr, 0); }
        void OnMapSelection() const { CallStatic("OnMapSelection", nullptr, 0); }
        bool IsInHand(void* a) const { void* __callArgs[] = { a }; return CallStaticValue<bool>("IsInHand", __callArgs, 1); }
        bool IsInHandOverload6(void* g) const { void* __callArgs[] = { g }; return CallStaticValue<bool>("IsInHand", __callArgs, 1); }
        void CollectArmies(void* into) const { void* __callArgs[] = { into }; CallStatic("CollectArmies", __callArgs, 1); }
        void CollectRoster(void* a, void* into) const { void* __callArgs[] = { a, into }; CallStatic("CollectRoster", __callArgs, 2); }
        void CollectGroupRoster(void* g, void* into) const { void* __callArgs[] = { g, into }; CallStatic("CollectGroupRoster", __callArgs, 2); }
        void CollectLoose(void* into) const { void* __callArgs[] = { into }; CallStatic("CollectLoose", __callArgs, 1); }
        void TakeArmy(void* a, bool additive) const { void* __callArgs[] = { a, &additive }; CallStatic("TakeArmy", __callArgs, 2); }
        void TakeGroup(void* g, bool additive) const { void* __callArgs[] = { g, &additive }; CallStatic("TakeGroup", __callArgs, 2); }
        void FlyTo(void* a) const { void* __callArgs[] = { a }; CallStatic("FlyTo", __callArgs, 1); }
        void FlyToOverload14(void* g) const { void* __callArgs[] = { g }; CallStatic("FlyTo", __callArgs, 1); }
        void SelectSlot(int slot) const { void* __callArgs[] = { &slot }; CallStatic("SelectSlot", __callArgs, 1); }
        void AddSelectionToSlot(int slot) const { void* __callArgs[] = { &slot }; CallStatic("AddSelectionToSlot", __callArgs, 1); }
        void AddSelectionTo(void* a) const { void* __callArgs[] = { a }; CallStatic("AddSelectionTo", __callArgs, 1); }
        void Cycle(int step) const { void* __callArgs[] = { &step }; CallStatic("Cycle", __callArgs, 1); }
        void FormArmy(bool includeArmied) const { void* __callArgs[] = { &includeArmied }; CallStatic("FormArmy", __callArgs, 1); }
    };
}
