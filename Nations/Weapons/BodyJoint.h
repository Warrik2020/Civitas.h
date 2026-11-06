#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class BodyJoint : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BodyJoint(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "BodyJoint") {}
    public:
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        void* poly() const { return ReadField<void*>("poly"); }
        void poly(void* value) const { WriteField<void*>("poly", value); }
        float weight() const { return ReadField<float>("weight"); }
        void weight(float value) const { WriteField<float>("weight", value); }
        float area() const { return ReadField<float>("area"); }
        void area(float value) const { WriteField<float>("area", value); }
        void* min_() const { return ReadField<void*>("min"); }
        void min_(void* value) const { WriteField<void*>("min", value); }
        void* max_() const { return ReadField<void*>("max"); }
        void max_(void* value) const { WriteField<void*>("max", value); }
    };
}
