#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class TerrainPopulation : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TerrainPopulation(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "TerrainPopulation") {}
    public:
        void Bind(void* grid, void* data) const { void* __callArgs[] = { grid, data }; CallStatic("Bind", __callArgs, 2); }
        float RawFertilityOf(uint8_t b) const { void* __callArgs[] = { &b }; return CallStaticValue<float>("RawFertilityOf", __callArgs, 1); }
        float TileFertility(int tile) const { void* __callArgs[] = { &tile }; return CallStaticValue<float>("TileFertility", __callArgs, 1); }
        float FertilityOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<float>("FertilityOf", __callArgs, 1); }
        float CityFertility(void* c) const { void* __callArgs[] = { c }; return CallStaticValue<float>("CityFertility", __callArgs, 1); }
    };
}
