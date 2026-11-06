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
        void* Build(void* data, float worldScale, int simDownsample = 1, float simScale = 1.0f) const { void* __callArgs[] = { data, &worldScale, &simDownsample, &simScale }; return CallStatic("Build", __callArgs, 4); }
        void* RasteriseLand(void* data, int simDownsample, float simScale, int& w, int& h) const { void* __callArgs[] = { data, &simDownsample, &simScale, &w, &h }; return CallStatic("RasteriseLand", __callArgs, 5); }
    };
}
