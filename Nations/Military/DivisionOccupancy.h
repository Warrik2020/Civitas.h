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
        void Configure(int gridWidth, int gridHeight, float maxPairDistance) const { void* __callArgs[] = { &gridWidth, &gridHeight, &maxPairDistance }; Call("Configure", __callArgs, 3); }
        void Rebuild(void* militaries) const { void* __callArgs[] = { militaries }; Call("Rebuild", __callArgs, 1); }
        void Add(void* d) const { void* __callArgs[] = { d }; Call("Add", __callArgs, 1); }
        void Remove(void* d) const { void* __callArgs[] = { d }; Call("Remove", __callArgs, 1); }
        void Move(void* d, void* oldPos) const { void* __callArgs[] = { d, oldPos }; Call("Move", __callArgs, 2); }
        bool CanPlace(int nationId, void* from, void* to, int excludeId, float moverRadius, void* moverMil, void* cfg) const { void* __callArgs[] = { &nationId, from, to, &excludeId, &moverRadius, moverMil, cfg }; return CallValue<bool>("CanPlace", __callArgs, 7); }
        bool IsFree(int nationId, void* pos, int excludeId, float posRadius) const { void* __callArgs[] = { &nationId, pos, &excludeId, &posRadius }; return CallValue<bool>("IsFree", __callArgs, 4); }
        void StampCrowd(void* militaries) const { void* __callArgs[] = { militaries }; Call("StampCrowd", __callArgs, 1); }
        bool TryFindFreeSpot(int nationId, void* near_, void* grid, float maxSearchRadius, int excludeId, float moverRadius, void* spot, int hostId = -1) const { void* __callArgs[] = { &nationId, near_, grid, &maxSearchRadius, &excludeId, &moverRadius, &spot, &hostId }; return CallValue<bool>("TryFindFreeSpot", __callArgs, 8); }
    };
}
