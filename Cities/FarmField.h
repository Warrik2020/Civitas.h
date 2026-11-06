#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Cities
{
    class FarmField : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FarmField(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Cities", "FarmField") {}
    public:
        void* outer() const { return ReadField<void*>("outer"); }
        void outer(void* value) const { WriteField<void*>("outer", value); }
        void* inner() const { return ReadField<void*>("inner"); }
        void inner(void* value) const { WriteField<void*>("inner", value); }
        void* centroid() const { return ReadField<void*>("centroid"); }
        void centroid(void* value) const { WriteField<void*>("centroid", value); }
        float angle() const { return ReadField<float>("angle"); }
        void angle(float value) const { WriteField<float>("angle", value); }
        float spawnTime() const { return ReadField<float>("spawnTime"); }
        void spawnTime(float value) const { WriteField<float>("spawnTime", value); }
        void* body() const { return ReadField<void*>("body"); }
        void body(void* value) const { WriteField<void*>("body", value); }
    };
}
