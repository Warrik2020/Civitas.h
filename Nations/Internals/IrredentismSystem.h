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
        float OpinionMalus(int a, int b, void* cfg) const { void* __callArgs[] = { &a, &b, cfg }; return CallStaticValue<float>("OpinionMalus", __callArgs, 3); }
        void Pass(void* mgr, void* ctx, void* politics) const { void* __callArgs[] = { mgr, &ctx, politics }; CallStatic("Pass", __callArgs, 3); }
        void OnDemandRefused(void* p, void* mgr, void* ctx) const { void* __callArgs[] = { p, mgr, &ctx }; CallStatic("OnDemandRefused", __callArgs, 3); }
        bool CedeClaimedState(void* p, void* mgr, void* ctx, void* politics) const { void* __callArgs[] = { p, mgr, &ctx, politics }; return CallStaticValue<bool>("CedeClaimedState", __callArgs, 4); }
    };
}
