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
        int NextMonthStart(int tick, void* cfg) const { void* args[] = { &tick, cfg }; return CallStaticValue<int>("NextMonthStart", args, 2); }
        int NextStep(int now, int end, int deadline, void* cfg) const { void* args[] = { &now, &end, &deadline, cfg }; return CallStaticValue<int>("NextStep", args, 4); }
        bool MonthChanged(int from, int to, void* cfg) const { void* args[] = { &from, &to, cfg }; return CallStaticValue<bool>("MonthChanged", args, 3); }
        int EndTick(int now, int months, void* cfg) const { void* args[] = { &now, &months, cfg }; return CallStaticValue<int>("EndTick", args, 3); }
    };
}
