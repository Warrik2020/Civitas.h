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
        void Add(int pool, int flow, float amount) const { void* args[] = { &pool, &flow, &amount }; Call("Add", args, 3); }
        void Roll() const { Call("Roll", nullptr, 0); }
        float PerTick(int pool, int flow) const { void* args[] = { &pool, &flow }; return CallValue<float>("PerTick", args, 2); }
        float GainPerTick(int pool) const { void* args[] = { &pool }; return CallValue<float>("GainPerTick", args, 1); }
        float LossPerTick(int pool) const { void* args[] = { &pool }; return CallValue<float>("LossPerTick", args, 1); }
        float DrawPerTick(int pool) const { void* args[] = { &pool }; return CallValue<float>("DrawPerTick", args, 1); }
        float NetPerTick(int pool) const { void* args[] = { &pool }; return CallValue<float>("NetPerTick", args, 1); }
        int Window() const { return ReadStaticField<int>("Window"); }
        int FlowCount() const { return ReadStaticField<int>("FlowCount"); }
    };
}
