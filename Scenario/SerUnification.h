#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerUnification : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerUnification(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerUnification") {}
    public:
        int format() const { return ReadField<int>("format"); }
        void format(int value) const { WriteField<int>("format", value); }
        int mode() const { return ReadField<int>("mode"); }
        void mode(int value) const { WriteField<int>("mode", value); }
        int originTick() const { return ReadField<int>("originTick"); }
        void originTick(int value) const { WriteField<int>("originTick", value); }
        void* realms() const { return ReadField<void*>("realms"); }
        void realms(void* value) const { WriteField<void*>("realms", value); }
        void* bonds() const { return ReadField<void*>("bonds"); }
        void bonds(void* value) const { WriteField<void*>("bonds", value); }
    };
}
