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
        bool IsHereditary(int g) const { void* args[] = { &g }; return CallStaticValue<bool>("IsHereditary", args, 1); }
        void* TitleFor(int g, bool female) const { void* args[] = { &g, &female }; return CallStatic("TitleFor", args, 2); }
        void* RollGivenName(bool female, int culture) const { void* args[] = { &female, &culture }; return CallStatic("RollGivenName", args, 2); }
        void* RollHouse(int culture) const { void* args[] = { &culture }; return CallStatic("RollHouse", args, 1); }
        void* RollIdleEpithet() const { return CallStatic("RollIdleEpithet", nullptr, 0); }
        void Compose(void* leader, int government) const { void* args[] = { leader, &government }; CallStatic("Compose", args, 2); }
        void* Roman(int n) const { void* args[] = { &n }; return CallStatic("Roman", args, 1); }
    };
}
