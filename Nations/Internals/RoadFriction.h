#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class RoadFriction : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RoadFriction(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "RoadFriction") {}
    public:
        void Apply(int builderId, void* pathTiles, void* grid, void* mgr, void* cfg) const { void* args[] = { &builderId, pathTiles, grid, mgr, cfg }; CallStatic("Apply", args, 5); }
    };
}
