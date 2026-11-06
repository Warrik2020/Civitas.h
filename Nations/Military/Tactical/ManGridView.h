#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class ManGridView : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ManGridView(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "ManGridView") {}
    public:
        void* Of(void* g) const { void* args[] = { &g }; return CallStatic("Of", args, 1); }
        void Cells(void* p, float r, int& x0, int& y0, int& x1, int& y1) const { void* args[] = { p, &r, &x0, &y0, &x1, &y1 }; Call("Cells", args, 6); }
        void Bucket(int cx, int cy, int& s, int& e, int& packed) const { void* args[] = { &cx, &cy, &s, &e, &packed }; Call("Bucket", args, 5); }
        void* start() const { return ReadField<void*>("start"); }
        void SetStart(void* value) const { WriteField<void*>("start", value); }
        void* items() const { return ReadField<void*>("items"); }
        void SetItems(void* value) const { WriteField<void*>("items", value); }
        void* itemCell() const { return ReadField<void*>("itemCell"); }
        void SetItemCell(void* value) const { WriteField<void*>("itemCell", value); }
        float inv() const { return ReadField<float>("inv"); }
        void SetInv(float value) const { WriteField<float>("inv", value); }
        int mask() const { return ReadField<int>("mask"); }
        void SetMask(int value) const { WriteField<int>("mask", value); }
    };
}
