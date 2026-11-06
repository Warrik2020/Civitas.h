#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PoolConfig : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PoolConfig(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PoolConfig") {}
    public:
        void* Of(float startStock, float basePerTick, float perMilFactoryPerTick, float capBase, float capPerMilFactory, float budgetCostPerTick, float perFundingPerTick, float aiSurplusFraction) const { void* __callArgs[] = { &startStock, &basePerTick, &perMilFactoryPerTick, &capBase, &capPerMilFactory, &budgetCostPerTick, &perFundingPerTick, &aiSurplusFraction }; return CallStatic("Of", __callArgs, 8); }
        float startStock() const { return ReadField<float>("startStock"); }
        void startStock(float value) const { WriteField<float>("startStock", value); }
        float basePerTick() const { return ReadField<float>("basePerTick"); }
        void basePerTick(float value) const { WriteField<float>("basePerTick", value); }
        float perMilFactoryPerTick() const { return ReadField<float>("perMilFactoryPerTick"); }
        void perMilFactoryPerTick(float value) const { WriteField<float>("perMilFactoryPerTick", value); }
        float capBase() const { return ReadField<float>("capBase"); }
        void capBase(float value) const { WriteField<float>("capBase", value); }
        float capPerMilFactory() const { return ReadField<float>("capPerMilFactory"); }
        void capPerMilFactory(float value) const { WriteField<float>("capPerMilFactory", value); }
        float budgetCostPerTick() const { return ReadField<float>("budgetCostPerTick"); }
        void budgetCostPerTick(float value) const { WriteField<float>("budgetCostPerTick", value); }
        float perFundingPerTick() const { return ReadField<float>("perFundingPerTick"); }
        void perFundingPerTick(float value) const { WriteField<float>("perFundingPerTick", value); }
        float aiSurplusFraction() const { return ReadField<float>("aiSurplusFraction"); }
        void aiSurplusFraction(float value) const { WriteField<float>("aiSurplusFraction", value); }
    };
}
