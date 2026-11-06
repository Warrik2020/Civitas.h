#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerAmbitions : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerAmbitions(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerAmbitions") {}
    public:
        int format() const { return ReadField<int>("format"); }
        void format(int value) const { WriteField<int>("format", value); }
        int nation() const { return ReadField<int>("nation"); }
        void nation(int value) const { WriteField<int>("nation", value); }
        int band() const { return ReadField<int>("band"); }
        void band(int value) const { WriteField<int>("band", value); }
        void* baselines() const { return ReadField<void*>("baselines"); }
        void baselines(void* value) const { WriteField<void*>("baselines", value); }
        void* done() const { return ReadField<void*>("done"); }
        void done(void* value) const { WriteField<void*>("done", value); }
    };
}
