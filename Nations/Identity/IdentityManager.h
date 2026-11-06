#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityManager : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityManager(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityManager") {}
    public:
        int SettleNewcomers(void* tiles, int ownerId, int origin, float share) const { void* __callArgs[] = { tiles, &ownerId, &origin, &share }; return CallValue<int>("SettleNewcomers", __callArgs, 4); }
        bool AssignTile(int nationId, int tile, int axis, int groupId) const { void* __callArgs[] = { &nationId, &tile, &axis, &groupId }; return CallValue<bool>("AssignTile", __callArgs, 4); }
        bool UnassignTile(int nationId, int tile, int axis) const { void* __callArgs[] = { &nationId, &tile, &axis }; return CallValue<bool>("UnassignTile", __callArgs, 3); }
        int AssignedRootAt(int nationId, int tile, int axis) const { void* __callArgs[] = { &nationId, &tile, &axis }; return CallValue<int>("AssignedRootAt", __callArgs, 3); }
        int AssimilatorAt(int nationId, int tile, int axis) const { void* __callArgs[] = { &nationId, &tile, &axis }; return CallValue<int>("AssimilatorAt", __callArgs, 3); }
        int AssignedTileCount(int nationId, int axis, int groupId) const { void* __callArgs[] = { &nationId, &axis, &groupId }; return CallValue<int>("AssignedTileCount", __callArgs, 3); }
        int AssignedTileCount(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return CallValue<int>("AssignedTileCount", __callArgs, 2); }
        int ClearAssignments(int nationId, int axis, int groupId = -1) const { void* __callArgs[] = { &nationId, &axis, &groupId }; return CallValue<int>("ClearAssignments", __callArgs, 3); }
        void* AssignedTilesOf(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return Call("AssignedTilesOf", __callArgs, 2); }
        void ExportAssignments(void* write) const { void* __callArgs[] = { write }; Call("ExportAssignments", __callArgs, 1); }
        void RestoreAssignment(int nationId, int axis, int tile, int groupId) const { void* __callArgs[] = { &nationId, &axis, &tile, &groupId }; Call("RestoreAssignment", __callArgs, 4); }
        void* LastBranchOf(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return Call("LastBranchOf", __callArgs, 2); }
        int NextBranchTick(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return CallValue<int>("NextBranchTick", __callArgs, 2); }
        void* BranchNameFor(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return Call("BranchNameFor", __callArgs, 2); }
        void* FoundBranch(int nationId, int axis, const char* name = nullptr) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &nationId, &axis, managed_2 }; return Call("FoundBranch", __callArgs, 3); }
        void* ConversionOf(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return Call("ConversionOf", __callArgs, 2); }
        void RankStatesForConversion(int nationId, void* dst) const { void* __callArgs[] = { &nationId, dst }; Call("RankStatesForConversion", __callArgs, 2); }
        int StartConversion(int nationId, int axis, int fromRoot, int toRoot, void* rankedStates) const { void* __callArgs[] = { &nationId, &axis, &fromRoot, &toRoot, rankedStates }; return CallValue<int>("StartConversion", __callArgs, 5); }
        void ClearConversions() const { Call("ClearConversions", nullptr, 0); }
        void RestoreConversion(void* o) const { void* __callArgs[] = { o }; Call("RestoreConversion", __callArgs, 1); }
        void* LedgerFor(int axis) const { void* __callArgs[] = { &axis }; return Call("LedgerFor", __callArgs, 1); }
        void RestoreCradle(int axis, int groupId, int untilWorldTick, void* tiles) const { void* __callArgs[] = { &axis, &groupId, &untilWorldTick, tiles }; Call("RestoreCradle", __callArgs, 4); }
        void* CreateMixedGroup(int axis, void* parentRoots, const char* name, int anchorTile, uint8_t origin, int forgedBy, const char* landName) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* managed_6 = Api() && Api()->NewString ? Api()->NewString(landName ? landName : "") : nullptr; void* __callArgs[] = { &axis, parentRoots, managed_2, &anchorTile, &origin, &forgedBy, managed_6 }; return Call("CreateMixedGroup", __callArgs, 7); }
        uint8_t MixOpennessOf(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return CallValue<uint8_t>("MixOpennessOf", __callArgs, 2); }
        bool PersecutesOn(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return CallValue<bool>("PersecutesOn", __callArgs, 2); }
        void FormingIn(int nationId, void* dst, int max_ = 8) const { void* __callArgs[] = { &nationId, dst, &max_ }; Call("FormingIn", __callArgs, 3); }
        void RecentBirths(int nationId, float years, void* dst) const { void* __callArgs[] = { &nationId, &years, dst }; Call("RecentBirths", __callArgs, 3); }
        int FamilyOf(int groupId) const { void* __callArgs[] = { &groupId }; return CallValue<int>("FamilyOf", __callArgs, 1); }
        void SetGroupFamily(int groupId, int familyId) const { void* __callArgs[] = { &groupId, &familyId }; Call("SetGroupFamily", __callArgs, 2); }
        void RestoreGroupMeta(int groupId, int familyId, void* lineage, void* lineageNames, uint8_t origin, uint8_t generation, int bornWorldTick, int forgedBy, const char* landName) const { void* managed_8 = Api() && Api()->NewString ? Api()->NewString(landName ? landName : "") : nullptr; void* __callArgs[] = { &groupId, &familyId, lineage, lineageNames, &origin, &generation, &bornWorldTick, &forgedBy, managed_8 }; Call("RestoreGroupMeta", __callArgs, 9); }
        int RelationOf(int groupA, int groupB) const { void* __callArgs[] = { &groupA, &groupB }; return CallValue<int>("RelationOf", __callArgs, 2); }
        int FamilyForChildOf(void* parentRoots) const { void* __callArgs[] = { parentRoots }; return CallValue<int>("FamilyForChildOf", __callArgs, 1); }
        void* ForgeOf(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return Call("ForgeOf", __callArgs, 2); }
        void RebuildForgeIndex() const { Call("RebuildForgeIndex", nullptr, 0); }
        void RestorePairCooldown(int axis, int lo, int hi, int untilWorldTick) const { void* __callArgs[] = { &axis, &lo, &hi, &untilWorldTick }; Call("RestorePairCooldown", __callArgs, 4); }
        void SplitPairKey(int64_t key, int& axis, int& lo, int& hi) const { void* __callArgs[] = { &key, &axis, &lo, &hi }; CallStatic("SplitPairKey", __callArgs, 4); }
        int GodFoldPeople(int axis, int fromGroupId, int intoGroupId) const { void* __callArgs[] = { &axis, &fromGroupId, &intoGroupId }; return CallValue<int>("GodFoldPeople", __callArgs, 3); }
        int GodAssimilateRealm(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return CallValue<int>("GodAssimilateRealm", __callArgs, 2); }
        int KindredOf(int nationId, int axis, void* dst) const { void* __callArgs[] = { &nationId, &axis, dst }; return CallValue<int>("KindredOf", __callArgs, 3); }
        int KindredCountOf(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return CallValue<int>("KindredCountOf", __callArgs, 2); }
        bool IsKindred(int nationId, int axis, int groupId) const { void* __callArgs[] = { &nationId, &axis, &groupId }; return CallValue<bool>("IsKindred", __callArgs, 3); }
        int OfficialPeersOf(int nationId, int axis, void* dst) const { void* __callArgs[] = { &nationId, &axis, dst }; return CallValue<int>("OfficialPeersOf", __callArgs, 3); }
        bool TryAddKindred(int nationId, int axis, int groupId) const { void* __callArgs[] = { &nationId, &axis, &groupId }; return CallValue<bool>("TryAddKindred", __callArgs, 3); }
        bool TryDropKindred(int nationId, int axis, int groupId) const { void* __callArgs[] = { &nationId, &axis, &groupId }; return CallValue<bool>("TryDropKindred", __callArgs, 3); }
        void* ExportKindred(int nationId) const { void* __callArgs[] = { &nationId }; return Call("ExportKindred", __callArgs, 1); }
        void RestoreKindred(int nationId, void* slots) const { void* __callArgs[] = { &nationId, slots }; Call("RestoreKindred", __callArgs, 2); }
        int MapLevelsOf(int axis) const { void* __callArgs[] = { &axis }; return CallValue<int>("MapLevelsOf", __callArgs, 1); }
        int EffectiveMapLevel(int axis) const { void* __callArgs[] = { &axis }; return CallValue<int>("EffectiveMapLevel", __callArgs, 1); }
        bool MapShowsPeoples(int axis) const { void* __callArgs[] = { &axis }; return CallValue<bool>("MapShowsPeoples", __callArgs, 1); }
        void SetMapLevel(int level) const { void* __callArgs[] = { &level }; Call("SetMapLevel", __callArgs, 1); }
        void StepMapLevel(int axis, int delta) const { void* __callArgs[] = { &axis, &delta }; Call("StepMapLevel", __callArgs, 2); }
        int MapNodeFor(int groupId) const { void* __callArgs[] = { &groupId }; return CallValue<int>("MapNodeFor", __callArgs, 1); }
        void* MapLevelName(int axis, int level) const { void* __callArgs[] = { &axis, &level }; return Call("MapLevelName", __callArgs, 2); }
        void* MapFillOf(void* g) const { void* __callArgs[] = { g }; return Call("MapFillOf", __callArgs, 1); }
        void* ColorAtWith(int axis, int tileIndex, int x, int y, void* fills) const { void* __callArgs[] = { &axis, &tileIndex, &x, &y, fills }; return Call("ColorAtWith", __callArgs, 5); }
        int ChunkFillWith(int axis, int chunk, void* fills, void* land) const { void* __callArgs[] = { &axis, &chunk, fills, &land }; return CallValue<int>("ChunkFillWith", __callArgs, 4); }
        void* MixFieldOf(int axis) const { void* __callArgs[] = { &axis }; return Call("MixFieldOf", __callArgs, 1); }
        void RootHomeland(int axis, int tile, int groupId) const { void* __callArgs[] = { &axis, &tile, &groupId }; Call("RootHomeland", __callArgs, 3); }
        bool IsNationAlive(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<bool>("IsNationAlive", __callArgs, 1); }
        void NoteMixing(int axis, int tile, int rootA, int rootB, float people) const { void* __callArgs[] = { &axis, &tile, &rootA, &rootB, &people }; Call("NoteMixing", __callArgs, 5); }
        void* PushesOf(int axis) const { void* __callArgs[] = { &axis }; return Call("PushesOf", __callArgs, 1); }
        void MarkTreatmentsDirty() const { Call("MarkTreatmentsDirty", nullptr, 0); }
        int PeopleKeyOf(int gid) const { void* __callArgs[] = { &gid }; return CallValue<int>("PeopleKeyOf", __callArgs, 1); }
        bool HasPeopleOn(int key, int axis) const { void* __callArgs[] = { &key, &axis }; return CallValue<bool>("HasPeopleOn", __callArgs, 2); }
        int PeopleAxesOf(int key) const { void* __callArgs[] = { &key }; return CallValue<int>("PeopleAxesOf", __callArgs, 1); }
        void* RootOfPeopleOn(int key, int axis) const { void* __callArgs[] = { &key, &axis }; return Call("RootOfPeopleOn", __callArgs, 2); }
        int RisingAxisOf(int key) const { void* __callArgs[] = { &key }; return CallValue<int>("RisingAxisOf", __callArgs, 1); }
        float KeyShareAt(int axis, int tile, int key) const { void* __callArgs[] = { &axis, &tile, &key }; return CallValue<float>("KeyShareAt", __callArgs, 3); }
        int RungAt(int ownerId, int axis, int groupId, int tile) const { void* __callArgs[] = { &ownerId, &axis, &groupId, &tile }; return CallValue<int>("RungAt", __callArgs, 4); }
        bool InheritPeoplesFrom(int heirNationId, int ancestorNationId) const { void* __callArgs[] = { &heirNationId, &ancestorNationId }; return CallValue<bool>("InheritPeoplesFrom", __callArgs, 2); }
        void* TitularFounderOf(void** args = nullptr, int count = 0) const { return Call("TitularFounderOf", args, count); }
        int AdoptedGroupIdOf(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return CallValue<int>("AdoptedGroupIdOf", __callArgs, 2); }
        bool RenouncedOn(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return CallValue<bool>("RenouncedOn", __callArgs, 2); }
        void* OwnGroupOf(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return Call("OwnGroupOf", __callArgs, 2); }
        int CoOfficialsOf(int nationId, int axis, void* dst) const { void* __callArgs[] = { &nationId, &axis, dst }; return CallValue<int>("CoOfficialsOf", __callArgs, 3); }
        int CoOfficialCountOf(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return CallValue<int>("CoOfficialCountOf", __callArgs, 2); }
        bool IsOfficialOn(int nationId, int axis, int groupId) const { void* __callArgs[] = { &nationId, &axis, &groupId }; return CallValue<bool>("IsOfficialOn", __callArgs, 3); }
        bool TryAddCoOfficial(int nationId, int axis, int groupId) const { void* __callArgs[] = { &nationId, &axis, &groupId }; return CallValue<bool>("TryAddCoOfficial", __callArgs, 3); }
        bool TryDropCoOfficial(int nationId, int axis, int groupId) const { void* __callArgs[] = { &nationId, &axis, &groupId }; return CallValue<bool>("TryDropCoOfficial", __callArgs, 3); }
        void* ExportCoOfficials(int nationId) const { void* __callArgs[] = { &nationId }; return Call("ExportCoOfficials", __callArgs, 1); }
        void RestoreCoOfficials(int nationId, void* slots) const { void* __callArgs[] = { &nationId, slots }; Call("RestoreCoOfficials", __callArgs, 2); }
        void* MajorityGroupOf(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return Call("MajorityGroupOf", __callArgs, 2); }
        int BoundPartnerOf(int from, int to, int groupId, float& strength) const { void* __callArgs[] = { &from, &to, &groupId, &strength }; return CallValue<int>("BoundPartnerOf", __callArgs, 4); }
        void ReconcileAfterRestore() const { Call("ReconcileAfterRestore", nullptr, 0); }
        bool AdoptIdentity(int nationId, int axis, int groupId) const { void* __callArgs[] = { &nationId, &axis, &groupId }; return CallValue<bool>("AdoptIdentity", __callArgs, 3); }
        int TallyRealm(int nationId, int axis, void* results, int maxSamples = 4000) const { void* __callArgs[] = { &nationId, &axis, results, &maxSamples }; return CallValue<int>("TallyRealm", __callArgs, 4); }
        float RealmShareOf(int nationId, int axis, int groupId) const { void* __callArgs[] = { &nationId, &axis, &groupId }; return CallValue<float>("RealmShareOf", __callArgs, 3); }
        void FlushPendingAxes() const { Call("FlushPendingAxes", nullptr, 0); }
        int DominantGroupIdAt(int axis, int tileIndex) const { void* __callArgs[] = { &axis, &tileIndex }; return CallValue<int>("DominantGroupIdAt", __callArgs, 2); }
        int DominantGroupIdAtXY(int axis, int x, int y) const { void* __callArgs[] = { &axis, &x, &y }; return CallValue<int>("DominantGroupIdAtXY", __callArgs, 3); }
        void* ColorAtXY(int axis, int x, int y, int tileIndex) const { void* __callArgs[] = { &axis, &x, &y, &tileIndex }; return Call("ColorAtXY", __callArgs, 4); }
        void* GetGroup(int groupId) const { void* __callArgs[] = { &groupId }; return Call("GetGroup", __callArgs, 1); }
        int RootGroupIdOf(int groupId) const { void* __callArgs[] = { &groupId }; return CallValue<int>("RootGroupIdOf", __callArgs, 1); }
        void* GroupsForAxis(int axis) const { void* __callArgs[] = { &axis }; return Call("GroupsForAxis", __callArgs, 1); }
        float IsoFor(int axis) const { void* __callArgs[] = { &axis }; return CallValue<float>("IsoFor", __callArgs, 1); }
        void* ColorAt(int axis, int tileIndex) const { void* __callArgs[] = { &axis, &tileIndex }; return Call("ColorAt", __callArgs, 2); }
        void* ColorOfMix(void* m, int tileIndex) const { void* __callArgs[] = { &m, &tileIndex }; return Call("ColorOfMix", __callArgs, 2); }
        void* ColorAtWith(int axis, int tileIndex, void* fills) const { void* __callArgs[] = { &axis, &tileIndex, fills }; return Call("ColorAtWith", __callArgs, 3); }
        void* FillMapFillTable(void* table) const { void* __callArgs[] = { &table }; return Call("FillMapFillTable", __callArgs, 1); }
        bool OwnerMatchesDominant(int axis, int tileIndex) const { void* __callArgs[] = { &axis, &tileIndex }; return CallValue<bool>("OwnerMatchesDominant", __callArgs, 2); }
        void* GetGroupForNation(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return Call("GetGroupForNation", __callArgs, 2); }
        int FamilyTileCount(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return CallValue<int>("FamilyTileCount", __callArgs, 2); }
        int DominantFoundingNationAt(int axis, int tileIndex) const { void* __callArgs[] = { &axis, &tileIndex }; return CallValue<int>("DominantFoundingNationAt", __callArgs, 2); }
        void* MixAt(int axis, int tileIndex) const { void* __callArgs[] = { &axis, &tileIndex }; return Call("MixAt", __callArgs, 2); }
        float ShareAt(int axis, int tileIndex, int groupId) const { void* __callArgs[] = { &axis, &tileIndex, &groupId }; return CallValue<float>("ShareAt", __callArgs, 3); }
        float NationShareAt(int axis, int tileIndex, int nationId) const { void* __callArgs[] = { &axis, &tileIndex, &nationId }; return CallValue<float>("NationShareAt", __callArgs, 3); }
        void* AxisRuntime(int axis) const { void* __callArgs[] = { &axis }; return Call("AxisRuntime", __callArgs, 1); }
        void* TitularOriginOf(void** args = nullptr, int count = 0) const { return Call("TitularOriginOf", args, count); }
        int FamilyTileCountOfOrigin(int origin, int axis) const { void* __callArgs[] = { &origin, &axis }; return CallValue<int>("FamilyTileCountOfOrigin", __callArgs, 2); }
        int FamilyTileCountOfRoot(int rootGroupId, int axis) const { void* __callArgs[] = { &rootGroupId, &axis }; return CallValue<int>("FamilyTileCountOfRoot", __callArgs, 2); }
        int DominantPeopleOriginAt(int axis, int tileIndex) const { void* __callArgs[] = { &axis, &tileIndex }; return CallValue<int>("DominantPeopleOriginAt", __callArgs, 2); }
        void* GroupForOrigin(int origin, int axis) const { void* __callArgs[] = { &origin, &axis }; return Call("GroupForOrigin", __callArgs, 2); }
        bool SeatPeopleAsOwn(int nationId, int origin, int axis) const { void* __callArgs[] = { &nationId, &origin, &axis }; return CallValue<bool>("SeatPeopleAsOwn", __callArgs, 3); }
        bool PromoteTile(int nationId, int tile, int axisMask) const { void* __callArgs[] = { &nationId, &tile, &axisMask }; return CallValue<bool>("PromoteTile", __callArgs, 3); }
        bool CanPaintZone(int nationId, int tile) const { void* __callArgs[] = { &nationId, &tile }; return CallValue<bool>("CanPaintZone", __callArgs, 2); }
        bool UnpromoteTile(int nationId, int tile, int axisMask) const { void* __callArgs[] = { &nationId, &tile, &axisMask }; return CallValue<bool>("UnpromoteTile", __callArgs, 3); }
        int ClearPromotion(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("ClearPromotion", __callArgs, 1); }
        int ClearZone(int nationId, int axisMask) const { void* __callArgs[] = { &nationId, &axisMask }; return CallValue<int>("ClearZone", __callArgs, 2); }
        int ZoneTileCount(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return CallValue<int>("ZoneTileCount", __callArgs, 2); }
        bool InZone(int nationId, int tile, int axis) const { void* __callArgs[] = { &nationId, &tile, &axis }; return CallValue<bool>("InZone", __callArgs, 3); }
        bool IsPromoted(int nationId, int tile) const { void* __callArgs[] = { &nationId, &tile }; return CallValue<bool>("IsPromoted", __callArgs, 2); }
        bool IsPromoted(int nationId, int tile, int axisMask) const { void* __callArgs[] = { &nationId, &tile, &axisMask }; return CallValue<bool>("IsPromoted", __callArgs, 3); }
        int PromotedAxesAt(int tile) const { void* __callArgs[] = { &tile }; return CallValue<int>("PromotedAxesAt", __callArgs, 1); }
        int PromotedTileCount(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("PromotedTileCount", __callArgs, 1); }
        void* PromotedTilesOf(int nationId) const { void* __callArgs[] = { &nationId }; return Call("PromotedTilesOf", __callArgs, 1); }
        void ExportPromotion(void* write) const { void* __callArgs[] = { write }; Call("ExportPromotion", __callArgs, 1); }
        void RestorePromotion(int nationId, void* tiles, void* axes = nullptr) const { void* __callArgs[] = { &nationId, tiles, axes }; Call("RestorePromotion", __callArgs, 3); }
        int ZoneFrontAxesAt(int nationId, int tile) const { void* __callArgs[] = { &nationId, &tile }; return CallValue<int>("ZoneFrontAxesAt", __callArgs, 2); }
        int PromotedFrontTileCount(int nationId) const { void* __callArgs[] = { &nationId }; return CallValue<int>("PromotedFrontTileCount", __callArgs, 1); }
        int ZoneFrontTileCount(int nationId, int axis) const { void* __callArgs[] = { &nationId, &axis }; return CallValue<int>("ZoneFrontTileCount", __callArgs, 2); }
        void ApplyTileMix(int axis, int tile, void* m) const { void* __callArgs[] = { &axis, &tile, &m }; Call("ApplyTileMix", __callArgs, 3); }
        bool WasAuthored(int axis) const { void* __callArgs[] = { &axis }; return CallValue<bool>("WasAuthored", __callArgs, 1); }
        void AuthorTileMix(int axis, int tileIndex, void* m) const { void* __callArgs[] = { &axis, &tileIndex, &m }; Call("AuthorTileMix", __callArgs, 3); }
        int HomelandGroupIdAt(int axis, int tileIndex) const { void* __callArgs[] = { &axis, &tileIndex }; return CallValue<int>("HomelandGroupIdAt", __callArgs, 2); }
        void ClearHomeland(int axis, int tileIndex) const { void* __callArgs[] = { &axis, &tileIndex }; Call("ClearHomeland", __callArgs, 2); }
        int HomelandTilesOf(int groupId, int axis) const { void* __callArgs[] = { &groupId, &axis }; return CallValue<int>("HomelandTilesOf", __callArgs, 2); }
        int HeldHomelandOf(int groupId, int axis) const { void* __callArgs[] = { &groupId, &axis }; return CallValue<int>("HeldHomelandOf", __callArgs, 2); }
        float FloorFor(int ownerNationId, int groupId, int axis, int tileIndex = -1) const { void* __callArgs[] = { &ownerNationId, &groupId, &axis, &tileIndex }; return CallValue<float>("FloorFor", __callArgs, 4); }
        void ExportHomeland(int axis, void* dst) const { void* __callArgs[] = { &axis, dst }; Call("ExportHomeland", __callArgs, 2); }
        void* CreateAuthoredGroup(int axis, int foundingNationId, const char* name, void* fill, int anchorTile, int parentGroupId = -1) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &axis, &foundingNationId, managed_2, fill, &anchorTile, &parentGroupId }; return Call("CreateAuthoredGroup", __callArgs, 6); }
        void* PeopleNameOfOrigin(void** args = nullptr, int count = 0) const { return Call("PeopleNameOfOrigin", args, count); }
        void* PeopleName(void* g) const { void* __callArgs[] = { g }; return Call("PeopleName", __callArgs, 1); }
        void RenameGroup(int groupId, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { &groupId, managed_1 }; Call("RenameGroup", __callArgs, 2); }
        void SetGroupFill(int groupId, void* fill) const { void* __callArgs[] = { &groupId, fill }; Call("SetGroupFill", __callArgs, 2); }
        void RetireAuthoredGroup(int axis, int groupId) const { void* __callArgs[] = { &axis, &groupId }; Call("RetireAuthoredGroup", __callArgs, 2); }
        void RestoreAxis(int axis, void* dominant, void* homeland = nullptr) const { void* __callArgs[] = { &axis, dominant, homeland }; Call("RestoreAxis", __callArgs, 3); }
        float BranchCooldownYears() const { return ReadStaticField<float>("BranchCooldownYears"); }
        float ConversionRefuseChance() const { return ReadStaticField<float>("ConversionRefuseChance"); }
        int MaxKindred() const { return ReadStaticField<int>("MaxKindred"); }
        int MaxOfficialPeers() const { return ReadStaticField<int>("MaxOfficialPeers"); }
        bool SystemEnabled() const { return ReadStaticField<bool>("SystemEnabled"); }
        int RenouncedGroupId() const { return ReadStaticField<int>("RenouncedGroupId"); }
        int MaxCoOfficials() const { return ReadStaticField<int>("MaxCoOfficials"); }
    };
}
