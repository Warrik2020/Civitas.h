#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiTooltip : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiTooltip(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiTooltip") {}
    public:
        void* Attach(void* go, void* provider) const { void* args[] = { go, provider }; return CallStatic("Attach", args, 2); }
        void* Attach(void* go, const char* title, const char* body = nullptr, const char* hotkey = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(body ? body : "") : nullptr; void* managed_3 = Api() && Api()->NewString ? Api()->NewString(hotkey ? hotkey : "") : nullptr; void* args[] = { go, managed_1, managed_2, managed_3 }; return CallStatic("Attach", args, 4); }
        void Hide() const { CallStatic("Hide", nullptr, 0); }
        void Lift(int aboveOrder) const { void* args[] = { &aboveOrder }; CallStatic("Lift", args, 1); }
        void Lower() const { CallStatic("Lower", nullptr, 0); }
        float Delay() const { return ReadStaticField<float>("Delay"); }
        float Handover() const { return ReadStaticField<float>("Handover"); }
        int SortingOrder() const { return ReadStaticField<int>("SortingOrder"); }
    };
}
