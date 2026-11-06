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
        void Configure(int gridWidth, int gridHeight, float cellSize) const { void* __callArgs[] = { &gridWidth, &gridHeight, &cellSize }; Call("Configure", __callArgs, 3); }
        void Rebuild(void* militaries) const { void* __callArgs[] = { militaries }; Call("Rebuild", __callArgs, 1); }
        int CountFriendlyNearby(int nationId, void* pos, float radius) const { void* __callArgs[] = { &nationId, pos, &radius }; return CallValue<int>("CountFriendlyNearby", __callArgs, 3); }
        void QueryNear(void* pos, float radius, void* results) const { void* __callArgs[] = { pos, &radius, results }; Call("QueryNear", __callArgs, 3); }
        void CellsNear(void* pos, float radius, void* results) const { void* __callArgs[] = { pos, &radius, results }; Call("CellsNear", __callArgs, 3); }
    };
}
