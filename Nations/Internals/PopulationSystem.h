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
        void Tick(void* it, void* cfg, float balanceTicksPerYear, bool applyGrowth = true, int span = 1) const { void* args[] = { it, cfg, &balanceTicksPerYear, &applyGrowth, &span }; CallStatic("Tick", args, 5); }
        float Grow(float rate, int span) const { void* args[] = { &rate, &span }; return CallStaticValue<float>("Grow", args, 2); }
        float CapacityOf(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("CapacityOf", args, 2); }
        float GainRate(float fill, void* it, void* cfg, float balanceTicksPerYear, float& funded, float& taper) const { void* args[] = { &fill, it, cfg, &balanceTicksPerYear, &funded, &taper }; return CallStaticValue<float>("GainRate", args, 6); }
        float Remove(void* it, float people) const { void* args[] = { it, &people }; return CallStaticValue<float>("Remove", args, 2); }
        void Add(void* it, float people) const { void* args[] = { it, &people }; CallStatic("Add", args, 2); }
        void Left(void* it, float people) const { void* args[] = { it, &people }; CallStatic("Left", args, 2); }
        void Arrived(void* it, float people) const { void* args[] = { it, &people }; CallStatic("Arrived", args, 2); }
        void Return_(void* it, float people) const { void* args[] = { it, &people }; CallStatic("Return", args, 2); }
        void SetAuthored(void* it, float people) const { void* args[] = { it, &people }; CallStatic("SetAuthored", args, 2); }
        void SyncFromLand(void* it) const { void* args[] = { it }; CallStatic("SyncFromLand", args, 1); }
        float Move(void* from, void* to, float people) const { void* args[] = { from, to, &people }; return CallStaticValue<float>("Move", args, 3); }
        float MoveWithLand(void* from, void* to, int tilesMoved, int tilesKept, float townPeople) const { void* args[] = { from, to, &tilesMoved, &tilesKept, &townPeople }; return CallStaticValue<float>("MoveWithLand", args, 5); }
        float NetChangePerTick(void* it) const { void* args[] = { it }; return CallStaticValue<float>("NetChangePerTick", args, 1); }
        float WelfarePerCapita(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("WelfarePerCapita", args, 2); }
        float WelfareRate(float share, float perCapita, void* cfg, float balanceTicksPerYear) const { void* args[] = { &share, &perCapita, cfg, &balanceTicksPerYear }; return CallStaticValue<float>("WelfareRate", args, 4); }
        float WelfarePerYear(float share, float perCapita, void* cfg) const { void* args[] = { &share, &perCapita, cfg }; return CallStaticValue<float>("WelfarePerYear", args, 3); }
        float WelfareSufficiency(float perCapita, void* cfg) const { void* args[] = { &perCapita, cfg }; return CallStaticValue<float>("WelfareSufficiency", args, 2); }
        float WelfareStrength(float share, void* cfg) const { void* args[] = { &share, cfg }; return CallStaticValue<float>("WelfareStrength", args, 2); }
        float Overdrive(float share, void* cfg) const { void* args[] = { &share, cfg }; return CallStaticValue<float>("Overdrive", args, 2); }
        float PlateauFill(float share, void* cfg) const { void* args[] = { &share, cfg }; return CallStaticValue<float>("PlateauFill", args, 2); }
    };
}
