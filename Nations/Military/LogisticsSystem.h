#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class LogisticsSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LogisticsSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "LogisticsSystem") {}
    public:
        void* MilitaryOf(int nationId) const { void* __callArgs[] = { &nationId }; return Call("MilitaryOf", __callArgs, 1); }
        void* FieldOf(int nationId) const { void* __callArgs[] = { &nationId }; return Call("FieldOf", __callArgs, 1); }
        void Watch(int divisionId) const { void* __callArgs[] = { &divisionId }; Call("Watch", __callArgs, 1); }
        void NoteRoad(int tile, int level) const { void* __callArgs[] = { &tile, &level }; Call("NoteRoad", __callArgs, 2); }
        void Step(void* grid, void* militaries, void* milById, void* getNation, void* cities, void* buckets, void* cfg, int idCapacity, float ticksPerDay, int tick) const { void* __callArgs[] = { grid, militaries, milById, getNation, cities, buckets, cfg, &idCapacity, &ticksPerDay, &tick }; Call("Step", __callArgs, 10); }
        void StepCore(void* grid, void* militaries, void* milById, void* getNation, void* cities, void* buckets, void* cfg, int idCapacity, float ticksPerDay, int tick) const { void* __callArgs[] = { grid, militaries, milById, getNation, cities, buckets, cfg, &idCapacity, &ticksPerDay, &tick }; Call("StepCore", __callArgs, 10); }
        bool Feeds(uint8_t cls) const { void* __callArgs[] = { &cls }; return CallStaticValue<bool>("Feeds", __callArgs, 1); }
        void* CityOutput(void* c, float techMul) const { void* __callArgs[] = { c, &techMul }; return CallStatic("CityOutput", __callArgs, 2); }
        bool Sample(int nationId, float x, float y, void* r) const { void* __callArgs[] = { &nationId, &x, &y, &r }; return CallValue<bool>("Sample", __callArgs, 4); }
        float ReachValueAt(int nationId, float x, float y, uint8_t& cls) const { void* __callArgs[] = { &nationId, &x, &y, &cls }; return CallValue<float>("ReachValueAt", __callArgs, 4); }
        float LoadAt(int nationId, void* pos, int excludeId, int& count) const { void* __callArgs[] = { &nationId, pos, &excludeId, &count }; return CallValue<float>("LoadAt", __callArgs, 4); }
        void Restore(void* d, float level, void* cfg) const { void* __callArgs[] = { d, &level, cfg }; CallStatic("Restore", __callArgs, 3); }
        void Clear() const { Call("Clear", nullptr, 0); }
        int FieldMarginTiles() const { return ReadStaticField<int>("FieldMarginTiles"); }
        int PeaceResolveIntervalTicks() const { return ReadStaticField<int>("PeaceResolveIntervalTicks"); }
        float BlockadedOutputMul() const { return ReadStaticField<float>("BlockadedOutputMul"); }
        float BeachheadDepotShare() const { return ReadStaticField<float>("BeachheadDepotShare"); }
        int CommandWarResolveIntervalTicks() const { return ReadStaticField<int>("CommandWarResolveIntervalTicks"); }
    };
}
