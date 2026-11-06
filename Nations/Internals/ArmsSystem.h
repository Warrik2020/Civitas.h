#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class ArmsSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmsSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "ArmsSystem") {}
    public:
        void* Params(void* cfg, int kind) const { void* __callArgs[] = { cfg, &kind }; return CallStatic("Params", __callArgs, 2); }
        void* Name(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("Name", __callArgs, 1); }
        int LeverOf(int kind) const { void* __callArgs[] = { &kind }; return CallStaticValue<int>("LeverOf", __callArgs, 1); }
        bool Delegated(void* it, int kind) const { void* __callArgs[] = { it, &kind }; return CallStaticValue<bool>("Delegated", __callArgs, 2); }
        float StartStock(void* cfg, int kind) const { void* __callArgs[] = { cfg, &kind }; return CallStaticValue<float>("StartStock", __callArgs, 2); }
        int FactoryPot(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<int>("FactoryPot", __callArgs, 1); }
        int WorkshopPot(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<int>("WorkshopPot", __callArgs, 1); }
        int Pot(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<int>("Pot", __callArgs, 2); }
        int Free(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<int>("Free", __callArgs, 2); }
        float SlotRate(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("SlotRate", __callArgs, 2); }
        float FactoryShare(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("FactoryShare", __callArgs, 2); }
        int DesignAtFactory(void* it, int ordinal) const { void* __callArgs[] = { it, &ordinal }; return CallStaticValue<int>("DesignAtFactory", __callArgs, 2); }
        int FactoriesOnLine(void* it, int designId) const { void* __callArgs[] = { it, &designId }; return CallStaticValue<int>("FactoriesOnLine", __callArgs, 2); }
        float Trim(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("Trim", __callArgs, 2); }
        float EffortMul(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("EffortMul", __callArgs, 1); }
        float LineOutput(void* it, void* cfg, void* line) const { void* __callArgs[] = { it, cfg, &line }; return CallStaticValue<float>("LineOutput", __callArgs, 3); }
        float PerSlot(void* it, void* cfg, void* d) const { void* __callArgs[] = { it, cfg, d }; return CallStaticValue<float>("PerSlot", __callArgs, 3); }
        void Tick(void* it, void* cfg, int span = 1) const { void* __callArgs[] = { it, cfg, &span }; CallStatic("Tick", __callArgs, 3); }
        float Production(void* it, void* cfg, int kind) const { void* __callArgs[] = { it, cfg, &kind }; return CallStaticValue<float>("Production", __callArgs, 3); }
        float Production(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("Production", __callArgs, 2); }
        bool Starved(void* it, int pool) const { void* __callArgs[] = { it, &pool }; return CallStaticValue<bool>("Starved", __callArgs, 2); }
        bool NeededByTemplates(void* it, int pool) const { void* __callArgs[] = { it, &pool }; return CallStaticValue<bool>("NeededByTemplates", __callArgs, 2); }
        float UnitGold(void* cfg, int pool, float gross) const { void* __callArgs[] = { cfg, &pool, &gross }; return CallStaticValue<float>("UnitGold", __callArgs, 3); }
        float Reserve(void* it, void* cfg, int kind) const { void* __callArgs[] = { it, cfg, &kind }; return CallStaticValue<float>("Reserve", __callArgs, 3); }
        int PoolCount() const { return ReadStaticField<int>("PoolCount"); }
    };
}
