#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class ZoneOverlayRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ZoneOverlayRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "ZoneOverlayRenderer") {}
    public:
        void Show(int owner, int axis) const { void* args[] = { &owner, &axis }; Call("Show", args, 2); }
        void Hide() const { Call("Hide", nullptr, 0); }
        void SetStyle(void* fill, void* edge) const { void* args[] = { fill, edge }; Call("SetStyle", args, 2); }
        void MarkBatch(void* tiles) const { void* args[] = { tiles }; Call("MarkBatch", args, 1); }
        void Tick(float budgetMs) const { void* args[] = { &budgetMs }; Call("Tick", args, 1); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* mesh() const { return ReadField<void*>("mesh"); }
        void SetMesh(void* value) const { WriteField<void*>("mesh", value); }
    };
}
