#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class VitalOrgan : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit VitalOrgan(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "VitalOrgan") {}
    public:
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* group() const { return ReadField<void*>("group"); }
        void SetGroup(void* value) const { WriteField<void*>("group", value); }
        void* poly() const { return ReadField<void*>("poly"); }
        void SetPoly(void* value) const { WriteField<void*>("poly", value); }
        float weight() const { return ReadField<float>("weight"); }
        void SetWeight(float value) const { WriteField<float>("weight", value); }
        float rear() const { return ReadField<float>("rear"); }
        void SetRear(float value) const { WriteField<float>("rear", value); }
        float area() const { return ReadField<float>("area"); }
        void SetArea(float value) const { WriteField<float>("area", value); }
        void* min() const { return ReadField<void*>("min"); }
        void SetMin(void* value) const { WriteField<void*>("min", value); }
        void* max() const { return ReadField<void*>("max"); }
        void SetMax(void* value) const { WriteField<void*>("max", value); }
    };
}
