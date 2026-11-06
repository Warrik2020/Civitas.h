#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class WorksView : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorksView(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "WorksView") {}
    public:
        void* segs() const { return ReadField<void*>("segs"); }
        void segs(void* value) const { WriteField<void*>("segs", value); }
        void* discs() const { return ReadField<void*>("discs"); }
        void discs(void* value) const { WriteField<void*>("discs", value); }
        void* cellStart() const { return ReadField<void*>("cellStart"); }
        void cellStart(void* value) const { WriteField<void*>("cellStart", value); }
        void* cellItems() const { return ReadField<void*>("cellItems"); }
        void cellItems(void* value) const { WriteField<void*>("cellItems", value); }
        void* bounds() const { return ReadField<void*>("bounds"); }
        void bounds(void* value) const { WriteField<void*>("bounds", value); }
        float cellsPerTile() const { return ReadField<float>("cellsPerTile"); }
        void cellsPerTile(float value) const { WriteField<float>("cellsPerTile", value); }
        int cellsX() const { return ReadField<int>("cellsX"); }
        void cellsX(int value) const { WriteField<int>("cellsX", value); }
        int cellsY() const { return ReadField<int>("cellsY"); }
        void cellsY(int value) const { WriteField<int>("cellsY", value); }
    };
}
