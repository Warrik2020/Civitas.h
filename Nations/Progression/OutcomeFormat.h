#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Progression
{
    class OutcomeFormat : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit OutcomeFormat(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Progression", "OutcomeFormat") {}
    public:
        float TicksPerMonth(void* cfg) const { void* args[] = { cfg }; return CallStaticValue<float>("TicksPerMonth", args, 1); }
        void* Amount(float v) const { void* args[] = { &v }; return CallStatic("Amount", args, 1); }
        void* Gold(float v) const { void* args[] = { &v }; return CallStatic("Gold", args, 1); }
        void* GoldPerMonth(float perTick, float ticksPerMonth) const { void* args[] = { &perTick, &ticksPerMonth }; return CallStatic("GoldPerMonth", args, 2); }
        void* SignedPercent(float fraction) const { void* args[] = { &fraction }; return CallStatic("SignedPercent", args, 1); }
        void* Percent(float fraction) const { void* args[] = { &fraction }; return CallStatic("Percent", args, 1); }
        void* Years(float years) const { void* args[] = { &years }; return CallStatic("Years", args, 1); }
    };
}
