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
        bool TakenElsewhere(void* self) const { void* __callArgs[] = { self }; return CallStaticValue<bool>("TakenElsewhere", __callArgs, 1); }
        bool ToolOwner(void* owner) const { void* __callArgs[] = { &owner }; return CallStaticValue<bool>("ToolOwner", __callArgs, 1); }
        bool ScreenToTile(void* screen, void* tile) const { void* __callArgs[] = { screen, &tile }; return CallStaticValue<bool>("ScreenToTile", __callArgs, 2); }
        int OwnerAtScreen(void* screen) const { void* __callArgs[] = { screen }; return CallStaticValue<int>("OwnerAtScreen", __callArgs, 1); }
        bool TileToScreen(void* tile, void* screen) const { void* __callArgs[] = { tile, &screen }; return CallStaticValue<bool>("TileToScreen", __callArgs, 2); }
        float PixelsPerTile() const { return CallStaticValue<float>("PixelsPerTile", nullptr, 0); }
    };
}
