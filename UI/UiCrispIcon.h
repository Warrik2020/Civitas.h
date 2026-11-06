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
        void Show(void* glyph) const { void* args[] = { glyph }; Call("Show", args, 1); }
        void ModifyMesh(void* vh) const { void* args[] = { vh }; Call("ModifyMesh", args, 1); }
        void ModifyMesh(void* mesh) const { void* args[] = { mesh }; Call("ModifyMesh", args, 1); }
    };
}
