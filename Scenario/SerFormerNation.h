#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerFormerNation : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerFormerNation(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerFormerNation") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        float r() const { return ReadField<float>("r"); }
        void r(float value) const { WriteField<float>("r", value); }
        float g() const { return ReadField<float>("g"); }
        void g(float value) const { WriteField<float>("g", value); }
        float b() const { return ReadField<float>("b"); }
        void b(float value) const { WriteField<float>("b", value); }
        void* banner() const { return ReadField<void*>("banner"); }
        void banner(void* value) const { WriteField<void*>("banner", value); }
        void* bannerPng() const { return ReadField<void*>("bannerPng"); }
        void bannerPng(void* value) const { WriteField<void*>("bannerPng", value); }
    };
}
