#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LeaderCultures : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LeaderCultures(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LeaderCultures") {}
    public:
        bool IsValid(int culture) const { void* __callArgs[] = { &culture }; return CallStaticValue<bool>("IsValid", __callArgs, 1); }
        void* DisplayName(int c) const { void* __callArgs[] = { &c }; return CallStatic("DisplayName", __callArgs, 1); }
        int Roll() const { return CallStaticValue<int>("Roll", nullptr, 0); }
        int RollFrom(int64_t mask) const { void* __callArgs[] = { &mask }; return CallStaticValue<int>("RollFrom", __callArgs, 1); }
        void* GivenName(int c, bool female) const { void* __callArgs[] = { &c, &female }; return CallStatic("GivenName", __callArgs, 2); }
        void* FamilyName(int c) const { void* __callArgs[] = { &c }; return CallStatic("FamilyName", __callArgs, 1); }
        void* GivenName(int c, bool female, uint32_t hash) const { void* __callArgs[] = { &c, &female, &hash }; return CallStatic("GivenName", __callArgs, 3); }
        void* FamilyName(int c, uint32_t hash) const { void* __callArgs[] = { &c, &hash }; return CallStatic("FamilyName", __callArgs, 2); }
        int Count() const { return ReadStaticField<int>("Count"); }
        int64_t AllMask() const { return ReadStaticField<int64_t>("AllMask"); }
        void* DisplayOrder() const { return ReadStaticField<void*>("DisplayOrder"); }
    };
}
