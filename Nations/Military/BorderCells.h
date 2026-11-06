#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class BorderCells : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BorderCells(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "BorderCells") {}
    public:
        bool IsBorderCell(void* grid, int i, int w) const { void* __callArgs[] = { grid, &i, &w }; return CallStaticValue<bool>("IsBorderCell", __callArgs, 3); }
        void Collect(void* n, void* grid, void* frontCells, float& cx, float& cy) const { void* __callArgs[] = { n, grid, frontCells, &cx, &cy }; CallStatic("Collect", __callArgs, 5); }
        void Refresh(void* n, void* mil, void* grid, void* marchers = nullptr) const { void* __callArgs[] = { n, mil, grid, marchers }; CallStatic("Refresh", __callArgs, 4); }
    };
}
