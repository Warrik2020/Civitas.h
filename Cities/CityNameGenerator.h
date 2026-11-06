#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Cities
{
    class CityNameGenerator : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CityNameGenerator(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities", "CityNameGenerator") {}
    public:
        void* Generate(int culture, int64_t traits, void* usedNames) const { void* args[] = { &culture, &traits, usedNames }; return CallStatic("Generate", args, 3); }
        void* RollOnce(int culture, int64_t traits) const { void* args[] = { &culture, &traits }; return CallStatic("RollOnce", args, 2); }
    };
}
