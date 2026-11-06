#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Map
{
    class MapSpace : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapSpace(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map", "MapSpace") {}
    public:
        void* WorldFromNormalized(float nx, float ny) const { void* __callArgs[] = { &nx, &ny }; return Call("WorldFromNormalized", __callArgs, 2); }
        void* WorldFromPixel(float px, float py) const { void* __callArgs[] = { &px, &py }; return Call("WorldFromPixel", __callArgs, 2); }
        void* WorldFromPixel(void* pixel) const { void* __callArgs[] = { pixel }; return Call("WorldFromPixel", __callArgs, 1); }
        void* PixelFromWorld(void* world) const { void* __callArgs[] = { world }; return Call("PixelFromWorld", __callArgs, 1); }
        float scale() const { return ReadField<float>("scale"); }
        void scale(float value) const { WriteField<float>("scale", value); }
        void* offset() const { return ReadField<void*>("offset"); }
        void offset(void* value) const { WriteField<void*>("offset", value); }
        float spanTiles() const { return ReadField<float>("spanTiles"); }
        void spanTiles(float value) const { WriteField<float>("spanTiles", value); }
    };
}
