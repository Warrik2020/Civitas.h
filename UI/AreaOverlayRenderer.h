#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class AreaOverlayRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AreaOverlayRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "AreaOverlayRenderer") {}
    public:
        void Show(int owner, int axis) const { void* args[] = { &owner, &axis }; Call("Show", args, 2); }
        void Hide() const { Call("Hide", nullptr, 0); }
        void MarkBatch(void* tiles) const { void* args[] = { tiles }; Call("MarkBatch", args, 1); }
        void Tick(float budgetMs) const { void* args[] = { &budgetMs }; Call("Tick", args, 1); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
    };
}
