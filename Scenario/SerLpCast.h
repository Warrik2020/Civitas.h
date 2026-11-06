#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerLpCast : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerLpCast(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerLpCast") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int born() const { return ReadField<int>("born"); }
        void SetBorn(int value) const { WriteField<int>("born", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        float r() const { return ReadField<float>("r"); }
        void SetR(float value) const { WriteField<float>("r", value); }
        float g() const { return ReadField<float>("g"); }
        void SetG(float value) const { WriteField<float>("g", value); }
        float b() const { return ReadField<float>("b"); }
        void SetB(float value) const { WriteField<float>("b", value); }
    };
}
