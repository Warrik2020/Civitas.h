#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class QuickInteractPanel : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit QuickInteractPanel(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "QuickInteractPanel") {}
    public:
        void SetVisible(bool visible) const { void* args[] = { &visible }; Call("SetVisible", args, 1); }
        void* header() const { return ReadField<void*>("header"); }
        void SetHeader(void* value) const { WriteField<void*>("header", value); }
        void* list() const { return ReadField<void*>("list"); }
        void SetList(void* value) const { WriteField<void*>("list", value); }
        void* pool() const { return ReadField<void*>("pool"); }
    };
}
