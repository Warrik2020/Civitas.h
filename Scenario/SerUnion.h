#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerUnion : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerUnion(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerUnion") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int seniorId() const { return ReadField<int>("seniorId"); }
        void seniorId(int value) const { WriteField<int>("seniorId", value); }
        void* members() const { return ReadField<void*>("members"); }
        void members(void* value) const { WriteField<void*>("members", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        float r() const { return ReadField<float>("r"); }
        void r(float value) const { WriteField<float>("r", value); }
        float g() const { return ReadField<float>("g"); }
        void g(float value) const { WriteField<float>("g", value); }
        float b() const { return ReadField<float>("b"); }
        void b(float value) const { WriteField<float>("b", value); }
        int ageTicks() const { return ReadField<int>("ageTicks"); }
        void ageTicks(int value) const { WriteField<int>("ageTicks", value); }
    };
}
