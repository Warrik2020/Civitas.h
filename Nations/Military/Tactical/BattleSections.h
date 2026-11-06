#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleSections : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleSections(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleSections") {}
    public:
        void Tick(void* sim, float dt) const { void* args[] = { sim, &dt }; CallStatic("Tick", args, 2); }
    };
}
