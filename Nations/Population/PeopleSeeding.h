#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Population
{
    class PeopleSeeding : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleSeeding(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Population", "PeopleSeeding") {}
    public:
        void Seed(void* field, void* weights, void* catchment, void* nations, void* getInternals, void* cities, void* identity, void* s) const { void* __callArgs[] = { field, weights, catchment, nations, getInternals, cities, identity, s }; CallStatic("Seed", __callArgs, 8); }
        float StatelessSeedFill() const { return ReadStaticField<float>("StatelessSeedFill"); }
    };
}
