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
        void* MilitaryOf(int nationId) const { void* args[] = { &nationId }; return Call("MilitaryOf", args, 1); }
        void* FieldOf(int nationId) const { void* args[] = { &nationId }; return Call("FieldOf", args, 1); }
        void Watch(int divisionId) const { void* args[] = { &divisionId }; Call("Watch", args, 1); }
        void NoteRoad(int tile, int level) const { void* args[] = { &tile, &level }; Call("NoteRoad", args, 2); }
        void Step(void* grid, void* militaries, void* milById, void* getNation, void* cities, void* buckets, void* cfg, int idCapacity, float ticksPerDay, int tick) const { void* args[] = { grid, militaries, milById, getNation, cities, buckets, cfg, &idCapacity, &ticksPerDay, &tick }; Call("Step", args, 10); }
        void StepCore(void* grid, void* militaries, void* milById, void* getNation, void* cities, void* buckets, void* cfg, int idCapacity, float ticksPerDay, int tick) const { void* args[] = { grid, militaries, milById, getNation, cities, buckets, cfg, &idCapacity, &ticksPerDay, &tick }; Call("StepCore", args, 10); }
        bool Feeds(uint8_t cls) const { void* args[] = { &cls }; return CallStaticValue<bool>("Feeds", args, 1); }
        void* CityOutput(void* c, float techMul) const { void* args[] = { c, &techMul }; return CallStatic("CityOutput", args, 2); }
        bool Sample(int nationId, float x, float y, void* r) const { void* args[] = { &nationId, &x, &y, &r }; return CallValue<bool>("Sample", args, 4); }
        float ReachValueAt(int nationId, float x, float y, uint8_t& cls) const { void* args[] = { &nationId, &x, &y, &cls }; return CallValue<float>("ReachValueAt", args, 4); }
        float LoadAt(int nationId, void* pos, int excludeId, int& count) const { void* args[] = { &nationId, pos, &excludeId, &count }; return CallValue<float>("LoadAt", args, 4); }
        void Restore(void* d, float level, void* cfg) const { void* args[] = { d, &level, cfg }; CallStatic("Restore", args, 3); }
        void Clear() const { Call("Clear", nullptr, 0); }
        int FieldMarginTiles() const { return ReadStaticField<int>("FieldMarginTiles"); }
        int PeaceResolveIntervalTicks() const { return ReadStaticField<int>("PeaceResolveIntervalTicks"); }
        float BlockadedOutputMul() const { return ReadStaticField<float>("BlockadedOutputMul"); }
        float BeachheadDepotShare() const { return ReadStaticField<float>("BeachheadDepotShare"); }
        int CommandWarResolveIntervalTicks() const { return ReadStaticField<int>("CommandWarResolveIntervalTicks"); }
        void* Cells() const { return ReadStaticField<void*>("Cells"); }
        void* Field() const { return ReadStaticField<void*>("Field"); }
        void* Divisions() const { return ReadStaticField<void*>("Divisions"); }
        void* published() const { return ReadField<void*>("published"); }
        void SetPublished(void* value) const { WriteField<void*>("published", value); }
        void* build() const { return ReadField<void*>("build"); }
        void SetBuild(void* value) const { WriteField<void*>("build", value); }
        void* mil() const { return ReadField<void*>("mil"); }
        void SetMil(void* value) const { WriteField<void*>("mil", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int startTick() const { return ReadField<int>("startTick"); }
        void SetStartTick(int value) const { WriteField<int>("startTick", value); }
        int phase() const { return ReadField<int>("phase"); }
        void SetPhase(int value) const { WriteField<int>("phase", value); }
        int cursor() const { return ReadField<int>("cursor"); }
        void SetCursor(int value) const { WriteField<int>("cursor", value); }
        int lockLen() const { return ReadField<int>("lockLen"); }
        void SetLockLen(int value) const { WriteField<int>("lockLen", value); }
        double tiled() const { return ReadField<double>("tiled"); }
        void SetTiled(double value) const { WriteField<double>("tiled", value); }
        void* run() const { return ReadField<void*>("run"); }
    };
}
