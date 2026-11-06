#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical::Rendering
{
    class BattleSelectionRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleSelectionRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical.Rendering", "BattleSelectionRenderer") {}
    public:
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void Sync() const { Call("Sync", nullptr, 0); }
    };
}
