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
        void NoteCaptured(int divisionId, int position) const { void* __callArgs[] = { &divisionId, &position }; CallStatic("NoteCaptured", __callArgs, 2); }
        int PositionOf(int divisionId) const { void* __callArgs[] = { &divisionId }; return CallStaticValue<int>("PositionOf", __callArgs, 1); }
        void* Capture(void* military) const { void* __callArgs[] = { military }; return CallStatic("Capture", __callArgs, 1); }
        void BeginRestore(int savedDivisions) const { void* __callArgs[] = { &savedDivisions }; CallStatic("BeginRestore", __callArgs, 1); }
        void NotePlaced(int position, int newId) const { void* __callArgs[] = { &position, &newId }; CallStatic("NotePlaced", __callArgs, 2); }
        int PlacedAs(int position) const { void* __callArgs[] = { &position }; return CallStaticValue<int>("PlacedAs", __callArgs, 1); }
        void Apply(void* cmd, void* military, void* v2 = nullptr) const { void* __callArgs[] = { cmd, military, v2 }; CallStatic("Apply", __callArgs, 3); }
    };
}
