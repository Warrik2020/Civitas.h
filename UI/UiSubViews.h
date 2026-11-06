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
        void Show(int i) const { void* args[] = { &i }; Call("Show", args, 1); }
        void Offer(int i, bool on) const { void* args[] = { &i, &on }; Call("Offer", args, 2); }
        void SetLabel(int i, const char* text) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* args[] = { &i, managed_1 }; Call("SetLabel", args, 2); }
        void* Bar() const { return ReadField<void*>("Bar"); }
    };
}
