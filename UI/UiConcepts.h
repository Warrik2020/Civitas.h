#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiConcepts : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiConcepts(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiConcepts") {}
    public:
        bool TryGet(const char* id, void* c) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* args[] = { managed_0, &c }; return CallStaticValue<bool>("TryGet", args, 2); }
        void* Link(const char* id, const char* text) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* args[] = { managed_0, managed_1 }; return CallStatic("Link", args, 2); }
        void* LinkHex() const { return ReadStaticField<void*>("LinkHex"); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* body() const { return ReadField<void*>("body"); }
        void SetBody(void* value) const { WriteField<void*>("body", value); }
    };
}
