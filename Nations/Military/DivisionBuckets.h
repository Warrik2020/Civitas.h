#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class DivisionBuckets : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DivisionBuckets(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "DivisionBuckets") {}
    public:
        void Configure(int gridWidth, int gridHeight, float cellSize) const { void* args[] = { &gridWidth, &gridHeight, &cellSize }; Call("Configure", args, 3); }
        void Rebuild(void* militaries) const { void* args[] = { militaries }; Call("Rebuild", args, 1); }
        int CountFriendlyNearby(int nationId, void* pos, float radius) const { void* args[] = { &nationId, pos, &radius }; return CallValue<int>("CountFriendlyNearby", args, 3); }
        void QueryNear(void* pos, float radius, void* results) const { void* args[] = { pos, &radius, results }; Call("QueryNear", args, 3); }
        void CellsNear(void* pos, float radius, void* results) const { void* args[] = { pos, &radius, results }; Call("CellsNear", args, 3); }
    };
}
