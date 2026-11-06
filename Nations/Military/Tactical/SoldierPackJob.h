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
        void Execute(int bi) const { void* args[] = { &bi }; Call("Execute", args, 1); }
        void* men() const { return ReadField<void*>("men"); }
        void SetMen(void* value) const { WriteField<void*>("men", value); }
        void* soldiers() const { return ReadField<void*>("soldiers"); }
        void SetSoldiers(void* value) const { WriteField<void*>("soldiers", value); }
        void* snap() const { return ReadField<void*>("snap"); }
        void SetSnap(void* value) const { WriteField<void*>("snap", value); }
        void* bats() const { return ReadField<void*>("bats"); }
        void SetBats(void* value) const { WriteField<void*>("bats", value); }
        void* batColor() const { return ReadField<void*>("batColor"); }
        void SetBatColor(void* value) const { WriteField<void*>("batColor", value); }
        void* batSelected() const { return ReadField<void*>("batSelected"); }
        void SetBatSelected(void* value) const { WriteField<void*>("batSelected", value); }
        void* dirTable() const { return ReadField<void*>("dirTable"); }
        void SetDirTable(void* value) const { WriteField<void*>("dirTable", value); }
        void* dots() const { return ReadField<void*>("dots"); }
        void SetDots(void* value) const { WriteField<void*>("dots", value); }
        void* batchCount() const { return ReadField<void*>("batchCount"); }
        void SetBatchCount(void* value) const { WriteField<void*>("batchCount", value); }
        int batchSize() const { return ReadField<int>("batchSize"); }
        void SetBatchSize(int value) const { WriteField<int>("batchSize", value); }
        int menCount() const { return ReadField<int>("menCount"); }
        void SetMenCount(int value) const { WriteField<int>("menCount", value); }
        void* visible() const { return ReadField<void*>("visible"); }
        void SetVisible(void* value) const { WriteField<void*>("visible", value); }
        float alpha() const { return ReadField<float>("alpha"); }
        void SetAlpha(float value) const { WriteField<float>("alpha", value); }
        int step() const { return ReadField<int>("step"); }
        void SetStep(int value) const { WriteField<int>("step", value); }
        float stepSeconds() const { return ReadField<float>("stepSeconds"); }
        void SetStepSeconds(float value) const { WriteField<float>("stepSeconds", value); }
        int playerSide() const { return ReadField<int>("playerSide"); }
        void SetPlayerSide(int value) const { WriteField<int>("playerSide", value); }
        float corpseSeconds() const { return ReadField<float>("corpseSeconds"); }
        void SetCorpseSeconds(float value) const { WriteField<float>("corpseSeconds", value); }
    };
}
