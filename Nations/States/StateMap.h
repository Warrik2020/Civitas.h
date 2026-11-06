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
        void* Get(int id) const { void* args[] = { &id }; return CallStatic("Get", args, 1); }
        void* StateAt(void* grid, int tileIndex) const { void* args[] = { grid, &tileIndex }; return CallStatic("StateAt", args, 2); }
        int CellAt(int tileIndex) const { void* args[] = { &tileIndex }; return CallStaticValue<int>("CellAt", args, 1); }
        void CollectTiles(void* grid, int stateId, void* dst) const { void* args[] = { grid, &stateId, dst }; CallStatic("CollectTiles", args, 3); }
        int MajorityOwner(void* grid, int stateId, int& held, int& total) const { void* args[] = { grid, &stateId, &held, &total }; return CallStaticValue<int>("MajorityOwner", args, 4); }
        int Redraw(void* grid, void* cfg, void* strokeTiles, const char* name) const { void* managed_3 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { grid, cfg, strokeTiles, managed_3 }; return CallStaticValue<int>("Redraw", args, 4); }
        int Organize(void* grid, int tileIndex, const char* name) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { grid, &tileIndex, managed_2 }; return CallStaticValue<int>("Organize", args, 3); }
        bool IsUnorganized(void* grid, int tileIndex) const { void* args[] = { grid, &tileIndex }; return CallStaticValue<bool>("IsUnorganized", args, 2); }
        void SurveyUnorganized(void* grid, void* nation, void* dst, int max) const { void* args[] = { grid, nation, dst, &max }; CallStatic("SurveyUnorganized", args, 4); }
        void Recount(void* grid, int stateId) const { void* args[] = { grid, &stateId }; CallStatic("Recount", args, 2); }
        void Release(void* grid, int tileIndex) const { void* args[] = { grid, &tileIndex }; CallStatic("Release", args, 2); }
        void EnsureBuilt(void* grid, void* cfg, void* map) const { void* args[] = { grid, cfg, map }; CallStatic("EnsureBuilt", args, 3); }
        void Reseed(void* grid, void* cfg, void* map, int seed) const { void* args[] = { grid, cfg, map, &seed }; CallStatic("Reseed", args, 4); }
        void CarveForStart(void* grid, void* cfg, void* map) const { void* args[] = { grid, cfg, map }; CallStatic("CarveForStart", args, 3); }
        int PermanentSeed(void* grid, void* map) const { void* args[] = { grid, map }; return CallStaticValue<int>("PermanentSeed", args, 2); }
        int SeedForFile(void* grid, int fileSeed) const { void* args[] = { grid, &fileSeed }; return CallStaticValue<int>("SeedForFile", args, 2); }
        void CarveAhead(void* grid, void* cfg, void* map, int seed) const { void* args[] = { grid, cfg, map, &seed }; CallStatic("CarveAhead", args, 4); }
        void Adopt(void* grid) const { void* args[] = { grid }; CallStatic("Adopt", args, 1); }
        void Sync(void* grid, void* cfg) const { void* args[] = { grid, cfg }; CallStatic("Sync", args, 2); }
        int AssignNow(void* grid, int tileIndex) const { void* args[] = { grid, &tileIndex }; return CallStaticValue<int>("AssignNow", args, 2); }
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        void SweepWhole(void* grid, void* cfg, bool allowRebuild) const { void* args[] = { grid, cfg, &allowRebuild }; CallStatic("SweepWhole", args, 3); }
        int DeterministicSeed() const { return ReadStaticField<int>("DeterministicSeed"); }
        void SetDeterministicSeed(int value) const { WriteStaticField<int>("DeterministicSeed", value); }
        void* region() const { return ReadField<void*>("region"); }
        void SetRegion(void* value) const { WriteField<void*>("region", value); }
        void* grid() const { return ReadField<void*>("grid"); }
        void SetGrid(void* value) const { WriteField<void*>("grid", value); }
        int generation() const { return ReadField<int>("generation"); }
        void SetGeneration(int value) const { WriteField<int>("generation", value); }
        int seatTile() const { return ReadField<int>("seatTile"); }
        void SetSeatTile(int value) const { WriteField<int>("seatTile", value); }
        int seatVer() const { return ReadField<int>("seatVer"); }
        void SetSeatVer(int value) const { WriteField<int>("seatVer", value); }
        int minX() const { return ReadField<int>("minX"); }
        void SetMinX(int value) const { WriteField<int>("minX", value); }
        int minY() const { return ReadField<int>("minY"); }
        void SetMinY(int value) const { WriteField<int>("minY", value); }
        int maxX() const { return ReadField<int>("maxX"); }
        void SetMaxX(int value) const { WriteField<int>("maxX", value); }
        int maxY() const { return ReadField<int>("maxY"); }
        void SetMaxY(int value) const { WriteField<int>("maxY", value); }
        int64_t verSum() const { return ReadField<int64_t>("verSum"); }
        void SetVerSum(int64_t value) const { WriteField<int64_t>("verSum", value); }
        int best() const { return ReadField<int>("best"); }
        void SetBest(int value) const { WriteField<int>("best", value); }
        int held() const { return ReadField<int>("held"); }
        void SetHeld(int value) const { WriteField<int>("held", value); }
        int total() const { return ReadField<int>("total"); }
        void SetTotal(int value) const { WriteField<int>("total", value); }
        int seedTile() const { return ReadField<int>("seedTile"); }
        int tiles() const { return ReadField<int>("tiles"); }
        int originId() const { return ReadField<int>("originId"); }
        int state() const { return ReadField<int>("state"); }
        int first() const { return ReadField<int>("first"); }
        bool keep() const { return ReadField<bool>("keep"); }
    };
}
