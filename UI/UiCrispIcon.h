#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiCrispIcon : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiCrispIcon(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiCrispIcon") {}
    public:
        void Show(void* glyph) const { void* __callArgs[] = { glyph }; Call("Show", __callArgs, 1); }
        void ModifyMesh(void* vh) const { void* __callArgs[] = { vh }; Call("ModifyMesh", __callArgs, 1); }
        void ModifyMeshOverload2(void* mesh) const { void* __callArgs[] = { mesh }; Call("ModifyMesh", __callArgs, 1); }
    };
}
