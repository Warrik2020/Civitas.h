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
        bool Runs(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<bool>("Runs", args, 1); }
        void Begin(void* it) const { void* args[] = { it }; CallStatic("Begin", args, 1); }
        void End(void* it) const { void* args[] = { it }; CallStatic("End", args, 1); }
        void ForceReset() const { CallStatic("ForceReset", nullptr, 0); }
        int Bits() const { return ReadStaticField<int>("Bits"); }
    };
}
