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
        bool IsValid(int culture) const { void* args[] = { &culture }; return CallStaticValue<bool>("IsValid", args, 1); }
        void* DisplayName(int c) const { void* args[] = { &c }; return CallStatic("DisplayName", args, 1); }
        int Roll() const { return CallStaticValue<int>("Roll", nullptr, 0); }
        int RollFrom(int64_t mask) const { void* args[] = { &mask }; return CallStaticValue<int>("RollFrom", args, 1); }
        void* GivenName(int c, bool female) const { void* args[] = { &c, &female }; return CallStatic("GivenName", args, 2); }
        void* FamilyName(int c) const { void* args[] = { &c }; return CallStatic("FamilyName", args, 1); }
        void* GivenName(int c, bool female, uint32_t hash) const { void* args[] = { &c, &female, &hash }; return CallStatic("GivenName", args, 3); }
        void* FamilyName(int c, uint32_t hash) const { void* args[] = { &c, &hash }; return CallStatic("FamilyName", args, 2); }
        int Count() const { return ReadStaticField<int>("Count"); }
        int64_t AllMask() const { return ReadStaticField<int64_t>("AllMask"); }
        void* DisplayOrder() const { return ReadStaticField<void*>("DisplayOrder"); }
    };
}
