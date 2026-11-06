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
        void* Begin(const char* path, int maxW, int maxH) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* args[] = { managed_0, &maxW, &maxH }; return CallStatic("Begin", args, 3); }
        bool Coverage(const char* path, int maxW, int maxH, const char* cacheDir, void* cover, int& outW, int& outH, void* cachedPixels, const char*& failure) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* managed_3 = Api() && Api()->NewString ? Api()->NewString(cacheDir ? cacheDir : "") : nullptr; void* args[] = { managed_0, &maxW, &maxH, managed_3, &cover, &outW, &outH, &cachedPixels, &failure }; return CallStaticValue<bool>("Coverage", args, 9); }
        bool CoverageTiles(const char* path, int gridW, int gridH, int x0, int y0, int w, int h, void* cover, const char*& failure) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(path ? path : "") : nullptr; void* args[] = { managed_0, &gridW, &gridH, &x0, &y0, &w, &h, &cover, &failure }; return CallStaticValue<bool>("CoverageTiles", args, 9); }
        void* Shade(float k) const { void* args[] = { &k }; return CallStatic("Shade", args, 1); }
        float LandShare(void* pixels) const { void* args[] = { pixels }; return CallStaticValue<float>("LandShare", args, 1); }
        void Size(int srcW, int srcH, int maxW, int maxH, int& outW, int& outH) const { void* args[] = { &srcW, &srcH, &maxW, &maxH, &outW, &outH }; CallStatic("Size", args, 6); }
        int width() const { return ReadField<int>("width"); }
        void SetWidth(int value) const { WriteField<int>("width", value); }
        int height() const { return ReadField<int>("height"); }
        void SetHeight(int value) const { WriteField<int>("height", value); }
        int bitDepth() const { return ReadField<int>("bitDepth"); }
        void SetBitDepth(int value) const { WriteField<int>("bitDepth", value); }
        int colorType() const { return ReadField<int>("colorType"); }
        void SetColorType(int value) const { WriteField<int>("colorType", value); }
        int channels() const { return ReadField<int>("channels"); }
        void SetChannels(int value) const { WriteField<int>("channels", value); }
        int bitsPerPixel() const { return ReadField<int>("bitsPerPixel"); }
        void SetBitsPerPixel(int value) const { WriteField<int>("bitsPerPixel", value); }
        int stride() const { return ReadField<int>("stride"); }
        void SetStride(int value) const { WriteField<int>("stride", value); }
        int bpp() const { return ReadField<int>("bpp"); }
        void SetBpp(int value) const { WriteField<int>("bpp", value); }
        void* palette() const { return ReadField<void*>("palette"); }
        void SetPalette(void* value) const { WriteField<void*>("palette", value); }
        void* deflate() const { return ReadField<void*>("deflate"); }
        void SetDeflate(void* value) const { WriteField<void*>("deflate", value); }
    };
}
