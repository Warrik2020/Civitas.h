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
        float Gap(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallStaticValue<float>("Gap", __callArgs, 2); }
        void NeighboursOf(int nationId, void* into) const { void* __callArgs[] = { &nationId, into }; CallStatic("NeighboursOf", __callArgs, 2); }
        bool WarReach(void* rel, int attacker) const { void* __callArgs[] = { rel, &attacker }; return CallStaticValue<bool>("WarReach", __callArgs, 2); }
        void Step(void* grid, void* internals) const { void* __callArgs[] = { grid, internals }; CallStatic("Step", __callArgs, 2); }
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void Enabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        float MaxGapTiles() const { return ReadStaticField<float>("MaxGapTiles"); }
        float WarRollMul() const { return ReadStaticField<float>("WarRollMul"); }
    };
}
