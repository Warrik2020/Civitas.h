#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class Realms : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Realms(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "Realms") {}
    public:
        void Bind(void* realmOf) const { void* args[] = { realmOf }; CallStatic("Bind", args, 1); }
        void SetAnyUnions(bool any) const { void* args[] = { &any }; CallStatic("SetAnyUnions", args, 1); }
        bool Same(int a, int b) const { void* args[] = { &a, &b }; return CallStaticValue<bool>("Same", args, 2); }
        int RealmOf(int nationId) const { void* args[] = { &nationId }; return CallStaticValue<int>("RealmOf", args, 1); }
        bool AnyUnions() const { return ReadStaticField<bool>("AnyUnions"); }
        void SetAnyUnions(bool value) const { WriteStaticField<bool>("AnyUnions", value); }
        bool ShareLand() const { return ReadStaticField<bool>("ShareLand"); }
        void SetShareLand(bool value) const { WriteStaticField<bool>("ShareLand", value); }
    };
}
