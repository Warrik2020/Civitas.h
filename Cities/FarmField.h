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
        void SetOuter(void* value) const { WriteField<void*>("outer", value); }
        void* inner() const { return ReadField<void*>("inner"); }
        void SetInner(void* value) const { WriteField<void*>("inner", value); }
        void* centroid() const { return ReadField<void*>("centroid"); }
        void SetCentroid(void* value) const { WriteField<void*>("centroid", value); }
        float angle() const { return ReadField<float>("angle"); }
        void SetAngle(float value) const { WriteField<float>("angle", value); }
        float spawnTime() const { return ReadField<float>("spawnTime"); }
        void SetSpawnTime(float value) const { WriteField<float>("spawnTime", value); }
        void* body() const { return ReadField<void*>("body"); }
        void SetBody(void* value) const { WriteField<void*>("body", value); }
    };
}
