#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class MeleePresets : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MeleePresets(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "MeleePresets") {}
    public:
        void* Get(const char* key) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Get", args, 1); }
        void* Instantiate(const char* key) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Instantiate", args, 1); }
        float Baseline(float year) const { void* args[] = { &year }; return CallStaticValue<float>("Baseline", args, 1); }
        float TypicalComplexity(float year) const { void* args[] = { &year }; return CallStaticValue<float>("TypicalComplexity", args, 1); }
        void* BestAvailable(void* it, float maxDueYear) const { void* args[] = { it, &maxDueYear }; return CallStatic("BestAvailable", args, 2); }
        void* BestOfKind(void* it, int kind) const { void* args[] = { it, &kind }; return CallStatic("BestOfKind", args, 2); }
        void* AnyOfKind(int kind) const { void* args[] = { &kind }; return CallStatic("AnyOfKind", args, 1); }
        void* All() const { return ReadStaticField<void*>("All"); }
        void* Primary() const { return ReadStaticField<void*>("Primary"); }
    };
}
