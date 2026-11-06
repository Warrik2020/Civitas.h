#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class SoldierReduceJob : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SoldierReduceJob(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "SoldierReduceJob") {}
    public:
        void Execute(int b) const { void* args[] = { &b }; Call("Execute", args, 1); }
        void* men() const { return ReadField<void*>("men"); }
        void SetMen(void* value) const { WriteField<void*>("men", value); }
        void* soldiers() const { return ReadField<void*>("soldiers"); }
        void SetSoldiers(void* value) const { WriteField<void*>("soldiers", value); }
        void* bats() const { return ReadField<void*>("bats"); }
        void SetBats(void* value) const { WriteField<void*>("bats", value); }
        void* unitParams() const { return ReadField<void*>("unitParams"); }
        void SetUnitParams(void* value) const { WriteField<void*>("unitParams", value); }
        void* stats() const { return ReadField<void*>("stats"); }
        void SetStats(void* value) const { WriteField<void*>("stats", value); }
        int step() const { return ReadField<int>("step"); }
        void SetStep(int value) const { WriteField<int>("step", value); }
        int suppHalfSteps() const { return ReadField<int>("suppHalfSteps"); }
        void SetSuppHalfSteps(int value) const { WriteField<int>("suppHalfSteps", value); }
        int fearHalfSteps() const { return ReadField<int>("fearHalfSteps"); }
        void SetFearHalfSteps(int value) const { WriteField<int>("fearHalfSteps", value); }
    };
}
