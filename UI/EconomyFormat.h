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
        void* Population(float people) const { void* args[] = { &people }; return CallStatic("Population", args, 1); }
        void* PerTick(float net) const { void* args[] = { &net }; return CallStatic("PerTick", args, 1); }
        void* PerTickDecimal(float net) const { void* args[] = { &net }; return CallStatic("PerTickDecimal", args, 1); }
        void AppendCompact(void* sb, float value) const { void* args[] = { sb, &value }; CallStatic("AppendCompact", args, 2); }
        void* PerTickCompact(float net) const { void* args[] = { &net }; return CallStatic("PerTickCompact", args, 1); }
        float Monthly(float perTick) const { void* args[] = { &perTick }; return CallStaticValue<float>("Monthly", args, 1); }
        float Yearly(float perTick) const { void* args[] = { &perTick }; return CallStaticValue<float>("Yearly", args, 1); }
        void* PerMonth(float perTick) const { void* args[] = { &perTick }; return CallStatic("PerMonth", args, 1); }
        void* PerMonthDecimal(float perTick) const { void* args[] = { &perTick }; return CallStatic("PerMonthDecimal", args, 1); }
        void* PerMonthCompact(float perTick) const { void* args[] = { &perTick }; return CallStatic("PerMonthCompact", args, 1); }
        void AppendSignedCompact(void* sb, float value) const { void* args[] = { sb, &value }; CallStatic("AppendSignedCompact", args, 2); }
        void AppendYearly(void* sb, float perTick) const { void* args[] = { sb, &perTick }; CallStatic("AppendYearly", args, 2); }
        void AppendMonthly(void* sb, float perTick) const { void* args[] = { sb, &perTick }; CallStatic("AppendMonthly", args, 2); }
        void* NextPaydayLabel() const { return CallStatic("NextPaydayLabel", nullptr, 0); }
        void* Percent(float fraction) const { void* args[] = { &fraction }; return CallStatic("Percent", args, 1); }
        void* MonthSuffix() const { return ReadStaticField<void*>("MonthSuffix"); }
    };
}
