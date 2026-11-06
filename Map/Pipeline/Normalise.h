#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Pipeline
{
    class Normalise : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Normalise(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Pipeline", "Normalise") {}
    public:
        float ScaleFactor(int width, int height) const { void* __callArgs[] = { &width, &height }; return CallStaticValue<float>("ScaleFactor", __callArgs, 2); }
        void* Apply(void* pts, float invScale) const { void* __callArgs[] = { pts, &invScale }; return CallStatic("Apply", __callArgs, 2); }
    };
}
