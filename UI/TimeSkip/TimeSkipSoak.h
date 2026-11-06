#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::TimeSkip
{
    class TimeSkipSoak : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TimeSkipSoak(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.TimeSkip", "TimeSkipSoak") {}
    public:
        void* scenario() const { return ReadField<void*>("scenario"); }
        void SetScenario(void* value) const { WriteField<void*>("scenario", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int years() const { return ReadField<int>("years"); }
        void SetYears(int value) const { WriteField<int>("years", value); }
        int warm() const { return ReadField<int>("warm"); }
        void SetWarm(int value) const { WriteField<int>("warm", value); }
        int after() const { return ReadField<int>("after"); }
        void SetAfter(int value) const { WriteField<int>("after", value); }
        bool quit() const { return ReadField<bool>("quit"); }
        void SetQuit(bool value) const { WriteField<bool>("quit", value); }
        bool real() const { return ReadField<bool>("real"); }
        void SetReal(bool value) const { WriteField<bool>("real", value); }
    };
}
