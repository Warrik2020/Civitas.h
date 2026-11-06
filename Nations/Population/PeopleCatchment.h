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
        void MarkDirty(int nation) const { void* args[] = { &nation }; Call("MarkDirty", args, 1); }
        float ShareOf(int cityId) const { void* args[] = { &cityId }; return CallValue<float>("ShareOf", args, 1); }
        void WriteCities(void* it, void* cities) const { void* args[] = { it, cities }; Call("WriteCities", args, 2); }
        bool StepRealm(int nation, void* cities, void* field, int tick) const { void* args[] = { &nation, cities, field, &tick }; return CallValue<bool>("StepRealm", args, 4); }
        int Walk(int nation, void* cities, void* field, void* assign) const { void* args[] = { &nation, cities, field, assign }; return CallValue<int>("Walk", args, 4); }
        void Forget(int cityId) const { void* args[] = { &cityId }; Call("Forget", args, 1); }
        int IntervalTicks() const { return ReadField<int>("IntervalTicks"); }
        void SetIntervalTicks(int value) const { WriteField<int>("IntervalTicks", value); }
    };
}
