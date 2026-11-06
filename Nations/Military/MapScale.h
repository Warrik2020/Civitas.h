#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class MapScale : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapScale(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "MapScale") {}
    public:
        void Force(float metresPerTile) const { void* __callArgs[] = { &metresPerTile }; CallStatic("Force", __callArgs, 1); }
        float KmAcross(void* cam, void* space) const { void* __callArgs[] = { cam, space }; return CallStaticValue<float>("KmAcross", __callArgs, 2); }
        float KmForPixels(void* cam, void* space, float px) const { void* __callArgs[] = { cam, space, &px }; return CallStaticValue<float>("KmForPixels", __callArgs, 3); }
        float SimUnitMetres() const { return ReadStaticField<float>("SimUnitMetres"); }
    };
}
