#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class EraAmbitions : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EraAmbitions(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "EraAmbitions") {}
    public:
        void OfBand(int band, void* dst) const { void* __callArgs[] = { &band, dst }; CallStatic("OfBand", __callArgs, 2); }
        void* Find(const char* id) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Find", __callArgs, 1); }
        void* RewardText(int r, void* it, void* cfg, float ticksPerMonth) const { void* __callArgs[] = { &r, it, cfg, &ticksPerMonth }; return CallStatic("RewardText", __callArgs, 4); }
        float GoldReward(void* it, void* cfg, float ticksPerMonth) const { void* __callArgs[] = { it, cfg, &ticksPerMonth }; return CallStaticValue<float>("GoldReward", __callArgs, 3); }
        void Pay(int r, void* it, void* cfg, float ticksPerMonth) const { void* __callArgs[] = { &r, it, cfg, &ticksPerMonth }; CallStatic("Pay", __callArgs, 4); }
        void* All() const { return ReadStaticField<void*>("All"); }
        int BStates() const { return ReadStaticField<int>("BStates"); }
        int BDivisions() const { return ReadStaticField<int>("BDivisions"); }
        int BResearchWorks() const { return ReadStaticField<int>("BResearchWorks"); }
        int BArsenals() const { return ReadStaticField<int>("BArsenals"); }
        int BSettled() const { return ReadStaticField<int>("BSettled"); }
        int BManufactories() const { return ReadStaticField<int>("BManufactories"); }
        int BFactories() const { return ReadStaticField<int>("BFactories"); }
        int BaselineCount() const { return ReadStaticField<int>("BaselineCount"); }
        float LoyaltyReward() const { return ReadStaticField<float>("LoyaltyReward"); }
        float GoldMonths() const { return ReadStaticField<float>("GoldMonths"); }
        float ResearchMonths() const { return ReadStaticField<float>("ResearchMonths"); }
    };
}
