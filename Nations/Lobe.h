#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class Lobe : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Lobe(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "Lobe") {}
    public:
        float heading() const { return ReadField<float>("heading"); }
        void SetHeading(float value) const { WriteField<float>("heading", value); }
        float spread() const { return ReadField<float>("spread"); }
        void SetSpread(float value) const { WriteField<float>("spread", value); }
        float age() const { return ReadField<float>("age"); }
        void SetAge(float value) const { WriteField<float>("age", value); }
        int lifetime() const { return ReadField<int>("lifetime"); }
        void SetLifetime(int value) const { WriteField<int>("lifetime", value); }
        bool coastalPull() const { return ReadField<bool>("coastalPull"); }
        void SetCoastalPull(bool value) const { WriteField<bool>("coastalPull", value); }
    };
}
