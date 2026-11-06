#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class BattleMorale : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BattleMorale(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "BattleMorale") {}
    public:
        void Update(void* sim, void* bats, void* extra, int count, float dt) const { void* args[] = { sim, bats, extra, &count, &dt }; CallStatic("Update", args, 5); }
    };
}
