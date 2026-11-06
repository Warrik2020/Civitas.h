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
        int SettleNewcomers(void* tiles, int ownerId, int origin, float share) const { void* args[] = { tiles, &ownerId, &origin, &share }; return CallValue<int>("SettleNewcomers", args, 4); }
        bool AssignTile(int nationId, int tile, int axis, int groupId) const { void* args[] = { &nationId, &tile, &axis, &groupId }; return CallValue<bool>("AssignTile", args, 4); }
        bool UnassignTile(int nationId, int tile, int axis) const { void* args[] = { &nationId, &tile, &axis }; return CallValue<bool>("UnassignTile", args, 3); }
        int AssignedRootAt(int nationId, int tile, int axis) const { void* args[] = { &nationId, &tile, &axis }; return CallValue<int>("AssignedRootAt", args, 3); }
        int AssimilatorAt(int nationId, int tile, int axis) const { void* args[] = { &nationId, &tile, &axis }; return CallValue<int>("AssimilatorAt", args, 3); }
        int AssignedTileCount(int nationId, int axis, int groupId) const { void* args[] = { &nationId, &axis, &groupId }; return CallValue<int>("AssignedTileCount", args, 3); }
        int AssignedTileCount(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return CallValue<int>("AssignedTileCount", args, 2); }
        int ClearAssignments(int nationId, int axis, int groupId = -1) const { void* args[] = { &nationId, &axis, &groupId }; return CallValue<int>("ClearAssignments", args, 3); }
        void* AssignedTilesOf(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return Call("AssignedTilesOf", args, 2); }
        void ExportAssignments(void* write) const { void* args[] = { write }; Call("ExportAssignments", args, 1); }
        void RestoreAssignment(int nationId, int axis, int tile, int groupId) const { void* args[] = { &nationId, &axis, &tile, &groupId }; Call("RestoreAssignment", args, 4); }
        void* LastBranchOf(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return Call("LastBranchOf", args, 2); }
        int NextBranchTick(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return CallValue<int>("NextBranchTick", args, 2); }
        void* BranchNameFor(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return Call("BranchNameFor", args, 2); }
        void* FoundBranch(int nationId, int axis, const char* name = nullptr) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &nationId, &axis, managed_2 }; return Call("FoundBranch", args, 3); }
        void* ConversionOf(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return Call("ConversionOf", args, 2); }
        void RankStatesForConversion(int nationId, void* dst) const { void* args[] = { &nationId, dst }; Call("RankStatesForConversion", args, 2); }
        int StartConversion(int nationId, int axis, int fromRoot, int toRoot, void* rankedStates) const { void* args[] = { &nationId, &axis, &fromRoot, &toRoot, rankedStates }; return CallValue<int>("StartConversion", args, 5); }
        void ClearConversions() const { Call("ClearConversions", nullptr, 0); }
        void RestoreConversion(void* o) const { void* args[] = { o }; Call("RestoreConversion", args, 1); }
        void* LedgerFor(int axis) const { void* args[] = { &axis }; return Call("LedgerFor", args, 1); }
        void RestoreCradle(int axis, int groupId, int untilWorldTick, void* tiles) const { void* args[] = { &axis, &groupId, &untilWorldTick, tiles }; Call("RestoreCradle", args, 4); }
        void* CreateMixedGroup(int axis, void* parentRoots, const char* name, int anchorTile, uint8_t origin, int forgedBy, const char* landName) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* managed_6 = Api() && Api()->NewString ? Api()->NewString(landName ? landName : "") : nullptr; void* args[] = { &axis, parentRoots, managed_2, &anchorTile, &origin, &forgedBy, managed_6 }; return Call("CreateMixedGroup", args, 7); }
        uint8_t MixOpennessOf(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return CallValue<uint8_t>("MixOpennessOf", args, 2); }
        bool PersecutesOn(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return CallValue<bool>("PersecutesOn", args, 2); }
        void FormingIn(int nationId, void* dst, int max = 8) const { void* args[] = { &nationId, dst, &max }; Call("FormingIn", args, 3); }
        void RecentBirths(int nationId, float years, void* dst) const { void* args[] = { &nationId, &years, dst }; Call("RecentBirths", args, 3); }
        int FamilyOf(int groupId) const { void* args[] = { &groupId }; return CallValue<int>("FamilyOf", args, 1); }
        void SetGroupFamily(int groupId, int familyId) const { void* args[] = { &groupId, &familyId }; Call("SetGroupFamily", args, 2); }
        void RestoreGroupMeta(int groupId, int familyId, void* lineage, void* lineageNames, uint8_t origin, uint8_t generation, int bornWorldTick, int forgedBy, const char* landName) const { void* managed_8 = Api() && Api()->NewString ? Api()->NewString(landName ? landName : "") : nullptr; void* args[] = { &groupId, &familyId, lineage, lineageNames, &origin, &generation, &bornWorldTick, &forgedBy, managed_8 }; Call("RestoreGroupMeta", args, 9); }
        int RelationOf(int groupA, int groupB) const { void* args[] = { &groupA, &groupB }; return CallValue<int>("RelationOf", args, 2); }
        int FamilyForChildOf(void* parentRoots) const { void* args[] = { parentRoots }; return CallValue<int>("FamilyForChildOf", args, 1); }
        void* ForgeOf(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return Call("ForgeOf", args, 2); }
        void RebuildForgeIndex() const { Call("RebuildForgeIndex", nullptr, 0); }
        void RestorePairCooldown(int axis, int lo, int hi, int untilWorldTick) const { void* args[] = { &axis, &lo, &hi, &untilWorldTick }; Call("RestorePairCooldown", args, 4); }
        void SplitPairKey(int64_t key, int& axis, int& lo, int& hi) const { void* args[] = { &key, &axis, &lo, &hi }; CallStatic("SplitPairKey", args, 4); }
        int GodFoldPeople(int axis, int fromGroupId, int intoGroupId) const { void* args[] = { &axis, &fromGroupId, &intoGroupId }; return CallValue<int>("GodFoldPeople", args, 3); }
        int GodAssimilateRealm(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return CallValue<int>("GodAssimilateRealm", args, 2); }
        int KindredOf(int nationId, int axis, void* dst) const { void* args[] = { &nationId, &axis, dst }; return CallValue<int>("KindredOf", args, 3); }
        int KindredCountOf(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return CallValue<int>("KindredCountOf", args, 2); }
        bool IsKindred(int nationId, int axis, int groupId) const { void* args[] = { &nationId, &axis, &groupId }; return CallValue<bool>("IsKindred", args, 3); }
        int OfficialPeersOf(int nationId, int axis, void* dst) const { void* args[] = { &nationId, &axis, dst }; return CallValue<int>("OfficialPeersOf", args, 3); }
        bool TryAddKindred(int nationId, int axis, int groupId) const { void* args[] = { &nationId, &axis, &groupId }; return CallValue<bool>("TryAddKindred", args, 3); }
        bool TryDropKindred(int nationId, int axis, int groupId) const { void* args[] = { &nationId, &axis, &groupId }; return CallValue<bool>("TryDropKindred", args, 3); }
        void* ExportKindred(int nationId) const { void* args[] = { &nationId }; return Call("ExportKindred", args, 1); }
        void RestoreKindred(int nationId, void* slots) const { void* args[] = { &nationId, slots }; Call("RestoreKindred", args, 2); }
        int MapLevelsOf(int axis) const { void* args[] = { &axis }; return CallValue<int>("MapLevelsOf", args, 1); }
        int EffectiveMapLevel(int axis) const { void* args[] = { &axis }; return CallValue<int>("EffectiveMapLevel", args, 1); }
        bool MapShowsPeoples(int axis) const { void* args[] = { &axis }; return CallValue<bool>("MapShowsPeoples", args, 1); }
        void SetMapLevel(int level) const { void* args[] = { &level }; Call("SetMapLevel", args, 1); }
        void StepMapLevel(int axis, int delta) const { void* args[] = { &axis, &delta }; Call("StepMapLevel", args, 2); }
        int MapNodeFor(int groupId) const { void* args[] = { &groupId }; return CallValue<int>("MapNodeFor", args, 1); }
        void* MapLevelName(int axis, int level) const { void* args[] = { &axis, &level }; return Call("MapLevelName", args, 2); }
        void* MapFillOf(void* g) const { void* args[] = { g }; return Call("MapFillOf", args, 1); }
        void* ColorAtWith(int axis, int tileIndex, int x, int y, void* fills) const { void* args[] = { &axis, &tileIndex, &x, &y, fills }; return Call("ColorAtWith", args, 5); }
        int ChunkFillWith(int axis, int chunk, void* fills, void* land) const { void* args[] = { &axis, &chunk, fills, &land }; return CallValue<int>("ChunkFillWith", args, 4); }
        void* MixFieldOf(int axis) const { void* args[] = { &axis }; return Call("MixFieldOf", args, 1); }
        void RootHomeland(int axis, int tile, int groupId) const { void* args[] = { &axis, &tile, &groupId }; Call("RootHomeland", args, 3); }
        bool IsNationAlive(int nationId) const { void* args[] = { &nationId }; return CallValue<bool>("IsNationAlive", args, 1); }
        void NoteMixing(int axis, int tile, int rootA, int rootB, float people) const { void* args[] = { &axis, &tile, &rootA, &rootB, &people }; Call("NoteMixing", args, 5); }
        void* PushesOf(int axis) const { void* args[] = { &axis }; return Call("PushesOf", args, 1); }
        void MarkTreatmentsDirty() const { Call("MarkTreatmentsDirty", nullptr, 0); }
        int PeopleKeyOf(int gid) const { void* args[] = { &gid }; return CallValue<int>("PeopleKeyOf", args, 1); }
        bool HasPeopleOn(int key, int axis) const { void* args[] = { &key, &axis }; return CallValue<bool>("HasPeopleOn", args, 2); }
        int PeopleAxesOf(int key) const { void* args[] = { &key }; return CallValue<int>("PeopleAxesOf", args, 1); }
        void* RootOfPeopleOn(int key, int axis) const { void* args[] = { &key, &axis }; return Call("RootOfPeopleOn", args, 2); }
        int RisingAxisOf(int key) const { void* args[] = { &key }; return CallValue<int>("RisingAxisOf", args, 1); }
        float KeyShareAt(int axis, int tile, int key) const { void* args[] = { &axis, &tile, &key }; return CallValue<float>("KeyShareAt", args, 3); }
        int RungAt(int ownerId, int axis, int groupId, int tile) const { void* args[] = { &ownerId, &axis, &groupId, &tile }; return CallValue<int>("RungAt", args, 4); }
        bool InheritPeoplesFrom(int heirNationId, int ancestorNationId) const { void* args[] = { &heirNationId, &ancestorNationId }; return CallValue<bool>("InheritPeoplesFrom", args, 2); }
        void* TitularFounderOf(void** args = nullptr, int count = 0) const { return Call("TitularFounderOf", args, count); }
        int AdoptedGroupIdOf(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return CallValue<int>("AdoptedGroupIdOf", args, 2); }
        bool RenouncedOn(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return CallValue<bool>("RenouncedOn", args, 2); }
        void* OwnGroupOf(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return Call("OwnGroupOf", args, 2); }
        int CoOfficialsOf(int nationId, int axis, void* dst) const { void* args[] = { &nationId, &axis, dst }; return CallValue<int>("CoOfficialsOf", args, 3); }
        int CoOfficialCountOf(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return CallValue<int>("CoOfficialCountOf", args, 2); }
        bool IsOfficialOn(int nationId, int axis, int groupId) const { void* args[] = { &nationId, &axis, &groupId }; return CallValue<bool>("IsOfficialOn", args, 3); }
        bool TryAddCoOfficial(int nationId, int axis, int groupId) const { void* args[] = { &nationId, &axis, &groupId }; return CallValue<bool>("TryAddCoOfficial", args, 3); }
        bool TryDropCoOfficial(int nationId, int axis, int groupId) const { void* args[] = { &nationId, &axis, &groupId }; return CallValue<bool>("TryDropCoOfficial", args, 3); }
        void* ExportCoOfficials(int nationId) const { void* args[] = { &nationId }; return Call("ExportCoOfficials", args, 1); }
        void RestoreCoOfficials(int nationId, void* slots) const { void* args[] = { &nationId, slots }; Call("RestoreCoOfficials", args, 2); }
        void* MajorityGroupOf(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return Call("MajorityGroupOf", args, 2); }
        int BoundPartnerOf(int from, int to, int groupId, float& strength) const { void* args[] = { &from, &to, &groupId, &strength }; return CallValue<int>("BoundPartnerOf", args, 4); }
        void ReconcileAfterRestore() const { Call("ReconcileAfterRestore", nullptr, 0); }
        bool AdoptIdentity(int nationId, int axis, int groupId) const { void* args[] = { &nationId, &axis, &groupId }; return CallValue<bool>("AdoptIdentity", args, 3); }
        int TallyRealm(int nationId, int axis, void* results, int maxSamples = 4000) const { void* args[] = { &nationId, &axis, results, &maxSamples }; return CallValue<int>("TallyRealm", args, 4); }
        float RealmShareOf(int nationId, int axis, int groupId) const { void* args[] = { &nationId, &axis, &groupId }; return CallValue<float>("RealmShareOf", args, 3); }
        void FlushPendingAxes() const { Call("FlushPendingAxes", nullptr, 0); }
        int DominantGroupIdAt(int axis, int tileIndex) const { void* args[] = { &axis, &tileIndex }; return CallValue<int>("DominantGroupIdAt", args, 2); }
        int DominantGroupIdAtXY(int axis, int x, int y) const { void* args[] = { &axis, &x, &y }; return CallValue<int>("DominantGroupIdAtXY", args, 3); }
        void* ColorAtXY(int axis, int x, int y, int tileIndex) const { void* args[] = { &axis, &x, &y, &tileIndex }; return Call("ColorAtXY", args, 4); }
        void* GetGroup(int groupId) const { void* args[] = { &groupId }; return Call("GetGroup", args, 1); }
        int RootGroupIdOf(int groupId) const { void* args[] = { &groupId }; return CallValue<int>("RootGroupIdOf", args, 1); }
        void* GroupsForAxis(int axis) const { void* args[] = { &axis }; return Call("GroupsForAxis", args, 1); }
        float IsoFor(int axis) const { void* args[] = { &axis }; return CallValue<float>("IsoFor", args, 1); }
        void* ColorAt(int axis, int tileIndex) const { void* args[] = { &axis, &tileIndex }; return Call("ColorAt", args, 2); }
        void* ColorOfMix(void* m, int tileIndex) const { void* args[] = { &m, &tileIndex }; return Call("ColorOfMix", args, 2); }
        void* ColorAtWith(int axis, int tileIndex, void* fills) const { void* args[] = { &axis, &tileIndex, fills }; return Call("ColorAtWith", args, 3); }
        void* FillMapFillTable(void* table) const { void* args[] = { &table }; return Call("FillMapFillTable", args, 1); }
        bool OwnerMatchesDominant(int axis, int tileIndex) const { void* args[] = { &axis, &tileIndex }; return CallValue<bool>("OwnerMatchesDominant", args, 2); }
        void* GetGroupForNation(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return Call("GetGroupForNation", args, 2); }
        int FamilyTileCount(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return CallValue<int>("FamilyTileCount", args, 2); }
        int DominantFoundingNationAt(int axis, int tileIndex) const { void* args[] = { &axis, &tileIndex }; return CallValue<int>("DominantFoundingNationAt", args, 2); }
        void* MixAt(int axis, int tileIndex) const { void* args[] = { &axis, &tileIndex }; return Call("MixAt", args, 2); }
        float ShareAt(int axis, int tileIndex, int groupId) const { void* args[] = { &axis, &tileIndex, &groupId }; return CallValue<float>("ShareAt", args, 3); }
        float NationShareAt(int axis, int tileIndex, int nationId) const { void* args[] = { &axis, &tileIndex, &nationId }; return CallValue<float>("NationShareAt", args, 3); }
        void* AxisRuntime(int axis) const { void* args[] = { &axis }; return Call("AxisRuntime", args, 1); }
        void* TitularOriginOf(void** args = nullptr, int count = 0) const { return Call("TitularOriginOf", args, count); }
        int FamilyTileCountOfOrigin(int origin, int axis) const { void* args[] = { &origin, &axis }; return CallValue<int>("FamilyTileCountOfOrigin", args, 2); }
        int FamilyTileCountOfRoot(int rootGroupId, int axis) const { void* args[] = { &rootGroupId, &axis }; return CallValue<int>("FamilyTileCountOfRoot", args, 2); }
        int DominantPeopleOriginAt(int axis, int tileIndex) const { void* args[] = { &axis, &tileIndex }; return CallValue<int>("DominantPeopleOriginAt", args, 2); }
        void* GroupForOrigin(int origin, int axis) const { void* args[] = { &origin, &axis }; return Call("GroupForOrigin", args, 2); }
        bool SeatPeopleAsOwn(int nationId, int origin, int axis) const { void* args[] = { &nationId, &origin, &axis }; return CallValue<bool>("SeatPeopleAsOwn", args, 3); }
        bool PromoteTile(int nationId, int tile, int axisMask) const { void* args[] = { &nationId, &tile, &axisMask }; return CallValue<bool>("PromoteTile", args, 3); }
        bool CanPaintZone(int nationId, int tile) const { void* args[] = { &nationId, &tile }; return CallValue<bool>("CanPaintZone", args, 2); }
        bool UnpromoteTile(int nationId, int tile, int axisMask) const { void* args[] = { &nationId, &tile, &axisMask }; return CallValue<bool>("UnpromoteTile", args, 3); }
        int ClearPromotion(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("ClearPromotion", args, 1); }
        int ClearZone(int nationId, int axisMask) const { void* args[] = { &nationId, &axisMask }; return CallValue<int>("ClearZone", args, 2); }
        int ZoneTileCount(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return CallValue<int>("ZoneTileCount", args, 2); }
        bool InZone(int nationId, int tile, int axis) const { void* args[] = { &nationId, &tile, &axis }; return CallValue<bool>("InZone", args, 3); }
        bool IsPromoted(int nationId, int tile) const { void* args[] = { &nationId, &tile }; return CallValue<bool>("IsPromoted", args, 2); }
        bool IsPromoted(int nationId, int tile, int axisMask) const { void* args[] = { &nationId, &tile, &axisMask }; return CallValue<bool>("IsPromoted", args, 3); }
        int PromotedAxesAt(int tile) const { void* args[] = { &tile }; return CallValue<int>("PromotedAxesAt", args, 1); }
        int PromotedTileCount(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("PromotedTileCount", args, 1); }
        void* PromotedTilesOf(int nationId) const { void* args[] = { &nationId }; return Call("PromotedTilesOf", args, 1); }
        void ExportPromotion(void* write) const { void* args[] = { write }; Call("ExportPromotion", args, 1); }
        void RestorePromotion(int nationId, void* tiles, void* axes = nullptr) const { void* args[] = { &nationId, tiles, axes }; Call("RestorePromotion", args, 3); }
        int ZoneFrontAxesAt(int nationId, int tile) const { void* args[] = { &nationId, &tile }; return CallValue<int>("ZoneFrontAxesAt", args, 2); }
        int PromotedFrontTileCount(int nationId) const { void* args[] = { &nationId }; return CallValue<int>("PromotedFrontTileCount", args, 1); }
        int ZoneFrontTileCount(int nationId, int axis) const { void* args[] = { &nationId, &axis }; return CallValue<int>("ZoneFrontTileCount", args, 2); }
        void ApplyTileMix(int axis, int tile, void* m) const { void* args[] = { &axis, &tile, &m }; Call("ApplyTileMix", args, 3); }
        bool WasAuthored(int axis) const { void* args[] = { &axis }; return CallValue<bool>("WasAuthored", args, 1); }
        void AuthorTileMix(int axis, int tileIndex, void* m) const { void* args[] = { &axis, &tileIndex, &m }; Call("AuthorTileMix", args, 3); }
        int HomelandGroupIdAt(int axis, int tileIndex) const { void* args[] = { &axis, &tileIndex }; return CallValue<int>("HomelandGroupIdAt", args, 2); }
        void ClearHomeland(int axis, int tileIndex) const { void* args[] = { &axis, &tileIndex }; Call("ClearHomeland", args, 2); }
        int HomelandTilesOf(int groupId, int axis) const { void* args[] = { &groupId, &axis }; return CallValue<int>("HomelandTilesOf", args, 2); }
        int HeldHomelandOf(int groupId, int axis) const { void* args[] = { &groupId, &axis }; return CallValue<int>("HeldHomelandOf", args, 2); }
        float FloorFor(int ownerNationId, int groupId, int axis, int tileIndex = -1) const { void* args[] = { &ownerNationId, &groupId, &axis, &tileIndex }; return CallValue<float>("FloorFor", args, 4); }
        void ExportHomeland(int axis, void* dst) const { void* args[] = { &axis, dst }; Call("ExportHomeland", args, 2); }
        void* CreateAuthoredGroup(int axis, int foundingNationId, const char* name, void* fill, int anchorTile, int parentGroupId = -1) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &axis, &foundingNationId, managed_2, fill, &anchorTile, &parentGroupId }; return Call("CreateAuthoredGroup", args, 6); }
        void* PeopleNameOfOrigin(void** args = nullptr, int count = 0) const { return Call("PeopleNameOfOrigin", args, count); }
        void* PeopleName(void* g) const { void* args[] = { g }; return Call("PeopleName", args, 1); }
        void RenameGroup(int groupId, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { &groupId, managed_1 }; Call("RenameGroup", args, 2); }
        void SetGroupFill(int groupId, void* fill) const { void* args[] = { &groupId, fill }; Call("SetGroupFill", args, 2); }
        void RetireAuthoredGroup(int axis, int groupId) const { void* args[] = { &axis, &groupId }; Call("RetireAuthoredGroup", args, 2); }
        void RestoreAxis(int axis, void* dominant, void* homeland = nullptr) const { void* args[] = { &axis, dominant, homeland }; Call("RestoreAxis", args, 3); }
        float BranchCooldownYears() const { return ReadStaticField<float>("BranchCooldownYears"); }
        float ConversionRefuseChance() const { return ReadStaticField<float>("ConversionRefuseChance"); }
        int MaxKindred() const { return ReadStaticField<int>("MaxKindred"); }
        int MaxOfficialPeers() const { return ReadStaticField<int>("MaxOfficialPeers"); }
        bool SystemEnabled() const { return ReadStaticField<bool>("SystemEnabled"); }
        int RenouncedGroupId() const { return ReadStaticField<int>("RenouncedGroupId"); }
        int MaxCoOfficials() const { return ReadStaticField<int>("MaxCoOfficials"); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        float people() const { return ReadField<float>("people"); }
        void SetPeople(float value) const { WriteField<float>("people", value); }
        float towns() const { return ReadField<float>("towns"); }
        void SetTowns(float value) const { WriteField<float>("towns", value); }
        float works() const { return ReadField<float>("works"); }
        void SetWorks(float value) const { WriteField<float>("works", value); }
        float score() const { return ReadField<float>("score"); }
        void SetScore(float value) const { WriteField<float>("score", value); }
        int axis() const { return ReadField<int>("axis"); }
        void SetAxis(int value) const { WriteField<int>("axis", value); }
        int rootA() const { return ReadField<int>("rootA"); }
        void SetRootA(int value) const { WriteField<int>("rootA", value); }
        int rootB() const { return ReadField<int>("rootB"); }
        void SetRootB(int value) const { WriteField<int>("rootB", value); }
        float progress() const { return ReadField<float>("progress"); }
        void SetProgress(float value) const { WriteField<float>("progress", value); }
        int tile() const { return ReadField<int>("tile"); }
        void SetTile(int value) const { WriteField<int>("tile", value); }
        int groupId() const { return ReadField<int>("groupId"); }
        void SetGroupId(int value) const { WriteField<int>("groupId", value); }
        float share() const { return ReadField<float>("share"); }
        void SetShare(float value) const { WriteField<float>("share", value); }
        float people() const { return ReadField<float>("people"); }
        void SetPeople(float value) const { WriteField<float>("people", value); }
    };
}
