#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Cities
{
    class Building : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Building(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities", "Building") {}
    public:
        void* center() const { return ReadField<void*>("center"); }
        void center(void* value) const { WriteField<void*>("center", value); }
        float halfW() const { return ReadField<float>("halfW"); }
        void halfW(float value) const { WriteField<float>("halfW", value); }
        float halfH() const { return ReadField<float>("halfH"); }
        void halfH(float value) const { WriteField<float>("halfH", value); }
        float angle() const { return ReadField<float>("angle"); }
        void angle(float value) const { WriteField<float>("angle", value); }
        float spawnTime() const { return ReadField<float>("spawnTime"); }
        void spawnTime(float value) const { WriteField<float>("spawnTime", value); }
    };
}
