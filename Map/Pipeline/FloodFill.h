#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Pipeline
{
    class FloodFill : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FloodFill(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Pipeline", "FloodFill") {}
    public:
        void* Detect(void* grid, int w, int h, int minIslandArea, int minHoleArea) const { void* args[] = { grid, &w, &h, &minIslandArea, &minHoleArea }; return CallStatic("Detect", args, 5); }
    };
}
