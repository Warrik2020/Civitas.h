#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiBreakdown : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiBreakdown(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiBreakdown") {}
    public:
        void* Clear() const { return Call("Clear", nullptr, 0); }
        void* Line(const char* label, float value, const char* formatted) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(formatted ? formatted : "") : nullptr; void* args[] = { managed_0, &value, managed_2 }; return Call("Line", args, 3); }
        void* Plain(const char* label, const char* formatted) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(formatted ? formatted : "") : nullptr; void* args[] = { managed_0, managed_1 }; return Call("Plain", args, 2); }
        void* Total(const char* label, float value, const char* formatted) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(label ? label : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(formatted ? formatted : "") : nullptr; void* args[] = { managed_0, &value, managed_2 }; return Call("Total", args, 3); }
        void* ToString() const { return Call("ToString", nullptr, 0); }
    };
}
