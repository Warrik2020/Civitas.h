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
        void SetWorks(void* value) const { WriteField<void*>("works", value); }
        void* craterX() const { return ReadField<void*>("craterX"); }
        void SetCraterX(void* value) const { WriteField<void*>("craterX", value); }
        void* craterY() const { return ReadField<void*>("craterY"); }
        void SetCraterY(void* value) const { WriteField<void*>("craterY", value); }
        void* craterR() const { return ReadField<void*>("craterR"); }
        void SetCraterR(void* value) const { WriteField<void*>("craterR", value); }
        void* craterAge() const { return ReadField<void*>("craterAge"); }
        void SetCraterAge(void* value) const { WriteField<void*>("craterAge", value); }
        int nextId() const { return ReadField<int>("nextId"); }
        void SetNextId(int value) const { WriteField<int>("nextId", value); }
    };
}
