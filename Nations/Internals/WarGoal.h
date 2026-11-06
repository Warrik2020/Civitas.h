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
        void SetTargetNationId(int value) const { WriteField<int>("targetNationId", value); }
        int targetX() const { return ReadField<int>("targetX"); }
        void SetTargetX(int value) const { WriteField<int>("targetX", value); }
        int targetY() const { return ReadField<int>("targetY"); }
        void SetTargetY(int value) const { WriteField<int>("targetY", value); }
        float pushHeading() const { return ReadField<float>("pushHeading"); }
        void SetPushHeading(float value) const { WriteField<float>("pushHeading", value); }
        int declaredTick() const { return ReadField<int>("declaredTick"); }
        void SetDeclaredTick(int value) const { WriteField<int>("declaredTick", value); }
        int claimedStateId() const { return ReadField<int>("claimedStateId"); }
        void SetClaimedStateId(int value) const { WriteField<int>("claimedStateId", value); }
        void* objectiveCityIds() const { return ReadField<void*>("objectiveCityIds"); }
        int objectivesTick() const { return ReadField<int>("objectivesTick"); }
        void SetObjectivesTick(int value) const { WriteField<int>("objectivesTick", value); }
    };
}
