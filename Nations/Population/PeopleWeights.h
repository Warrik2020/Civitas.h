#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Population
{
    class PeopleWeights : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleWeights(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Population", "PeopleWeights") {}
    public:
        bool IsUrban(int tile) const { void* args[] = { &tile }; return CallValue<bool>("IsUrban", args, 1); }
        float Of(int tile) const { void* args[] = { &tile }; return CallValue<float>("Of", args, 1); }
        bool Refresh(void* cities, int tick, bool force = false) const { void* args[] = { cities, &tick, &force }; return CallValue<bool>("Refresh", args, 3); }
        float MinLand() const { return ReadStaticField<float>("MinLand"); }
        float TownWeight() const { return ReadField<float>("TownWeight"); }
        void SetTownWeight(float value) const { WriteField<float>("TownWeight", value); }
        int RebuildTicks() const { return ReadField<int>("RebuildTicks"); }
        void SetRebuildTicks(int value) const { WriteField<int>("RebuildTicks", value); }
    };
}
