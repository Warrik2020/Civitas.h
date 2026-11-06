#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerCradle : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerCradle(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerCradle") {}
    public:
        int axis() const { return ReadField<int>("axis"); }
        void axis(int value) const { WriteField<int>("axis", value); }
        int group() const { return ReadField<int>("group"); }
        void group(int value) const { WriteField<int>("group", value); }
        int until() const { return ReadField<int>("until"); }
        void until(int value) const { WriteField<int>("until", value); }
        void* tileGaps() const { return ReadField<void*>("tileGaps"); }
        void tileGaps(void* value) const { WriteField<void*>("tileGaps", value); }
    };
}
