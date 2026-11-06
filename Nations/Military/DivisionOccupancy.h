#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class DivisionOccupancy : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DivisionOccupancy(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "DivisionOccupancy") {}
    public:
        void Configure(int gridWidth, int gridHeight, float maxPairDistance) const { void* args[] = { &gridWidth, &gridHeight, &maxPairDistance }; Call("Configure", args, 3); }
        void Rebuild(void* militaries) const { void* args[] = { militaries }; Call("Rebuild", args, 1); }
        void Add(void* d) const { void* args[] = { d }; Call("Add", args, 1); }
        void Remove(void* d) const { void* args[] = { d }; Call("Remove", args, 1); }
        void Move(void* d, void* oldPos) const { void* args[] = { d, oldPos }; Call("Move", args, 2); }
        bool CanPlace(int nationId, void* from, void* to, int excludeId, float moverRadius, void* moverMil, void* cfg) const { void* args[] = { &nationId, from, to, &excludeId, &moverRadius, moverMil, cfg }; return CallValue<bool>("CanPlace", args, 7); }
        bool IsFree(int nationId, void* pos, int excludeId, float posRadius) const { void* args[] = { &nationId, pos, &excludeId, &posRadius }; return CallValue<bool>("IsFree", args, 4); }
        void StampCrowd(void* militaries) const { void* args[] = { militaries }; Call("StampCrowd", args, 1); }
        bool TryFindFreeSpot(int nationId, void* near, void* grid, float maxSearchRadius, int excludeId, float moverRadius, void* spot, int hostId = -1) const { void* args[] = { &nationId, near, grid, &maxSearchRadius, &excludeId, &moverRadius, &spot, &hostId }; return CallValue<bool>("TryFindFreeSpot", args, 8); }
    };
}
