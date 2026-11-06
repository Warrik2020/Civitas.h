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
        void SetGivenName(void* value) const { WriteField<void*>("givenName", value); }
        void* house() const { return ReadField<void*>("house"); }
        void SetHouse(void* value) const { WriteField<void*>("house", value); }
        void* epithet() const { return ReadField<void*>("epithet"); }
        void SetEpithet(void* value) const { WriteField<void*>("epithet", value); }
        void* titleOverride() const { return ReadField<void*>("titleOverride"); }
        void SetTitleOverride(void* value) const { WriteField<void*>("titleOverride", value); }
        bool female() const { return ReadField<bool>("female"); }
        void SetFemale(bool value) const { WriteField<bool>("female", value); }
        int regnal() const { return ReadField<int>("regnal"); }
        void SetRegnal(int value) const { WriteField<int>("regnal", value); }
        int age() const { return ReadField<int>("age"); }
        void SetAge(int value) const { WriteField<int>("age", value); }
        int archetype() const { return ReadField<int>("archetype"); }
        void SetArchetype(int value) const { WriteField<int>("archetype", value); }
        int64_t traits() const { return ReadField<int64_t>("traits"); }
        void SetTraits(int64_t value) const { WriteField<int64_t>("traits", value); }
        int culture() const { return ReadField<int>("culture"); }
        void SetCulture(int value) const { WriteField<int>("culture", value); }
    };
}
