#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class UnionDemands : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnionDemands(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "UnionDemands") {}
    public:
        bool IsSubmission(int kind) const { void* __callArgs[] = { &kind }; return CallStaticValue<bool>("IsSubmission", __callArgs, 1); }
        float WarChance(float aggression, float powerRatio) const { void* __callArgs[] = { &aggression, &powerRatio }; return CallStaticValue<float>("WarChance", __callArgs, 2); }
        float WarPowerRatioMin() const { return ReadStaticField<float>("WarPowerRatioMin"); }
        float WarPowerRatioSpan() const { return ReadStaticField<float>("WarPowerRatioSpan"); }
    };
}
