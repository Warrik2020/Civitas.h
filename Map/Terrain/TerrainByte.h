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
        int CoverOf(uint8_t b) const { void* args[] = { &b }; return CallStaticValue<int>("CoverOf", args, 1); }
        int ReliefOf(uint8_t b) const { void* args[] = { &b }; return CallStaticValue<int>("ReliefOf", args, 1); }
        uint8_t Pack(int c, int r) const { void* args[] = { &c, &r }; return CallStaticValue<uint8_t>("Pack", args, 2); }
        bool IsWater(uint8_t b) const { void* args[] = { &b }; return CallStaticValue<bool>("IsWater", args, 1); }
        int TypeOf(uint8_t b) const { void* args[] = { &b }; return CallStaticValue<int>("TypeOf", args, 1); }
        void* CoverName(int c) const { void* args[] = { &c }; return CallStatic("CoverName", args, 1); }
        void* ReliefName(int r) const { void* args[] = { &r }; return CallStatic("ReliefName", args, 1); }
        void* Name(uint8_t b) const { void* args[] = { &b }; return CallStatic("Name", args, 1); }
        int CoverMask() const { return ReadStaticField<int>("CoverMask"); }
        int ReliefShift() const { return ReadStaticField<int>("ReliefShift"); }
        int CoverCount() const { return ReadStaticField<int>("CoverCount"); }
        int ReliefCount() const { return ReadStaticField<int>("ReliefCount"); }
        int TypeCount() const { return ReadStaticField<int>("TypeCount"); }
    };
}
