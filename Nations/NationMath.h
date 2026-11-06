#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class NationMath : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationMath(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "NationMath") {}
    public:
        float WrapAngle(float radians) const { void* args[] = { &radians }; return CallStaticValue<float>("WrapAngle", args, 1); }
        float IdJitter01(int id) const { void* args[] = { &id }; return CallStaticValue<float>("IdJitter01", args, 1); }
    };
}
