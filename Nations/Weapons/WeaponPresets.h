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
        void* Get(const char* key) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Get", args, 1); }
        void* Instantiate(const char* key) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Instantiate", args, 1); }
        float Baseline(float year) const { void* args[] = { &year }; return CallStaticValue<float>("Baseline", args, 1); }
        float TypicalComplexity(float year) const { void* args[] = { &year }; return CallStaticValue<float>("TypicalComplexity", args, 1); }
        void* BestAvailable(void* it, int role, float maxDueYear) const { void* args[] = { it, &role, &maxDueYear }; return CallStatic("BestAvailable", args, 3); }
        void* BestOfKind(void* it, int kind) const { void* args[] = { it, &kind }; return CallStatic("BestOfKind", args, 2); }
        void* AnyOfKind(int kind) const { void* args[] = { &kind }; return CallStatic("AnyOfKind", args, 1); }
        float EarliestRungYear() const { return ReadStaticField<float>("EarliestRungYear"); }
        void* All() const { return ReadStaticField<void*>("All"); }
        void* Rifles() const { return ReadStaticField<void*>("Rifles"); }
        void* Supports() const { return ReadStaticField<void*>("Supports"); }
    };
}
