#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class CommandSaveV2 : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CommandSaveV2(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "CommandSaveV2") {}
    public:
        void* Capture() const { return CallStatic("Capture", nullptr, 0); }
        void* CaptureFrom(void* store, void* positionOf) const { void* __callArgs[] = { store, positionOf }; return CallStatic("CaptureFrom", __callArgs, 2); }
        void Restore(void* data, void* military) const { void* __callArgs[] = { data, military }; CallStatic("Restore", __callArgs, 2); }
        int RestoreInto(void* store, void* data, void* placedAs) const { void* __callArgs[] = { store, data, placedAs }; return CallStaticValue<int>("RestoreInto", __callArgs, 3); }
        int Version() const { return ReadStaticField<int>("Version"); }
    };
}
