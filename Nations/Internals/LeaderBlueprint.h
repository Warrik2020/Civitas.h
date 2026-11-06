#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class LeaderBlueprint : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LeaderBlueprint(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "LeaderBlueprint") {}
    public:
        void* Clone() const { return Call("Clone", nullptr, 0); }
        void* givenName() const { return ReadField<void*>("givenName"); }
        void givenName(void* value) const { WriteField<void*>("givenName", value); }
        void* house() const { return ReadField<void*>("house"); }
        void house(void* value) const { WriteField<void*>("house", value); }
        void* epithet() const { return ReadField<void*>("epithet"); }
        void epithet(void* value) const { WriteField<void*>("epithet", value); }
        void* titleOverride() const { return ReadField<void*>("titleOverride"); }
        void titleOverride(void* value) const { WriteField<void*>("titleOverride", value); }
        bool female() const { return ReadField<bool>("female"); }
        void female(bool value) const { WriteField<bool>("female", value); }
        int regnal() const { return ReadField<int>("regnal"); }
        void regnal(int value) const { WriteField<int>("regnal", value); }
        int age() const { return ReadField<int>("age"); }
        void age(int value) const { WriteField<int>("age", value); }
        int archetype() const { return ReadField<int>("archetype"); }
        void archetype(int value) const { WriteField<int>("archetype", value); }
        int64_t traits() const { return ReadField<int64_t>("traits"); }
        void traits(int64_t value) const { WriteField<int64_t>("traits", value); }
        int culture() const { return ReadField<int>("culture"); }
        void culture(int value) const { WriteField<int>("culture", value); }
    };
}
