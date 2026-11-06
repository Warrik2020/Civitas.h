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
        void* ClearColor(void* style) const { void* __callArgs[] = { style }; return Call("ClearColor", __callArgs, 1); }
        void ApplyPack(void* pack, void* style) const { void* __callArgs[] = { pack, style }; Call("ApplyPack", __callArgs, 2); }
        void* ViewBounds(void* style) const { void* __callArgs[] = { style }; return Call("ViewBounds", __callArgs, 1); }
        void Build(void* style) const { void* __callArgs[] = { style }; Call("Build", __callArgs, 1); }
        void ApplyLive(void* style) const { void* __callArgs[] = { style }; Call("ApplyLive", __callArgs, 1); }
        void SetReliefScale(float scale) const { void* __callArgs[] = { &scale }; Call("SetReliefScale", __callArgs, 1); }
        void RebuildRelief(void* style) const { void* __callArgs[] = { style }; Call("RebuildRelief", __callArgs, 1); }
        void RebuildCoast(void* style) const { void* __callArgs[] = { style }; Call("RebuildCoast", __callArgs, 1); }
        void RebuildFrame(void* style) const { void* __callArgs[] = { style }; Call("RebuildFrame", __callArgs, 1); }
        void Destroy() const { Call("Destroy", nullptr, 0); }
    };
}
