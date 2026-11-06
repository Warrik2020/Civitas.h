#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class ScenarioThumbnail : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ScenarioThumbnail(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "ScenarioThumbnail") {}
    public:
        void* Begin(const char* path, int maxW, int maxH, void* maps, bool snapshot = false) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* __callArgs[] = { managed_0, &maxW, &maxH, maps, &snapshot }; return CallStatic("Begin", __callArgs, 5); }
        int SnapshotWidth() const { return ReadStaticField<int>("SnapshotWidth"); }
        int SnapshotHeight() const { return ReadStaticField<int>("SnapshotHeight"); }
    };
}
