#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiNumberField : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiNumberField(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiNumberField") {}
    public:
        void* Attach(void* slider, void* mode, float width, void* textColor, void* onCommit = nullptr) const { void* __callArgs[] = { slider, mode, &width, textColor, onCommit }; return CallStatic("Attach", __callArgs, 5); }
        void* MakeBox(void* parent, float width, void* textColor) const { void* __callArgs[] = { parent, &width, textColor }; return CallStatic("MakeBox", __callArgs, 3); }
    };
}
