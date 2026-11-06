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
        bool Uses(int armyId) const { void* __callArgs[] = { &armyId }; return CallValue<bool>("Uses", __callArgs, 1); }
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int phase() const { return ReadField<int>("phase"); }
        void phase(int value) const { WriteField<int>("phase", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int foe() const { return ReadField<int>("foe"); }
        void foe(int value) const { WriteField<int>("foe", value); }
        int armyA() const { return ReadField<int>("armyA"); }
        void armyA(int value) const { WriteField<int>("armyA", value); }
        int armyB() const { return ReadField<int>("armyB"); }
        void armyB(int value) const { WriteField<int>("armyB", value); }
        int spearA() const { return ReadField<int>("spearA"); }
        void spearA(int value) const { WriteField<int>("spearA", value); }
        int spearB() const { return ReadField<int>("spearB"); }
        void spearB(int value) const { WriteField<int>("spearB", value); }
        int cityId() const { return ReadField<int>("cityId"); }
        void cityId(int value) const { WriteField<int>("cityId", value); }
        int pocketId() const { return ReadField<int>("pocketId"); }
        void pocketId(int value) const { WriteField<int>("pocketId", value); }
        void* goal() const { return ReadField<void*>("goal"); }
        void goal(void* value) const { WriteField<void*>("goal", value); }
        int predictedCells() const { return ReadField<int>("predictedCells"); }
        void predictedCells(int value) const { WriteField<int>("predictedCells", value); }
        float radius() const { return ReadField<float>("radius"); }
        void radius(float value) const { WriteField<float>("radius", value); }
        int startTick() const { return ReadField<int>("startTick"); }
        void startTick(int value) const { WriteField<int>("startTick", value); }
        int lastGainTick() const { return ReadField<int>("lastGainTick"); }
        void lastGainTick(int value) const { WriteField<int>("lastGainTick", value); }
        float bestProgress() const { return ReadField<float>("bestProgress"); }
        void bestProgress(float value) const { WriteField<float>("bestProgress", value); }
    };
}
