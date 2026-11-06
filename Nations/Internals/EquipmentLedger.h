#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class EquipmentLedger : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EquipmentLedger(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "EquipmentLedger") {}
    public:
        void Add(int pool, int flow, float amount) const { void* __callArgs[] = { &pool, &flow, &amount }; Call("Add", __callArgs, 3); }
        void Roll() const { Call("Roll", nullptr, 0); }
        float PerTick(int pool, int flow) const { void* __callArgs[] = { &pool, &flow }; return CallValue<float>("PerTick", __callArgs, 2); }
        float GainPerTick(int pool) const { void* __callArgs[] = { &pool }; return CallValue<float>("GainPerTick", __callArgs, 1); }
        float LossPerTick(int pool) const { void* __callArgs[] = { &pool }; return CallValue<float>("LossPerTick", __callArgs, 1); }
        float DrawPerTick(int pool) const { void* __callArgs[] = { &pool }; return CallValue<float>("DrawPerTick", __callArgs, 1); }
        float NetPerTick(int pool) const { void* __callArgs[] = { &pool }; return CallValue<float>("NetPerTick", __callArgs, 1); }
        int Window() const { return ReadStaticField<int>("Window"); }
        int FlowCount() const { return ReadStaticField<int>("FlowCount"); }
    };
}
