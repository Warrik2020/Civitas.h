#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsStats : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsStats(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsStats") {}
    public:
        void Clear() const { Call("Clear", nullptr, 0); }
        void* opened() const { return ReadField<void*>("opened"); }
        void* closed() const { return ReadField<void*>("closed"); }
        void* hard() const { return ReadField<void*>("hard"); }
        int steps() const { return ReadField<int>("steps"); }
        void SetSteps(int value) const { WriteField<int>("steps", value); }
        int choices() const { return ReadField<int>("choices"); }
        void SetChoices(int value) const { WriteField<int>("choices", value); }
        int defaulted() const { return ReadField<int>("defaulted"); }
        void SetDefaulted(int value) const { WriteField<int>("defaulted", value); }
        int spawned() const { return ReadField<int>("spawned"); }
        void SetSpawned(int value) const { WriteField<int>("spawned", value); }
        int handovers() const { return ReadField<int>("handovers"); }
        void SetHandovers(int value) const { WriteField<int>("handovers", value); }
        int hardHeld() const { return ReadField<int>("hardHeld"); }
        void SetHardHeld(int value) const { WriteField<int>("hardHeld", value); }
    };
}
