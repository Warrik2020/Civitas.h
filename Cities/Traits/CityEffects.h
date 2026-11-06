#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Traits
{
    class CityEffects : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityEffects(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Traits", "CityEffects") {}
    public:
        void Append(void* sb, void* m, const char* separator = ", ", const char* emptyText = "no special effects") const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(separator ? separator : "") : nullptr; void* managed_3 = Api() && Api()->NewString ? Api()->NewString(emptyText ? emptyText : "") : nullptr; void* __callArgs[] = { sb, &m, managed_2, managed_3 }; CallStatic("Append", __callArgs, 4); }
    };
}
