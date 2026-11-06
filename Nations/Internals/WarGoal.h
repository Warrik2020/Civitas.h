#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class WarGoal : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarGoal(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "WarGoal") {}
    public:
        int targetNationId() const { return ReadField<int>("targetNationId"); }
        void targetNationId(int value) const { WriteField<int>("targetNationId", value); }
        int targetX() const { return ReadField<int>("targetX"); }
        void targetX(int value) const { WriteField<int>("targetX", value); }
        int targetY() const { return ReadField<int>("targetY"); }
        void targetY(int value) const { WriteField<int>("targetY", value); }
        float pushHeading() const { return ReadField<float>("pushHeading"); }
        void pushHeading(float value) const { WriteField<float>("pushHeading", value); }
        int declaredTick() const { return ReadField<int>("declaredTick"); }
        void declaredTick(int value) const { WriteField<int>("declaredTick", value); }
        int claimedStateId() const { return ReadField<int>("claimedStateId"); }
        void claimedStateId(int value) const { WriteField<int>("claimedStateId", value); }
        void* objectiveCityIds() const { return ReadField<void*>("objectiveCityIds"); }
        int objectivesTick() const { return ReadField<int>("objectivesTick"); }
        void objectivesTick(int value) const { WriteField<int>("objectivesTick", value); }
    };
}
