#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "CivitasCore.h"

namespace CivitasPoly
{
    class GodMode : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GodMode(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly", "GodMode") {}
    public:
        bool Enabled() const { return ReadStaticField<bool>("Enabled"); }
        void SetEnabled(bool value) const { WriteStaticField<bool>("Enabled", value); }
        bool FreeTreasury() const { return ReadStaticField<bool>("FreeTreasury"); }
        void SetFreeTreasury(bool value) const { WriteStaticField<bool>("FreeTreasury", value); }
        float TreasuryFloor() const { return ReadStaticField<float>("TreasuryFloor"); }
        float CashGrant() const { return ReadStaticField<float>("CashGrant"); }
    };
}
