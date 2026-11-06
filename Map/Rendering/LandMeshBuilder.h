#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering
{
    class LandMeshBuilder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LandMeshBuilder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering", "LandMeshBuilder") {}
    public:
        void* Build(void* data, float worldScale, int simDownsample = 1, float simScale = 1f) const { void* args[] = { data, &worldScale, &simDownsample, &simScale }; return CallStatic("Build", args, 4); }
        void* RasteriseLand(void* data, int simDownsample, float simScale, int& w, int& h) const { void* args[] = { data, &simDownsample, &simScale, &w, &h }; return CallStatic("RasteriseLand", args, 5); }
        void* pts() const { return ReadField<void*>("pts"); }
        void SetPts(void* value) const { WriteField<void*>("pts", value); }
        bool land() const { return ReadField<bool>("land"); }
        void SetLand(bool value) const { WriteField<bool>("land", value); }
        float area() const { return ReadField<float>("area"); }
        void SetArea(float value) const { WriteField<float>("area", value); }
    };
}
