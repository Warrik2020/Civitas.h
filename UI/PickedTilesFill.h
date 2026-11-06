#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PickedTilesFill : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PickedTilesFill(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PickedTilesFill") {}
    public:
        void TipButton(void* button) const { void* args[] = { button }; CallStatic("TipButton", args, 1); }
        void Enable(void* brush, void* picked, void* pickable, void* changed) const { void* args[] = { brush, picked, pickable, changed }; Call("Enable", args, 4); }
    };
}
