#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiSubViews : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiSubViews(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiSubViews") {}
    public:
        void Show(int i) const { void* __callArgs[] = { &i }; Call("Show", __callArgs, 1); }
        void Offer(int i, bool on) const { void* __callArgs[] = { &i, &on }; Call("Offer", __callArgs, 2); }
        void SetLabel(int i, const char* text) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { &i, managed_1 }; Call("SetLabel", __callArgs, 2); }
        void* Bar() const { return ReadField<void*>("Bar"); }
    };
}
