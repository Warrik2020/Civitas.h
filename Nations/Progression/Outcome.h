#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class Outcome : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Outcome(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "Outcome") {}
    public:
        void* Clear() const { return Call("Clear", nullptr, 0); }
        void* Gain(const char* text) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { managed_0 }; return Call("Gain", __callArgs, 1); }
        void* Cost(const char* text) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { managed_0 }; return Call("Cost", __callArgs, 1); }
        void* Risk(const char* text) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { managed_0 }; return Call("Risk", __callArgs, 1); }
        void* Add(int sign, const char* text) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { &sign, managed_1 }; return Call("Add", __callArgs, 2); }
        int CountOf(int sign) const { void* __callArgs[] = { &sign }; return CallValue<int>("CountOf", __callArgs, 1); }
        void CopyTo(void* other) const { void* __callArgs[] = { other }; Call("CopyTo", __callArgs, 1); }
    };
}
