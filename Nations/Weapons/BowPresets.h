#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class BowPresets : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BowPresets(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "BowPresets") {}
    public:
        void* Get(const char* key) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(key ? key : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Get", args, 1); }
        void* BestOfKind(void* it, int kind) const { void* args[] = { it, &kind }; return CallStatic("BestOfKind", args, 2); }
        void* AnyOfKind(int kind) const { void* args[] = { &kind }; return CallStatic("AnyOfKind", args, 1); }
        void* BestAvailable(void* it) const { void* args[] = { it }; return CallStatic("BestAvailable", args, 1); }
        void* All() const { return ReadStaticField<void*>("All"); }
    };
}
