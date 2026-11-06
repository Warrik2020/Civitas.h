#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class PeopleSave : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleSave(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "PeopleSave") {}
    public:
        void* CapturePeople(void* grid) const { void* __callArgs[] = { grid }; return CallStatic("CapturePeople", __callArgs, 1); }
        void ApplyPeople(void* dto, void* nations, void* internals, void* cities) const { void* __callArgs[] = { dto, nations, internals, cities }; CallStatic("ApplyPeople", __callArgs, 4); }
        void* CaptureMixes(void* identity, int axis, int count, void* fileIdOf, int width) const { void* __callArgs[] = { identity, &axis, &count, fileIdOf, &width }; return CallStatic("CaptureMixes", __callArgs, 5); }
        void ApplyMixes(void* identity, void* layer, void* runtimeOf, int count) const { void* __callArgs[] = { identity, layer, runtimeOf, &count }; CallStatic("ApplyMixes", __callArgs, 4); }
        void* CaptureMigrations(void* fileIdOfGroup, void* fileIdOf) const { void* __callArgs[] = { fileIdOfGroup, fileIdOf }; return CallStatic("CaptureMigrations", __callArgs, 2); }
        void ApplyMigrations(void* dto, void* runtimeOf, void* peopleKey) const { void* __callArgs[] = { dto, runtimeOf, peopleKey }; CallStatic("ApplyMigrations", __callArgs, 3); }
    };
}
