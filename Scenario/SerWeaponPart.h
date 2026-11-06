#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerWeaponPart : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerWeaponPart(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerWeaponPart") {}
    public:
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        int material() const { return ReadField<int>("material"); }
        void material(int value) const { WriteField<int>("material", value); }
        void* pts() const { return ReadField<void*>("pts"); }
        void pts(void* value) const { WriteField<void*>("pts", value); }
        float thickness() const { return ReadField<float>("thickness"); }
        void thickness(float value) const { WriteField<float>("thickness", value); }
        float lateral() const { return ReadField<float>("lateral"); }
        void lateral(float value) const { WriteField<float>("lateral", value); }
    };
}
