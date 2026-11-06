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
        bool IsBorderCell(void* grid, int i, int w) const { void* args[] = { grid, &i, &w }; return CallStaticValue<bool>("IsBorderCell", args, 3); }
        void Collect(void* n, void* grid, void* frontCells, float& cx, float& cy) const { void* args[] = { n, grid, frontCells, &cx, &cy }; CallStatic("Collect", args, 5); }
        void Refresh(void* n, void* mil, void* grid, void* marchers = nullptr) const { void* args[] = { n, mil, grid, marchers }; CallStatic("Refresh", args, 4); }
    };
}
