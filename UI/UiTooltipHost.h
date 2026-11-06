#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiTooltipHost : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiTooltipHost(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiTooltipHost") {}
    public:
        void Enter(void* target) const { void* args[] = { target }; CallStatic("Enter", args, 1); }
        void Exit(void* target) const { void* args[] = { target }; CallStatic("Exit", args, 1); }
        void HideCurrent() const { CallStatic("HideCurrent", nullptr, 0); }
        void SetOrder(int order) const { void* args[] = { &order }; CallStatic("SetOrder", args, 1); }
        void* plate() const { return ReadField<void*>("plate"); }
        void SetPlate(void* value) const { WriteField<void*>("plate", value); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* body() const { return ReadField<void*>("body"); }
        void SetBody(void* value) const { WriteField<void*>("body", value); }
        void* id() const { return ReadField<void*>("id"); }
        void SetId(void* value) const { WriteField<void*>("id", value); }
    };
}
