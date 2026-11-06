#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::States
{
    class StateMap : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateMap(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.States", "StateMap") {}
    public:
        void* Get(int id) const { void* __callArgs[] = { &id }; return CallStatic("Get", __callArgs, 1); }
        void* StateAt(void* grid, int tileIndex) const { void* __callArgs[] = { grid, &tileIndex }; return CallStatic("StateAt", __callArgs, 2); }
        int CellAt(int tileIndex) const { void* __callArgs[] = { &tileIndex }; return CallStaticValue<int>("CellAt", __callArgs, 1); }
        void CollectTiles(void* grid, int stateId, void* dst) const { void* __callArgs[] = { grid, &stateId, dst }; CallStatic("CollectTiles", __callArgs, 3); }
        int MajorityOwner(void* grid, int stateId, int& held, int& total) const { void* __callArgs[] = { grid, &stateId, &held, &total }; return CallStaticValue<int>("MajorityOwner", __callArgs, 4); }
        int Redraw(void* grid, void* cfg, void* strokeTiles, const char* name) const { void* managed_3 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { grid, cfg, strokeTiles, managed_3 }; return CallStaticValue<int>("Redraw", __callArgs, 4); }
        int Organize(void* grid, int tileIndex, const char* name) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { grid, &tileIndex, managed_2 }; return CallStaticValue<int>("Organize", __callArgs, 3); }
        bool IsUnorganized(void* grid, int tileIndex) const { void* __callArgs[] = { grid, &tileIndex }; return CallStaticValue<bool>("IsUnorganized", __callArgs, 2); }
        void SurveyUnorganized(void* grid, void* nation, void* dst, int max_) const { void* __callArgs[] = { grid, nation, dst, &max_ }; CallStatic("SurveyUnorganized", __callArgs, 4); }
        void Recount(void* grid, int stateId) const { void* __callArgs[] = { grid, &stateId }; CallStatic("Recount", __callArgs, 2); }
        void Release(void* grid, int tileIndex) const { void* __callArgs[] = { grid, &tileIndex }; CallStatic("Release", __callArgs, 2); }
        void EnsureBuilt(void* grid, void* cfg, void* map) const { void* __callArgs[] = { grid, cfg, map }; CallStatic("EnsureBuilt", __callArgs, 3); }
        void Reseed(void* grid, void* cfg, void* map, int seed) const { void* __callArgs[] = { grid, cfg, map, &seed }; CallStatic("Reseed", __callArgs, 4); }
        void CarveForStart(void* grid, void* cfg, void* map) const { void* __callArgs[] = { grid, cfg, map }; CallStatic("CarveForStart", __callArgs, 3); }
        int PermanentSeed(void* grid, void* map) const { void* __callArgs[] = { grid, map }; return CallStaticValue<int>("PermanentSeed", __callArgs, 2); }
        int SeedForFile(void* grid, int fileSeed) const { void* __callArgs[] = { grid, &fileSeed }; return CallStaticValue<int>("SeedForFile", __callArgs, 2); }
        void CarveAhead(void* grid, void* cfg, void* map, int seed) const { void* __callArgs[] = { grid, cfg, map, &seed }; CallStatic("CarveAhead", __callArgs, 4); }
        void Adopt(void* grid) const { void* __callArgs[] = { grid }; CallStatic("Adopt", __callArgs, 1); }
        void Sync(void* grid, void* cfg) const { void* __callArgs[] = { grid, cfg }; CallStatic("Sync", __callArgs, 2); }
        int AssignNow(void* grid, int tileIndex) const { void* __callArgs[] = { grid, &tileIndex }; return CallStaticValue<int>("AssignNow", __callArgs, 2); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void SweepWhole(void* grid, void* cfg, bool allowRebuild) const { void* __callArgs[] = { grid, cfg, &allowRebuild }; CallStatic("SweepWhole", __callArgs, 3); }
        int DeterministicSeed() const { return ReadStaticField<int>("DeterministicSeed"); }
        void DeterministicSeed(int value) const { WriteStaticField<int>("DeterministicSeed", value); }
    };
}
