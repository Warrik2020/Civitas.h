#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class LandPreview : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LandPreview(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "LandPreview") {}
    public:
        void* Create(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Create", args, 1); }
        void Show(void* tiles, void* color) const { void* args[] = { tiles, color }; Call("Show", args, 2); }
        void MarkDirty() const { Call("MarkDirty", nullptr, 0); }
        void Hide() const { Call("Hide", nullptr, 0); }
        void Frame(void* tiles) const { void* args[] = { tiles }; CallStatic("Frame", args, 1); }
    };
}
