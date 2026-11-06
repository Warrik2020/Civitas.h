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
        void Forget(int cityId) const { void* __callArgs[] = { &cityId }; CallStatic("Forget", __callArgs, 1); }
        void NoteDrawAt(int cityId, float people) const { void* __callArgs[] = { &cityId, &people }; CallStatic("NoteDrawAt", __callArgs, 2); }
        float WeightOf(void* c, void* ccfg) const { void* __callArgs[] = { c, ccfg }; return CallStaticValue<float>("WeightOf", __callArgs, 2); }
        void Tick(void* it, void* cities, void* ccfg, void* cfg, float balanceTicksPerYear, int span = 1) const { void* __callArgs[] = { it, cities, ccfg, cfg, &balanceTicksPerYear, &span }; CallStatic("Tick", __callArgs, 6); }
        void SeedFromNation(void* it, void* cities, void* ccfg) const { void* __callArgs[] = { it, cities, ccfg }; CallStatic("SeedFromNation", __callArgs, 3); }
        float Relocate(void* cities, void* to, float people) const { void* __callArgs[] = { cities, to, &people }; return CallStaticValue<float>("Relocate", __callArgs, 3); }
        float SumOf(void* cities) const { void* __callArgs[] = { cities }; return CallStaticValue<float>("SumOf", __callArgs, 1); }
    };
}
