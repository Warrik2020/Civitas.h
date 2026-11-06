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
        bool Bind(void* grid, void* scfg, void* ncfg) const { void* args[] = { grid, scfg, ncfg }; return CallStaticValue<bool>("Bind", args, 3); }
        void BindForTest(void* grid, int target, int seed) const { void* args[] = { grid, &target, &seed }; CallStatic("BindForTest", args, 3); }
        void* Get(int stateId) const { void* args[] = { &stateId }; return CallStatic("Get", args, 1); }
        void* ByDeed(int deed) const { void* args[] = { &deed }; return CallStatic("ByDeed", args, 1); }
        void* At(void* grid, int tile) const { void* args[] = { grid, &tile }; return CallStatic("At", args, 2); }
        bool IsCurrent(void* s) const { void* args[] = { s }; return CallStaticValue<bool>("IsCurrent", args, 1); }
        void* Ensure(void* grid, void* scfg, void* ncfg, void* s) const { void* args[] = { grid, scfg, ncfg, s }; return CallStatic("Ensure", args, 4); }
        void MarkStale(int stateId) const { void* args[] = { &stateId }; CallStatic("MarkStale", args, 1); }
        void EvictRetired() const { CallStatic("EvictRetired", nullptr, 0); }
        int CellOf(int tile) const { void* args[] = { &tile }; return CallStaticValue<int>("CellOf", args, 1); }
        void Reset() const { Call("Reset", nullptr, 0); }
        void Push(int distance, int tile) const { void* args[] = { &distance, &tile }; Call("Push", args, 2); }
        int Pop(int bucket) const { void* args[] = { &bucket }; return CallValue<int>("Pop", args, 1); }
        uint8_t None() const { return ReadStaticField<uint8_t>("None"); }
        int VirtualBit() const { return ReadStaticField<int>("VirtualBit"); }
        int Mask() const { return ReadStaticField<int>("Mask"); }
        void* Size() const { return ReadField<void*>("Size"); }
        int Queued() const { return ReadField<int>("Queued"); }
        void SetQueued(int value) const { WriteField<int>("Queued", value); }
    };
}
