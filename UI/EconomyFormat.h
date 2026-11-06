#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class EconomyFormat : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit EconomyFormat(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "EconomyFormat") {}
    public:
        void* Population(float people) const { void* __callArgs[] = { &people }; return CallStatic("Population", __callArgs, 1); }
        void* PerTick(float net) const { void* __callArgs[] = { &net }; return CallStatic("PerTick", __callArgs, 1); }
        void* PerTickDecimal(float net) const { void* __callArgs[] = { &net }; return CallStatic("PerTickDecimal", __callArgs, 1); }
        void AppendCompact(void* sb, float value) const { void* __callArgs[] = { sb, &value }; CallStatic("AppendCompact", __callArgs, 2); }
        void* PerTickCompact(float net) const { void* __callArgs[] = { &net }; return CallStatic("PerTickCompact", __callArgs, 1); }
        float Monthly(float perTick) const { void* __callArgs[] = { &perTick }; return CallStaticValue<float>("Monthly", __callArgs, 1); }
        float Yearly(float perTick) const { void* __callArgs[] = { &perTick }; return CallStaticValue<float>("Yearly", __callArgs, 1); }
        void* PerMonth(float perTick) const { void* __callArgs[] = { &perTick }; return CallStatic("PerMonth", __callArgs, 1); }
        void* PerMonthDecimal(float perTick) const { void* __callArgs[] = { &perTick }; return CallStatic("PerMonthDecimal", __callArgs, 1); }
        void* PerMonthCompact(float perTick) const { void* __callArgs[] = { &perTick }; return CallStatic("PerMonthCompact", __callArgs, 1); }
        void AppendSignedCompact(void* sb, float value) const { void* __callArgs[] = { sb, &value }; CallStatic("AppendSignedCompact", __callArgs, 2); }
        void AppendYearly(void* sb, float perTick) const { void* __callArgs[] = { sb, &perTick }; CallStatic("AppendYearly", __callArgs, 2); }
        void AppendMonthly(void* sb, float perTick) const { void* __callArgs[] = { sb, &perTick }; CallStatic("AppendMonthly", __callArgs, 2); }
        void* NextPaydayLabel() const { return CallStatic("NextPaydayLabel", nullptr, 0); }
        void* Percent(float fraction) const { void* __callArgs[] = { &fraction }; return CallStatic("Percent", __callArgs, 1); }
        void* MonthSuffix() const { return ReadStaticField<void*>("MonthSuffix"); }
    };
}
