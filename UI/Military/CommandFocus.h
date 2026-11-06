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
        void FocusArmy(int armyId) const { void* args[] = { &armyId }; CallStatic("FocusArmy", args, 1); }
        void FocusGroup(int groupId) const { void* args[] = { &groupId }; CallStatic("FocusGroup", args, 1); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void ResetForScene() const { CallStatic("ResetForScene", nullptr, 0); }
        void OnMapSelection() const { CallStatic("OnMapSelection", nullptr, 0); }
        bool IsInHand(void* a) const { void* args[] = { a }; return CallStaticValue<bool>("IsInHand", args, 1); }
        bool IsInHand(void* g) const { void* args[] = { g }; return CallStaticValue<bool>("IsInHand", args, 1); }
        void CollectArmies(void* into) const { void* args[] = { into }; CallStatic("CollectArmies", args, 1); }
        void CollectRoster(void* a, void* into) const { void* args[] = { a, into }; CallStatic("CollectRoster", args, 2); }
        void CollectGroupRoster(void* g, void* into) const { void* args[] = { g, into }; CallStatic("CollectGroupRoster", args, 2); }
        void CollectLoose(void* into) const { void* args[] = { into }; CallStatic("CollectLoose", args, 1); }
        void TakeArmy(void* a, bool additive) const { void* args[] = { a, &additive }; CallStatic("TakeArmy", args, 2); }
        void TakeGroup(void* g, bool additive) const { void* args[] = { g, &additive }; CallStatic("TakeGroup", args, 2); }
        void FlyTo(void* a) const { void* args[] = { a }; CallStatic("FlyTo", args, 1); }
        void FlyTo(void* g) const { void* args[] = { g }; CallStatic("FlyTo", args, 1); }
        void SelectSlot(int slot) const { void* args[] = { &slot }; CallStatic("SelectSlot", args, 1); }
        void AddSelectionToSlot(int slot) const { void* args[] = { &slot }; CallStatic("AddSelectionToSlot", args, 1); }
        void AddSelectionTo(void* a) const { void* args[] = { a }; CallStatic("AddSelectionTo", args, 1); }
        void Cycle(int step) const { void* args[] = { &step }; CallStatic("Cycle", args, 1); }
        void FormArmy(bool includeArmied) const { void* args[] = { &includeArmied }; CallStatic("FormArmy", args, 1); }
    };
}
