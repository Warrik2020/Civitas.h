#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class EconomyLevers : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EconomyLevers(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "EconomyLevers") {}
    public:
        float InvestCost(void* it, float gross) const { void* args[] = { it, &gross }; return CallStaticValue<float>("InvestCost", args, 2); }
        float ManpowerCost(void* it, float gross) const { void* args[] = { it, &gross }; return CallStaticValue<float>("ManpowerCost", args, 2); }
        float DevelopmentTarget(float level) const { void* args[] = { &level }; return CallStaticValue<float>("DevelopmentTarget", args, 1); }
        float TaxMul(void* it) const { void* args[] = { it }; return CallStaticValue<float>("TaxMul", args, 1); }
        float ManpowerIntakeMul(void* it) const { void* args[] = { it }; return CallStaticValue<float>("ManpowerIntakeMul", args, 1); }
        float ManpowerCapMul(void* it) const { void* args[] = { it }; return CallStaticValue<float>("ManpowerCapMul", args, 1); }
        bool Stalled(void* it) const { void* args[] = { it }; return CallStaticValue<bool>("Stalled", args, 1); }
        void Tick(void* it, float ticksPerYear, int span = 1) const { void* args[] = { it, &ticksPerYear, &span }; CallStatic("Tick", args, 3); }
        float InvestMaxShare() const { return ReadStaticField<float>("InvestMaxShare"); }
        float DevelopmentMax() const { return ReadStaticField<float>("DevelopmentMax"); }
        float RiseYears() const { return ReadStaticField<float>("RiseYears"); }
        float FallYears() const { return ReadStaticField<float>("FallYears"); }
        float ManpowerMaxShare() const { return ReadStaticField<float>("ManpowerMaxShare"); }
        float ManpowerIntakeBonus() const { return ReadStaticField<float>("ManpowerIntakeBonus"); }
        float ManpowerCapBonus() const { return ReadStaticField<float>("ManpowerCapBonus"); }
        float AiInvestSurplusFraction() const { return ReadStaticField<float>("AiInvestSurplusFraction"); }
        float AiInvestWarMul() const { return ReadStaticField<float>("AiInvestWarMul"); }
        float AiManpowerSurplusFraction() const { return ReadStaticField<float>("AiManpowerSurplusFraction"); }
        float AiManpowerFillTarget() const { return ReadStaticField<float>("AiManpowerFillTarget"); }
        float AiManpowerFillSpan() const { return ReadStaticField<float>("AiManpowerFillSpan"); }
    };
}
