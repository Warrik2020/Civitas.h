#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsFactValues : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsFactValues(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsFactValues") {}
    public:
        void Clear() const { Call("Clear", nullptr, 0); }
        void Set(const char* key, const char* value) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(value ? value : "") : nullptr; void* __callArgs[] = { managed_0, managed_1 }; Call("Set", __callArgs, 2); }
        void Set(const char* key, int value) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { managed_0, &value }; Call("Set", __callArgs, 2); }
        void Percent(const char* key, float zeroToOne) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { managed_0, &zeroToOne }; Call("Percent", __callArgs, 2); }
        bool TryGet(const char* key, const char*& value) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { managed_0, &value }; return CallValue<bool>("TryGet", __callArgs, 2); }
    };
}
