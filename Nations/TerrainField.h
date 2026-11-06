#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class TerrainField : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TerrainField(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "TerrainField") {}
    public:
        uint8_t UrbanAt(int tile) const { void* __callArgs[] = { &tile }; return CallStaticValue<uint8_t>("UrbanAt", __callArgs, 1); }
        void Bind(void* grid, void* data) const { void* __callArgs[] = { grid, data }; CallStatic("Bind", __callArgs, 2); }
        uint8_t At(int tile) const { void* __callArgs[] = { &tile }; return CallStaticValue<uint8_t>("At", __callArgs, 1); }
        float MarchMulAt(void* grid, int x, int y, int type) const { void* __callArgs[] = { grid, &x, &y, &type }; return CallStaticValue<float>("MarchMulAt", __callArgs, 4); }
        float DefenceMulUnder(void* d, float fortMul) const { void* __callArgs[] = { d, &fortMul }; return CallStaticValue<float>("DefenceMulUnder", __callArgs, 2); }
        float DefenceMulAt(int tile) const { void* __callArgs[] = { &tile }; return CallStaticValue<float>("DefenceMulAt", __callArgs, 1); }
        void* PathCostGrid(void* grid, int s) const { void* __callArgs[] = { grid, &s }; return CallStatic("PathCostGrid", __callArgs, 2); }
        float ElevationAt(float x, float y) const { void* __callArgs[] = { &x, &y }; return CallStaticValue<float>("ElevationAt", __callArgs, 2); }
        bool IsHighland(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallStaticValue<bool>("IsHighland", __callArgs, 2); }
        void StampCities(void* cities) const { void* __callArgs[] = { cities }; CallStatic("StampCities", __callArgs, 1); }
        uint8_t UrbanNone() const { return ReadStaticField<uint8_t>("UrbanNone"); }
        uint8_t UrbanRing() const { return ReadStaticField<uint8_t>("UrbanRing"); }
        uint8_t UrbanCore() const { return ReadStaticField<uint8_t>("UrbanCore"); }
    };
}
