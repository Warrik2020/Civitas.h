#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical::Rendering
{
    class BattleWorksRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleWorksRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical.Rendering", "BattleWorksRenderer") {}
    public:
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void Hide() const { Call("Hide", nullptr, 0); }
        void Draw(void* arenaToWorld, float pxPerTile, float z) const { void* __callArgs[] = { arenaToWorld, &pxPerTile, &z }; Call("Draw", __callArgs, 3); }
    };
}
