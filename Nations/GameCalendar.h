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
        int DaysInMonth(int month) const { void* args[] = { &month }; return CallStaticValue<int>("DaysInMonth", args, 1); }
        void* MonthName(int month) const { void* args[] = { &month }; return CallStatic("MonthName", args, 1); }
        void* MonthNameShort(int month) const { void* args[] = { &month }; return CallStatic("MonthNameShort", args, 1); }
        void* HourLabel(int hour) const { void* args[] = { &hour }; return CallStatic("HourLabel", args, 1); }
        float TicksPerDay(void* cfg) const { void* args[] = { cfg }; return CallStaticValue<float>("TicksPerDay", args, 1); }
        float TicksPerYear(void* cfg) const { void* args[] = { cfg }; return CallStaticValue<float>("TicksPerYear", args, 1); }
        int DaysIn(int ticks, void* cfg) const { void* args[] = { &ticks, cfg }; return CallStaticValue<int>("DaysIn", args, 2); }
        int TicksFromDays(float days, void* cfg) const { void* args[] = { &days, cfg }; return CallStaticValue<int>("TicksFromDays", args, 2); }
        int TicksFromMonths(float months, void* cfg) const { void* args[] = { &months, cfg }; return CallStaticValue<int>("TicksFromMonths", args, 2); }
        int TicksFromYears(float years, void* cfg) const { void* args[] = { &years, cfg }; return CallStaticValue<int>("TicksFromYears", args, 2); }
        float YearsIn(int ticks, void* cfg) const { void* args[] = { &ticks, cfg }; return CallStaticValue<float>("YearsIn", args, 2); }
        int DayIndexAt(int tick, void* cfg) const { void* args[] = { &tick, cfg }; return CallStaticValue<int>("DayIndexAt", args, 2); }
        int StartDayIndex(void* cfg) const { void* args[] = { cfg }; return CallStaticValue<int>("StartDayIndex", args, 1); }
        int DayIndexOf(int astronomicalYear, int month, int day) const { void* args[] = { &astronomicalYear, &month, &day }; return CallStaticValue<int>("DayIndexOf", args, 3); }
        void* DateOfDayIndex(int dayIndex) const { void* args[] = { &dayIndex }; return CallStatic("DateOfDayIndex", args, 1); }
        void* DateAt(int tick, void* cfg) const { void* args[] = { &tick, cfg }; return CallStatic("DateAt", args, 2); }
        float DayFractionAt(int tick, float tickFraction, void* cfg) const { void* args[] = { &tick, &tickFraction, cfg }; return CallStaticValue<float>("DayFractionAt", args, 3); }
        int HourAt(int tick, float tickFraction, void* cfg) const { void* args[] = { &tick, &tickFraction, cfg }; return CallStaticValue<int>("HourAt", args, 3); }
        int YearAt(int tick, void* cfg) const { void* args[] = { &tick, cfg }; return CallStaticValue<int>("YearAt", args, 2); }
        void* Label(void* d) const { void* args[] = { d }; return CallStatic("Label", args, 1); }
        void* LabelShort(void* d) const { void* args[] = { d }; return CallStatic("LabelShort", args, 1); }
        void* LabelMonth(void* d) const { void* args[] = { d }; return CallStatic("LabelMonth", args, 1); }
        void* Label(void* d, int hour) const { void* args[] = { d, &hour }; return CallStatic("Label", args, 2); }
        void* PaceLabel(float secondsPerDay) const { void* args[] = { &secondsPerDay }; return CallStatic("PaceLabel", args, 1); }
        void* Label(int tick, void* cfg) const { void* args[] = { &tick, cfg }; return CallStatic("Label", args, 2); }
        void* LabelShort(int tick, void* cfg) const { void* args[] = { &tick, cfg }; return CallStatic("LabelShort", args, 2); }
        void* Label(int astronomicalYear) const { void* args[] = { &astronomicalYear }; return CallStatic("Label", args, 1); }
        void* EraLabel(int astronomicalYear) const { void* args[] = { &astronomicalYear }; return CallStatic("EraLabel", args, 1); }
        void* Duration(int ticks, void* cfg) const { void* args[] = { &ticks, cfg }; return CallStatic("Duration", args, 2); }
        void* DurationShort(int ticks, void* cfg) const { void* args[] = { &ticks, cfg }; return CallStatic("DurationShort", args, 2); }
        int MonthsPerYear() const { return ReadStaticField<int>("MonthsPerYear"); }
        int DaysPerYear() const { return ReadStaticField<int>("DaysPerYear"); }
        int HoursPerDay() const { return ReadStaticField<int>("HoursPerDay"); }
        float BalanceTicksPerYear() const { return ReadStaticField<float>("BalanceTicksPerYear"); }
    };
}
