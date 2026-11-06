#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class SoldierCombatJobs : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SoldierCombatJobs(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "SoldierCombatJobs") {}
    public:
        void PushFx(void* reqs, void* counter, int cap, void* req) const { void* __callArgs[] = { reqs, counter, &cap, req }; CallStatic("PushFx", __callArgs, 4); }
        int NoKiller() const { return ReadStaticField<int>("NoKiller"); }
    };
}
