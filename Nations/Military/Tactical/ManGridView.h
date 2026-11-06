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
        void* Of(void* g) const { void* __callArgs[] = { &g }; return CallStatic("Of", __callArgs, 1); }
        void Cells(void* p, float r, int& x0, int& y0, int& x1, int& y1) const { void* __callArgs[] = { p, &r, &x0, &y0, &x1, &y1 }; Call("Cells", __callArgs, 6); }
        void Bucket(int cx, int cy, int& s, int& e, int& packed) const { void* __callArgs[] = { &cx, &cy, &s, &e, &packed }; Call("Bucket", __callArgs, 5); }
        void* start() const { return ReadField<void*>("start"); }
        void start(void* value) const { WriteField<void*>("start", value); }
        void* items() const { return ReadField<void*>("items"); }
        void items(void* value) const { WriteField<void*>("items", value); }
        void* itemCell() const { return ReadField<void*>("itemCell"); }
        void itemCell(void* value) const { WriteField<void*>("itemCell", value); }
        float inv() const { return ReadField<float>("inv"); }
        void inv(float value) const { WriteField<float>("inv", value); }
        int mask() const { return ReadField<int>("mask"); }
        void mask(int value) const { WriteField<int>("mask", value); }
    };
}
