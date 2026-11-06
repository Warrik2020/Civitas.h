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
        void* Params(void* cfg, int kind) const { void* args[] = { cfg, &kind }; return CallStatic("Params", args, 2); }
        void* Name(int kind) const { void* args[] = { &kind }; return CallStatic("Name", args, 1); }
        int LeverOf(int kind) const { void* args[] = { &kind }; return CallStaticValue<int>("LeverOf", args, 1); }
        bool Delegated(void* it, int kind) const { void* args[] = { it, &kind }; return CallStaticValue<bool>("Delegated", args, 2); }
        float StartStock(void* cfg, int kind) const { void* args[] = { cfg, &kind }; return CallStaticValue<float>("StartStock", args, 2); }
        int FactoryPot(void* it) const { void* args[] = { it }; return CallStaticValue<int>("FactoryPot", args, 1); }
        int WorkshopPot(void* cfg) const { void* args[] = { cfg }; return CallStaticValue<int>("WorkshopPot", args, 1); }
        int Pot(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<int>("Pot", args, 2); }
        int Free(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<int>("Free", args, 2); }
        float SlotRate(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("SlotRate", args, 2); }
        float FactoryShare(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("FactoryShare", args, 2); }
        int DesignAtFactory(void* it, int ordinal) const { void* args[] = { it, &ordinal }; return CallStaticValue<int>("DesignAtFactory", args, 2); }
        int FactoriesOnLine(void* it, int designId) const { void* args[] = { it, &designId }; return CallStaticValue<int>("FactoriesOnLine", args, 2); }
        float Trim(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("Trim", args, 2); }
        float EffortMul(void* d) const { void* args[] = { d }; return CallStaticValue<float>("EffortMul", args, 1); }
        float LineOutput(void* it, void* cfg, void* line) const { void* args[] = { it, cfg, &line }; return CallStaticValue<float>("LineOutput", args, 3); }
        float PerSlot(void* it, void* cfg, void* d) const { void* args[] = { it, cfg, d }; return CallStaticValue<float>("PerSlot", args, 3); }
        void Tick(void* it, void* cfg, int span = 1) const { void* args[] = { it, cfg, &span }; CallStatic("Tick", args, 3); }
        float Production(void* it, void* cfg, int kind) const { void* args[] = { it, cfg, &kind }; return CallStaticValue<float>("Production", args, 3); }
        float Production(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("Production", args, 2); }
        bool Starved(void* it, int pool) const { void* args[] = { it, &pool }; return CallStaticValue<bool>("Starved", args, 2); }
        bool NeededByTemplates(void* it, int pool) const { void* args[] = { it, &pool }; return CallStaticValue<bool>("NeededByTemplates", args, 2); }
        float UnitGold(void* cfg, int pool, float gross) const { void* args[] = { cfg, &pool, &gross }; return CallStaticValue<float>("UnitGold", args, 3); }
        float Reserve(void* it, void* cfg, int kind) const { void* args[] = { it, cfg, &kind }; return CallStaticValue<float>("Reserve", args, 3); }
        int PoolCount() const { return ReadStaticField<int>("PoolCount"); }
        float startStock() const { return ReadField<float>("startStock"); }
        void SetStartStock(float value) const { WriteField<float>("startStock", value); }
        float basePerTick() const { return ReadField<float>("basePerTick"); }
        void SetBasePerTick(float value) const { WriteField<float>("basePerTick", value); }
        float perMilFactoryPerTick() const { return ReadField<float>("perMilFactoryPerTick"); }
        void SetPerMilFactoryPerTick(float value) const { WriteField<float>("perMilFactoryPerTick", value); }
        float capBase() const { return ReadField<float>("capBase"); }
        void SetCapBase(float value) const { WriteField<float>("capBase", value); }
        float capPerMilFactory() const { return ReadField<float>("capPerMilFactory"); }
        void SetCapPerMilFactory(float value) const { WriteField<float>("capPerMilFactory", value); }
        float budgetCostPerTick() const { return ReadField<float>("budgetCostPerTick"); }
        void SetBudgetCostPerTick(float value) const { WriteField<float>("budgetCostPerTick", value); }
        float perFundingPerTick() const { return ReadField<float>("perFundingPerTick"); }
        void SetPerFundingPerTick(float value) const { WriteField<float>("perFundingPerTick", value); }
        float aiSurplusFraction() const { return ReadField<float>("aiSurplusFraction"); }
        void SetAiSurplusFraction(float value) const { WriteField<float>("aiSurplusFraction", value); }
    };
}
