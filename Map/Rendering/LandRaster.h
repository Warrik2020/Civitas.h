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
        int Fill(void* poly, float pixelSpan, int w, int h, void* spans) const { void* args[] = { poly, &pixelSpan, &w, &h, spans }; return CallStaticValue<int>("Fill", args, 5); }
        int WeldDiagonalLinks(void* grid, int w, int h) const { void* args[] = { grid, &w, &h }; return CallStaticValue<int>("WeldDiagonalLinks", args, 3); }
        float Area(void* poly) const { void* args[] = { poly }; return CallStaticValue<float>("Area", args, 1); }
    };
}
