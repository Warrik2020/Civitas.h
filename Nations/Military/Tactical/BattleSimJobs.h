#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleSimJobs : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleSimJobs(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleSimJobs") {}
    public:
        uint32_t Hash(uint32_t x) const { void* __callArgs[] = { &x }; return CallStaticValue<uint32_t>("Hash", __callArgs, 1); }
        float Hash01(uint32_t x) const { void* __callArgs[] = { &x }; return CallStaticValue<float>("Hash01", __callArgs, 1); }
        float DistToBlock(void* p, void* b) const { void* __callArgs[] = { p, &b }; return CallStaticValue<float>("DistToBlock", __callArgs, 2); }
        uint8_t Encirclement(uint32_t blocked) const { void* __callArgs[] = { &blocked }; return CallStaticValue<uint8_t>("Encirclement", __callArgs, 1); }
        int Octant(void* v) const { void* __callArgs[] = { v }; return CallStaticValue<int>("Octant", __callArgs, 1); }
        void* BlockPoint(void* b, float u, float v) const { void* __callArgs[] = { &b, &u, &v }; return CallStatic("BlockPoint", __callArgs, 3); }
        float TerrainSpeed(void* speed, int cellsWide, int cellsHigh, float cellsPerTile, void* p) const { void* __callArgs[] = { &speed, &cellsWide, &cellsHigh, &cellsPerTile, p }; return CallStaticValue<float>("TerrainSpeed", __callArgs, 5); }
        float TerrainHeight(void* height, int cellsWide, int cellsHigh, float cellsPerTile, void* p) const { void* __callArgs[] = { &height, &cellsWide, &cellsHigh, &cellsPerTile, p }; return CallStaticValue<float>("TerrainHeight", __callArgs, 5); }
        float BlockOverlapTest(void* a, void* b) const { void* __callArgs[] = { &a, &b }; return CallStaticValue<float>("BlockOverlapTest", __callArgs, 2); }
        uint8_t Slew(uint8_t cur, void* want, float maxRad, uint32_t salt, void* dir) const { void* __callArgs[] = { &cur, want, &maxRad, &salt, dir }; return CallStaticValue<uint8_t>("Slew", __callArgs, 5); }
        void* Drift(uint32_t salt, uint32_t stepRaw, float driftSeconds) const { void* __callArgs[] = { &salt, &stepRaw, &driftSeconds }; return CallStatic("Drift", __callArgs, 3); }
        int MeleeRanks() const { return ReadStaticField<int>("MeleeRanks"); }
    };
}
