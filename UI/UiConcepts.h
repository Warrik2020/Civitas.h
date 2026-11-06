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
        bool TryGet(const char* id, void* c) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* __callArgs[] = { managed_0, &c }; return CallStaticValue<bool>("TryGet", __callArgs, 2); }
        void* Link(const char* id, const char* text) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { managed_0, managed_1 }; return CallStatic("Link", __callArgs, 2); }
        void* LinkHex() const { return ReadStaticField<void*>("LinkHex"); }
    };
}
