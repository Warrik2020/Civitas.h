#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Player
{
    class PlayerFrontlineManager : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PlayerFrontlineManager(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Player", "PlayerFrontlineManager") {}
    public:
        int FrontIdOf(int divisionId) const { void* __callArgs[] = { &divisionId }; return CallStaticValue<int>("FrontIdOf", __callArgs, 1); }
        bool FrontMaySail(int frontId, void* plan) const { void* __callArgs[] = { &frontId, plan }; return CallStaticValue<bool>("FrontMaySail", __callArgs, 2); }
        void KeepOnFront(int frontId, int divisionId) const { void* __callArgs[] = { &frontId, &divisionId }; CallStatic("KeepOnFront", __callArgs, 2); }
        bool MoveArmy(int armyId, int anchorArmyId, bool after) const { void* __callArgs[] = { &armyId, &anchorArmyId, &after }; return CallValue<bool>("MoveArmy", __callArgs, 3); }
        void ReleaseArmies() const { Call("ReleaseArmies", nullptr, 0); }
        void BeginRestore() const { Call("BeginRestore", nullptr, 0); }
        void RestoreArmy(int id, const char* name, int nationId, int frontId, void* divisionIds) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &id, managed_1, &nationId, &frontId, divisionIds }; Call("RestoreArmy", __callArgs, 5); }
        void RestoreFront(int id, const char* name, int nationId, void* targets, int push, int armyId, void* divisionIds, void* objective, void* fallback, int fallbackSide, void* section = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &id, managed_1, &nationId, targets, &push, &armyId, divisionIds, objective, fallback, &fallbackSide, section }; Call("RestoreFront", __callArgs, 11); }
        void EndRestore(int nextArmyId, int nextFrontId) const { void* __callArgs[] = { &nextArmyId, &nextFrontId }; Call("EndRestore", __callArgs, 2); }
        void* WholeFrontCovering(int targetNationId) const { void* __callArgs[] = { &targetNationId }; return Call("WholeFrontCovering", __callArgs, 1); }
        int PickNationAt(void* tilePos) const { void* __callArgs[] = { tilePos }; return CallValue<int>("PickNationAt", __callArgs, 1); }
        int SameStretchIn(void* set, void* pick) const { void* __callArgs[] = { set, pick }; return CallValue<int>("SameStretchIn", __callArgs, 2); }
        void* AddFront(void* picks) const { void* __callArgs[] = { picks }; return Call("AddFront", __callArgs, 1); }
        void SetPickPreview(void* picks, void* color) const { void* __callArgs[] = { picks, color }; Call("SetPickPreview", __callArgs, 2); }
        void SelectFront(int frontId) const { void* __callArgs[] = { &frontId }; Call("SelectFront", __callArgs, 1); }
        void* PickFrontAt(void* tilePos) const { void* __callArgs[] = { tilePos }; return Call("PickFrontAt", __callArgs, 1); }
        bool ScreenPointHitsFront(void* screen) const { void* __callArgs[] = { screen }; return CallStaticValue<bool>("ScreenPointHitsFront", __callArgs, 1); }
        void CollectBorderNations(void* into) const { void* __callArgs[] = { into }; Call("CollectBorderNations", __callArgs, 1); }
        void* FrontAgainst(int targetNationId) const { void* __callArgs[] = { &targetNationId }; return Call("FrontAgainst", __callArgs, 1); }
        void* FrontAgainst(void* targetNationIds) const { void* __callArgs[] = { targetNationIds }; return Call("FrontAgainst", __callArgs, 1); }
        void* FrontCovering(int targetNationId) const { void* __callArgs[] = { &targetNationId }; return Call("FrontCovering", __callArgs, 1); }
        void* AddFront(int targetNationId) const { void* __callArgs[] = { &targetNationId }; return Call("AddFront", __callArgs, 1); }
        void* AddFrontOverload22(void* targetNationIds) const { void* __callArgs[] = { targetNationIds }; return Call("AddFront", __callArgs, 1); }
        void* TargetNames(void* front) const { void* __callArgs[] = { front }; return Call("TargetNames", __callArgs, 1); }
        void AssignDivisions(int frontId, void* divisionIds) const { void* __callArgs[] = { &frontId, divisionIds }; Call("AssignDivisions", __callArgs, 2); }
        void* GetArmy(int armyId) const { void* __callArgs[] = { &armyId }; return Call("GetArmy", __callArgs, 1); }
        bool TryGetArmyColor(int armyId, void* color) const { void* __callArgs[] = { &armyId, &color }; return CallStaticValue<bool>("TryGetArmyColor", __callArgs, 2); }
        void* CreateArmy(int nationId, void* divisionIds) const { void* __callArgs[] = { &nationId, divisionIds }; return Call("CreateArmy", __callArgs, 2); }
        void AddToArmy(int armyId, void* divisionIds) const { void* __callArgs[] = { &armyId, divisionIds }; Call("AddToArmy", __callArgs, 2); }
        void DissolveArmy(int armyId) const { void* __callArgs[] = { &armyId }; Call("DissolveArmy", __callArgs, 1); }
        bool RenameArmy(int armyId, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &armyId, managed_1 }; return CallValue<bool>("RenameArmy", __callArgs, 2); }
        int RemoveFromArmy(void* divisionIds) const { void* __callArgs[] = { divisionIds }; return CallValue<int>("RemoveFromArmy", __callArgs, 1); }
        void AttachArmyToFront(int armyId, int frontId) const { void* __callArgs[] = { &armyId, &frontId }; Call("AttachArmyToFront", __callArgs, 2); }
        void SetObjective(int frontId, void* worldLine) const { void* __callArgs[] = { &frontId, worldLine }; Call("SetObjective", __callArgs, 2); }
        void ClearObjective(int frontId) const { void* __callArgs[] = { &frontId }; Call("ClearObjective", __callArgs, 1); }
        void SetFallback(int frontId, void* worldLine) const { void* __callArgs[] = { &frontId, worldLine }; Call("SetFallback", __callArgs, 2); }
        void* AddLineFront(void* worldLine) const { void* __callArgs[] = { worldLine }; return Call("AddLineFront", __callArgs, 1); }
        void ClearFallback(int frontId) const { void* __callArgs[] = { &frontId }; Call("ClearFallback", __callArgs, 1); }
        void Detach(int divisionId) const { void* __callArgs[] = { &divisionId }; CallStatic("Detach", __callArgs, 1); }
        void SetPush(int frontId, void* push) const { void* __callArgs[] = { &frontId, push }; Call("SetPush", __callArgs, 2); }
        void RenameFront(int frontId, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &frontId, managed_1 }; Call("RenameFront", __callArgs, 2); }
        void RemoveFront(int frontId) const { void* __callArgs[] = { &frontId }; Call("RemoveFront", __callArgs, 1); }
        void DefendAllBorders() const { Call("DefendAllBorders", nullptr, 0); }
        void* FindFront(int frontId) const { void* __callArgs[] = { &frontId }; return Call("FindFront", __callArgs, 1); }
        void RefreshBalance(void* front) const { void* __callArgs[] = { front }; Call("RefreshBalance", __callArgs, 1); }
        void* FrontOf(int divisionId) const { void* __callArgs[] = { &divisionId }; return Call("FrontOf", __callArgs, 1); }
        void SetOverlaysVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetOverlaysVisible", __callArgs, 1); }
        void SetPickPreview(int targetNationId, void* color = nullptr) const { void* __callArgs[] = { &targetNationId, color }; Call("SetPickPreview", __callArgs, 2); }
        void SetPickPreviewOverload48(void* targetNationIds, void* color) const { void* __callArgs[] = { targetNationIds, color }; Call("SetPickPreview", __callArgs, 2); }
    };
}
