#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class MoraleOrg : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MoraleOrg(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "MoraleOrg") {}
    public:
        float ToMorale(float org01) const { void* args[] = { &org01 }; return CallStaticValue<float>("ToMorale", args, 1); }
        float ToOrg01(float morale) const { void* args[] = { &morale }; return CallStaticValue<float>("ToOrg01", args, 1); }
        float Floor() const { return ReadStaticField<float>("Floor"); }
    };
}
