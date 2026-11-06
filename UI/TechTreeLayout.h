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
        int PageOf(int category) const { void* args[] = { &category }; return CallStaticValue<int>("PageOf", args, 1); }
        int Place(int page, void* into) const { void* args[] = { &page, into }; return CallStaticValue<int>("Place", args, 2); }
        void* CellCentre(int col, int row) const { void* args[] = { &col, &row }; return CallStatic("CellCentre", args, 2); }
        float PageWidth(int page) const { void* args[] = { &page }; return CallStaticValue<float>("PageWidth", args, 1); }
        float PageHeight(int rows) const { void* args[] = { &rows }; return CallStaticValue<float>("PageHeight", args, 1); }
        void BandRows(void* slots, int rows, void* topRow, void* endRow) const { void* args[] = { slots, &rows, topRow, endRow }; CallStatic("BandRows", args, 4); }
        float RowOfTier(float tier, void* topRow, void* endRow) const { void* args[] = { &tier, topRow, endRow }; return CallStaticValue<float>("RowOfTier", args, 3); }
        float CellW() const { return ReadStaticField<float>("CellW"); }
        float CellH() const { return ReadStaticField<float>("CellH"); }
        float PagePad() const { return ReadStaticField<float>("PagePad"); }
        void* Pages() const { return ReadStaticField<void*>("Pages"); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* columns() const { return ReadField<void*>("columns"); }
        void SetColumns(void* value) const { WriteField<void*>("columns", value); }
        int tech() const { return ReadField<int>("tech"); }
        void SetTech(int value) const { WriteField<int>("tech", value); }
        int col() const { return ReadField<int>("col"); }
        void SetCol(int value) const { WriteField<int>("col", value); }
        int row() const { return ReadField<int>("row"); }
        void SetRow(int value) const { WriteField<int>("row", value); }
    };
}
