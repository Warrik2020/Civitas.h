#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class MapInput : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapInput(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "MapInput") {}
    public:
        bool TakenElsewhere(void* self) const { void* args[] = { self }; return CallStaticValue<bool>("TakenElsewhere", args, 1); }
        bool ToolOwner(void* owner) const { void* args[] = { &owner }; return CallStaticValue<bool>("ToolOwner", args, 1); }
        bool ScreenToTile(void* screen, void* tile) const { void* args[] = { screen, &tile }; return CallStaticValue<bool>("ScreenToTile", args, 2); }
        int OwnerAtScreen(void* screen) const { void* args[] = { screen }; return CallStaticValue<int>("OwnerAtScreen", args, 1); }
        bool TileToScreen(void* tile, void* screen) const { void* args[] = { tile, &screen }; return CallStaticValue<bool>("TileToScreen", args, 2); }
        float PixelsPerTile() const { return CallStaticValue<float>("PixelsPerTile", nullptr, 0); }
    };
}
