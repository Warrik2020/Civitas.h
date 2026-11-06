#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerFieldWork : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerFieldWork(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerFieldWork") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int owner() const { return ReadField<int>("owner"); }
        void SetOwner(int value) const { WriteField<int>("owner", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        float ax() const { return ReadField<float>("ax"); }
        void SetAx(float value) const { WriteField<float>("ax", value); }
        float ay() const { return ReadField<float>("ay"); }
        void SetAy(float value) const { WriteField<float>("ay", value); }
        float fx() const { return ReadField<float>("fx"); }
        void SetFx(float value) const { WriteField<float>("fx", value); }
        float fy() const { return ReadField<float>("fy"); }
        void SetFy(float value) const { WriteField<float>("fy", value); }
        float halfLength() const { return ReadField<float>("halfLength"); }
        void SetHalfLength(float value) const { WriteField<float>("halfLength", value); }
        int64_t seed() const { return ReadField<int64_t>("seed"); }
        void SetSeed(int64_t value) const { WriteField<int64_t>("seed", value); }
        float progress() const { return ReadField<float>("progress"); }
        void SetProgress(float value) const { WriteField<float>("progress", value); }
        int heldAge() const { return ReadField<int>("heldAge"); }
        void SetHeldAge(int value) const { WriteField<int>("heldAge", value); }
        int createdAge() const { return ReadField<int>("createdAge"); }
        void SetCreatedAge(int value) const { WriteField<int>("createdAge", value); }
    };
}
