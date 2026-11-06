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
        void Publish(int tick, void* cfg) const { void* args[] = { &tick, cfg }; CallStatic("Publish", args, 2); }
        float TierOfYear(float year) const { void* args[] = { &year }; return CallStaticValue<float>("TierOfYear", args, 1); }
        float YearOfTier(float tier) const { void* args[] = { &tier }; return CallStaticValue<float>("YearOfTier", args, 1); }
        float EraCostFactor(float techTier, void* cfg) const { void* args[] = { &techTier, cfg }; return CallStaticValue<float>("EraCostFactor", args, 2); }
        float TiersAhead(float techTier) const { void* args[] = { &techTier }; return CallStaticValue<float>("TiersAhead", args, 1); }
    };
}
