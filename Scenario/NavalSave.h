#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class NavalSave : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NavalSave(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "NavalSave") {}
    public:
        void* CaptureCrossing(void* d, int tick) const { void* __callArgs[] = { d, &tick }; return CallStatic("CaptureCrossing", __callArgs, 2); }
        bool IsAfloat(void* c) const { void* __callArgs[] = { c }; return CallStaticValue<bool>("IsAfloat", __callArgs, 1); }
        void BeginRestore(void* military) const { void* __callArgs[] = { military }; CallStatic("BeginRestore", __callArgs, 1); }
        void RestoreCrossing(void* military, int divisionId, void* c) const { void* __callArgs[] = { military, &divisionId, c }; CallStatic("RestoreCrossing", __callArgs, 3); }
        void* CaptureNaval(void* military) const { void* __callArgs[] = { military }; return CallStatic("CaptureNaval", __callArgs, 1); }
        void ApplyNaval(void* naval, void* military, void* nations) const { void* __callArgs[] = { naval, military, nations }; CallStatic("ApplyNaval", __callArgs, 3); }
    };
}
