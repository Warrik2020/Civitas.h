#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Rendering
{
    class MapCanvas : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapCanvas(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Rendering", "MapCanvas") {}
    public:
        void* ClearColor(void* style) const { void* args[] = { style }; return Call("ClearColor", args, 1); }
        void ApplyPack(void* pack, void* style) const { void* args[] = { pack, style }; Call("ApplyPack", args, 2); }
        void* ViewBounds(void* style) const { void* args[] = { style }; return Call("ViewBounds", args, 1); }
        void Build(void* style) const { void* args[] = { style }; Call("Build", args, 1); }
        void ApplyLive(void* style) const { void* args[] = { style }; Call("ApplyLive", args, 1); }
        void SetReliefScale(float scale) const { void* args[] = { &scale }; Call("SetReliefScale", args, 1); }
        void RebuildRelief(void* style) const { void* args[] = { style }; Call("RebuildRelief", args, 1); }
        void RebuildCoast(void* style) const { void* args[] = { style }; Call("RebuildCoast", args, 1); }
        void RebuildFrame(void* style) const { void* args[] = { style }; Call("RebuildFrame", args, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
    };
}
