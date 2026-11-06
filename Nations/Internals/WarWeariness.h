#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class WarWeariness : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarWeariness(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "WarWeariness") {}
    public:
        float PropagandaCost(void* it, float gross) const { void* args[] = { it, &gross }; return CallStaticValue<float>("PropagandaCost", args, 2); }
        float RiseRate(void* it) const { void* args[] = { it }; return CallStaticValue<float>("RiseRate", args, 1); }
        float PropagandaRate(void* it) const { void* args[] = { it }; return CallStaticValue<float>("PropagandaRate", args, 1); }
        bool Stalled(void* it) const { void* args[] = { it }; return CallStaticValue<bool>("Stalled", args, 1); }
        float StabilityCost(void* it) const { void* args[] = { it }; return CallStaticValue<float>("StabilityCost", args, 1); }
        void Tick(void* it, float ticksPerYear, int span = 1) const { void* args[] = { it, &ticksPerYear, &span }; CallStatic("Tick", args, 3); }
        float RisePerMonth() const { return ReadStaticField<float>("RisePerMonth"); }
        float ExtraWarShare() const { return ReadStaticField<float>("ExtraWarShare"); }
        int ExtraWarsCounted() const { return ReadStaticField<int>("ExtraWarsCounted"); }
        float Max() const { return ReadStaticField<float>("Max"); }
        float LoyaltyWeight() const { return ReadStaticField<float>("LoyaltyWeight"); }
        float PeaceFadeMonths() const { return ReadStaticField<float>("PeaceFadeMonths"); }
        float PropagandaMaxShare() const { return ReadStaticField<float>("PropagandaMaxShare"); }
        float PropagandaPerMonth() const { return ReadStaticField<float>("PropagandaPerMonth"); }
        float AiSurplusFraction() const { return ReadStaticField<float>("AiSurplusFraction"); }
        float AiFullAt() const { return ReadStaticField<float>("AiFullAt"); }
    };
}
