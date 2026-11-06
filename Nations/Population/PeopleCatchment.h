#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Population
{
    class PeopleCatchment : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleCatchment(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Population", "PeopleCatchment") {}
    public:
        void MarkDirty(int nation) const { void* __callArgs[] = { &nation }; Call("MarkDirty", __callArgs, 1); }
        float ShareOf(int cityId) const { void* __callArgs[] = { &cityId }; return CallValue<float>("ShareOf", __callArgs, 1); }
        void WriteCities(void* it, void* cities) const { void* __callArgs[] = { it, cities }; Call("WriteCities", __callArgs, 2); }
        bool StepRealm(int nation, void* cities, void* field, int tick) const { void* __callArgs[] = { &nation, cities, field, &tick }; return CallValue<bool>("StepRealm", __callArgs, 4); }
        int Walk(int nation, void* cities, void* field, void* assign) const { void* __callArgs[] = { &nation, cities, field, assign }; return CallValue<int>("Walk", __callArgs, 4); }
        void Forget(int cityId) const { void* __callArgs[] = { &cityId }; Call("Forget", __callArgs, 1); }
        int IntervalTicks() const { return ReadField<int>("IntervalTicks"); }
        void IntervalTicks(int value) const { WriteField<int>("IntervalTicks", value); }
    };
}
