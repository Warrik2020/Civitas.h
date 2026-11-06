#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class SoldierPackJob : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SoldierPackJob(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "SoldierPackJob") {}
    public:
        void Execute(int bi) const { void* __callArgs[] = { &bi }; Call("Execute", __callArgs, 1); }
        void* men() const { return ReadField<void*>("men"); }
        void men(void* value) const { WriteField<void*>("men", value); }
        void* soldiers() const { return ReadField<void*>("soldiers"); }
        void soldiers(void* value) const { WriteField<void*>("soldiers", value); }
        void* snap() const { return ReadField<void*>("snap"); }
        void snap(void* value) const { WriteField<void*>("snap", value); }
        void* bats() const { return ReadField<void*>("bats"); }
        void bats(void* value) const { WriteField<void*>("bats", value); }
        void* batColor() const { return ReadField<void*>("batColor"); }
        void batColor(void* value) const { WriteField<void*>("batColor", value); }
        void* batSelected() const { return ReadField<void*>("batSelected"); }
        void batSelected(void* value) const { WriteField<void*>("batSelected", value); }
        void* dirTable() const { return ReadField<void*>("dirTable"); }
        void dirTable(void* value) const { WriteField<void*>("dirTable", value); }
        void* dots() const { return ReadField<void*>("dots"); }
        void dots(void* value) const { WriteField<void*>("dots", value); }
        void* batchCount() const { return ReadField<void*>("batchCount"); }
        void batchCount(void* value) const { WriteField<void*>("batchCount", value); }
        int batchSize() const { return ReadField<int>("batchSize"); }
        void batchSize(int value) const { WriteField<int>("batchSize", value); }
        int menCount() const { return ReadField<int>("menCount"); }
        void menCount(int value) const { WriteField<int>("menCount", value); }
        void* visible() const { return ReadField<void*>("visible"); }
        void visible(void* value) const { WriteField<void*>("visible", value); }
        float alpha() const { return ReadField<float>("alpha"); }
        void alpha(float value) const { WriteField<float>("alpha", value); }
        int step() const { return ReadField<int>("step"); }
        void step(int value) const { WriteField<int>("step", value); }
        float stepSeconds() const { return ReadField<float>("stepSeconds"); }
        void stepSeconds(float value) const { WriteField<float>("stepSeconds", value); }
        int playerSide() const { return ReadField<int>("playerSide"); }
        void playerSide(int value) const { WriteField<int>("playerSide", value); }
        float corpseSeconds() const { return ReadField<float>("corpseSeconds"); }
        void corpseSeconds(float value) const { WriteField<float>("corpseSeconds", value); }
    };
}
