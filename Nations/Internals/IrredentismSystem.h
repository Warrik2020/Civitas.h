#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class IrredentismSystem : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IrredentismSystem(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "IrredentismSystem") {}
    public:
        float OpinionMalus(int a, int b, void* cfg) const { void* args[] = { &a, &b, cfg }; return CallStaticValue<float>("OpinionMalus", args, 3); }
        void Pass(void* mgr, void* ctx, void* politics) const { void* args[] = { mgr, &ctx, politics }; CallStatic("Pass", args, 3); }
        void OnDemandRefused(void* p, void* mgr, void* ctx) const { void* args[] = { p, mgr, &ctx }; CallStatic("OnDemandRefused", args, 3); }
        bool CedeClaimedState(void* p, void* mgr, void* ctx, void* politics) const { void* args[] = { p, mgr, &ctx, politics }; return CallStaticValue<bool>("CedeClaimedState", args, 4); }
    };
}
