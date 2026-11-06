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
        void name(void* value) const { WriteField<void*>("name", value); }
        void* group() const { return ReadField<void*>("group"); }
        void group(void* value) const { WriteField<void*>("group", value); }
        void* poly() const { return ReadField<void*>("poly"); }
        void poly(void* value) const { WriteField<void*>("poly", value); }
        float weight() const { return ReadField<float>("weight"); }
        void weight(float value) const { WriteField<float>("weight", value); }
        float rear() const { return ReadField<float>("rear"); }
        void rear(float value) const { WriteField<float>("rear", value); }
        float area() const { return ReadField<float>("area"); }
        void area(float value) const { WriteField<float>("area", value); }
        void* min_() const { return ReadField<void*>("min"); }
        void min_(void* value) const { WriteField<void*>("min", value); }
        void* max_() const { return ReadField<void*>("max"); }
        void max_(void* value) const { WriteField<void*>("max", value); }
    };
}
