#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PopulationSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PopulationSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PopulationSystem") {}
    public:
        void Tick(void* it, void* cfg, float balanceTicksPerYear, bool applyGrowth = true, int span = 1) const { void* __callArgs[] = { it, cfg, &balanceTicksPerYear, &applyGrowth, &span }; CallStatic("Tick", __callArgs, 5); }
        float Grow(float rate, int span) const { void* __callArgs[] = { &rate, &span }; return CallStaticValue<float>("Grow", __callArgs, 2); }
        float CapacityOf(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("CapacityOf", __callArgs, 2); }
        float GainRate(float fill, void* it, void* cfg, float balanceTicksPerYear, float& funded, float& taper) const { void* __callArgs[] = { &fill, it, cfg, &balanceTicksPerYear, &funded, &taper }; return CallStaticValue<float>("GainRate", __callArgs, 6); }
        float Remove(void* it, float people) const { void* __callArgs[] = { it, &people }; return CallStaticValue<float>("Remove", __callArgs, 2); }
        void Add(void* it, float people) const { void* __callArgs[] = { it, &people }; CallStatic("Add", __callArgs, 2); }
        void Left(void* it, float people) const { void* __callArgs[] = { it, &people }; CallStatic("Left", __callArgs, 2); }
        void Arrived(void* it, float people) const { void* __callArgs[] = { it, &people }; CallStatic("Arrived", __callArgs, 2); }
        void Return_(void* it, float people) const { void* __callArgs[] = { it, &people }; CallStatic("Return", __callArgs, 2); }
        void SetAuthored(void* it, float people) const { void* __callArgs[] = { it, &people }; CallStatic("SetAuthored", __callArgs, 2); }
        void SyncFromLand(void* it) const { void* __callArgs[] = { it }; CallStatic("SyncFromLand", __callArgs, 1); }
        float Move(void* from, void* to, float people) const { void* __callArgs[] = { from, to, &people }; return CallStaticValue<float>("Move", __callArgs, 3); }
        float MoveWithLand(void* from, void* to, int tilesMoved, int tilesKept, float townPeople) const { void* __callArgs[] = { from, to, &tilesMoved, &tilesKept, &townPeople }; return CallStaticValue<float>("MoveWithLand", __callArgs, 5); }
        float NetChangePerTick(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<float>("NetChangePerTick", __callArgs, 1); }
        float WelfarePerCapita(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("WelfarePerCapita", __callArgs, 2); }
        float WelfareRate(float share, float perCapita, void* cfg, float balanceTicksPerYear) const { void* __callArgs[] = { &share, &perCapita, cfg, &balanceTicksPerYear }; return CallStaticValue<float>("WelfareRate", __callArgs, 4); }
        float WelfarePerYear(float share, float perCapita, void* cfg) const { void* __callArgs[] = { &share, &perCapita, cfg }; return CallStaticValue<float>("WelfarePerYear", __callArgs, 3); }
        float WelfareSufficiency(float perCapita, void* cfg) const { void* __callArgs[] = { &perCapita, cfg }; return CallStaticValue<float>("WelfareSufficiency", __callArgs, 2); }
        float WelfareStrength(float share, void* cfg) const { void* __callArgs[] = { &share, cfg }; return CallStaticValue<float>("WelfareStrength", __callArgs, 2); }
        float Overdrive(float share, void* cfg) const { void* __callArgs[] = { &share, cfg }; return CallStaticValue<float>("Overdrive", __callArgs, 2); }
        float PlateauFill(float share, void* cfg) const { void* __callArgs[] = { &share, cfg }; return CallStaticValue<float>("PlateauFill", __callArgs, 2); }
    };
}
