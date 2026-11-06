#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiToolStrip : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiToolStrip(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiToolStrip") {}
    public:
        void* Make(void* parent, const char* name) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { parent, managed_1 }; return CallStatic("Make", args, 2); }
        void* Divider(float height = 40f) const { void* args[] = { &height }; return Call("Divider", args, 1); }
        void* root() const { return ReadField<void*>("root"); }
        void SetRoot(void* value) const { WriteField<void*>("root", value); }
        void* row() const { return ReadField<void*>("row"); }
        void SetRow(void* value) const { WriteField<void*>("row", value); }
    };
}
