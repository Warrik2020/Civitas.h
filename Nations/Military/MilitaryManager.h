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
        void BookBattleCasualties(void* d, float manpowerLost) const { void* args[] = { d, &manpowerLost }; Call("BookBattleCasualties", args, 2); }
        void KeepPlayerArmies() const { Call("KeepPlayerArmies", nullptr, 0); }
        void CommandSoon() const { Call("CommandSoon", nullptr, 0); }
        void RestoreEncirclement(int divisionId, int ticks) const { void* args[] = { &divisionId, &ticks }; Call("RestoreEncirclement", args, 2); }
        bool DisbandDivision(int divisionId, const char*& reason) const { void* args[] = { &divisionId, &reason }; return CallValue<bool>("DisbandDivision", args, 2); }
        void MarkStartingDivision(int divisionId) const { void* args[] = { &divisionId }; Call("MarkStartingDivision", args, 1); }
        int ReleasePlayerHold(int nationId, bool dropFronts) const { void* args[] = { &nationId, &dropFronts }; return CallValue<int>("ReleasePlayerHold", args, 2); }
        void PreallocateGridArrays(void* grid) const { void* args[] = { grid }; Call("PreallocateGridArrays", args, 1); }
        void* CollectMarchers(int nationId) const { void* args[] = { &nationId }; return Call("CollectMarchers", args, 1); }
        void ResolvePeaceLeftovers() const { Call("ResolvePeaceLeftovers", nullptr, 0); }
        int RedistributeDivisions(int seniorId, void* members) const { void* args[] = { &seniorId, members }; return CallValue<int>("RedistributeDivisions", args, 2); }
        int GarrisonMembers(int rulerId, void* members, int perMember) const { void* args[] = { &rulerId, members, &perMember }; return CallValue<int>("GarrisonMembers", args, 3); }
        void RestoreLevyState(int divisionId, int raisedTick, int homeStateId, bool standingPin) const { void* args[] = { &divisionId, &raisedTick, &homeStateId, &standingPin }; Call("RestoreLevyState", args, 4); }
        void RestoreLogistics(int divisionId, float level) const { void* args[] = { &divisionId, &level }; Call("RestoreLogistics", args, 2); }
        void RestoreTemplateRevision(int divisionId, int revision) const { void* args[] = { &divisionId, &revision }; Call("RestoreTemplateRevision", args, 2); }
        void RestoreEstablishment(int divisionId, void* est) const { void* args[] = { &divisionId, est }; Call("RestoreEstablishment", args, 2); }
        void RestoreKitManifest(int divisionId, void* names, void* makers, void* designIds) const { void* args[] = { &divisionId, names, makers, designIds }; Call("RestoreKitManifest", args, 4); }
        bool SpawnPlayerDivision(int nationId, int type, void* musterTiles) const { void* args[] = { &nationId, &type, musterTiles }; return CallValue<bool>("SpawnPlayerDivision", args, 3); }
        bool SpawnPlayerDivision(int nationId, int type, void* musterTiles, int& divisionId) const { void* args[] = { &nationId, &type, musterTiles, &divisionId }; return CallValue<bool>("SpawnPlayerDivision", args, 4); }
        bool SpawnPlayerDivision(int nationId, int type, void* musterTiles, int& divisionId, void* failure) const { void* args[] = { &nationId, &type, musterTiles, &divisionId, &failure }; return CallValue<bool>("SpawnPlayerDivision", args, 5); }
        bool SpawnPlayerDivision(int nationId, int templateId, void* musterTiles, int& divisionId, void* failure, void* issue = nullptr) const { void* args[] = { &nationId, &templateId, musterTiles, &divisionId, &failure, issue }; return CallValue<bool>("SpawnPlayerDivision", args, 6); }
        bool PlaceScenarioDivision(int nationId, int type, void* pos, int ordinal, float org, float manpower, bool manualControl, void* facing, bool hasFacing) const { void* args[] = { &nationId, &type, pos, &ordinal, &org, &manpower, &manualControl, facing, &hasFacing }; return CallValue<bool>("PlaceScenarioDivision", args, 9); }
        bool PlaceScenarioDivision(int nationId, int type, void* pos, int ordinal, float org, float manpower, bool manualControl, void* facing, bool hasFacing, int& divisionId) const { void* args[] = { &nationId, &type, pos, &ordinal, &org, &manpower, &manualControl, facing, &hasFacing, &divisionId }; return CallValue<bool>("PlaceScenarioDivision", args, 10); }
        bool PlaceScenarioDivision(int nationId, int type, void* pos, int ordinal, float org, float manpower, bool manualControl, void* facing, bool hasFacing, int templateId, void* kit, int& divisionId, int strandedIn = -1, int incursionIn = -1, bool afloat = false) const { void* args[] = { &nationId, &type, pos, &ordinal, &org, &manpower, &manualControl, facing, &hasFacing, &templateId, kit, &divisionId, &strandedIn, &incursionIn, &afloat }; return CallValue<bool>("PlaceScenarioDivision", args, 15); }
        int DisbandAll(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("DisbandAll", args, 1); }
        bool DismissLevy(int divisionId, const char*& reason) const { void* args[] = { &divisionId, &reason }; return CallValue<bool>("DismissLevy", args, 2); }
        int DismissLevies(int nationId, bool overdueOnly) const { void* args[] = { &nationId, &overdueOnly }; return CallValue<int>("DismissLevies", args, 2); }
        int Disband(int nationId, int count) const { void* args[] = { &nationId, &count }; return CallValue<int>("Disband", args, 2); }
        float ContestFactor(void* n, void* holder, int tileIndex) const { void* args[] = { n, holder, &tileIndex }; return CallValue<float>("ContestFactor", args, 3); }
        bool IsAtWar(int nationA, int nationB) const { void* args[] = { &nationA, &nationB }; return CallValue<bool>("IsAtWar", args, 2); }
        void OnTileConquered(int winnerId, int loserId, int tileIndex) const { void* args[] = { &winnerId, &loserId, &tileIndex }; Call("OnTileConquered", args, 3); }
        void SetCombatFxVisible(bool on) const { void* args[] = { &on }; Call("SetCombatFxVisible", args, 1); }
        void SetWarAudioSet(const char* set) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(set ? set : "") : nullptr; void* args[] = { managed_0 }; Call("SetWarAudioSet", args, 1); }
        void SetArmiesVisible(bool visible) const { void* args[] = { &visible }; Call("SetArmiesVisible", args, 1); }
        void SetCounterIconStyle(bool on) const { void* args[] = { &on }; Call("SetCounterIconStyle", args, 1); }
        void SetCounterFlagStyle(bool on) const { void* args[] = { &on }; Call("SetCounterFlagStyle", args, 1); }
        void SetMegaArmyMerge(bool on) const { void* args[] = { &on }; Call("SetMegaArmyMerge", args, 1); }
        void SetOwnershipReadout(bool on) const { void* args[] = { &on }; Call("SetOwnershipReadout", args, 1); }
        void* NationColorOf(int id) const { void* args[] = { &id }; return Call("NationColorOf", args, 1); }
        void RefreshCounters() const { Call("RefreshCounters", nullptr, 0); }
        void RelocateDivision(void* d, void* tilePos) const { void* args[] = { d, tilePos }; Call("RelocateDivision", args, 2); }
        bool OrderIncursion(void* d, void* aim, void* why) const { void* args[] = { d, aim, &why }; return CallValue<bool>("OrderIncursion", args, 3); }
        void RecallIncursion(void* d) const { void* args[] = { d }; Call("RecallIncursion", args, 1); }
        int SendHomeFrom(int user, int host) const { void* args[] = { &user, &host }; return CallValue<int>("SendHomeFrom", args, 2); }
        void RefreshLockdownEffects() const { Call("RefreshLockdownEffects", nullptr, 0); }
        void* GetMilitary(int nationId) const { void* args[] = { &nationId }; return Call("GetMilitary", args, 1); }
        int TransferDivisions(int fromNationId, int toNationId) const { void* args[] = { &fromNationId, &toNationId }; return CallValue<int>("TransferDivisions", args, 2); }
        int TransferDivisions(int fromNationId, int toNationId, int count, void* onlyType, void* only = nullptr) const { void* args[] = { &fromNationId, &toNationId, &count, onlyType, only }; return CallValue<int>("TransferDivisions", args, 5); }
        void* GetDivisionById(int id) const { void* args[] = { &id }; return Call("GetDivisionById", args, 1); }
        void* GroupPartnerOf(void* d) const { void* args[] = { d }; return Call("GroupPartnerOf", args, 1); }
        bool GroupDivisions(int aId, int bId) const { void* args[] = { &aId, &bId }; return CallValue<bool>("GroupDivisions", args, 2); }
        void UngroupDivision(int id) const { void* args[] = { &id }; Call("UngroupDivision", args, 1); }
        void* DivisionsOf(int nationId) const { void* args[] = { &nationId }; return Call("DivisionsOf", args, 1); }
        bool IsCutOff(int nationId, int tileIndex) const { void* args[] = { &nationId, &tileIndex }; return CallValue<bool>("IsCutOff", args, 2); }
        int SupplyComponentAt(int nationId, int tileIndex) const { void* args[] = { &nationId, &tileIndex }; return CallValue<int>("SupplyComponentAt", args, 2); }
        void RaiseDivisionsNow(int nationId, int count) const { void* args[] = { &nationId, &count }; Call("RaiseDivisionsNow", args, 2); }
        void RaiseDivisionsNow(int nationId, void* types) const { void* args[] = { &nationId, types }; Call("RaiseDivisionsNow", args, 2); }
        bool BookGroundLosses() const { return ReadStaticField<bool>("BookGroundLosses"); }
        void SetBookGroundLosses(bool value) const { WriteStaticField<bool>("BookGroundLosses", value); }
    };
}
