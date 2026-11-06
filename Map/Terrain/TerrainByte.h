#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Terrain
{
    class TerrainByte : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TerrainByte(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Terrain", "TerrainByte") {}
    public:
        int CoverOf(uint8_t b) const { void* __callArgs[] = { &b }; return CallStaticValue<int>("CoverOf", __callArgs, 1); }
        int ReliefOf(uint8_t b) const { void* __callArgs[] = { &b }; return CallStaticValue<int>("ReliefOf", __callArgs, 1); }
        uint8_t Pack(int c, int r) const { void* __callArgs[] = { &c, &r }; return CallStaticValue<uint8_t>("Pack", __callArgs, 2); }
        bool IsWater(uint8_t b) const { void* __callArgs[] = { &b }; return CallStaticValue<bool>("IsWater", __callArgs, 1); }
        int TypeOf(uint8_t b) const { void* __callArgs[] = { &b }; return CallStaticValue<int>("TypeOf", __callArgs, 1); }
        void* CoverName(int c) const { void* __callArgs[] = { &c }; return CallStatic("CoverName", __callArgs, 1); }
        void* ReliefName(int r) const { void* __callArgs[] = { &r }; return CallStatic("ReliefName", __callArgs, 1); }
        void* Name(uint8_t b) const { void* __callArgs[] = { &b }; return CallStatic("Name", __callArgs, 1); }
        int CoverMask() const { return ReadStaticField<int>("CoverMask"); }
        int ReliefShift() const { return ReadStaticField<int>("ReliefShift"); }
        int CoverCount() const { return ReadStaticField<int>("CoverCount"); }
        int ReliefCount() const { return ReadStaticField<int>("ReliefCount"); }
        int TypeCount() const { return ReadStaticField<int>("TypeCount"); }
    };
}
