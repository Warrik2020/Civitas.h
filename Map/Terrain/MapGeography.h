#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Terrain
{
    class MapGeography : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapGeography(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Terrain", "MapGeography") {}
    public:
        float LatitudeAtUV(float u, float v) const { void* __callArgs[] = { &u, &v }; return CallValue<float>("LatitudeAtUV", __callArgs, 2); }
        float LatitudeAtTile(float x, float y, int width, int height) const { void* __callArgs[] = { &x, &y, &width, &height }; return CallValue<float>("LatitudeAtTile", __callArgs, 4); }
        void* For_(const char* sourceFileName, int width, int height) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(sourceFileName ? sourceFileName : "") : nullptr; void* __callArgs[] = { managed_0, &width, &height }; return CallStatic("For", __callArgs, 3); }
        void* key() const { return ReadField<void*>("key"); }
        bool calibrated() const { return ReadField<bool>("calibrated"); }
        float kmPerTile() const { return ReadField<float>("kmPerTile"); }
    };
}
