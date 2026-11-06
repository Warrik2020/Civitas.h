#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class WeaponPart : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponPart(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "WeaponPart") {}
    public:
        void* Clone() const { return Call("Clone", nullptr, 0); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        int material() const { return ReadField<int>("material"); }
        void SetMaterial(int value) const { WriteField<int>("material", value); }
        void* poly() const { return ReadField<void*>("poly"); }
        void SetPoly(void* value) const { WriteField<void*>("poly", value); }
        float thickness() const { return ReadField<float>("thickness"); }
        void SetThickness(float value) const { WriteField<float>("thickness", value); }
        float lateral() const { return ReadField<float>("lateral"); }
        void SetLateral(float value) const { WriteField<float>("lateral", value); }
    };
}
