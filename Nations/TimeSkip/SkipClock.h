#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class SkipClock : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SkipClock(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "SkipClock") {}
    public:
        int NextMonthStart(int tick, void* cfg) const { void* __callArgs[] = { &tick, cfg }; return CallStaticValue<int>("NextMonthStart", __callArgs, 2); }
        int NextStep(int now, int end, int deadline, void* cfg) const { void* __callArgs[] = { &now, &end, &deadline, cfg }; return CallStaticValue<int>("NextStep", __callArgs, 4); }
        bool MonthChanged(int from, int to, void* cfg) const { void* __callArgs[] = { &from, &to, cfg }; return CallStaticValue<bool>("MonthChanged", __callArgs, 3); }
        int EndTick(int now, int months, void* cfg) const { void* __callArgs[] = { &now, &months, cfg }; return CallStaticValue<int>("EndTick", __callArgs, 3); }
    };
}
