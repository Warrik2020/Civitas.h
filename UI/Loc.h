#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class Loc : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Loc(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "Loc") {}
    public:
        void* NativeName(int language) const { void* __callArgs[] = { &language }; return CallStatic("NativeName", __callArgs, 1); }
        void Set(int language) const { void* __callArgs[] = { &language }; CallStatic("Set", __callArgs, 1); }
        void* T(const char* english) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(english ? english : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("T", __callArgs, 1); }
        void* Bind(void* text, const char* english = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(english ? english : "") : nullptr; void* __callArgs[] = { text, managed_1 }; return CallStatic("Bind", __callArgs, 2); }
        void* BindOverload4(void* button, const char* english = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(english ? english : "") : nullptr; void* __callArgs[] = { button, managed_1 }; return CallStatic("Bind", __callArgs, 2); }
        void Unbind(void* text) const { void* __callArgs[] = { text }; CallStatic("Unbind", __callArgs, 1); }
        void* All() const { return ReadStaticField<void*>("All"); }
    };
}
