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
        void TipButton(void* button) const { void* __callArgs[] = { button }; CallStatic("TipButton", __callArgs, 1); }
        void Enable(void* brush, void* picked, void* pickable, void* changed) const { void* __callArgs[] = { brush, picked, pickable, changed }; Call("Enable", __callArgs, 4); }
    };
}
