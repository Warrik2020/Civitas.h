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
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int seniorId() const { return ReadField<int>("seniorId"); }
        void SetSeniorId(int value) const { WriteField<int>("seniorId", value); }
        void* members() const { return ReadField<void*>("members"); }
        void SetMembers(void* value) const { WriteField<void*>("members", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        float r() const { return ReadField<float>("r"); }
        void SetR(float value) const { WriteField<float>("r", value); }
        float g() const { return ReadField<float>("g"); }
        void SetG(float value) const { WriteField<float>("g", value); }
        float b() const { return ReadField<float>("b"); }
        void SetB(float value) const { WriteField<float>("b", value); }
        int ageTicks() const { return ReadField<int>("ageTicks"); }
        void SetAgeTicks(int value) const { WriteField<int>("ageTicks", value); }
    };
}
