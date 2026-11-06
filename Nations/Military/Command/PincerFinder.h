#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class PincerFinder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PincerFinder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "PincerFinder") {}
    public:
        void* FindEnemySalient(void* border, int nation, int foe, void* grid, void* foeMil, void* cfg, int tick, int foeCapital) const { void* __callArgs[] = { border, &nation, &foe, grid, foeMil, cfg, &tick, &foeCapital }; return CallStatic("FindEnemySalient", __callArgs, 8); }
        void* FindOwnSalient(void* border, int nation, int foe, void* grid, void* ownMil, void* foeMil, void* cfg, int tick) const { void* __callArgs[] = { border, &nation, &foe, grid, ownMil, foeMil, cfg, &tick }; return CallStatic("FindOwnSalient", __callArgs, 8); }
        float SegmentDistSq(void* p, void* a, void* b) const { void* __callArgs[] = { p, a, b }; return CallStaticValue<float>("SegmentDistSq", __callArgs, 3); }
    };
}
