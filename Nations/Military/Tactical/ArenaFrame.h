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
        void* Identity(void* arena) const { void* args[] = { arena }; return CallStatic("Identity", args, 1); }
        void* OnMap(void* origin) const { void* args[] = { origin }; return CallStatic("OnMap", args, 1); }
        float TilesToUnits(float tiles) const { void* args[] = { &tiles }; return CallValue<float>("TilesToUnits", args, 1); }
        float UnitsToTiles(float units) const { void* args[] = { &units }; return CallValue<float>("UnitsToTiles", args, 1); }
        void* LocalToTile(void* local) const { void* args[] = { local }; return Call("LocalToTile", args, 1); }
        void* TileToLocal(void* tile) const { void* args[] = { tile }; return Call("TileToLocal", args, 1); }
        void* SizeInUnits(void* tiles) const { void* args[] = { tiles }; return Call("SizeInUnits", args, 1); }
        void* LocalToWorld(void* local, void* s) const { void* args[] = { local, s }; return Call("LocalToWorld", args, 2); }
        void* WorldToLocal(void* w, void* s) const { void* args[] = { w, s }; return Call("WorldToLocal", args, 2); }
        void* ToWorld(void* s) const { void* args[] = { s }; return Call("ToWorld", args, 1); }
        float PxPerUnit(float pxPerTile) const { void* args[] = { &pxPerTile }; return CallValue<float>("PxPerUnit", args, 1); }
        void* origin() const { return ReadField<void*>("origin"); }
        float unitsPerTile() const { return ReadField<float>("unitsPerTile"); }
    };
}
