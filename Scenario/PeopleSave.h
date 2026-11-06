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
        void* CapturePeople(void* grid) const { void* args[] = { grid }; return CallStatic("CapturePeople", args, 1); }
        void ApplyPeople(void* dto, void* nations, void* internals, void* cities) const { void* args[] = { dto, nations, internals, cities }; CallStatic("ApplyPeople", args, 4); }
        void* CaptureMixes(void* identity, int axis, int count, void* fileIdOf, int width) const { void* args[] = { identity, &axis, &count, fileIdOf, &width }; return CallStatic("CaptureMixes", args, 5); }
        void ApplyMixes(void* identity, void* layer, void* runtimeOf, int count) const { void* args[] = { identity, layer, runtimeOf, &count }; CallStatic("ApplyMixes", args, 4); }
        void* CaptureMigrations(void* fileIdOfGroup, void* fileIdOf) const { void* args[] = { fileIdOfGroup, fileIdOf }; return CallStatic("CaptureMigrations", args, 2); }
        void ApplyMigrations(void* dto, void* runtimeOf, void* peopleKey) const { void* args[] = { dto, runtimeOf, peopleKey }; CallStatic("ApplyMigrations", args, 3); }
        void Var(int v) const { void* args[] = { &v }; Call("Var", args, 1); }
        void Byte(int v) const { void* args[] = { &v }; Call("Byte", args, 1); }
        void* ToBase64() const { return Call("ToBase64", nullptr, 0); }
        int Var() const { return CallValue<int>("Var", nullptr, 0); }
        int Byte() const { return CallValue<int>("Byte", nullptr, 0); }
    };
}
