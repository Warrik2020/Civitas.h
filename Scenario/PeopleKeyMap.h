#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class PeopleKeyMap : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleKeyMap(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "PeopleKeyMap") {}
    public:
        int ForSave(int key, void* fileIdOfRuntime) const { void* args[] = { &key, fileIdOfRuntime }; return CallStaticValue<int>("ForSave", args, 2); }
        int ForLoad(int key, void* runtimeOfFile, void* identity, int fileVersion) const { void* args[] = { &key, runtimeOfFile, identity, &fileVersion }; return CallStaticValue<int>("ForLoad", args, 4); }
        int FileSpaceVersion() const { return ReadStaticField<int>("FileSpaceVersion"); }
    };
}
