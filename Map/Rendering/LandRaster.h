#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering
{
    class LandRaster : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LandRaster(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering", "LandRaster") {}
    public:
        int Fill(void* poly, float pixelSpan, int w, int h, void* spans) const { void* __callArgs[] = { poly, &pixelSpan, &w, &h, spans }; return CallStaticValue<int>("Fill", __callArgs, 5); }
        int WeldDiagonalLinks(void* grid, int w, int h) const { void* __callArgs[] = { grid, &w, &h }; return CallStaticValue<int>("WeldDiagonalLinks", __callArgs, 3); }
        float Area(void* poly) const { void* __callArgs[] = { poly }; return CallStaticValue<float>("Area", __callArgs, 1); }
    };
}
