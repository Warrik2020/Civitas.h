#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class CommandSave : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CommandSave(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "CommandSave") {}
    public:
        void BeginCapture() const { CallStatic("BeginCapture", nullptr, 0); }
        void NoteCaptured(int divisionId, int position) const { void* args[] = { &divisionId, &position }; CallStatic("NoteCaptured", args, 2); }
        int PositionOf(int divisionId) const { void* args[] = { &divisionId }; return CallStaticValue<int>("PositionOf", args, 1); }
        void* Capture(void* military) const { void* args[] = { military }; return CallStatic("Capture", args, 1); }
        void BeginRestore(int savedDivisions) const { void* args[] = { &savedDivisions }; CallStatic("BeginRestore", args, 1); }
        void NotePlaced(int position, int newId) const { void* args[] = { &position, &newId }; CallStatic("NotePlaced", args, 2); }
        int PlacedAs(int position) const { void* args[] = { &position }; return CallStaticValue<int>("PlacedAs", args, 1); }
        void Apply(void* cmd, void* military, void* v2 = nullptr) const { void* args[] = { cmd, military, v2 }; CallStatic("Apply", args, 3); }
    };
}
