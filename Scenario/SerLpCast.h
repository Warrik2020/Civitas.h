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
        void id(int value) const { WriteField<int>("id", value); }
        int born() const { return ReadField<int>("born"); }
        void born(int value) const { WriteField<int>("born", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        float r() const { return ReadField<float>("r"); }
        void r(float value) const { WriteField<float>("r", value); }
        float g() const { return ReadField<float>("g"); }
        void g(float value) const { WriteField<float>("g", value); }
        float b() const { return ReadField<float>("b"); }
        void b(float value) const { WriteField<float>("b", value); }
    };
}
