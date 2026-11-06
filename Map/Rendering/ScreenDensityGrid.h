#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering
{
    class ScreenDensityGrid : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ScreenDensityGrid(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering", "ScreenDensityGrid") {}
    public:
        void Begin(float cellPx, float ppwu, float minX, float maxX, float minY, float maxY, int maxPerCell) const { void* args[] = { &cellPx, &ppwu, &minX, &maxX, &minY, &maxY, &maxPerCell }; Call("Begin", args, 7); }
        bool Take(float worldX, float worldY) const { void* args[] = { &worldX, &worldY }; return CallValue<bool>("Take", args, 2); }
    };
}
