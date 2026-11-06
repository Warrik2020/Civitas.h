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
        void* CaptureFrom(void* store, void* positionOf) const { void* args[] = { store, positionOf }; return CallStatic("CaptureFrom", args, 2); }
        void Restore(void* data, void* military) const { void* args[] = { data, military }; CallStatic("Restore", args, 2); }
        int RestoreInto(void* store, void* data, void* placedAs) const { void* args[] = { store, data, placedAs }; return CallStaticValue<int>("RestoreInto", args, 3); }
        int Version() const { return ReadStaticField<int>("Version"); }
    };
}
