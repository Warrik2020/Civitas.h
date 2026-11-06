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
        int FrontIdOf(int divisionId) const { void* args[] = { &divisionId }; return CallStaticValue<int>("FrontIdOf", args, 1); }
        bool FrontMaySail(int frontId, void* plan) const { void* args[] = { &frontId, plan }; return CallStaticValue<bool>("FrontMaySail", args, 2); }
        void KeepOnFront(int frontId, int divisionId) const { void* args[] = { &frontId, &divisionId }; CallStatic("KeepOnFront", args, 2); }
        bool MoveArmy(int armyId, int anchorArmyId, bool after) const { void* args[] = { &armyId, &anchorArmyId, &after }; return CallValue<bool>("MoveArmy", args, 3); }
        void ReleaseArmies() const { Call("ReleaseArmies", nullptr, 0); }
        void BeginRestore() const { Call("BeginRestore", nullptr, 0); }
        void RestoreArmy(int id, const char* name, int nationId, int frontId, void* divisionIds) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &id, managed_1, &nationId, &frontId, divisionIds }; Call("RestoreArmy", args, 5); }
        void RestoreFront(int id, const char* name, int nationId, void* targets, int push, int armyId, void* divisionIds, void* objective, void* fallback, int fallbackSide, void* section = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &id, managed_1, &nationId, targets, &push, &armyId, divisionIds, objective, fallback, &fallbackSide, section }; Call("RestoreFront", args, 11); }
        void EndRestore(int nextArmyId, int nextFrontId) const { void* args[] = { &nextArmyId, &nextFrontId }; Call("EndRestore", args, 2); }
        void* WholeFrontCovering(int targetNationId) const { void* args[] = { &targetNationId }; return Call("WholeFrontCovering", args, 1); }
        int PickNationAt(void* tilePos) const { void* args[] = { tilePos }; return CallValue<int>("PickNationAt", args, 1); }
        int SameStretchIn(void* set, void* pick) const { void* args[] = { set, pick }; return CallValue<int>("SameStretchIn", args, 2); }
        void* AddFront(void* picks) const { void* args[] = { picks }; return Call("AddFront", args, 1); }
        void SetPickPreview(void* picks, void* color) const { void* args[] = { picks, color }; Call("SetPickPreview", args, 2); }
        void SelectFront(int frontId) const { void* args[] = { &frontId }; Call("SelectFront", args, 1); }
        void* PickFrontAt(void* tilePos) const { void* args[] = { tilePos }; return Call("PickFrontAt", args, 1); }
        bool ScreenPointHitsFront(void* screen) const { void* args[] = { screen }; return CallStaticValue<bool>("ScreenPointHitsFront", args, 1); }
        void CollectBorderNations(void* into) const { void* args[] = { into }; Call("CollectBorderNations", args, 1); }
        void* FrontAgainst(int targetNationId) const { void* args[] = { &targetNationId }; return Call("FrontAgainst", args, 1); }
        void* FrontAgainst(void* targetNationIds) const { void* args[] = { targetNationIds }; return Call("FrontAgainst", args, 1); }
        void* FrontCovering(int targetNationId) const { void* args[] = { &targetNationId }; return Call("FrontCovering", args, 1); }
        void* AddFront(int targetNationId) const { void* args[] = { &targetNationId }; return Call("AddFront", args, 1); }
        void* AddFront(void* targetNationIds) const { void* args[] = { targetNationIds }; return Call("AddFront", args, 1); }
        void* TargetNames(void* front) const { void* args[] = { front }; return Call("TargetNames", args, 1); }
        void AssignDivisions(int frontId, void* divisionIds) const { void* args[] = { &frontId, divisionIds }; Call("AssignDivisions", args, 2); }
        void* GetArmy(int armyId) const { void* args[] = { &armyId }; return Call("GetArmy", args, 1); }
        bool TryGetArmyColor(int armyId, void* color) const { void* args[] = { &armyId, &color }; return CallStaticValue<bool>("TryGetArmyColor", args, 2); }
        void* CreateArmy(int nationId, void* divisionIds) const { void* args[] = { &nationId, divisionIds }; return Call("CreateArmy", args, 2); }
        void AddToArmy(int armyId, void* divisionIds) const { void* args[] = { &armyId, divisionIds }; Call("AddToArmy", args, 2); }
        void DissolveArmy(int armyId) const { void* args[] = { &armyId }; Call("DissolveArmy", args, 1); }
        bool RenameArmy(int armyId, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &armyId, managed_1 }; return CallValue<bool>("RenameArmy", args, 2); }
        int RemoveFromArmy(void* divisionIds) const { void* args[] = { divisionIds }; return CallValue<int>("RemoveFromArmy", args, 1); }
        void AttachArmyToFront(int armyId, int frontId) const { void* args[] = { &armyId, &frontId }; Call("AttachArmyToFront", args, 2); }
        void SetObjective(int frontId, void* worldLine) const { void* args[] = { &frontId, worldLine }; Call("SetObjective", args, 2); }
        void ClearObjective(int frontId) const { void* args[] = { &frontId }; Call("ClearObjective", args, 1); }
        void SetFallback(int frontId, void* worldLine) const { void* args[] = { &frontId, worldLine }; Call("SetFallback", args, 2); }
        void* AddLineFront(void* worldLine) const { void* args[] = { worldLine }; return Call("AddLineFront", args, 1); }
        void ClearFallback(int frontId) const { void* args[] = { &frontId }; Call("ClearFallback", args, 1); }
        void Detach(int divisionId) const { void* args[] = { &divisionId }; CallStatic("Detach", args, 1); }
        void SetPush(int frontId, void* push) const { void* args[] = { &frontId, push }; Call("SetPush", args, 2); }
        void RenameFront(int frontId, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &frontId, managed_1 }; Call("RenameFront", args, 2); }
        void RemoveFront(int frontId) const { void* args[] = { &frontId }; Call("RemoveFront", args, 1); }
        void DefendAllBorders() const { Call("DefendAllBorders", nullptr, 0); }
        void* FindFront(int frontId) const { void* args[] = { &frontId }; return Call("FindFront", args, 1); }
        void RefreshBalance(void* front) const { void* args[] = { front }; Call("RefreshBalance", args, 1); }
        void* FrontOf(int divisionId) const { void* args[] = { &divisionId }; return Call("FrontOf", args, 1); }
        void SetOverlaysVisible(bool visible) const { void* args[] = { &visible }; Call("SetOverlaysVisible", args, 1); }
        void SetPickPreview(int targetNationId, void* color = nullptr) const { void* args[] = { &targetNationId, color }; Call("SetPickPreview", args, 2); }
        void SetPickPreview(void* targetNationIds, void* color) const { void* args[] = { targetNationIds, color }; Call("SetPickPreview", args, 2); }
        bool Targets(int nationId) const { void* args[] = { &nationId }; return CallValue<bool>("Targets", args, 1); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        void* tile() const { return ReadField<void*>("tile"); }
        void SetTile(void* value) const { WriteField<void*>("tile", value); }
        void* section() const { return ReadField<void*>("section"); }
        void SetSection(void* value) const { WriteField<void*>("section", value); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int targetNationId() const { return ReadField<int>("targetNationId"); }
        void SetTargetNationId(int value) const { WriteField<int>("targetNationId", value); }
        void* targetNationIds() const { return ReadField<void*>("targetNationIds"); }
        void* push() const { return ReadField<void*>("push"); }
        void SetPush(void* value) const { WriteField<void*>("push", value); }
        int armyId() const { return ReadField<int>("armyId"); }
        void SetArmyId(int value) const { WriteField<int>("armyId", value); }
        void* divisionIds() const { return ReadField<void*>("divisionIds"); }
        void* line() const { return ReadField<void*>("line"); }
        void* lineBreaks() const { return ReadField<void*>("lineBreaks"); }
        int seenFrontVersion() const { return ReadField<int>("seenFrontVersion"); }
        void SetSeenFrontVersion(int value) const { WriteField<int>("seenFrontVersion", value); }
        int lastEvalTick() const { return ReadField<int>("lastEvalTick"); }
        void SetLastEvalTick(int value) const { WriteField<int>("lastEvalTick", value); }
        void* objective() const { return ReadField<void*>("objective"); }
        void SetObjective(void* value) const { WriteField<void*>("objective", value); }
        void* fallback() const { return ReadField<void*>("fallback"); }
        void SetFallback(void* value) const { WriteField<void*>("fallback", value); }
        int fallbackSide() const { return ReadField<int>("fallbackSide"); }
        void SetFallbackSide(int value) const { WriteField<int>("fallbackSide", value); }
        int fallbackPosts() const { return ReadField<int>("fallbackPosts"); }
        void SetFallbackPosts(int value) const { WriteField<int>("fallbackPosts", value); }
        int lastCaptured() const { return ReadField<int>("lastCaptured"); }
        void SetLastCaptured(int value) const { WriteField<int>("lastCaptured", value); }
        float ownPower() const { return ReadField<float>("ownPower"); }
        void SetOwnPower(float value) const { WriteField<float>("ownPower", value); }
        float foePower() const { return ReadField<float>("foePower"); }
        void SetFoePower(float value) const { WriteField<float>("foePower", value); }
        bool hasBalance() const { return ReadField<bool>("hasBalance"); }
        void SetHasBalance(bool value) const { WriteField<bool>("hasBalance", value); }
        float advantage() const { return ReadField<float>("advantage"); }
        void SetAdvantage(float value) const { WriteField<float>("advantage", value); }
        int losingSectors() const { return ReadField<int>("losingSectors"); }
        void SetLosingSectors(int value) const { WriteField<int>("losingSectors", value); }
        int contestedSectors() const { return ReadField<int>("contestedSectors"); }
        void SetContestedSectors(int value) const { WriteField<int>("contestedSectors", value); }
        int x0() const { return ReadField<int>("x0"); }
        void SetX0(int value) const { WriteField<int>("x0", value); }
        int y0() const { return ReadField<int>("y0"); }
        void SetY0(int value) const { WriteField<int>("y0", value); }
        int x1() const { return ReadField<int>("x1"); }
        void SetX1(int value) const { WriteField<int>("x1", value); }
        int y1() const { return ReadField<int>("y1"); }
        void SetY1(int value) const { WriteField<int>("y1", value); }
        void* edges() const { return ReadField<void*>("edges"); }
        void* members() const { return ReadField<void*>("members"); }
        void* box() const { return ReadField<void*>("box"); }
        int Count() const { return ReadField<int>("Count"); }
        void SetCount(int value) const { WriteField<int>("Count", value); }
        int tile() const { return ReadField<int>("tile"); }
        void SetTile(int value) const { WriteField<int>("tile", value); }
        void* f() const { return ReadField<void*>("f"); }
        void SetF(void* value) const { WriteField<void*>("f", value); }
        int foe() const { return ReadField<int>("foe"); }
        void SetFoe(int value) const { WriteField<int>("foe", value); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* color() const { return ReadField<void*>("color"); }
        void SetColor(void* value) const { WriteField<void*>("color", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        void* divisionIds() const { return ReadField<void*>("divisionIds"); }
        int frontId() const { return ReadField<int>("frontId"); }
        void SetFrontId(int value) const { WriteField<int>("frontId", value); }
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        void* outward() const { return ReadField<void*>("outward"); }
        void SetOutward(void* value) const { WriteField<void*>("outward", value); }
        int foe() const { return ReadField<int>("foe"); }
        void SetFoe(int value) const { WriteField<int>("foe", value); }
        void* d() const { return ReadField<void*>("d"); }
        void SetD(void* value) const { WriteField<void*>("d", value); }
        float t() const { return ReadField<float>("t"); }
        void SetT(float value) const { WriteField<float>("t", value); }
    };
}
