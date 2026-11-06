#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class Settlement : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Settlement(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "Settlement") {}
    public:
        float RequiredPopulation(void* cfg, int cityCount) const { void* __callArgs[] = { cfg, &cityCount }; return CallStaticValue<float>("RequiredPopulation", __callArgs, 2); }
        int CheckGates(void* it, void* cfg, int cityCount, int tick) const { void* __callArgs[] = { it, cfg, &cityCount, &tick }; return CallStaticValue<int>("CheckGates", __callArgs, 4); }
        void Pay(void* it, void* cfg, int tick, void* town, void* cities) const { void* __callArgs[] = { it, cfg, &tick, town, cities }; CallStatic("Pay", __callArgs, 5); }
        float SettlerCost(void* it, void* cfg) const { void* __callArgs[] = { it, cfg }; return CallStaticValue<float>("SettlerCost", __callArgs, 2); }
    };
}
