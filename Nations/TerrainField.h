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
        uint8_t UrbanAt(int tile) const { void* args[] = { &tile }; return CallStaticValue<uint8_t>("UrbanAt", args, 1); }
        void Bind(void* grid, void* data) const { void* args[] = { grid, data }; CallStatic("Bind", args, 2); }
        uint8_t At(int tile) const { void* args[] = { &tile }; return CallStaticValue<uint8_t>("At", args, 1); }
        float MarchMulAt(void* grid, int x, int y, int type) const { void* args[] = { grid, &x, &y, &type }; return CallStaticValue<float>("MarchMulAt", args, 4); }
        float DefenceMulUnder(void* d, float fortMul) const { void* args[] = { d, &fortMul }; return CallStaticValue<float>("DefenceMulUnder", args, 2); }
        float DefenceMulAt(int tile) const { void* args[] = { &tile }; return CallStaticValue<float>("DefenceMulAt", args, 1); }
        void* PathCostGrid(void* grid, int s) const { void* args[] = { grid, &s }; return CallStatic("PathCostGrid", args, 2); }
        float ElevationAt(float x, float y) const { void* args[] = { &x, &y }; return CallStaticValue<float>("ElevationAt", args, 2); }
        bool IsHighland(int x, int y) const { void* args[] = { &x, &y }; return CallStaticValue<bool>("IsHighland", args, 2); }
        void StampCities(void* cities) const { void* args[] = { cities }; CallStatic("StampCities", args, 1); }
        uint8_t UrbanNone() const { return ReadStaticField<uint8_t>("UrbanNone"); }
        uint8_t UrbanRing() const { return ReadStaticField<uint8_t>("UrbanRing"); }
        uint8_t UrbanCore() const { return ReadStaticField<uint8_t>("UrbanCore"); }
    };
}
