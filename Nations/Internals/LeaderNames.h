#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LeaderNames : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LeaderNames(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LeaderNames") {}
    public:
        bool IsHereditary(int g) const { void* __callArgs[] = { &g }; return CallStaticValue<bool>("IsHereditary", __callArgs, 1); }
        void* TitleFor(int g, bool female) const { void* __callArgs[] = { &g, &female }; return CallStatic("TitleFor", __callArgs, 2); }
        void* RollGivenName(bool female, int culture) const { void* __callArgs[] = { &female, &culture }; return CallStatic("RollGivenName", __callArgs, 2); }
        void* RollHouse(int culture) const { void* __callArgs[] = { &culture }; return CallStatic("RollHouse", __callArgs, 1); }
        void* RollIdleEpithet() const { return CallStatic("RollIdleEpithet", nullptr, 0); }
        void Compose(void* leader, int government) const { void* __callArgs[] = { leader, &government }; CallStatic("Compose", __callArgs, 2); }
        void* Roman(int n) const { void* __callArgs[] = { &n }; return CallStatic("Roman", __callArgs, 1); }
    };
}
