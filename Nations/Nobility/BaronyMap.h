#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Nobility
{
    class BaronyMap : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BaronyMap(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Nobility", "BaronyMap") {}
    public:
        void Clear() const { CallStatic("Clear", nullptr, 0); }
        bool Bind(void* grid, void* scfg, void* ncfg) const { void* __callArgs[] = { grid, scfg, ncfg }; return CallStaticValue<bool>("Bind", __callArgs, 3); }
        void BindForTest(void* grid, int target, int seed) const { void* __callArgs[] = { grid, &target, &seed }; CallStatic("BindForTest", __callArgs, 3); }
        void* Get(int stateId) const { void* __callArgs[] = { &stateId }; return CallStatic("Get", __callArgs, 1); }
        void* ByDeed(int deed) const { void* __callArgs[] = { &deed }; return CallStatic("ByDeed", __callArgs, 1); }
        void* At(void* grid, int tile) const { void* __callArgs[] = { grid, &tile }; return CallStatic("At", __callArgs, 2); }
        bool IsCurrent(void* s) const { void* __callArgs[] = { s }; return CallStaticValue<bool>("IsCurrent", __callArgs, 1); }
        void* Ensure(void* grid, void* scfg, void* ncfg, void* s) const { void* __callArgs[] = { grid, scfg, ncfg, s }; return CallStatic("Ensure", __callArgs, 4); }
        void MarkStale(int stateId) const { void* __callArgs[] = { &stateId }; CallStatic("MarkStale", __callArgs, 1); }
        void EvictRetired() const { CallStatic("EvictRetired", nullptr, 0); }
        int CellOf(int tile) const { void* __callArgs[] = { &tile }; return CallStaticValue<int>("CellOf", __callArgs, 1); }
        uint8_t None() const { return ReadStaticField<uint8_t>("None"); }
        int VirtualBit() const { return ReadStaticField<int>("VirtualBit"); }
    };
}
