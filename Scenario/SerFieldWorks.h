#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerFieldWorks : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerFieldWorks(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerFieldWorks") {}
    public:
        void* works() const { return ReadField<void*>("works"); }
        void works(void* value) const { WriteField<void*>("works", value); }
        void* craterX() const { return ReadField<void*>("craterX"); }
        void craterX(void* value) const { WriteField<void*>("craterX", value); }
        void* craterY() const { return ReadField<void*>("craterY"); }
        void craterY(void* value) const { WriteField<void*>("craterY", value); }
        void* craterR() const { return ReadField<void*>("craterR"); }
        void craterR(void* value) const { WriteField<void*>("craterR", value); }
        void* craterAge() const { return ReadField<void*>("craterAge"); }
        void craterAge(void* value) const { WriteField<void*>("craterAge", value); }
        int nextId() const { return ReadField<int>("nextId"); }
        void nextId(int value) const { WriteField<int>("nextId", value); }
    };
}
