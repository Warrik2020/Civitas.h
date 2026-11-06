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
        float TicksPerMonth(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<float>("TicksPerMonth", __callArgs, 1); }
        void* Amount(float v) const { void* __callArgs[] = { &v }; return CallStatic("Amount", __callArgs, 1); }
        void* Gold(float v) const { void* __callArgs[] = { &v }; return CallStatic("Gold", __callArgs, 1); }
        void* GoldPerMonth(float perTick, float ticksPerMonth) const { void* __callArgs[] = { &perTick, &ticksPerMonth }; return CallStatic("GoldPerMonth", __callArgs, 2); }
        void* SignedPercent(float fraction) const { void* __callArgs[] = { &fraction }; return CallStatic("SignedPercent", __callArgs, 1); }
        void* Percent(float fraction) const { void* __callArgs[] = { &fraction }; return CallStatic("Percent", __callArgs, 1); }
        void* Years(float years) const { void* __callArgs[] = { &years }; return CallStatic("Years", __callArgs, 1); }
    };
}
