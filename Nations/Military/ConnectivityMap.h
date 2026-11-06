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
        int KindOf(int comp) const { void* __callArgs[] = { &comp }; return CallValue<int>("KindOf", __callArgs, 1); }
        void* CollectedComponent(int k) const { void* __callArgs[] = { &k }; return Call("CollectedComponent", __callArgs, 1); }
        void Preallocate(void* grid) const { void* __callArgs[] = { grid }; Call("Preallocate", __callArgs, 1); }
        int Refresh(void* n, void* grid, void* ownCityTiles, void* outComponentSizes, bool collectComponents = false, void* enemyMask = nullptr, bool transitSupply = false, int idCapacity = 0, void* stateBlock = nullptr, int stateBlockLen = 0) const { void* __callArgs[] = { n, grid, ownCityTiles, outComponentSizes, &collectComponents, enemyMask, &transitSupply, &idCapacity, stateBlock, &stateBlockLen }; return CallValue<int>("Refresh", __callArgs, 10); }
        int CollectedIndexAt(int version, int tileIndex) const { void* __callArgs[] = { &version, &tileIndex }; return CallValue<int>("CollectedIndexAt", __callArgs, 2); }
        bool IsConnected(int version, int tileIndex) const { void* __callArgs[] = { &version, &tileIndex }; return CallValue<bool>("IsConnected", __callArgs, 2); }
        int ComponentAt(int version, int tileIndex) const { void* __callArgs[] = { &version, &tileIndex }; return CallValue<int>("ComponentAt", __callArgs, 2); }
        bool IsUnsupplied(int version, int tileIndex) const { void* __callArgs[] = { &version, &tileIndex }; return CallValue<bool>("IsUnsupplied", __callArgs, 2); }
        void CompletePending() const { Call("CompletePending", nullptr, 0); }
        bool CanRefreshAsync(int idCapacity) const { void* __callArgs[] = { &idCapacity }; return CallStaticValue<bool>("CanRefreshAsync", __callArgs, 1); }
        void BeginRefreshAsync(void* n, void* grid, void* ownCityTiles, void* outComponentSizes, bool collectComponents, void* enemyMask, bool transitSupply, int idCapacity, void* stateBlock, int stateBlockLen) const { void* __callArgs[] = { n, grid, ownCityTiles, outComponentSizes, &collectComponents, enemyMask, &transitSupply, &idCapacity, stateBlock, &stateBlockLen }; Call("BeginRefreshAsync", __callArgs, 10); }
        int EndRefreshAsync() const { return CallValue<int>("EndRefreshAsync", nullptr, 0); }
        void AbortPending() const { Call("AbortPending", nullptr, 0); }
        bool UseJobs() const { return ReadStaticField<bool>("UseJobs"); }
        void UseJobs(bool value) const { WriteStaticField<bool>("UseJobs", value); }
    };
}
