#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class TimeSkipHelper : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TimeSkipHelper(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "TimeSkipHelper") {}
    public:
        bool Runs(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<bool>("Runs", __callArgs, 1); }
        void Begin(void* it) const { void* __callArgs[] = { it }; CallStatic("Begin", __callArgs, 1); }
        void End(void* it) const { void* __callArgs[] = { it }; CallStatic("End", __callArgs, 1); }
        void ForceReset() const { CallStatic("ForceReset", nullptr, 0); }
        int Bits() const { return ReadStaticField<int>("Bits"); }
    };
}
