#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical::Rendering
{
    class BattleUrbanRenderer : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleUrbanRenderer(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical.Rendering", "BattleUrbanRenderer") {}
    public:
        void SetVisible(bool on) const { void* args[] = { &on }; Call("SetVisible", args, 1); }
        void PlaceLocal(void* localToRender, float z) const { void* args[] = { localToRender, &z }; Call("PlaceLocal", args, 2); }
        void Dispose() const { Call("Dispose", nullptr, 0); }
    };
}
