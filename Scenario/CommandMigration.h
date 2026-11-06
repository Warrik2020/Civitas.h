#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class CommandMigration : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CommandMigration(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "CommandMigration") {}
    public:
        int FromLegacy(void* store, void* armies, void* fronts, void* legacyFront = nullptr) const { void* __callArgs[] = { store, armies, fronts, legacyFront }; return CallStaticValue<int>("FromLegacy", __callArgs, 4); }
        void* BorderArmyName() const { return ReadStaticField<void*>("BorderArmyName"); }
    };
}
