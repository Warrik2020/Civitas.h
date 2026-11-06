#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Research
{
    class TechClock : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TechClock(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Research", "TechClock") {}
    public:
        void Publish(int tick, void* cfg) const { void* __callArgs[] = { &tick, cfg }; CallStatic("Publish", __callArgs, 2); }
        float TierOfYear(float year) const { void* __callArgs[] = { &year }; return CallStaticValue<float>("TierOfYear", __callArgs, 1); }
        float YearOfTier(float tier) const { void* __callArgs[] = { &tier }; return CallStaticValue<float>("YearOfTier", __callArgs, 1); }
        float EraCostFactor(float techTier, void* cfg) const { void* __callArgs[] = { &techTier, cfg }; return CallStaticValue<float>("EraCostFactor", __callArgs, 2); }
        float TiersAhead(float techTier) const { void* __callArgs[] = { &techTier }; return CallStaticValue<float>("TiersAhead", __callArgs, 1); }
    };
}
