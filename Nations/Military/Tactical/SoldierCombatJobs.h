#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class SoldierCombatJobs : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SoldierCombatJobs(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "SoldierCombatJobs") {}
    public:
        void PushFx(void* reqs, void* counter, int cap, void* req) const { void* args[] = { reqs, counter, &cap, req }; CallStatic("PushFx", args, 4); }
        void Execute(int i) const { void* args[] = { &i }; Call("Execute", args, 1); }
        void Execute() const { Call("Execute", nullptr, 0); }
        void Execute(int k) const { void* args[] = { &k }; Call("Execute", args, 1); }
        void Execute(int i) const { void* args[] = { &i }; Call("Execute", args, 1); }
        void Execute() const { Call("Execute", nullptr, 0); }
        void Execute() const { Call("Execute", nullptr, 0); }
        int NoKiller() const { return ReadStaticField<int>("NoKiller"); }
        void* men() const { return ReadField<void*>("men"); }
        void SetMen(void* value) const { WriteField<void*>("men", value); }
        void* soldiers() const { return ReadField<void*>("soldiers"); }
        void SetSoldiers(void* value) const { WriteField<void*>("soldiers", value); }
        void* bats() const { return ReadField<void*>("bats"); }
        void SetBats(void* value) const { WriteField<void*>("bats", value); }
        void* snap() const { return ReadField<void*>("snap"); }
        void SetSnap(void* value) const { WriteField<void*>("snap", value); }
        void* pending() const { return ReadField<void*>("pending"); }
        void SetPending(void* value) const { WriteField<void*>("pending", value); }
        void* arriving() const { return ReadField<void*>("arriving"); }
        void SetArriving(void* value) const { WriteField<void*>("arriving", value); }
        int step() const { return ReadField<int>("step"); }
        void SetStep(int value) const { WriteField<int>("step", value); }
        void* arriving() const { return ReadField<void*>("arriving"); }
        void SetArriving(void* value) const { WriteField<void*>("arriving", value); }
        void* snap() const { return ReadField<void*>("snap"); }
        void SetSnap(void* value) const { WriteField<void*>("snap", value); }
        void* unitParams() const { return ReadField<void*>("unitParams"); }
        void SetUnitParams(void* value) const { WriteField<void*>("unitParams", value); }
        void* grid() const { return ReadField<void*>("grid"); }
        void SetGrid(void* value) const { WriteField<void*>("grid", value); }
        void* hits() const { return ReadField<void*>("hits"); }
        void SetHits(void* value) const { WriteField<void*>("hits", value); }
        void* killer() const { return ReadField<void*>("killer"); }
        void SetKiller(void* value) const { WriteField<void*>("killer", value); }
        void* suppAdd() const { return ReadField<void*>("suppAdd"); }
        void SetSuppAdd(void* value) const { WriteField<void*>("suppAdd", value); }
        void* fearAdd() const { return ReadField<void*>("fearAdd"); }
        void SetFearAdd(void* value) const { WriteField<void*>("fearAdd", value); }
        void* threat() const { return ReadField<void*>("threat"); }
        void SetThreat(void* value) const { WriteField<void*>("threat", value); }
        void* fxReqs() const { return ReadField<void*>("fxReqs"); }
        void SetFxReqs(void* value) const { WriteField<void*>("fxReqs", value); }
        void* fxCount() const { return ReadField<void*>("fxCount"); }
        void SetFxCount(void* value) const { WriteField<void*>("fxCount", value); }
        int fxCap() const { return ReadField<int>("fxCap"); }
        void SetFxCap(int value) const { WriteField<int>("fxCap", value); }
        int menCap() const { return ReadField<int>("menCap"); }
        void SetMenCap(int value) const { WriteField<int>("menCap", value); }
        int step() const { return ReadField<int>("step"); }
        void SetStep(int value) const { WriteField<int>("step", value); }
        uint32_t seed() const { return ReadField<uint32_t>("seed"); }
        void SetSeed(uint32_t value) const { WriteField<uint32_t>("seed", value); }
        void* men() const { return ReadField<void*>("men"); }
        void SetMen(void* value) const { WriteField<void*>("men", value); }
        void* soldiers() const { return ReadField<void*>("soldiers"); }
        void SetSoldiers(void* value) const { WriteField<void*>("soldiers", value); }
        void* snap() const { return ReadField<void*>("snap"); }
        void SetSnap(void* value) const { WriteField<void*>("snap", value); }
        void* bats() const { return ReadField<void*>("bats"); }
        void SetBats(void* value) const { WriteField<void*>("bats", value); }
        void* hits() const { return ReadField<void*>("hits"); }
        void SetHits(void* value) const { WriteField<void*>("hits", value); }
        void* killer() const { return ReadField<void*>("killer"); }
        void SetKiller(void* value) const { WriteField<void*>("killer", value); }
        void* suppAdd() const { return ReadField<void*>("suppAdd"); }
        void SetSuppAdd(void* value) const { WriteField<void*>("suppAdd", value); }
        void* fearAdd() const { return ReadField<void*>("fearAdd"); }
        void SetFearAdd(void* value) const { WriteField<void*>("fearAdd", value); }
        void* threat() const { return ReadField<void*>("threat"); }
        void SetThreat(void* value) const { WriteField<void*>("threat", value); }
        void* killsByDiv() const { return ReadField<void*>("killsByDiv"); }
        void SetKillsByDiv(void* value) const { WriteField<void*>("killsByDiv", value); }
        void* fxReqs() const { return ReadField<void*>("fxReqs"); }
        void SetFxReqs(void* value) const { WriteField<void*>("fxReqs", value); }
        void* fxCount() const { return ReadField<void*>("fxCount"); }
        void SetFxCount(void* value) const { WriteField<void*>("fxCount", value); }
        int fxCap() const { return ReadField<int>("fxCap"); }
        void SetFxCap(int value) const { WriteField<int>("fxCap", value); }
        int divCap() const { return ReadField<int>("divCap"); }
        void SetDivCap(int value) const { WriteField<int>("divCap", value); }
        int menCap() const { return ReadField<int>("menCap"); }
        void SetMenCap(int value) const { WriteField<int>("menCap", value); }
        int step() const { return ReadField<int>("step"); }
        void SetStep(int value) const { WriteField<int>("step", value); }
        uint32_t seed() const { return ReadField<uint32_t>("seed"); }
        void SetSeed(uint32_t value) const { WriteField<uint32_t>("seed", value); }
        int suppHalfSteps() const { return ReadField<int>("suppHalfSteps"); }
        void SetSuppHalfSteps(int value) const { WriteField<int>("suppHalfSteps", value); }
        int fearHalfSteps() const { return ReadField<int>("fearHalfSteps"); }
        void SetFearHalfSteps(int value) const { WriteField<int>("fearHalfSteps", value); }
        void* shots() const { return ReadField<void*>("shots"); }
        void SetShots(void* value) const { WriteField<void*>("shots", value); }
        int batches() const { return ReadField<int>("batches"); }
        void SetBatches(int value) const { WriteField<int>("batches", value); }
        void* pending() const { return ReadField<void*>("pending"); }
        void SetPending(void* value) const { WriteField<void*>("pending", value); }
        void* snap() const { return ReadField<void*>("snap"); }
        void SetSnap(void* value) const { WriteField<void*>("snap", value); }
        void* unitParams() const { return ReadField<void*>("unitParams"); }
        void SetUnitParams(void* value) const { WriteField<void*>("unitParams", value); }
        void* bats() const { return ReadField<void*>("bats"); }
        void SetBats(void* value) const { WriteField<void*>("bats", value); }
        void* batColor() const { return ReadField<void*>("batColor"); }
        void SetBatColor(void* value) const { WriteField<void*>("batColor", value); }
        void* fxReqs() const { return ReadField<void*>("fxReqs"); }
        void SetFxReqs(void* value) const { WriteField<void*>("fxReqs", value); }
        void* fxCount() const { return ReadField<void*>("fxCount"); }
        void SetFxCount(void* value) const { WriteField<void*>("fxCount", value); }
        int fxCap() const { return ReadField<int>("fxCap"); }
        void SetFxCap(int value) const { WriteField<int>("fxCap", value); }
        int step() const { return ReadField<int>("step"); }
        void SetStep(int value) const { WriteField<int>("step", value); }
        float stepSeconds() const { return ReadField<float>("stepSeconds"); }
        void SetStepSeconds(float value) const { WriteField<float>("stepSeconds", value); }
        void* shotsFired() const { return ReadField<void*>("shotsFired"); }
        void SetShotsFired(void* value) const { WriteField<void*>("shotsFired", value); }
        void* shotStats() const { return ReadField<void*>("shotStats"); }
        void SetShotStats(void* value) const { WriteField<void*>("shotStats", value); }
        void* shells() const { return ReadField<void*>("shells"); }
        void SetShells(void* value) const { WriteField<void*>("shells", value); }
        void* shellCount() const { return ReadField<void*>("shellCount"); }
        void SetShellCount(void* value) const { WriteField<void*>("shellCount", value); }
        void* fxReqs() const { return ReadField<void*>("fxReqs"); }
        void SetFxReqs(void* value) const { WriteField<void*>("fxReqs", value); }
        void* fxCount() const { return ReadField<void*>("fxCount"); }
        void SetFxCount(void* value) const { WriteField<void*>("fxCount", value); }
        int fxCap() const { return ReadField<int>("fxCap"); }
        void SetFxCap(int value) const { WriteField<int>("fxCap", value); }
        float dt() const { return ReadField<float>("dt"); }
        void SetDt(float value) const { WriteField<float>("dt", value); }
    };
}
