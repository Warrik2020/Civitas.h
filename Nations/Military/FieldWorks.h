#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class FieldWorks : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FieldWorks(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "FieldWorks") {}
    public:
        void* Get(int id) const { void* __callArgs[] = { &id }; return Call("Get", __callArgs, 1); }
        void* HeldBy(int divisionId) const { void* __callArgs[] = { &divisionId }; return Call("HeldBy", __callArgs, 1); }
        void* CraterAt(int i) const { void* __callArgs[] = { &i }; return Call("CraterAt", __callArgs, 1); }
        float Weathering(void* w) const { void* __callArgs[] = { w }; return CallValue<float>("Weathering", __callArgs, 1); }
        float CraterWeathering(void* c) const { void* __callArgs[] = { &c }; return CallValue<float>("CraterWeathering", __callArgs, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void SetClock(int now) const { void* __callArgs[] = { &now }; Call("SetClock", __callArgs, 1); }
        void Tick(void* militaries, int tick, float ticksPerDay, void* cfg, void* digOf, void* divisionById, void* placeOf = nullptr) const { void* __callArgs[] = { militaries, &tick, &ticksPerDay, cfg, digOf, divisionById, placeOf }; Call("Tick", __callArgs, 7); }
        float HalfLengthFor(void* d) const { void* __callArgs[] = { d }; return CallStaticValue<float>("HalfLengthFor", __callArgs, 1); }
        void AddCrater(void* tilePos, float radiusMetres, int tick) const { void* __callArgs[] = { tilePos, &radiusMetres, &tick }; Call("AddCrater", __callArgs, 3); }
        void Restore(void* w) const { void* __callArgs[] = { w }; Call("Restore", __callArgs, 1); }
        void RestoreNextId(int next) const { void* __callArgs[] = { &next }; Call("RestoreNextId", __callArgs, 1); }
        float ClaimRadiusTiles() const { return ReadStaticField<float>("ClaimRadiusTiles"); }
        float HoldRadiusTiles() const { return ReadStaticField<float>("HoldRadiusTiles"); }
        float DigDays() const { return ReadStaticField<float>("DigDays"); }
        float AbandonDays() const { return ReadStaticField<float>("AbandonDays"); }
        float WeatherDays() const { return ReadStaticField<float>("WeatherDays"); }
        float CraterDays() const { return ReadStaticField<float>("CraterDays"); }
        int CraterCap() const { return ReadStaticField<int>("CraterCap"); }
        int WorksCap() const { return ReadStaticField<int>("WorksCap"); }
        float CratersPerDay() const { return ReadStaticField<float>("CratersPerDay"); }
        int CratersPerCell() const { return ReadStaticField<int>("CratersPerCell"); }
        float CraterCellMetres() const { return ReadStaticField<float>("CraterCellMetres"); }
        float FrontMemoryDays() const { return ReadStaticField<float>("FrontMemoryDays"); }
    };
}
