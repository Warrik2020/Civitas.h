#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class WeaponPresets : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponPresets(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "WeaponPresets") {}
    public:
        void* Get(const char* key) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Get", __callArgs, 1); }
        void* Instantiate(const char* key) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Instantiate", __callArgs, 1); }
        float Baseline(float year) const { void* __callArgs[] = { &year }; return CallStaticValue<float>("Baseline", __callArgs, 1); }
        float TypicalComplexity(float year) const { void* __callArgs[] = { &year }; return CallStaticValue<float>("TypicalComplexity", __callArgs, 1); }
        void* BestAvailable(void* it, int role, float maxDueYear) const { void* __callArgs[] = { it, &role, &maxDueYear }; return CallStatic("BestAvailable", __callArgs, 3); }
        void* BestOfKind(void* it, int kind) const { void* __callArgs[] = { it, &kind }; return CallStatic("BestOfKind", __callArgs, 2); }
        void* AnyOfKind(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("AnyOfKind", __callArgs, 1); }
        float EarliestRungYear() const { return ReadStaticField<float>("EarliestRungYear"); }
        void* All() const { return ReadStaticField<void*>("All"); }
        void* Rifles() const { return ReadStaticField<void*>("Rifles"); }
        void* Supports() const { return ReadStaticField<void*>("Supports"); }
    };
}
