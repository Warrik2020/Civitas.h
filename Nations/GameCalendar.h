#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class GameCalendar : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GameCalendar(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "GameCalendar") {}
    public:
        int DaysInMonth(int month) const { void* __callArgs[] = { &month }; return CallStaticValue<int>("DaysInMonth", __callArgs, 1); }
        void* MonthName(int month) const { void* __callArgs[] = { &month }; return CallStatic("MonthName", __callArgs, 1); }
        void* MonthNameShort(int month) const { void* __callArgs[] = { &month }; return CallStatic("MonthNameShort", __callArgs, 1); }
        void* HourLabel(int hour) const { void* __callArgs[] = { &hour }; return CallStatic("HourLabel", __callArgs, 1); }
        float TicksPerDay(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<float>("TicksPerDay", __callArgs, 1); }
        float TicksPerYear(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<float>("TicksPerYear", __callArgs, 1); }
        int DaysIn(int ticks, void* cfg) const { void* __callArgs[] = { &ticks, cfg }; return CallStaticValue<int>("DaysIn", __callArgs, 2); }
        int TicksFromDays(float days, void* cfg) const { void* __callArgs[] = { &days, cfg }; return CallStaticValue<int>("TicksFromDays", __callArgs, 2); }
        int TicksFromMonths(float months, void* cfg) const { void* __callArgs[] = { &months, cfg }; return CallStaticValue<int>("TicksFromMonths", __callArgs, 2); }
        int TicksFromYears(float years, void* cfg) const { void* __callArgs[] = { &years, cfg }; return CallStaticValue<int>("TicksFromYears", __callArgs, 2); }
        float YearsIn(int ticks, void* cfg) const { void* __callArgs[] = { &ticks, cfg }; return CallStaticValue<float>("YearsIn", __callArgs, 2); }
        int DayIndexAt(int tick, void* cfg) const { void* __callArgs[] = { &tick, cfg }; return CallStaticValue<int>("DayIndexAt", __callArgs, 2); }
        int StartDayIndex(void* cfg) const { void* __callArgs[] = { cfg }; return CallStaticValue<int>("StartDayIndex", __callArgs, 1); }
        int DayIndexOf(int astronomicalYear, int month, int day) const { void* __callArgs[] = { &astronomicalYear, &month, &day }; return CallStaticValue<int>("DayIndexOf", __callArgs, 3); }
        void* DateOfDayIndex(int dayIndex) const { void* __callArgs[] = { &dayIndex }; return CallStatic("DateOfDayIndex", __callArgs, 1); }
        void* DateAt(int tick, void* cfg) const { void* __callArgs[] = { &tick, cfg }; return CallStatic("DateAt", __callArgs, 2); }
        float DayFractionAt(int tick, float tickFraction, void* cfg) const { void* __callArgs[] = { &tick, &tickFraction, cfg }; return CallStaticValue<float>("DayFractionAt", __callArgs, 3); }
        int HourAt(int tick, float tickFraction, void* cfg) const { void* __callArgs[] = { &tick, &tickFraction, cfg }; return CallStaticValue<int>("HourAt", __callArgs, 3); }
        int YearAt(int tick, void* cfg) const { void* __callArgs[] = { &tick, cfg }; return CallStaticValue<int>("YearAt", __callArgs, 2); }
        void* Label(void* d) const { void* __callArgs[] = { d }; return CallStatic("Label", __callArgs, 1); }
        void* LabelShort(void* d) const { void* __callArgs[] = { d }; return CallStatic("LabelShort", __callArgs, 1); }
        void* LabelMonth(void* d) const { void* __callArgs[] = { d }; return CallStatic("LabelMonth", __callArgs, 1); }
        void* Label(void* d, int hour) const { void* __callArgs[] = { d, &hour }; return CallStatic("Label", __callArgs, 2); }
        void* PaceLabel(float secondsPerDay) const { void* __callArgs[] = { &secondsPerDay }; return CallStatic("PaceLabel", __callArgs, 1); }
        void* Label(int tick, void* cfg) const { void* __callArgs[] = { &tick, cfg }; return CallStatic("Label", __callArgs, 2); }
        void* LabelShort(int tick, void* cfg) const { void* __callArgs[] = { &tick, cfg }; return CallStatic("LabelShort", __callArgs, 2); }
        void* Label(int astronomicalYear) const { void* __callArgs[] = { &astronomicalYear }; return CallStatic("Label", __callArgs, 1); }
        void* EraLabel(int astronomicalYear) const { void* __callArgs[] = { &astronomicalYear }; return CallStatic("EraLabel", __callArgs, 1); }
        void* Duration(int ticks, void* cfg) const { void* __callArgs[] = { &ticks, cfg }; return CallStatic("Duration", __callArgs, 2); }
        void* DurationShort(int ticks, void* cfg) const { void* __callArgs[] = { &ticks, cfg }; return CallStatic("DurationShort", __callArgs, 2); }
        int MonthsPerYear() const { return ReadStaticField<int>("MonthsPerYear"); }
        int DaysPerYear() const { return ReadStaticField<int>("DaysPerYear"); }
        int HoursPerDay() const { return ReadStaticField<int>("HoursPerDay"); }
        float BalanceTicksPerYear() const { return ReadStaticField<float>("BalanceTicksPerYear"); }
    };
}
