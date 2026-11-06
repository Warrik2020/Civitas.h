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
        float WrapAngle(float radians) const { void* __callArgs[] = { &radians }; return CallStaticValue<float>("WrapAngle", __callArgs, 1); }
        float IdJitter01(int id) const { void* __callArgs[] = { &id }; return CallStaticValue<float>("IdJitter01", __callArgs, 1); }
    };
}
