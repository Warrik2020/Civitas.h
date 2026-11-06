#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class FrontlineAI : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrontlineAI(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "FrontlineAI") {}
    public:
        float AttackBar(void* mil, int tick) const { void* __callArgs[] = { mil, &tick }; return CallStaticValue<float>("AttackBar", __callArgs, 2); }
        void Evaluate(void* mil, void* n, void* grid, void* buckets, void* connectivity, void* cfg, int tick, void* milById = nullptr, void* cities = nullptr, void* supply = nullptr) const { void* __callArgs[] = { mil, n, grid, buckets, connectivity, cfg, &tick, milById, cities, supply }; CallStatic("Evaluate", __callArgs, 10); }
    };
}
