#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class GarrisonSuppression : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GarrisonSuppression(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "GarrisonSuppression") {}
    public:
        void Refresh(void* it, int nationId, int nationTiles, void* mil, void* milCfg, void* grid, void* cfg, void* politics) const { void* __callArgs[] = { it, &nationId, &nationTiles, mil, milCfg, grid, cfg, politics }; CallStatic("Refresh", __callArgs, 8); }
        float RequiredDivisions(int tiles, void* cfg) const { void* __callArgs[] = { &tiles, cfg }; return CallStaticValue<float>("RequiredDivisions", __callArgs, 2); }
        float Coverage(float points, int tiles, void* cfg) const { void* __callArgs[] = { &points, &tiles, cfg }; return CallStaticValue<float>("Coverage", __callArgs, 3); }
        float Relief(float coverage, float damp) const { void* __callArgs[] = { &coverage, &damp }; return CallStaticValue<float>("Relief", __callArgs, 2); }
    };
}
