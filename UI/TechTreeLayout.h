#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class TechTreeLayout : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TechTreeLayout(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "TechTreeLayout") {}
    public:
        int PageOf(int category) const { void* __callArgs[] = { &category }; return CallStaticValue<int>("PageOf", __callArgs, 1); }
        int Place(int page, void* into) const { void* __callArgs[] = { &page, into }; return CallStaticValue<int>("Place", __callArgs, 2); }
        void* CellCentre(int col, int row) const { void* __callArgs[] = { &col, &row }; return CallStatic("CellCentre", __callArgs, 2); }
        float PageWidth(int page) const { void* __callArgs[] = { &page }; return CallStaticValue<float>("PageWidth", __callArgs, 1); }
        float PageHeight(int rows) const { void* __callArgs[] = { &rows }; return CallStaticValue<float>("PageHeight", __callArgs, 1); }
        void BandRows(void* slots, int rows, void* topRow, void* endRow) const { void* __callArgs[] = { slots, &rows, topRow, endRow }; CallStatic("BandRows", __callArgs, 4); }
        float RowOfTier(float tier, void* topRow, void* endRow) const { void* __callArgs[] = { &tier, topRow, endRow }; return CallStaticValue<float>("RowOfTier", __callArgs, 3); }
        float CellW() const { return ReadStaticField<float>("CellW"); }
        float CellH() const { return ReadStaticField<float>("CellH"); }
        float PagePad() const { return ReadStaticField<float>("PagePad"); }
        void* Pages() const { return ReadStaticField<void*>("Pages"); }
    };
}
