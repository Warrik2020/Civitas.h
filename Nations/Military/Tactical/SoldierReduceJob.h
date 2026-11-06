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
        void Execute(int b) const { void* __callArgs[] = { &b }; Call("Execute", __callArgs, 1); }
        void* men() const { return ReadField<void*>("men"); }
        void men(void* value) const { WriteField<void*>("men", value); }
        void* soldiers() const { return ReadField<void*>("soldiers"); }
        void soldiers(void* value) const { WriteField<void*>("soldiers", value); }
        void* bats() const { return ReadField<void*>("bats"); }
        void bats(void* value) const { WriteField<void*>("bats", value); }
        void* unitParams() const { return ReadField<void*>("unitParams"); }
        void unitParams(void* value) const { WriteField<void*>("unitParams", value); }
        void* stats() const { return ReadField<void*>("stats"); }
        void stats(void* value) const { WriteField<void*>("stats", value); }
        int step() const { return ReadField<int>("step"); }
        void step(int value) const { WriteField<int>("step", value); }
        int suppHalfSteps() const { return ReadField<int>("suppHalfSteps"); }
        void suppHalfSteps(int value) const { WriteField<int>("suppHalfSteps", value); }
        int fearHalfSteps() const { return ReadField<int>("fearHalfSteps"); }
        void fearHalfSteps(int value) const { WriteField<int>("fearHalfSteps", value); }
    };
}
