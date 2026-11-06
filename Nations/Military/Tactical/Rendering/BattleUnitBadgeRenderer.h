#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical::Rendering
{
    class BattleUnitBadgeRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleUnitBadgeRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical.Rendering", "BattleUnitBadgeRenderer") {}
    public:
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void Hide() const { Call("Hide", nullptr, 0); }
        bool TryPick(void* screen, int& battalion) const { void* __callArgs[] = { screen, &battalion }; return CallValue<bool>("TryPick", __callArgs, 2); }
        bool TryPick(void* screen, int& battalion, bool& formationBadge) const { void* __callArgs[] = { screen, &battalion, &formationBadge }; return CallValue<bool>("TryPick", __callArgs, 3); }
        void Sync() const { Call("Sync", nullptr, 0); }
        void Sync(bool sections) const { void* __callArgs[] = { &sections }; Call("Sync", __callArgs, 1); }
    };
}
