#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Command
{
    class Operation : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Operation(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Command", "Operation") {}
    public:
        bool Uses(int armyId) const { void* args[] = { &armyId }; return CallValue<bool>("Uses", args, 1); }
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int phase() const { return ReadField<int>("phase"); }
        void SetPhase(int value) const { WriteField<int>("phase", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int foe() const { return ReadField<int>("foe"); }
        void SetFoe(int value) const { WriteField<int>("foe", value); }
        int armyA() const { return ReadField<int>("armyA"); }
        void SetArmyA(int value) const { WriteField<int>("armyA", value); }
        int armyB() const { return ReadField<int>("armyB"); }
        void SetArmyB(int value) const { WriteField<int>("armyB", value); }
        int spearA() const { return ReadField<int>("spearA"); }
        void SetSpearA(int value) const { WriteField<int>("spearA", value); }
        int spearB() const { return ReadField<int>("spearB"); }
        void SetSpearB(int value) const { WriteField<int>("spearB", value); }
        int cityId() const { return ReadField<int>("cityId"); }
        void SetCityId(int value) const { WriteField<int>("cityId", value); }
        int pocketId() const { return ReadField<int>("pocketId"); }
        void SetPocketId(int value) const { WriteField<int>("pocketId", value); }
        void* goal() const { return ReadField<void*>("goal"); }
        void SetGoal(void* value) const { WriteField<void*>("goal", value); }
        int predictedCells() const { return ReadField<int>("predictedCells"); }
        void SetPredictedCells(int value) const { WriteField<int>("predictedCells", value); }
        float radius() const { return ReadField<float>("radius"); }
        void SetRadius(float value) const { WriteField<float>("radius", value); }
        int startTick() const { return ReadField<int>("startTick"); }
        void SetStartTick(int value) const { WriteField<int>("startTick", value); }
        int lastGainTick() const { return ReadField<int>("lastGainTick"); }
        void SetLastGainTick(int value) const { WriteField<int>("lastGainTick", value); }
        float bestProgress() const { return ReadField<float>("bestProgress"); }
        void SetBestProgress(float value) const { WriteField<float>("bestProgress", value); }
    };
}
