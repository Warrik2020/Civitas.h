#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class MilitaryManager : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MilitaryManager(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "MilitaryManager") {}
    public:
        void BookBattleCasualties(void* d, float manpowerLost) const { void* __callArgs[] = { d, &manpowerLost }; Call("BookBattleCasualties", __callArgs, 2); }
        void KeepPlayerArmies() const { Call("KeepPlayerArmies", nullptr, 0); }
        void CommandSoon() const { Call("CommandSoon", nullptr, 0); }
        void RestoreEncirclement(int divisionId, int ticks) const { void* __callArgs[] = { &divisionId, &ticks }; Call("RestoreEncirclement", __callArgs, 2); }
        bool DisbandDivision(int divisionId, const char*& reason) const { void* __callArgs[] = { &divisionId, &reason }; return CallValue<bool>("DisbandDivision", __callArgs, 2); }
        void MarkStartingDivision(int divisionId) const { void* __callArgs[] = { &divisionId }; Call("MarkStartingDivision", __callArgs, 1); }
        int ReleasePlayerHold(int nationId, bool dropFronts) const { void* __callArgs[] = { &nationId, &dropFronts }; return CallValue<int>("ReleasePlayerHold", __callArgs, 2); }
        void PreallocateGridArrays(void* grid) const { void* __callArgs[] = { grid }; Call("PreallocateGridArrays", __callArgs, 1); }
        void* CollectMarchers(int nationId) const { void* __callArgs[] = { &nationId }; return Call("CollectMarchers", __callArgs, 1); }
        void ResolvePeaceLeftovers() const { Call("ResolvePeaceLeftovers", nullptr, 0); }
        int RedistributeDivisions(int seniorId, void* members) const { void* __callArgs[] = { &seniorId, members }; return CallValue<int>("RedistributeDivisions", __callArgs, 2); }
        int GarrisonMembers(int rulerId, void* members, int perMember) const { void* __callArgs[] = { &rulerId, members, &perMember }; return CallValue<int>("GarrisonMembers", __callArgs, 3); }
        void RestoreLevyState(int divisionId, int raisedTick, int homeStateId, bool standingPin) const { void* __callArgs[] = { &divisionId, &raisedTick, &homeStateId, &standingPin }; Call("RestoreLevyState", __callArgs, 4); }
        void RestoreLogistics(int divisionId, float level) const { void* __callArgs[] = { &divisionId, &level }; Call("RestoreLogistics", __callArgs, 2); }
        void RestoreTemplateRevision(int divisionId, int revision) const { void* __callArgs[] = { &divisionId, &revision }; Call("RestoreTemplateRevision", __callArgs, 2); }
        void RestoreEstablishment(int divisionId, void* est) const { void* __callArgs[] = { &divisionId, est }; Call("RestoreEstablishment", __callArgs, 2); }
        void RestoreKitManifest(int divisionId, void* names, void* makers, void* designIds) const { void* __callArgs[] = { &divisionId, names, makers, designIds }; Call("RestoreKitManifest", __callArgs, 4); }
        bool SpawnPlayerDivision(int nationId, int type, void* musterTiles) const { void* __callArgs[] = { &nationId, &type, musterTiles }; return CallValue<bool>("SpawnPlayerDivision", __callArgs, 3); }
        bool SpawnPlayerDivision(int nationId, int type, void* musterTiles, int& divisionId) const { void* __callArgs[] = { &nationId, &type, musterTiles, &divisionId }; return CallValue<bool>("SpawnPlayerDivision", __callArgs, 4); }
        bool SpawnPlayerDivision(int nationId, int type, void* musterTiles, int& divisionId, void* failure) const { void* __callArgs[] = { &nationId, &type, musterTiles, &divisionId, &failure }; return CallValue<bool>("SpawnPlayerDivision", __callArgs, 5); }
        bool SpawnPlayerDivision(int nationId, int templateId, void* musterTiles, int& divisionId, void* failure, void* issue = nullptr) const { void* __callArgs[] = { &nationId, &templateId, musterTiles, &divisionId, &failure, issue }; return CallValue<bool>("SpawnPlayerDivision", __callArgs, 6); }
        bool PlaceScenarioDivision(int nationId, int type, void* pos, int ordinal, float org, float manpower, bool manualControl, void* facing, bool hasFacing) const { void* __callArgs[] = { &nationId, &type, pos, &ordinal, &org, &manpower, &manualControl, facing, &hasFacing }; return CallValue<bool>("PlaceScenarioDivision", __callArgs, 9); }
        bool PlaceScenarioDivision(int nationId, int type, void* pos, int ordinal, float org, float manpower, bool manualControl, void* facing, bool hasFacing, int& divisionId) const { void* __callArgs[] = { &nationId, &type, pos, &ordinal, &org, &manpower, &manualControl, facing, &hasFacing, &divisionId }; return CallValue<bool>("PlaceScenarioDivision", __callArgs, 10); }
        bool PlaceScenarioDivision(int nationId, int type, void* pos, int ordinal, float org, float manpower, bool manualControl, void* facing, bool hasFacing, int templateId, void* kit, int& divisionId, int strandedIn = -1, int incursionIn = -1, bool afloat = false) const { void* __callArgs[] = { &nationId, &type, pos, &ordinal, &org, &manpower, &manualControl, facing, &hasFacing, &templateId, kit, &divisionId, &strandedIn, &incursionIn, &afloat }; return CallValue<bool>("PlaceScenarioDivision", __callArgs, 15); }
        int DisbandAll(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("DisbandAll", __callArgs, 1); }
        bool DismissLevy(int divisionId, const char*& reason) const { void* __callArgs[] = { &divisionId, &reason }; return CallValue<bool>("DismissLevy", __callArgs, 2); }
        int DismissLevies(int nationId, bool overdueOnly) const { void* __callArgs[] = { &nationId, &overdueOnly }; return CallValue<int>("DismissLevies", __callArgs, 2); }
        int Disband(int nationId, int count) const { void* __callArgs[] = { &nationId, &count }; return CallValue<int>("Disband", __callArgs, 2); }
        float ContestFactor(void* n, void* holder, int tileIndex) const { void* __callArgs[] = { n, holder, &tileIndex }; return CallValue<float>("ContestFactor", __callArgs, 3); }
        bool IsAtWar(int nationA, int nationB) const { void* __callArgs[] = { &nationA, &nationB }; return CallValue<bool>("IsAtWar", __callArgs, 2); }
        void OnTileConquered(int winnerId, int loserId, int tileIndex) const { void* __callArgs[] = { &winnerId, &loserId, &tileIndex }; Call("OnTileConquered", __callArgs, 3); }
        void SetCombatFxVisible(bool on) const { void* __callArgs[] = { &on }; Call("SetCombatFxVisible", __callArgs, 1); }
        void SetWarAudioSet(const char* set) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(set ? set : "") : nullptr; void* __callArgs[] = { managed_0 }; Call("SetWarAudioSet", __callArgs, 1); }
        void SetArmiesVisible(bool visible) const { void* __callArgs[] = { &visible }; Call("SetArmiesVisible", __callArgs, 1); }
        void SetCounterIconStyle(bool on) const { void* __callArgs[] = { &on }; Call("SetCounterIconStyle", __callArgs, 1); }
        void SetCounterFlagStyle(bool on) const { void* __callArgs[] = { &on }; Call("SetCounterFlagStyle", __callArgs, 1); }
        void SetMegaArmyMerge(bool on) const { void* __callArgs[] = { &on }; Call("SetMegaArmyMerge", __callArgs, 1); }
        void SetOwnershipReadout(bool on) const { void* __callArgs[] = { &on }; Call("SetOwnershipReadout", __callArgs, 1); }
        void* NationColorOf(int id) const { void* __callArgs[] = { &id }; return Call("NationColorOf", __callArgs, 1); }
        void RefreshCounters() const { Call("RefreshCounters", nullptr, 0); }
        void RelocateDivision(void* d, void* tilePos) const { void* __callArgs[] = { d, tilePos }; Call("RelocateDivision", __callArgs, 2); }
        bool OrderIncursion(void* d, void* aim, void* why) const { void* __callArgs[] = { d, aim, &why }; return CallValue<bool>("OrderIncursion", __callArgs, 3); }
        void RecallIncursion(void* d) const { void* __callArgs[] = { d }; Call("RecallIncursion", __callArgs, 1); }
        int SendHomeFrom(int user, int host) const { void* __callArgs[] = { &user, &host }; return CallValue<int>("SendHomeFrom", __callArgs, 2); }
        void RefreshLockdownEffects() const { Call("RefreshLockdownEffects", nullptr, 0); }
        void* GetMilitary(int nationId) const { void* __callArgs[] = { &nationId }; return Call("GetMilitary", __callArgs, 1); }
        int TransferDivisions(int fromNationId, int toNationId) const { void* __callArgs[] = { &fromNationId, &toNationId }; return CallValue<int>("TransferDivisions", __callArgs, 2); }
        int TransferDivisions(int fromNationId, int toNationId, int count, void* onlyType, void* only = nullptr) const { void* __callArgs[] = { &fromNationId, &toNationId, &count, onlyType, only }; return CallValue<int>("TransferDivisions", __callArgs, 5); }
        void* GetDivisionById(int id) const { void* __callArgs[] = { &id }; return Call("GetDivisionById", __callArgs, 1); }
        void* GroupPartnerOf(void* d) const { void* __callArgs[] = { d }; return Call("GroupPartnerOf", __callArgs, 1); }
        bool GroupDivisions(int aId, int bId) const { void* __callArgs[] = { &aId, &bId }; return CallValue<bool>("GroupDivisions", __callArgs, 2); }
        void UngroupDivision(int id) const { void* __callArgs[] = { &id }; Call("UngroupDivision", __callArgs, 1); }
        void* DivisionsOf(int nationId) const { void* __callArgs[] = { &nationId }; return Call("DivisionsOf", __callArgs, 1); }
        bool IsCutOff(int nationId, int tileIndex) const { void* __callArgs[] = { &nationId, &tileIndex }; return CallValue<bool>("IsCutOff", __callArgs, 2); }
        int SupplyComponentAt(int nationId, int tileIndex) const { void* __callArgs[] = { &nationId, &tileIndex }; return CallValue<int>("SupplyComponentAt", __callArgs, 2); }
        void RaiseDivisionsNow(int nationId, int count) const { void* __callArgs[] = { &nationId, &count }; Call("RaiseDivisionsNow", __callArgs, 2); }
        void RaiseDivisionsNow(int nationId, void* types) const { void* __callArgs[] = { &nationId, types }; Call("RaiseDivisionsNow", __callArgs, 2); }
        bool BookGroundLosses() const { return ReadStaticField<bool>("BookGroundLosses"); }
        void BookGroundLosses(bool value) const { WriteStaticField<bool>("BookGroundLosses", value); }
    };
}
