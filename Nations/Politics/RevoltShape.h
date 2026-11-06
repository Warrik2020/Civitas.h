#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class RevoltShape : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit RevoltShape(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "RevoltShape") {}
    public:
        float Cost(float x, float y, float featureTiles, int octaves, int seed) const { void* args[] = { &x, &y, &featureTiles, &octaves, &seed }; return CallStaticValue<float>("Cost", args, 5); }
    };
}
