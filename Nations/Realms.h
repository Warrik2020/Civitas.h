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
        void Bind(void* realmOf) const { void* __callArgs[] = { realmOf }; CallStatic("Bind", __callArgs, 1); }
        void SetAnyUnions(bool any) const { void* __callArgs[] = { &any }; CallStatic("SetAnyUnions", __callArgs, 1); }
        bool Same(int a, int b) const { void* __callArgs[] = { &a, &b }; return CallStaticValue<bool>("Same", __callArgs, 2); }
        int RealmOf(int nationId) const { void* __callArgs[] = { &nationId }; return CallStaticValue<int>("RealmOf", __callArgs, 1); }
        bool AnyUnions() const { return ReadStaticField<bool>("AnyUnions"); }
        void AnyUnions(bool value) const { WriteStaticField<bool>("AnyUnions", value); }
        bool ShareLand() const { return ReadStaticField<bool>("ShareLand"); }
        void ShareLand(bool value) const { WriteStaticField<bool>("ShareLand", value); }
    };
}
