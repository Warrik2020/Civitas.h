#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Cities
{
    class CityPopulationSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityPopulationSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities", "CityPopulationSystem") {}
    public:
        void Forget(int cityId) const { void* args[] = { &cityId }; CallStatic("Forget", args, 1); }
        void NoteDrawAt(int cityId, float people) const { void* args[] = { &cityId, &people }; CallStatic("NoteDrawAt", args, 2); }
        float WeightOf(void* c, void* ccfg) const { void* args[] = { c, ccfg }; return CallStaticValue<float>("WeightOf", args, 2); }
        void Tick(void* it, void* cities, void* ccfg, void* cfg, float balanceTicksPerYear, int span = 1) const { void* args[] = { it, cities, ccfg, cfg, &balanceTicksPerYear, &span }; CallStatic("Tick", args, 6); }
        void SeedFromNation(void* it, void* cities, void* ccfg) const { void* args[] = { it, cities, ccfg }; CallStatic("SeedFromNation", args, 3); }
        float Relocate(void* cities, void* to, float people) const { void* args[] = { cities, to, &people }; return CallStaticValue<float>("Relocate", args, 3); }
        float SumOf(void* cities) const { void* args[] = { cities }; return CallStaticValue<float>("SumOf", args, 1); }
    };
}
