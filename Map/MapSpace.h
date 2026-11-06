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
        void* WorldFromNormalized(float nx, float ny) const { void* args[] = { &nx, &ny }; return Call("WorldFromNormalized", args, 2); }
        void* WorldFromPixel(float px, float py) const { void* args[] = { &px, &py }; return Call("WorldFromPixel", args, 2); }
        void* WorldFromPixel(void* pixel) const { void* args[] = { pixel }; return Call("WorldFromPixel", args, 1); }
        void* PixelFromWorld(void* world) const { void* args[] = { world }; return Call("PixelFromWorld", args, 1); }
        float scale() const { return ReadField<float>("scale"); }
        void SetScale(float value) const { WriteField<float>("scale", value); }
        void* offset() const { return ReadField<void*>("offset"); }
        void SetOffset(void* value) const { WriteField<void*>("offset", value); }
        float spanTiles() const { return ReadField<float>("spanTiles"); }
        void SetSpanTiles(float value) const { WriteField<float>("spanTiles", value); }
    };
}
