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
        float InvestCost(void* it, float gross) const { void* __callArgs[] = { it, &gross }; return CallStaticValue<float>("InvestCost", __callArgs, 2); }
        float ManpowerCost(void* it, float gross) const { void* __callArgs[] = { it, &gross }; return CallStaticValue<float>("ManpowerCost", __callArgs, 2); }
        float DevelopmentTarget(float level) const { void* __callArgs[] = { &level }; return CallStaticValue<float>("DevelopmentTarget", __callArgs, 1); }
        float TaxMul(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<float>("TaxMul", __callArgs, 1); }
        float ManpowerIntakeMul(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<float>("ManpowerIntakeMul", __callArgs, 1); }
        float ManpowerCapMul(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<float>("ManpowerCapMul", __callArgs, 1); }
        bool Stalled(void* it) const { void* __callArgs[] = { it }; return CallStaticValue<bool>("Stalled", __callArgs, 1); }
        void Tick(void* it, float ticksPerYear, int span = 1) const { void* __callArgs[] = { it, &ticksPerYear, &span }; CallStatic("Tick", __callArgs, 3); }
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
