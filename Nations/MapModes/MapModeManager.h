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
        void* GovernmentColor(int ideology) const { void* args[] = { &ideology }; return Call("GovernmentColor", args, 1); }
        void* HouseColor(void* h) const { void* args[] = { h }; return Call("HouseColor", args, 1); }
        void* SupplyRampColor(float capacityDe) const { void* args[] = { &capacityDe }; return Call("SupplyRampColor", args, 1); }
        void* TensionColor(int role, int bloc = 0) const { void* args[] = { &role, &bloc }; return Call("TensionColor", args, 2); }
        int TensionRoleOf(int id, int focus, int& bloc) const { void* args[] = { &id, &focus, &bloc }; return CallValue<int>("TensionRoleOf", args, 3); }
        void* TerrainModeColor(uint8_t terrain) const { void* args[] = { &terrain }; return Call("TerrainModeColor", args, 1); }
        bool TryCurrentIdentityAxis(int& axis) const { void* args[] = { &axis }; return CallValue<bool>("TryCurrentIdentityAxis", args, 1); }
        void HoldStateBorders(bool hold) const { void* args[] = { &hold }; Call("HoldStateBorders", args, 1); }
        void SetMode(void* mode) const { void* args[] = { mode }; Call("SetMode", args, 1); }
        void RefreshCurrentMode() const { Call("RefreshCurrentMode", nullptr, 0); }
        void* ModeForAxis(int axis) const { void* args[] = { &axis }; return CallStatic("ModeForAxis", args, 1); }
        bool IsIdentityMode(void* mode) const { void* args[] = { mode }; return CallStaticValue<bool>("IsIdentityMode", args, 1); }
        bool TryAxisFor(void* mode, int& axis) const { void* args[] = { mode, &axis }; return CallStaticValue<bool>("TryAxisFor", args, 2); }
        void* ColorAt(int index, int x, int y) const { void* args[] = { &index, &x, &y }; return Call("ColorAt", args, 3); }
        bool TryOwnerColor(int o, void* c) const { void* args[] = { &o, &c }; return CallValue<bool>("TryOwnerColor", args, 2); }
        int ChunkFill(int chunk, void* land) const { void* args[] = { &chunk, &land }; return CallValue<int>("ChunkFill", args, 2); }
        void* ColorAt(int index, int x, int y) const { void* args[] = { &index, &x, &y }; return Call("ColorAt", args, 3); }
        bool TryOwnerColor(int o, void* c) const { void* args[] = { &o, &c }; return CallValue<bool>("TryOwnerColor", args, 2); }
        void* ColorAt(int index, int x, int y) const { void* args[] = { &index, &x, &y }; return Call("ColorAt", args, 3); }
        bool TryOwnerColor(int o, void* c) const { void* args[] = { &o, &c }; return CallValue<bool>("TryOwnerColor", args, 2); }
        int ChunkFill(int chunk, void* land) const { void* args[] = { &chunk, &land }; return CallValue<int>("ChunkFill", args, 2); }
        void* ColorAt(int index, int x, int y) const { void* args[] = { &index, &x, &y }; return Call("ColorAt", args, 3); }
        bool TryOwnerColor(int o, void* c) const { void* args[] = { &o, &c }; return CallValue<bool>("TryOwnerColor", args, 2); }
        void* ColorAt(int index, int x, int y) const { void* args[] = { &index, &x, &y }; return Call("ColorAt", args, 3); }
        bool TryOwnerColor(int o, void* c) const { void* args[] = { &o, &c }; return CallValue<bool>("TryOwnerColor", args, 2); }
        void* ColorAt(int index, int x, int y) const { void* args[] = { &index, &x, &y }; return Call("ColorAt", args, 3); }
        bool TryOwnerColor(int owner, void* color) const { void* args[] = { &owner, &color }; return CallValue<bool>("TryOwnerColor", args, 2); }
        bool ChunkClear(int chunkX, int chunkY) const { void* args[] = { &chunkX, &chunkY }; return CallValue<bool>("ChunkClear", args, 2); }
        void* ColorAt(int index) const { void* args[] = { &index }; return Call("ColorAt", args, 1); }
        void* ColorAt(int index, int x, int y) const { void* args[] = { &index, &x, &y }; return Call("ColorAt", args, 3); }
        bool TryOwnerColor(int o, void* c) const { void* args[] = { &o, &c }; return CallValue<bool>("TryOwnerColor", args, 2); }
        void* ColorAt(int index, int x, int y) const { void* args[] = { &index, &x, &y }; return Call("ColorAt", args, 3); }
        bool TryOwnerColor(int o, void* c) const { void* args[] = { &o, &c }; return CallValue<bool>("TryOwnerColor", args, 2); }
        void* ColorAt(int index, int x, int y) const { void* args[] = { &index, &x, &y }; return Call("ColorAt", args, 3); }
        bool TryOwnerColor(int o, void* c) const { void* args[] = { &o, &c }; return CallValue<bool>("TryOwnerColor", args, 2); }
        void* ColorAt(int index, int x, int y) const { void* args[] = { &index, &x, &y }; return Call("ColorAt", args, 3); }
        bool TryOwnerColor(int o, void* c) const { void* args[] = { &o, &c }; return CallValue<bool>("TryOwnerColor", args, 2); }
        void* ColorAt(int index, int x, int y) const { void* args[] = { &index, &x, &y }; return Call("ColorAt", args, 3); }
        bool TryOwnerColor(int o, void* c) const { void* args[] = { &o, &c }; return CallValue<bool>("TryOwnerColor", args, 2); }
        void* ColorAt(int index, int x, int y) const { void* args[] = { &index, &x, &y }; return Call("ColorAt", args, 3); }
        bool TryOwnerColor(int o, void* c) const { void* args[] = { &o, &c }; return CallValue<bool>("TryOwnerColor", args, 2); }
        void* ColorAt(int index, int x, int y) const { void* args[] = { &index, &x, &y }; return Call("ColorAt", args, 3); }
        bool TryOwnerColor(int o, void* c) const { void* args[] = { &o, &c }; return CallValue<bool>("TryOwnerColor", args, 2); }
        void* ColorAt(int index, int x, int y) const { void* args[] = { &index, &x, &y }; return Call("ColorAt", args, 3); }
        bool TryOwnerColor(int o, void* c) const { void* args[] = { &o, &c }; return CallValue<bool>("TryOwnerColor", args, 2); }
        float SupplyRampMaxDE() const { return ReadStaticField<float>("SupplyRampMaxDE"); }
        bool IdentityRegionLines() const { return ReadStaticField<bool>("IdentityRegionLines"); }
        void SetIdentityRegionLines(bool value) const { WriteStaticField<bool>("IdentityRegionLines", value); }
    };
}
