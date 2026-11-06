#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class VehiclePresets : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VehiclePresets(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "VehiclePresets") {}
    public:
        void* Get(const char* key) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Get", __callArgs, 1); }
        void* Instantiate(const char* key) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Instantiate", __callArgs, 1); }
        float AttackBaseline(float year) const { void* __callArgs[] = { &year }; return CallStaticValue<float>("AttackBaseline", __callArgs, 1); }
        float DefenceBaseline(float year) const { void* __callArgs[] = { &year }; return CallStaticValue<float>("DefenceBaseline", __callArgs, 1); }
        float TypicalComplexity(float year) const { void* __callArgs[] = { &year }; return CallStaticValue<float>("TypicalComplexity", __callArgs, 1); }
        void* BestAvailable(void* it, float maxDueYear) const { void* __callArgs[] = { it, &maxDueYear }; return CallStatic("BestAvailable", __callArgs, 2); }
        void* BestOfKind(void* it, int kind) const { void* __callArgs[] = { it, &kind }; return CallStatic("BestOfKind", __callArgs, 2); }
        void* AnyOfKind(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("AnyOfKind", __callArgs, 1); }
        void TopRaw(float& attack, float& defence) const { void* __callArgs[] = { &attack, &defence }; CallStatic("TopRaw", __callArgs, 2); }
        void* All() const { return ReadStaticField<void*>("All"); }
        void* Tanks() const { return ReadStaticField<void*>("Tanks"); }
    };
}
