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
        bool Enabled(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<bool>("Enabled", __callArgs, 1); }
        float ToleranceTicks(void* it, void* cfg, float ticksPerYear) const { void* __callArgs[] = { it, cfg, &ticksPerYear }; return CallStaticValue<float>("ToleranceTicks", __callArgs, 3); }
        int StandingSlots(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<int>("StandingSlots", __callArgs, 2); }
        float Overrun(void* d, float toleranceTicks, int tick) const { void* __callArgs[] = { d, &toleranceTicks, &tick }; return CallStaticValue<float>("Overrun", __callArgs, 3); }
        float UpkeepMulOf(float overrun, void* cfg) const { void* __callArgs[] = { &overrun, cfg }; return CallStaticValue<float>("UpkeepMulOf", __callArgs, 2); }
        float OrgCapMulOf(float overrun, void* cfg) const { void* __callArgs[] = { &overrun, cfg }; return CallStaticValue<float>("OrgCapMulOf", __callArgs, 2); }
        void Publish(void* it, void* mil, void* cfg, float ticksPerYear, int tick) const { void* __callArgs[] = { it, mil, cfg, &ticksPerYear, &tick }; CallStatic("Publish", __callArgs, 5); }
        float TicksLeft(void* d, void* it, void* cfg, float ticksPerYear, int tick) const { void* __callArgs[] = { d, it, cfg, &ticksPerYear, &tick }; return CallStaticValue<float>("TicksLeft", __callArgs, 5); }
        float TickAttrition(void* d, void* it, void* cfg, float ticksPerYear, int tick) const { void* __callArgs[] = { d, it, cfg, &ticksPerYear, &tick }; return CallStaticValue<float>("TickAttrition", __callArgs, 5); }
    };
}
