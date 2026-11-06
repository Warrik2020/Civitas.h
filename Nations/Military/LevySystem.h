#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class LevySystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LevySystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "LevySystem") {}
    public:
        bool Enabled(void* cfg) const { void* args[] = { cfg }; return CallStaticValue<bool>("Enabled", args, 1); }
        float ToleranceTicks(void* it, void* cfg, float ticksPerYear) const { void* args[] = { it, cfg, &ticksPerYear }; return CallStaticValue<float>("ToleranceTicks", args, 3); }
        int StandingSlots(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<int>("StandingSlots", args, 2); }
        float Overrun(void* d, float toleranceTicks, int tick) const { void* args[] = { d, &toleranceTicks, &tick }; return CallStaticValue<float>("Overrun", args, 3); }
        float UpkeepMulOf(float overrun, void* cfg) const { void* args[] = { &overrun, cfg }; return CallStaticValue<float>("UpkeepMulOf", args, 2); }
        float OrgCapMulOf(float overrun, void* cfg) const { void* args[] = { &overrun, cfg }; return CallStaticValue<float>("OrgCapMulOf", args, 2); }
        void Publish(void* it, void* mil, void* cfg, float ticksPerYear, int tick) const { void* args[] = { it, mil, cfg, &ticksPerYear, &tick }; CallStatic("Publish", args, 5); }
        float TicksLeft(void* d, void* it, void* cfg, float ticksPerYear, int tick) const { void* args[] = { d, it, cfg, &ticksPerYear, &tick }; return CallStaticValue<float>("TicksLeft", args, 5); }
        float TickAttrition(void* d, void* it, void* cfg, float ticksPerYear, int tick) const { void* args[] = { d, it, cfg, &ticksPerYear, &tick }; return CallStaticValue<float>("TickAttrition", args, 5); }
    };
}
