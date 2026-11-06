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
        void Bind(void* grid, void* data) const { void* args[] = { grid, data }; CallStatic("Bind", args, 2); }
        float RawFertilityOf(uint8_t b) const { void* args[] = { &b }; return CallStaticValue<float>("RawFertilityOf", args, 1); }
        float TileFertility(int tile) const { void* args[] = { &tile }; return CallStaticValue<float>("TileFertility", args, 1); }
        float FertilityOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<float>("FertilityOf", args, 1); }
        float CityFertility(void* c) const { void* args[] = { c }; return CallStaticValue<float>("CityFertility", args, 1); }
    };
}
