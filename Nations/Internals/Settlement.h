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
        float RequiredPopulation(void* cfg, int cityCount) const { void* args[] = { cfg, &cityCount }; return CallStaticValue<float>("RequiredPopulation", args, 2); }
        int CheckGates(void* it, void* cfg, int cityCount, int tick) const { void* args[] = { it, cfg, &cityCount, &tick }; return CallStaticValue<int>("CheckGates", args, 4); }
        void Pay(void* it, void* cfg, int tick, void* town, void* cities) const { void* args[] = { it, cfg, &tick, town, cities }; CallStatic("Pay", args, 5); }
        float SettlerCost(void* it, void* cfg) const { void* args[] = { it, cfg }; return CallStaticValue<float>("SettlerCost", args, 2); }
    };
}
