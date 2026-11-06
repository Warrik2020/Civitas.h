#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Naval
{
    class SeaNeighbours : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SeaNeighbours(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Naval", "SeaNeighbours") {}
    public:
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        float Gap(int a, int b) const { void* args[] = { &a, &b }; return CallStaticValue<float>("Gap", args, 2); }
        void NeighboursOf(int nationId, void* into) const { void* args[] = { &nationId, into }; CallStatic("NeighboursOf", args, 2); }
        bool WarReach(void* rel, int attacker) const { void* args[] = { rel, &attacker }; return CallStaticValue<bool>("WarReach", args, 2); }
        void Step(void* grid, void* internals) const { void* args[] = { grid, internals }; CallStatic("Step", args, 2); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void SetEnabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        float MaxGapTiles() const { return ReadStaticField<float>("MaxGapTiles"); }
        float WarRollMul() const { return ReadStaticField<float>("WarRollMul"); }
    };
}
