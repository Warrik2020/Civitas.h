#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical::Rendering
{
    class BattleDotRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleDotRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical.Rendering", "BattleDotRenderer") {}
    public:
        void Draw(void* sim, void* cam, void* arenaToWorld, void* bounds, float pxPerTile, float z) const { void* __callArgs[] = { sim, cam, arenaToWorld, bounds, &pxPerTile, &z }; Call("Draw", __callArgs, 6); }
        void Hide() const { Call("Hide", nullptr, 0); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
    };
}
