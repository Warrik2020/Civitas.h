#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class ArenaFrame : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArenaFrame(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "ArenaFrame") {}
    public:
        void* Identity(void* arena) const { void* __callArgs[] = { arena }; return CallStatic("Identity", __callArgs, 1); }
        void* OnMap(void* origin) const { void* __callArgs[] = { origin }; return CallStatic("OnMap", __callArgs, 1); }
        float TilesToUnits(float tiles) const { void* __callArgs[] = { &tiles }; return CallValue<float>("TilesToUnits", __callArgs, 1); }
        float UnitsToTiles(float units) const { void* __callArgs[] = { &units }; return CallValue<float>("UnitsToTiles", __callArgs, 1); }
        void* LocalToTile(void* local) const { void* __callArgs[] = { local }; return Call("LocalToTile", __callArgs, 1); }
        void* TileToLocal(void* tile) const { void* __callArgs[] = { tile }; return Call("TileToLocal", __callArgs, 1); }
        void* SizeInUnits(void* tiles) const { void* __callArgs[] = { tiles }; return Call("SizeInUnits", __callArgs, 1); }
        void* LocalToWorld(void* local, void* s) const { void* __callArgs[] = { local, s }; return Call("LocalToWorld", __callArgs, 2); }
        void* WorldToLocal(void* w, void* s) const { void* __callArgs[] = { w, s }; return Call("WorldToLocal", __callArgs, 2); }
        void* ToWorld(void* s) const { void* __callArgs[] = { s }; return Call("ToWorld", __callArgs, 1); }
        float PxPerUnit(float pxPerTile) const { void* __callArgs[] = { &pxPerTile }; return CallValue<float>("PxPerUnit", __callArgs, 1); }
        void* origin() const { return ReadField<void*>("origin"); }
        float unitsPerTile() const { return ReadField<float>("unitsPerTile"); }
    };
}
