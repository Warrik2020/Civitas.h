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
        void* Get(int id) const { void* args[] = { &id }; return Call("Get", args, 1); }
        void* HeldBy(int divisionId) const { void* args[] = { &divisionId }; return Call("HeldBy", args, 1); }
        void* CraterAt(int i) const { void* args[] = { &i }; return Call("CraterAt", args, 1); }
        float Weathering(void* w) const { void* args[] = { w }; return CallValue<float>("Weathering", args, 1); }
        float CraterWeathering(void* c) const { void* args[] = { &c }; return CallValue<float>("CraterWeathering", args, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void SetClock(int now) const { void* args[] = { &now }; Call("SetClock", args, 1); }
        void Tick(void* militaries, int tick, float ticksPerDay, void* cfg, void* digOf, void* divisionById, void* placeOf = nullptr) const { void* args[] = { militaries, &tick, &ticksPerDay, cfg, digOf, divisionById, placeOf }; Call("Tick", args, 7); }
        float HalfLengthFor(void* d) const { void* args[] = { d }; return CallStaticValue<float>("HalfLengthFor", args, 1); }
        void AddCrater(void* tilePos, float radiusMetres, int tick) const { void* args[] = { tilePos, &radiusMetres, &tick }; Call("AddCrater", args, 3); }
        void Restore(void* w) const { void* args[] = { w }; Call("Restore", args, 1); }
        void RestoreNextId(int next) const { void* args[] = { &next }; Call("RestoreNextId", args, 1); }
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
        void* pos() const { return ReadField<void*>("pos"); }
        void SetPos(void* value) const { WriteField<void*>("pos", value); }
        float radius() const { return ReadField<float>("radius"); }
        void SetRadius(float value) const { WriteField<float>("radius", value); }
        int tick() const { return ReadField<int>("tick"); }
        void SetTick(int value) const { WriteField<int>("tick", value); }
        int age() const { return ReadField<int>("age"); }
        void SetAge(int value) const { WriteField<int>("age", value); }
        bool trenchTech() const { return ReadField<bool>("trenchTech"); }
        void SetTrenchTech(bool value) const { WriteField<bool>("trenchTech", value); }
        bool atWar() const { return ReadField<bool>("atWar"); }
        void SetAtWar(bool value) const { WriteField<bool>("atWar", value); }
        bool valid() const { return ReadField<bool>("valid"); }
        void SetValid(bool value) const { WriteField<bool>("valid", value); }
    };
}
