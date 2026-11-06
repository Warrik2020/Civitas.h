#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::MapModes
{
    class MapModeManager : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapModeManager(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.MapModes", "MapModeManager") {}
    public:
        void* GovernmentColor(int ideology) const { void* __callArgs[] = { &ideology }; return Call("GovernmentColor", __callArgs, 1); }
        void* HouseColor(void* h) const { void* __callArgs[] = { h }; return Call("HouseColor", __callArgs, 1); }
        void* SupplyRampColor(float capacityDe) const { void* __callArgs[] = { &capacityDe }; return Call("SupplyRampColor", __callArgs, 1); }
        void* TensionColor(int role, int bloc = 0) const { void* __callArgs[] = { &role, &bloc }; return Call("TensionColor", __callArgs, 2); }
        int TensionRoleOf(int id, int focus, int& bloc) const { void* __callArgs[] = { &id, &focus, &bloc }; return CallValue<int>("TensionRoleOf", __callArgs, 3); }
        void* TerrainModeColor(uint8_t terrain) const { void* __callArgs[] = { &terrain }; return Call("TerrainModeColor", __callArgs, 1); }
        bool TryCurrentIdentityAxis(int& axis) const { void* __callArgs[] = { &axis }; return CallValue<bool>("TryCurrentIdentityAxis", __callArgs, 1); }
        void HoldStateBorders(bool hold) const { void* __callArgs[] = { &hold }; Call("HoldStateBorders", __callArgs, 1); }
        void SetMode(void* mode) const { void* __callArgs[] = { mode }; Call("SetMode", __callArgs, 1); }
        void RefreshCurrentMode() const { Call("RefreshCurrentMode", nullptr, 0); }
        void* ModeForAxis(int axis) const { void* __callArgs[] = { &axis }; return CallStatic("ModeForAxis", __callArgs, 1); }
        bool IsIdentityMode(void* mode) const { void* __callArgs[] = { mode }; return CallStaticValue<bool>("IsIdentityMode", __callArgs, 1); }
        bool TryAxisFor(void* mode, int& axis) const { void* __callArgs[] = { mode, &axis }; return CallStaticValue<bool>("TryAxisFor", __callArgs, 2); }
        float SupplyRampMaxDE() const { return ReadStaticField<float>("SupplyRampMaxDE"); }
        bool IdentityRegionLines() const { return ReadStaticField<bool>("IdentityRegionLines"); }
        void IdentityRegionLines(bool value) const { WriteStaticField<bool>("IdentityRegionLines", value); }
    };
}
