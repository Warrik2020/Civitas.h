#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical::Rendering
{
    class BattleCounterRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleCounterRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical.Rendering", "BattleCounterRenderer") {}
    public:
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void Hide() const { Call("Hide", nullptr, 0); }
        int PickOffField(void* world) const { void* __callArgs[] = { world }; return CallValue<int>("PickOffField", __callArgs, 1); }
        int PickDivision(void* world) const { void* __callArgs[] = { world }; return CallValue<int>("PickDivision", __callArgs, 1); }
        void Sync(float dt) const { void* __callArgs[] = { &dt }; Call("Sync", __callArgs, 1); }
    };
}
