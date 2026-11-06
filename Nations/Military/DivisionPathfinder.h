#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class DivisionPathfinder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DivisionPathfinder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "DivisionPathfinder") {}
    public:
        int NodeSize(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<int>("NodeSize", __callArgs, 1); }
        void Enqueue(void* d, bool player = false) const { void* __callArgs[] = { d, &player }; CallStatic("Enqueue", __callArgs, 2); }
        void* TickQueueSteps(void* grid, void* cfg, int tick, void* militaryOf, bool split) const { void* __callArgs[] = { grid, cfg, &tick, militaryOf, &split }; return CallStatic("TickQueueSteps", __callArgs, 5); }
        void ClearAll() const { CallStatic("ClearAll", nullptr, 0); }
        bool HasLandLos(void* grid, void* cfg, void* a, void* b, int ownerId = -1, void* atWarOf = nullptr, int hostId = -1) const { void* __callArgs[] = { grid, cfg, a, b, &ownerId, atWarOf, &hostId }; return CallStaticValue<bool>("HasLandLos", __callArgs, 7); }
        void* WarOf(void* mil) const { void* __callArgs[] = { mil }; return CallStatic("WarOf", __callArgs, 1); }
        bool PreviewPath(void* mover, void* goal, int hostId, void* grid, void* cfg, void* into, bool& truncated, void* war = nullptr) const { void* __callArgs[] = { mover, goal, &hostId, grid, cfg, into, &truncated, war }; return CallStaticValue<bool>("PreviewPath", __callArgs, 8); }
    };
}
