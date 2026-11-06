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
        void* Create(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Create", __callArgs, 1); }
        void Show(void* tiles, void* color) const { void* __callArgs[] = { tiles, color }; Call("Show", __callArgs, 2); }
        void MarkDirty() const { Call("MarkDirty", nullptr, 0); }
        void Hide() const { Call("Hide", nullptr, 0); }
        void Frame(void* tiles) const { void* __callArgs[] = { tiles }; CallStatic("Frame", __callArgs, 1); }
    };
}
