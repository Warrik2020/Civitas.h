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
        void Refresh(void* it, int nationId, int nationTiles, void* mil, void* milCfg, void* grid, void* cfg, void* politics) const { void* args[] = { it, &nationId, &nationTiles, mil, milCfg, grid, cfg, politics }; CallStatic("Refresh", args, 8); }
        float RequiredDivisions(int tiles, void* cfg) const { void* args[] = { &tiles, cfg }; return CallStaticValue<float>("RequiredDivisions", args, 2); }
        float Coverage(float points, int tiles, void* cfg) const { void* args[] = { &points, &tiles, cfg }; return CallStaticValue<float>("Coverage", args, 3); }
        float Relief(float coverage, float damp) const { void* args[] = { &coverage, &damp }; return CallStaticValue<float>("Relief", args, 2); }
        float points() const { return ReadField<float>("points"); }
        void SetPoints(float value) const { WriteField<float>("points", value); }
        float tiles() const { return ReadField<float>("tiles"); }
        void SetTiles(float value) const { WriteField<float>("tiles", value); }
        float settled() const { return ReadField<float>("settled"); }
        void SetSettled(float value) const { WriteField<float>("settled", value); }
        float occupied() const { return ReadField<float>("occupied"); }
        void SetOccupied(float value) const { WriteField<float>("occupied", value); }
    };
}
