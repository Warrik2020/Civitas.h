#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Cities::Growth
{
    class TownSiteWeights : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TownSiteWeights(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities.Growth", "TownSiteWeights") {}
    public:
        float coastal() const { return ReadField<float>("coastal"); }
        void SetCoastal(float value) const { WriteField<float>("coastal", value); }
        float frontier() const { return ReadField<float>("frontier"); }
        void SetFrontier(float value) const { WriteField<float>("frontier", value); }
        float spacing() const { return ReadField<float>("spacing"); }
        void SetSpacing(float value) const { WriteField<float>("spacing", value); }
    };
}
