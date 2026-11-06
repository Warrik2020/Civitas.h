#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class FrontLayout : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FrontLayout(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "FrontLayout") {}
    public:
        int Classify(int age, int works) const { void* args[] = { &age, &works }; return CallStaticValue<int>("Classify", args, 2); }
        float BaseFrontFactor() const { return ReadStaticField<float>("BaseFrontFactor"); }
        float MaxFrontFactor() const { return ReadStaticField<float>("MaxFrontFactor"); }
        float MinFrontFactor() const { return ReadStaticField<float>("MinFrontFactor"); }
    };
}
