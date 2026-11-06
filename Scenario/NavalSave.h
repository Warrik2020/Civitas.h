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
        void* CaptureCrossing(void* d, int tick) const { void* args[] = { d, &tick }; return CallStatic("CaptureCrossing", args, 2); }
        bool IsAfloat(void* c) const { void* args[] = { c }; return CallStaticValue<bool>("IsAfloat", args, 1); }
        void BeginRestore(void* military) const { void* args[] = { military }; CallStatic("BeginRestore", args, 1); }
        void RestoreCrossing(void* military, int divisionId, void* c) const { void* args[] = { military, &divisionId, c }; CallStatic("RestoreCrossing", args, 3); }
        void* CaptureNaval(void* military) const { void* args[] = { military }; return CallStatic("CaptureNaval", args, 1); }
        void ApplyNaval(void* naval, void* military, void* nations) const { void* args[] = { naval, military, nations }; CallStatic("ApplyNaval", args, 3); }
    };
}
