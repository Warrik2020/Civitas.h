#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerPanNational : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerPanNational(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerPanNational") {}
    public:
        int format() const { return ReadField<int>("format"); }
        void format(int value) const { WriteField<int>("format", value); }
        void* glories() const { return ReadField<void*>("glories"); }
        void glories(void* value) const { WriteField<void*>("glories", value); }
        void* peaks() const { return ReadField<void*>("peaks"); }
        void peaks(void* value) const { WriteField<void*>("peaks", value); }
    };
}
