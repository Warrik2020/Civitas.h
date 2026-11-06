#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class ConnectivityMap : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ConnectivityMap(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "ConnectivityMap") {}
    public:
        int KindOf(int comp) const { void* args[] = { &comp }; return CallValue<int>("KindOf", args, 1); }
        void* CollectedComponent(int k) const { void* args[] = { &k }; return Call("CollectedComponent", args, 1); }
        void Preallocate(void* grid) const { void* args[] = { grid }; Call("Preallocate", args, 1); }
        int Refresh(void* n, void* grid, void* ownCityTiles, void* outComponentSizes, bool collectComponents = false, void* enemyMask = nullptr, bool transitSupply = false, int idCapacity = 0, void* stateBlock = nullptr, int stateBlockLen = 0) const { void* args[] = { n, grid, ownCityTiles, outComponentSizes, &collectComponents, enemyMask, &transitSupply, &idCapacity, stateBlock, &stateBlockLen }; return CallValue<int>("Refresh", args, 10); }
        int CollectedIndexAt(int version, int tileIndex) const { void* args[] = { &version, &tileIndex }; return CallValue<int>("CollectedIndexAt", args, 2); }
        bool IsConnected(int version, int tileIndex) const { void* args[] = { &version, &tileIndex }; return CallValue<bool>("IsConnected", args, 2); }
        int ComponentAt(int version, int tileIndex) const { void* args[] = { &version, &tileIndex }; return CallValue<int>("ComponentAt", args, 2); }
        bool IsUnsupplied(int version, int tileIndex) const { void* args[] = { &version, &tileIndex }; return CallValue<bool>("IsUnsupplied", args, 2); }
        void CompletePending() const { Call("CompletePending", nullptr, 0); }
        bool CanRefreshAsync(int idCapacity) const { void* args[] = { &idCapacity }; return CallStaticValue<bool>("CanRefreshAsync", args, 1); }
        void BeginRefreshAsync(void* n, void* grid, void* ownCityTiles, void* outComponentSizes, bool collectComponents, void* enemyMask, bool transitSupply, int idCapacity, void* stateBlock, int stateBlockLen) const { void* args[] = { n, grid, ownCityTiles, outComponentSizes, &collectComponents, enemyMask, &transitSupply, &idCapacity, stateBlock, &stateBlockLen }; Call("BeginRefreshAsync", args, 10); }
        int EndRefreshAsync() const { return CallValue<int>("EndRefreshAsync", nullptr, 0); }
        void AbortPending() const { Call("AbortPending", nullptr, 0); }
        void Execute() const { Call("Execute", nullptr, 0); }
        bool UseJobs() const { return ReadStaticField<bool>("UseJobs"); }
        void SetUseJobs(bool value) const { WriteStaticField<bool>("UseJobs", value); }
        void* stamp() const { return ReadField<void*>("stamp"); }
        void SetStamp(void* value) const { WriteField<void*>("stamp", value); }
        void* visit() const { return ReadField<void*>("visit"); }
        void SetVisit(void* value) const { WriteField<void*>("visit", value); }
        void* comp() const { return ReadField<void*>("comp"); }
        void SetComp(void* value) const { WriteField<void*>("comp", value); }
        void* owner() const { return ReadField<void*>("owner"); }
        void SetOwner(void* value) const { WriteField<void*>("owner", value); }
        void* terrain() const { return ReadField<void*>("terrain"); }
        void SetTerrain(void* value) const { WriteField<void*>("terrain", value); }
        void* openTo() const { return ReadField<void*>("openTo"); }
        void SetOpenTo(void* value) const { WriteField<void*>("openTo", value); }
        void* enemyMask() const { return ReadField<void*>("enemyMask"); }
        void SetEnemyMask(void* value) const { WriteField<void*>("enemyMask", value); }
        int enemyLen() const { return ReadField<int>("enemyLen"); }
        void SetEnemyLen(int value) const { WriteField<int>("enemyLen", value); }
        void* cityTiles() const { return ReadField<void*>("cityTiles"); }
        void SetCityTiles(void* value) const { WriteField<void*>("cityTiles", value); }
        int cityCount() const { return ReadField<int>("cityCount"); }
        void SetCityCount(int value) const { WriteField<int>("cityCount", value); }
        void* stateIds() const { return ReadField<void*>("stateIds"); }
        void SetStateIds(void* value) const { WriteField<void*>("stateIds", value); }
        void* stateBlock() const { return ReadField<void*>("stateBlock"); }
        void SetStateBlock(void* value) const { WriteField<void*>("stateBlock", value); }
        int blockLen() const { return ReadField<int>("blockLen"); }
        void SetBlockLen(int value) const { WriteField<int>("blockLen", value); }
        int version() const { return ReadField<int>("version"); }
        void SetVersion(int value) const { WriteField<int>("version", value); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int capital() const { return ReadField<int>("capital"); }
        void SetCapital(int value) const { WriteField<int>("capital", value); }
        int w() const { return ReadField<int>("w"); }
        void SetW(int value) const { WriteField<int>("w", value); }
        int h() const { return ReadField<int>("h"); }
        void SetH(int value) const { WriteField<int>("h", value); }
        int count() const { return ReadField<int>("count"); }
        void SetCount(int value) const { WriteField<int>("count", value); }
        int minX() const { return ReadField<int>("minX"); }
        void SetMinX(int value) const { WriteField<int>("minX", value); }
        int maxX() const { return ReadField<int>("maxX"); }
        void SetMaxX(int value) const { WriteField<int>("maxX", value); }
        int minY() const { return ReadField<int>("minY"); }
        void SetMinY(int value) const { WriteField<int>("minY", value); }
        int maxY() const { return ReadField<int>("maxY"); }
        void SetMaxY(int value) const { WriteField<int>("maxY", value); }
        uint8_t collect() const { return ReadField<uint8_t>("collect"); }
        void SetCollect(uint8_t value) const { WriteField<uint8_t>("collect", value); }
        uint8_t transit() const { return ReadField<uint8_t>("transit"); }
        void SetTransit(uint8_t value) const { WriteField<uint8_t>("transit", value); }
        void* chunkSkip() const { return ReadField<void*>("chunkSkip"); }
        void SetChunkSkip(void* value) const { WriteField<void*>("chunkSkip", value); }
        uint8_t skipChunks() const { return ReadField<uint8_t>("skipChunks"); }
        void SetSkipChunks(uint8_t value) const { WriteField<uint8_t>("skipChunks", value); }
        int chunksWide() const { return ReadField<int>("chunksWide"); }
        void SetChunksWide(int value) const { WriteField<int>("chunksWide", value); }
        void* componentSizes() const { return ReadField<void*>("componentSizes"); }
        void SetComponentSizes(void* value) const { WriteField<void*>("componentSizes", value); }
        void* componentKinds() const { return ReadField<void*>("componentKinds"); }
        void SetComponentKinds(void* value) const { WriteField<void*>("componentKinds", value); }
        void* supplyToCollected() const { return ReadField<void*>("supplyToCollected"); }
        void SetSupplyToCollected(void* value) const { WriteField<void*>("supplyToCollected", value); }
        void* collectedRanges() const { return ReadField<void*>("collectedRanges"); }
        void SetCollectedRanges(void* value) const { WriteField<void*>("collectedRanges", value); }
        void* collectedTiles() const { return ReadField<void*>("collectedTiles"); }
        void SetCollectedTiles(void* value) const { WriteField<void*>("collectedTiles", value); }
        void* flags() const { return ReadField<void*>("flags"); }
        void SetFlags(void* value) const { WriteField<void*>("flags", value); }
        void* seeds() const { return ReadField<void*>("seeds"); }
        void SetSeeds(void* value) const { WriteField<void*>("seeds", value); }
        void* component() const { return ReadField<void*>("component"); }
        void SetComponent(void* value) const { WriteField<void*>("component", value); }
    };
}
