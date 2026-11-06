#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Map
{
    class MapThumbnail : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MapThumbnail(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map", "MapThumbnail") {}
    public:
        void* Begin(const char* path, int maxW, int maxH) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* __callArgs[] = { managed_0, &maxW, &maxH }; return CallStatic("Begin", __callArgs, 3); }
        bool Coverage(const char* path, int maxW, int maxH, const char* cacheDir, void* cover, int& outW, int& outH, void* cachedPixels, const char*& failure) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* managed_3 = Api() && Api()->NewString ? Api()->NewString(cacheDir ? cacheDir : "") : nullptr; void* __callArgs[] = { managed_0, &maxW, &maxH, managed_3, &cover, &outW, &outH, &cachedPixels, &failure }; return CallStaticValue<bool>("Coverage", __callArgs, 9); }
        bool CoverageTiles(const char* path, int gridW, int gridH, int x0, int y0, int w, int h, void* cover, const char*& failure) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* __callArgs[] = { managed_0, &gridW, &gridH, &x0, &y0, &w, &h, &cover, &failure }; return CallStaticValue<bool>("CoverageTiles", __callArgs, 9); }
        void* Shade(float k) const { void* __callArgs[] = { &k }; return CallStatic("Shade", __callArgs, 1); }
        float LandShare(void* pixels) const { void* __callArgs[] = { pixels }; return CallStaticValue<float>("LandShare", __callArgs, 1); }
        void Size(int srcW, int srcH, int maxW, int maxH, int& outW, int& outH) const { void* __callArgs[] = { &srcW, &srcH, &maxW, &maxH, &outW, &outH }; CallStatic("Size", __callArgs, 6); }
    };
}
