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
        int NodeSize(void* cfg) const { void* args[] = { cfg }; return CallStaticValue<int>("NodeSize", args, 1); }
        void Enqueue(void* d, bool player = false) const { void* args[] = { d, &player }; CallStatic("Enqueue", args, 2); }
        void* TickQueueSteps(void* grid, void* cfg, int tick, void* militaryOf, bool split) const { void* args[] = { grid, cfg, &tick, militaryOf, &split }; return CallStatic("TickQueueSteps", args, 5); }
        void ClearAll() const { CallStatic("ClearAll", nullptr, 0); }
        bool HasLandLos(void* grid, void* cfg, void* a, void* b, int ownerId = -1, void* atWarOf = nullptr, int hostId = -1) const { void* args[] = { grid, cfg, a, b, &ownerId, atWarOf, &hostId }; return CallStaticValue<bool>("HasLandLos", args, 7); }
        void* WarOf(void* mil) const { void* args[] = { mil }; return CallStatic("WarOf", args, 1); }
        bool PreviewPath(void* mover, void* goal, int hostId, void* grid, void* cfg, void* into, bool& truncated, void* war = nullptr) const { void* args[] = { mover, goal, &hostId, grid, cfg, into, &truncated, war }; return CallStaticValue<bool>("PreviewPath", args, 8); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Push(int node, float pri) const { void* args[] = { &node, &pri }; Call("Push", args, 2); }
        int Pop() const { return CallValue<int>("Pop", nullptr, 0); }
    };
}
