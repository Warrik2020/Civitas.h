#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class WarContext : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarContext(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "WarContext") {}
    public:
        void* store() const { return ReadField<void*>("store"); }
        void store(void* value) const { WriteField<void*>("store", value); }
        void* system() const { return ReadField<void*>("system"); }
        void system(void* value) const { WriteField<void*>("system", value); }
        void* grid() const { return ReadField<void*>("grid"); }
        void grid(void* value) const { WriteField<void*>("grid", value); }
        void* cfg() const { return ReadField<void*>("cfg"); }
        void cfg(void* value) const { WriteField<void*>("cfg", value); }
        void* milById() const { return ReadField<void*>("milById"); }
        void milById(void* value) const { WriteField<void*>("milById", value); }
        void* buckets() const { return ReadField<void*>("buckets"); }
        void buckets(void* value) const { WriteField<void*>("buckets", value); }
        void* connectivity() const { return ReadField<void*>("connectivity"); }
        void connectivity(void* value) const { WriteField<void*>("connectivity", value); }
        void* warGoal() const { return ReadField<void*>("warGoal"); }
        void warGoal(void* value) const { WriteField<void*>("warGoal", value); }
        int tick() const { return ReadField<int>("tick"); }
        void tick(int value) const { WriteField<int>("tick", value); }
        int interval() const { return ReadField<int>("interval"); }
        void interval(int value) const { WriteField<int>("interval", value); }
        int ticksPerDay() const { return ReadField<int>("ticksPerDay"); }
        void ticksPerDay(int value) const { WriteField<int>("ticksPerDay", value); }
        void* difficulty() const { return ReadField<void*>("difficulty"); }
        void difficulty(void* value) const { WriteField<void*>("difficulty", value); }
        void* skill() const { return ReadField<void*>("skill"); }
        void skill(void* value) const { WriteField<void*>("skill", value); }
        int prepFoe() const { return ReadField<int>("prepFoe"); }
        void prepFoe(int value) const { WriteField<int>("prepFoe", value); }
        float temper() const { return ReadField<float>("temper"); }
        void temper(float value) const { WriteField<float>("temper", value); }
    };
}
